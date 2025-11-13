// 函数: sub_142a61a60
// 地址: 0x142a61a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 0xf0000000) != 0x30000000)
    return sub_142ac3aa0(&arg1[5], arg2, arg4) __tailcall

char** rax_2
int32_t rdx_1
rax_2, rdx_1 = sub_142a620c0(arg1, arg3, nullptr, arg5)
void* result

if (arg5 == 0 || *arg5 s> 0)
    result = nullptr
else if (rax_2 != 0)
    void* result_1 = sub_142ac3aa0(&rax_2[5], *(rax_2 + 0xac), arg4)
    result = result_1
    
    if (result_1 == 0)
        *arg5 = 0x11
else
    *arg5 = 1
    result = nullptr

rdx_1.b = 1
sub_142a61820(rax_2, rdx_1.b)
return result
