// 函数: sub_1413ade40
// 地址: 0x1413ade40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x12c) = 0
void* const result = *(arg1 + 8)

if (*(result + 0x58) s> 0 && *(arg1 + 0x50) != 0)
    int64_t* r9_2 = *(arg1 + 0xf0) + 0x62e0
    *(arg1 + 0x12c) = 1
    int32_t r11_1 = r9_2[5].d
    void* r10_1 = &r9_2[2]
    int32_t rcx = 0
    int32_t var_54_1 = 1
    int32_t var_58_1 = 0
    int32_t r8_1 = 0
    void* var_50_1 = r10_1
    int32_t var_48_1 = 0xffffffff
    int64_t var_44_1 = 0
    
    if (r11_1 != 0)
        void* rax = *(r10_1 + 0x10)
        
        if (rax != 0)
            r10_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r10_1
        
        if (rdx_3 != 0)
        label_1413adf08:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_54_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_44_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r11_1)
                var_44_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_44_1:4.d = r8_1
                var_58_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
                int32_t var_48_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1413adf08
            
            var_44_1.d = r11_1
    
    int64_t* var_38_1 = r9_2
    result = nullptr
    int128_t var_30 = var_58_1.o
    int64_t var_20_1 = 0xffffffff
    
    if (0 s< r11_1)
        int32_t r8_3 = 0
        
        while (true)
            if (r8_3 s< 7)
                void* rcx_4 = *(arg1 + 8)
                int64_t* r10_2 = *(rcx_4 + 0x50)
                int64_t* rax_11 = r10_2
                void* rdx_5 = &r10_2[sx.q(*(rcx_4 + 0x58))]
                
                if (r10_2 != rdx_5)
                    do
                        if (*rax_11 == *(*(*r9_2 + (sx.q(r8_3) << 3)) + 0x10))
                            if (((rax_11 - r10_2) s>> 3).d != 0xffffffff)
                                uint32_t rax_14 = zx.d(*(arg1 + 0x12c))
                                uint32_t rcx_6 = rax_14
                                rax_14.b &= 1
                                *(arg1 + 0x12c) =
                                    (((rcx_6 u>> 1).b | (1 << (r8_3 u% 0x20)).b) * 2) | rax_14.b
                            
                            break
                        
                        rax_11 = &rax_11[1]
                    while (rax_11 != rdx_5)
            
            var_20_1.d &= not.d(var_30:4.d)
            sub_14059bdd0(&var_30)
            result = var_30:8.q
            r8_3 = var_20_1:4.d
            
            if (r8_3 s>= *(result + 0x18))
                break
            
            r9_2 = var_38_1

return result
