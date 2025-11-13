// 函数: sub_1422d2e50
// 地址: 0x1422d2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg2
int64_t result = sx.q(*(**(arg1 + 0x58) + zx.q(*(r14 + 0x70)) * 0x18 + 4))

if (result.d != 0xffffffff)
    int64_t* rdx = *(r14 + 0x20)
    int32_t r8_1 = 0
    void* rax_3 = (result << 5) + *(arg1 + 0x38)
    int64_t* r15_1 = arg2[1]
    uint32_t rcx = zx.d(*(rax_3 + 0xa))
    int64_t* rcx_1 = *(r14 + 0x50)
    int32_t* r9_1 = &r15_1[0x17]
    int32_t r11_1 = r9_1[6]
    int32_t var_c4_1 = 1
    int64_t rsi_2 = *(sx.q(*(rax_3 + 0xc)) + rcx_1)
    int32_t rcx_2 = 0
    int32_t var_c8_1 = 0
    int32_t* var_c0 = r9_1
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r11_1 != 0)
        int32_t* rax_4 = *(r9_1 + 0x10)
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1422d2f4b:
            int32_t rax_11 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_c4_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_b4_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_b4_1:4.d = r8_1
                var_c8_1 = rcx_2
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = r9_1[rdx_4 + 1]
                var_b8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1422d2f4b
            
            var_b4_1.d = r11_1
    
    void* var_50_1 = &r15_1[0x15]
    int128_t zmm0 = var_c8_1.o
    int128_t var_60_1 = 0xffffffff
    int16_t var_90_1 = 0
    result = zmm0.q
    var_b8_1.o = zmm0
    var_c8_1.o = (&r15_1[0x15]).o
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    
    if (0 s< *(result + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            int32_t* r11_4 = sx.q(i) * 0x60 + *var_c8_1.q
            int64_t r9_2 = sx.q(*r11_4)
            int32_t* rcx_7
            
            if (r15_1[1].d == *(r15_1 + 0x34))
            label_1422d304e:
                rcx_7 = nullptr
            else
                void* rcx_4 = r15_1[8]
                void* r8_3 = &r15_1[7]
                
                if (rcx_4 != 0)
                    r8_3 = rcx_4
                
                int32_t rax_17 = *(r8_3 + (((sx.q(r15_1[9].d) - 1) & r9_2) << 2))
                
                if (rax_17 == 0xffffffff)
                label_1422d304e_1:
                    rcx_7 = nullptr
                else
                    while (true)
                        rcx_7 = (sx.q(rax_17) << 4) + *r15_1
                        
                        if (*rcx_7 == r9_2.d)
                            break
                        
                        rax_17 = rcx_7[2]
                        
                        if (rax_17 == 0xffffffff)
                            goto label_1422d304e_2
                    
                    if (rax_17 == 0xffffffff)
                    label_1422d304e_2:
                        rcx_7 = nullptr
            
            void* rax_18 = &rcx_7[1]
            
            if (rcx_7 == 0)
                rax_18 = nullptr
            
            if (rax_18 == 0)
                sub_1422ce970(zmm0:8.q, i)
                var_90_1.b = 1
            else
                int32_t rax_20 = *rax_18 * rcx
                char arg_8 = 0
                char arg_10 = 0
                int64_t rbx_3 = sx.q(rax_20) + rsi_2
                sub_1422d34a0(arg1, nullptr, &r11_4[2], rcx_1, rdx, 0, rbx_3, rcx, *arg2 + 0x4a, 
                    &arg_8, &arg_10)
                char rcx_10 = arg_8
                
                if (rcx_10 != 0)
                    void* rax_24 = arg2[0x14]
                    void* rcx_11 = &arg2[0x16]
                    int64_t var_80 = rbx_3
                    
                    if (rax_24 != 0)
                        rcx_11 = rax_24
                    
                    arg2[0x12]((*(*rcx_11 + 8))(rcx_11), &var_80, arg2)
                    rcx_10 = arg_8
                
                *(r14 + 0x4b) |= arg_10
                *(r14 + 0x49) |= rcx_10
            
            var_b4_1:4.d &= not.d(var_c0:4.d)
            sub_14059bdd0(&var_c0)
            result = var_b8_1.q
            i = i_1
        while (i s< *(result + 0x18))
        
        if (var_90_1.b != 0 && var_90_1:1.b != 0)
            return sub_140bd96d0(&r15_1[0x15], r15_1[0x16].d - *(r15_1 + 0xdc), 1)

return result
