// 函数: sub_142a4d5b0
// 地址: 0x142a4d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* string = arg1

if (*arg4 s> 0)
    return 0

if (arg1 == 0)
    string = sub_142a46ef0()

char* rax_3 = strrchr(string, 0x5f)
int32_t rbx_2

if (rax_3 == 0)
    rbx_2 = 0
else
    rbx_2 = rax_3.d - string.d
    
    if (rbx_2 s> 0)
        if (sub_142a86320(string, "und_", 4, rax_3.d) == 0)
            rbx_2 -= 3
            memmove(arg2, &string[3], sub_142a92b70(rbx_2, arg3))
        else if (arg2 != string)
            memcpy(arg2, string, sub_142a92b70(rbx_2, arg3))

return sub_142a8c3f0(arg2, arg3, rbx_2, arg4)
