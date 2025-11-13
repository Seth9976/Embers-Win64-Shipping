// 函数: sub_141fea0e0
// 地址: 0x141fea0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 0xa)

if ((result.b & 1) != 0)
    void* rax_1 = sub_142551420()
    void* r8_1 = *(*(arg1 + 0x20) + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_4 = sub_14259fc50()
        void* rdx_3 = *(*(arg1 + 0x20) + 0x10)
        result = sx.q(*(rax_4 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_4 + 0x30)
                goto label_141fea156
    else
    label_141fea156:
        int32_t var_10_1 = 0x1e6930c2
        *(arg1 + 0x44) = _mm_unpacklo_ps(0x1e6930c2, 0x1e6930c2)
        int64_t temp0_2 = _mm_unpacklo_ps(0x1e6930c2, 0x1e6930c2)
        *(arg1 + 0x4c) = 0x1e6930c2
        int32_t var_10_2 = 0x1e6930c2
        result = 0x1e6930c2
        *(arg1 + 0x38) = temp0_2
        *(arg1 + 0x40) = 0x1e6930c2

return result
