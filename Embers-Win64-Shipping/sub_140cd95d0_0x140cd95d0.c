// 函数: sub_140cd95d0
// 地址: 0x140cd95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x78)
int32_t r8 = arg2[1].d
int32_t rdi = *(arg1 + 0x80)
uint64_t result_1 = result
int32_t rsi = *(result + 0x3c)
int32_t var_18 = rsi
int32_t var_14 = rdi
int64_t* var_20 = arg2

if (r8 != 0)
    sub_140cd9680(&result_1, 0, r8)
    arg2[1].d = 0
    result.b = not.b(rdi.b)
    result.b &= 1
    
    if (*(arg2 + 0xc) != 0)
        if (result.b != 0)
            result = sub_140ce4fc0(arg2, 0, rsi)
        else
            result = sub_140ce4f50(arg2, 0, rsi)

rdi.b = not.b(rdi.b)

if ((rdi.b & 1) == 0)
    return sub_140a1d5c0(arg2) __tailcall

int64_t rcx_4 = *arg2

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
