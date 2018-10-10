#!/usr/bin/python3

def findPuddleVol(walls):
    # puddle size
    p_s = 0
    # start
    l = 0
    # left max
    l_m = l
    r = len(walls) - 1
    # right max
    r_m = r

    while (l <= r) and (l + 1 < len(walls)) and (r - 1 >= 0):
        print("l: " + str(l) + " r: " + str(r))
        if (walls[l + 1] >= walls[l_m]):
            l_m = l
        if (walls[r_m] <= walls[r - 1]):
            r_m = r

        print("l_m: " + str(l_m) + " r_m: " + str(r_m))

        if (walls[l_m] > walls[r_m]):
            r -= 1
            if (walls[r_m] - walls[r] > 0):
                p_s += walls[r_m] - walls[r]
        elif (walls[l_m] < walls[r_m]):
            l += 1
            if (walls[l_m] - walls[l] > 0):
                p_s += walls[l_m] - walls[l]
        else:
            r -= 1
            l += 1
            if (walls[r_m] - walls[r] > 0):
                p_s += walls[r_m] - walls[r]
            if (walls[l_m] - walls[l] > 0):
                p_s += walls[l_m] - walls[l]

        print("p_s: " + str(p_s))


    return p_s

if __name__ == '__main__':
    walls = [6, 9, 9, 5, 1, 1, 22, 12, 1, 5]
    v= findPuddleVol(walls)
    print(v)
    walls = [1, 1, 9, 9, 7, 7, 7, 2, 2, 2, 1, 99]
    v= findPuddleVol(walls)
    print(v)
    walls = [2, 5, 1, 2, 3, 4, 7, 7, 6, 9, 1]
    v = findPuddleVol(walls)
    print(v)
    walls = [2, 1, 4, 1, 3, 4]
    v = findPuddleVol(walls)
    print(v)
