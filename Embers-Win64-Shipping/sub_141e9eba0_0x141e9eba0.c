// 函数: sub_141e9eba0
// 地址: 0x141e9eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(*arg2 f!= *arg1) && not(arg2[1] f!= arg1[1]) && not(arg2[2] f!= arg1[2])
        && not(arg2[3] f!= arg1[3]) && not(arg2[4] f!= arg1[4]) && not(arg2[5] f!= arg1[5])
        && not(arg2[6] f!= arg1[6]) && not(arg2[8] f!= arg1[8]) && not(arg2[9] f!= arg1[9])
        && not(arg2[0xa] f!= arg1[0xa]) && not(arg2[0xb] f!= arg1[0xb]))
    char r8_1 = (arg2[0xc]).b
    char r9_1 = (arg1[0xc]).b
    
    if (((r8_1 ^ r9_1) & 1) == 0 && ((r8_1 ^ r9_1) & 2) == 0 && arg1[0xd].b == arg2[0xd].b
            && not(arg2[0x160] f!= arg1[0x160]) && not(arg2[0x161] f!= arg1[0x161]))
        return 1

return 0
