// 函数: sub_1422ac1c0
// 地址: 0x1422ac1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t rax = arg3
arg3.b = 1
void* result = (*(r9 + 0x6a8))(arg1, rax, arg3, r9)

if (result == 0)
    return result

int32_t rcx = arg2[1].d
*(result + 0x7c) = *arg2
*(result + 0x84) = rcx
return sub_1422273b0(result) __tailcall
