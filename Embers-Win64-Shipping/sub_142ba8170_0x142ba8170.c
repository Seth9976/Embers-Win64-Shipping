// 函数: sub_142ba8170
// 地址: 0x142ba8170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)
int32_t result_1 = 6
int32_t result

if (*(arg1 + 0x410) == 0)
    result = sub_142ba7990(arg1, nullptr, arg3)
    result_1 = result

if (*(arg1 + 0x410) != 0 || result == 0)
    int32_t* rsi_1 = *(*(arg1 + 0x410) + 0x18)
    
    if (rdi.d u> zx.d(*(arg1 + 0xe)))
        return zx.q(result_1)
    
    int64_t rdx
    
    if (rdi.d != 0)
        rdx = *(rsi_1 + 0x18)
    
    if (rdi.d == 0 || rdx == 0)
        result = sub_142ba7790(arg1, 0, nullptr, arg3)
    label_142ba824c:
        *(arg1 + 4) &= 0xffff
        *(arg1 + 4) |= rdi.d << 0x10
        *(arg1 + 8) &= 0xffff7fff
    else
        int64_t r9_1 = *(arg1 + 0x2d0)
        int64_t rbp_1 = *(arg1 + 0x98)
        void* r14_3 = (rdi << 4) + rdx
        int64_t arg_8
        result = (*(r9_1 + 0x120))(arg1, zx.q(*(r14_3 - 8)), &arg_8, r9_1)
        
        if (result == 0)
            sub_142b99980(rbp_1, *(arg1 + 0x20))
            *(arg1 + 0x20) = arg_8
            result = sub_142ba7790(arg1, *rsi_1, *(r14_3 - 0x10), arg3)
            
            if (result == 0)
                goto label_142ba824c

return result
