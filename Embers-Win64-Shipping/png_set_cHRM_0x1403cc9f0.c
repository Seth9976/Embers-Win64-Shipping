// 函数: png_set_cHRM
// 地址: 0x1403cc9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = sub_1403c0150(arg1, arg10, "cHRM Blue Y")
int32_t rax = sub_1403c0150(arg1, arg9, "cHRM Blue X")
int32_t rax_1 = sub_1403c0150(arg1, arg8, "cHRM Green Y")
int32_t rax_2 = sub_1403c0150(arg1, arg7, "cHRM Green X")
int32_t rax_3 = sub_1403c0150(arg1, arg6, "cHRM Red Y")
int32_t rax_4 = sub_1403c0150(arg1, arg5, "cHRM Red X")
int32_t rax_5 = sub_1403c0150(arg1, arg4.q, "cHRM White Y")
int32_t result = sub_1403c0150(arg1, arg3.q, "cHRM White X")

if (arg1 != 0 && arg2 != 0)
    int32_t result_2 = result
    result = sub_1403beff0(arg1, result_2, rax_5, rax_4, rax_3, rax_2, rax_1, rax, result_1)
    
    if (result != 0)
        *(arg2 + 0xa8) = result_2
        *(arg2 + 0xac) = rax_5
        *(arg2 + 0xb0) = rax_4
        *(arg2 + 0xb4) = rax_3
        *(arg2 + 0xb8) = rax_2
        *(arg2 + 0xbc) = rax_1
        *(arg2 + 0xc0) = rax
        result = result_1
        *(arg2 + 0xc4) = result
        *(arg2 + 8) |= 4

return result
