#!/usr/bin/env python3


def longestCommonPrefix(strs, strsSize):
    shorty = min(strs, key=len)
    print("shorty is: ", shorty)
    ans = ""
    for i, c in enumerate(shorty):
        for word in strs:
            if shorty[i] == word[i]:
                try:
                    if ans[-1] != c:
                        ans+=c
                except Exception:
                    ans+=c
                print(shorty[i], word[i])
                continue
            else:
                return ans
    return ans




if __name__ == "__main__":
    strs = ["flower", "flow", "flight"]
    strsSize = 3
    ans = longestCommonPrefix(strs, strsSize)
    if ans == "fl":
        print("success")
    else:
        print("fail", ans)
