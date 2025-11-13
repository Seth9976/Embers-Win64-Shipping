// 函数: sub_14174dd50
// 地址: 0x14174dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[1].d)

if (result.d s< *(arg1 + 0x70))
    int64_t rdx = *(arg1 + 0x68)
    int32_t* r8_3 = (result << 4) + rdx
    
    if (r8_3[3].b != 0 && r8_3 != 0)
        int32_t r9_1 = *r8_3
        
        if (r9_1 == 0xffffffff)
            int32_t r9_2 = r8_3[1]
            
            if (r9_2 == 0xffffffff)
                int64_t rax_10 = sx.q(r8_3[2])
                
                if (rax_10.d != 0xffffffff)
                    int128_t zmm1 = arg2[1]
                    void* rcx_20 = (rax_10 << 6) + *(arg1 + 0x38)
                    uint128_t var_38 = *arg2
                    uint64_t var_18_1 = arg2[2].q
                    int128_t var_28_3 = zmm1
                    sub_14174e100(rcx_20, &var_38)
            else
                if (r9_2 + 1 s< *(arg1 + 0x50))
                    *(rdx + sx.q((*((sx.q(*(arg1 + 0x50)) << 6) + *(arg1 + 0x48) - 0x30)).d) * 0x10
                        + 4) = r9_2
                    r9_2 = r8_3[1]
                
                int32_t rdx_6 = *(arg1 + 0x50)
                int32_t rcx_13 = rdx_6 - r9_2 - 1
                
                if (rcx_13 s>= 1)
                    rcx_13 = 1
                
                if (rcx_13 != 0)
                    memcpy((sx.q(r9_2) << 6) + *(arg1 + 0x48), 
                        (sx.q(rdx_6 - rcx_13) << 6) + *(arg1 + 0x48), rcx_13 << 6)
                    rdx_6 = *(arg1 + 0x50)
                
                *(arg1 + 0x50) = rdx_6 - 1
                sub_1407c3fe0(arg1 + 0x48)
        else
            if (r9_1 + 1 s< *(arg1 + 0x60))
                *(rdx + sx.q((*((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x58) - 0x30)).d) * 0x10) =
                    r9_1
                r9_1 = *r8_3
            
            int32_t rdx_1 = *(arg1 + 0x60)
            int32_t rcx_4 = rdx_1 - r9_1 - 1
            
            if (rcx_4 s>= 1)
                rcx_4 = 1
            
            if (rcx_4 != 0)
                memcpy((sx.q(r9_1) << 6) + *(arg1 + 0x58), 
                    (sx.q(rdx_1 - rcx_4) << 6) + *(arg1 + 0x58), rcx_4 << 6)
                rdx_1 = *(arg1 + 0x60)
            
            *(arg1 + 0x60) = rdx_1 - 1
            sub_1407c3fe0(arg1 + 0x58)
        
        result = sx.q(arg2[1].d)
        
        if (result.d s>= 0 && result.d s< *(arg1 + 0x70))
            int64_t result_1 = result
            result = *(arg1 + 0x68)
            int32_t var_40_1 = 0xffffffff
            char var_3c_1 = 0
            *(result + result_1 * 0x10) = -1.o

return result
