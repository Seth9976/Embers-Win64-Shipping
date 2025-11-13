// 函数: sub_14126d170
// 地址: 0x14126d170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg2 + 0xd75) == 0 && *(arg2 + 0xd74) == 0)
    int64_t* r10_1 = *(arg1 + 0x10)
    int64_t* r8_1 = r10_1
    void* r9_1 = &r10_1[sx.q(*(arg1 + 0x18))]
    
    if (r10_1 != r9_1)
        while (*r8_1 != arg2)
            r8_1 = &r8_1[1]
            
            if (r8_1 == r9_1)
                goto label_14126d1c8
    
    if (r10_1 == r9_1 || ((r8_1 - r10_1) s>> 3).d s< 2)
    label_14126d1c8:
        void* rcx = *(arg1 + 8)
        int32_t i = 0
        int64_t rbp
        rbp.b = 0
        
        if (*(rcx + 0x1018) s> 0)
            int64_t* rdi_1 = nullptr
            int128_t zmm6
            int128_t var_18_1 = zmm6
            int128_t zmm7
            int128_t var_28_1 = zmm7
            int128_t zmm8 = 0x3f000000
            
            do
                int32_t* rcx_1 = *(rdi_1 + *(rcx + 0x1010))
                float zmm2 = rcx_1[3]
                float zmm3 = *rcx_1
                float zmm4 = rcx_1[4]
                zmm6 = rcx_1[5]
                float zmm5 = rcx_1[1]
                zmm7 = rcx_1[2]
                float var_58 = (zmm2 - zmm3) f* zmm8.d
                float zmm0 = zmm6.d f- zmm7.d
                zmm7.d = zmm7.d f+ zmm6.d
                float var_54_1 = (zmm4 - zmm5) f* zmm8.d
                zmm7.d = zmm7.d f* zmm8.d
                float var_50_1 = zmm0 f* zmm8.d
                float var_4c = (zmm3 + zmm2) f* zmm8.d
                int32_t var_44_1 = zmm7.d
                float var_48_1 = (zmm5 + zmm4) f* zmm8.d
                result, zmm8 = sub_141f8d780(arg2 + 0xbf0, &var_4c, &var_58)
                rcx = *(arg1 + 8)
                
                if (result.b != 0)
                    rbp.b = 1
                    break
                
                i += 1
                rdi_1 = &rdi_1[1]
            while (i s< *(rcx + 0x1018))
        
        if (*(rcx + 0x1018) s> 0 && rbp.b != 0)
            result.b = 1
            return result
        
        result.b = 0
        return result

result.b = 0
return result
