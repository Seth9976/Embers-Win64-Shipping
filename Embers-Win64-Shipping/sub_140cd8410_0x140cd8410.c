// 函数: sub_140cd8410
// 地址: 0x140cd8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x78)
int32_t r8 = arg2[1].d
int32_t rdi = *(arg1 + 0x80)
int64_t result_1 = result
int32_t rsi = *(result + 0x3c)
int32_t var_18 = rsi
int32_t var_14 = rdi
int64_t* var_20 = arg2

if (r8 != 0)
    result = sub_140cd9680(&result_1, 0, r8)
    rdi.b = not.b(rdi.b)
    arg2[1].d = 0
    rdi.b &= 1
    
    if (*(arg2 + 0xc) != 0)
        if (rdi.b != 0)
            return sub_140ce4fc0(arg2, 0, rsi)
        
        return sub_140ce4f50(arg2, 0, rsi) __tailcall

return result
