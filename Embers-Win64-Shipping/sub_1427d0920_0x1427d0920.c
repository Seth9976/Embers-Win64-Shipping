// 函数: sub_1427d0920
// 地址: 0x1427d0920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint64_t result = sub_1427d0f40(arg1 + 8, &arg_10)

if (result != 0)
    void* r8_1 = *(arg1 + 0x70)
    int32_t* rdx_1 = result + 8
    uint64_t rcx_1 = zx.q(*(r8_1 + 0x18))
    
    if ((*(r8_1 + 0x1c) & 0x7fffffff) u<= rcx_1.d)
        return sub_1427d0ff0(r8_1 + 0x10, rdx_1) __tailcall
    
    result = *(r8_1 + 0x10)
    int32_t* r9_2 = result + (rcx_1 << 2)
    
    if (r9_2 != 0)
        result = zx.q(*rdx_1)
        *r9_2 = result.d
    
    *(r8_1 + 0x18) += 1

return result
