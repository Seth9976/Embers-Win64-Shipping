// 函数: sub_14174e310
// 地址: 0x14174e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[2].d)

if (result.d s< *(arg1 + 0x88))
    int64_t r10_1 = *(arg1 + 0x80)
    int64_t r8_1 = result * 9
    int32_t* r8_2 = r10_1 + (r8_1 << 2)
    
    if (*(r10_1 + (r8_1 << 2) + 0x20) != 0 && r8_2 != 0)
        int32_t r9_1 = *r8_2
        uint128_t var_38
        int128_t var_28
        
        if (r9_1 == 0xffffffff)
            sub_14174e660(arg1, arg2, r8_2)
        else
            uint64_t rdx = sx.q(*(arg1 + 0x18))
            int64_t rax = *(arg1 + 0x10)
            uint64_t rcx_1 = rdx << 6
            uint128_t zmm2 = *(rcx_1 + rax - 0x40)
            int128_t zmm0 = *(rcx_1 + rax - 0x30)
            var_38 = zmm2
            int64_t rcx_2 = _mm_bsrli_si128(zmm2, 8).q
            var_28 = zmm0
            int64_t rax_1
            
            if (rcx_2 != 0)
                rax_1 = arg2[1]
            
            bool cond:1_1
            
            if (rcx_2 == 0 || rax_1 == 0)
                cond:1_1 = var_38.q == *arg2
            else
                cond:1_1 = rcx_2 == rax_1
            
            rax_1.b = cond:1_1
            
            if (rax_1.b == 0)
                *(r10_1 + sx.q(var_28.d) * 0x24) = r9_1
                r9_1 = *r8_2
                rdx = zx.q(*(arg1 + 0x18))
            
            int32_t rcx_6 = rdx.d - r9_1 - 1
            
            if (rcx_6 s>= 1)
                rcx_6 = 1
            
            if (rcx_6 != 0)
                memcpy((sx.q(r9_1) << 6) + *(arg1 + 0x10), 
                    (sx.q(rdx.d - rcx_6) << 6) + *(arg1 + 0x10), rcx_6 << 6)
                rdx = zx.q(*(arg1 + 0x18))
            
            *(arg1 + 0x18) = (rdx - 1).d
            sub_1407c3fe0(arg1 + 0x10)
        
        result = sx.q(arg2[2].d)
        
        if (result.d s>= 0 && result.d s< *(arg1 + 0x88))
            int32_t* rdx_5 = *(arg1 + 0x80) + result * 0x24
            *rdx_5 = var_38.d
            rdx_5[1] = var_38:4.d
            rdx_5[2] = var_38:8.d
            rdx_5[3] = var_38:0xc.d
            rdx_5[4] = var_28.d
            rdx_5[5] = var_28:4.d
            rdx_5[6] = var_28:8.d
            result = zx.q(var_28:0xc.d)
            rdx_5[7] = result.d
            rdx_5[8].b = 0

return result
