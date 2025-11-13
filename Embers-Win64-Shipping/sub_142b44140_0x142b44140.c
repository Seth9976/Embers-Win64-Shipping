// 函数: sub_142b44140
// 地址: 0x142b44140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint32_t rax_3 = zx.d(sub_142b46530(arg1, 0))
uint64_t result

if (rax_3 == 0x2e)
    if (arg3[3] == 0)
        arg3[3] = 1
        sub_142b43190(arg1, arg4, arg5)
        result = 2
    else
        *arg5 = 0x10113
        result = 0
else if (rax_3 != 0x40)
    if (sub_142b10510(arg2) - 2 u> 1)
        *arg5 = 0x10113
        result = 0
    else
        int64_t rsi_1 = sx.q(sub_142a98bf0(arg2))
        
        if (rsi_1.d u> 0x2e)
            abort()
            noreturn
        
        void var_50
        
        switch (rsi_1)
            case 0, 1, 2, 3, 4
                if (*arg3 != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    *arg3 = 1
                    int64_t* rax_7 = sub_142b42b50(&var_50, rsi_1.d)
                    *arg4 = *rax_7
                    arg4[1].d = rax_7[1].d
                    int32_t result_1
                    result_1.b = (rsi_1 - 2).d u<= 1
                    result = zx.q(result_1)
            case 5, 6, 7
                if (arg3[1] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[1] = 1
                    sub_142ab6090(&arg4[2], sub_142b44f00(&var_50, rsi_1.d))
                    sub_142ab6080(&var_50)
                    result = 0
            case 8, 9, 0xa, 0xb
                if (arg3[3] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[3] = 1
                    int128_t* rax_10 = sub_142b44810(&var_50, rsi_1.d)
                    *(arg4 + 0x40) = *rax_10
                    *(arg4 + 0x50) = rax_10[1]
                    result = 2
                    
                    if (rsi_1.d != 8)
                        result = 0
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13
                if (arg3[4] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[4] = 1
                    arg4[0xc].d = sub_142b449c0(rsi_1.d)
                    result = 0
            case 0x14, 0x15, 0x16, 0x17, 0x18
                if (arg3[5] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[5] = 1
                    int32_t* rax_13 = sub_142b3bf60(&var_50, sub_142b41eb0(rsi_1.d))
                    *(arg4 + 0x64) = *rax_13
                    *(arg4 + 0x6c) = rax_13[2]
                    result = 0
            case 0x19
                if (arg3[8] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[8] = 1
                    sub_142ab84f0(&arg4[0x11], sub_142aab890("latn", arg5))
                    result = 0
            case 0x1a, 0x1b, 0x1c, 0x1d, 0x1e
                if (arg3[9] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[9] = 1
                    arg4[0x13].d = sub_142b45060(rsi_1.d)
                    result = 0
            case 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25
                if (arg3[0xa] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[0xa] = 1
                    *(arg4 + 0x9c) = sub_142b44bf0(rsi_1.d)
                    result = 0
            case 0x26, 0x27
                if (arg3[0xb] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[0xb] = 1
                    int32_t rax_18
                    
                    if (rsi_1.d == 0x26)
                        rax_18 = 0
                    else if (rsi_1.d == 0x27)
                        rax_18 = 1
                    else
                        rax_18 = 2
                    
                    arg4[0x14].d = rax_18
                    result = 0
            case 0x28
                if (arg3[3] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[3] = 1
                    result = 3
            case 0x29
                if (arg3[1] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[1] = 1
                    result = 4
            case 0x2a
                if (arg3[2] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[2] = 1
                    result = 5
            case 0x2b
                if (arg3[1] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[1] = 1
                    result = 6
            case 0x2c
                if (arg3[7] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[7] = 1
                    result = 7
            case 0x2d
                if (arg3[8] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[8] = 1
                    result = 8
            case 0x2e
                if (arg3[0xc] != 0)
                    *arg5 = 0x10113
                    result = 0
                else
                    arg3[0xc] = 1
                    result = 9
else if (arg3[3] != 0)
    *arg5 = 0x10113
    result = 0
else
    arg3[3] = 1
    sub_142b42cc0(arg1, arg4, arg5)
    result = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
