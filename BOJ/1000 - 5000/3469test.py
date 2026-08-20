t = int(input())

for _ in range(t):
    a = input()
    for i in range(len(a)):
        if a[i] in "+-*":
            sps = str(a[i])
            break
    # str로 식을 입력받은 다음 부호 기준으로 좌우 분할

    a_l, a_r = a.split(sps)[0], a.split(sps)[1]
    a_li, a_ri = int(a_l), int(a_r)
    # 코드 가독성 개선을 위한 변수 설정

    # 코파일럿으로 수정한 부분
    if sps != "*":
        ln = max(
            len(a_l),
            len(a_r) + 1,
            len(str(a_li + a_ri)) if sps == "+" else len(str(a_li - a_ri)),
        )
    elif len(str(a_li * a_ri)) == 1:
        ln = len(str(a_li * a_ri)) + 1
    else:
        ln = max(len(a_l), len(a_r) + 1, len(str(a_li * a_ri)))
    # 부호를 기준으로 식의 형식 설정

    if sps in "+-":
        barln = max(
            len(a_r) + 1, len(str(a_li + a_ri)) if sps == "+" else len(str(a_li - a_ri))
        )
    elif sps == "*" and len(a_r) == 1:
        barln = max(len(a_r) + 1, len(str(a_li * a_ri)))
    elif sps == "*" and len(a_r) > 1:
        barln = len(a_r) + 1
        barln_bottom = len(str(a_li * a_ri))

    if sps == "*" and len(a_l) > 1:
        print(a_l.rjust(ln))
    else:
        print(a_l.rjust(barln))

    if sps in "+-":  # 덧, 뺄셈
        print((sps + a_r).rjust(ln))
        print(("-" * barln).rjust(ln))
    else:  # sps == "*" (곱셈)
        print(("*" + a_r).rjust(ln))
        if len(a_r) == 1:
            print(("-" * barln).rjust(ln))
        elif len(a_r) > 1:
            print(
                ("-" * max(len(str(a_li * int(str(a_r)[len(a_r) - 1]))), barln)).rjust(
                    ln
                )
            )
            for i in range(len(a_r)):
                print(
                    str(a_li * int(a_r[len(a_r) - (i + 1)])).rjust(
                        barln - i if len(a_l) == 1 else ln - i
                    )
                )
            print(("-" * barln_bottom).rjust(barln))
        # 식에 따른 형식을 맞추는 코드

    print(str(eval(f"{a_li}{sps}{a_ri}")).rjust(ln if sps in "+-" else barln))
    # 결과 출력
    print()  # 줄바꿈
