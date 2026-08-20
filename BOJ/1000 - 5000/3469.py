t = int(input())

for _ in range(t):
    a = input()
    for i in range(len(a)):
        if a[i] == "+" or a[i] == "-" or a[i] == "*":
            sps = str(a[i])
    # str로 식을 입력받은 다음 부호 기준으로 좌우 분할

    a_l, a_r = a.split(sps)[0], a.split(sps)[1]
    a_li, a_ri = int(a_l), int(a_r)
    # 코드 가독성 개선을 위한 변수 설정

    if sps != "*":
        ln = max(len(a_l), len(a_r) + 1)
    elif len(str(a_li * a_ri)) == 1:
        ln = len(str(a_li * a_ri)) + 1
    else:
        ln = len(str(a_li * a_ri))

    if sps == "+" or sps == "-":
        barln = max(
            len(a_r) + 1,
            len(str(a_li + a_ri)),
        )
    elif sps == "*" and len(a_r) == 1:
        barln = max(
            len(a_r) + 1,
            len(str(a_li * a_ri)),
        )
    elif sps == "*" and len(a_r) > 1:
        barln = len(a_r) + 1
        barln_bottom = len(str(a_li * a_ri))

    if sps == "*" and len(a_l) > 1:
        print(a_l.rjust(ln))
    else:
        print(a_l.rjust(barln))

    if sps == "+":
        print(("+" + a_r).rjust(ln))
        print(("-" * barln).rjust(ln))
    elif sps == "-":
        print(("-" + a_r).rjust(ln))
        print(("-" * barln).rjust(ln))
    elif sps == "*":
        if len(a_r) == 1:
            print(("*" + a_r).rjust(ln))
            print(("-" * barln).rjust(ln))
        elif len(a_r) > 1:
            print(("*" + a_r).rjust(ln))
            print(
                (
                    "-" * max(len(str(a_li * int(str(a_r)[len(a_r) - (1)]))), barln)
                ).rjust(ln)
            )
            for i in range(len(a_r)):
                if len(a_l) == 1:
                    print(
                        str(a_li * int(str(a_r)[len(a_r) - (i + 1)])).rjust(barln - i)
                    )
                else:
                    print(str(a_li * int(str(a_r)[len(a_r) - (i + 1)])).rjust(ln - i))
            print(("-" * barln_bottom).rjust(barln))

    if sps == "+":
        print(str(a_li + a_ri).rjust(ln))
    elif sps == "-":
        print(str(a_li - a_ri).rjust(ln))
    elif sps == "*":
        print(str(a_li * a_ri).rjust(barln))
    print()
