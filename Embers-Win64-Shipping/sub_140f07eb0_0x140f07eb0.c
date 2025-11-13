// 函数: sub_140f07eb0
// 地址: 0x140f07eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_8 = 0f
int32_t r14 = 0
uint64_t result = zx.q(*(arg1 + 0x40))

if (result.d != *(arg1 + 0x6c))
    float zmm1[0x4] = *(arg1 + 0x8c)
    void* r10_1 = arg1 + 0x38
    float zmm0[0x4] = *(arg1 + 0xa0)
    int32_t r8_1 = 0
    zmm0[0] = zmm0[0] f+ *(arg1 + 0x98)
    void* r15_1 = r10_1 + 0x10
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    zmm1[0] = zmm1[0] f* *(arg1 + 0xbc)
    int32_t var_118_1 = 0
    zmm0[0] = zmm0[0] * zmm1[0]
    int32_t var_114_1 = 1
    float temp0_1[0x4] = __maxss_xmmss_memss(zmm1[0], *(arg1 + 0xb0))
    int32_t rcx = 0
    int32_t r11_1 = *(r15_1 + 0x18)
    void* var_110_1 = r15_1
    int32_t var_108_1 = 0xffffffff
    int64_t var_104_1 = 0
    temp0_1[0] = temp0_1[0] - zmm0[0]
    
    if (r11_1 != 0)
        void* rax = *(r15_1 + 0x10)
        void* r9_1 = r15_1
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_2
        int32_t temp1_1
        temp0_2:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140f07fcb:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_3
            temp0_3, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_114_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_3
            
            var_104_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r11_1)
                var_104_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_104_1:4.d = r8_1
                var_118_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_108_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140f07fcb
            
            var_104_1.d = r11_1
        
        r10_1 = arg1 + 0x38
    
    int32_t rdx_5 = *(r10_1 + 0x28)
    void* var_b0 = r10_1
    float var_a8_1[0x4] = var_118_1.o
    int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
    zmm0 = var_b0.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int32_t var_e8_1 = rsi_1
    int32_t var_e4_1 = rdx_5
    int128_t var_98_1 = 0xffffffff
    int64_t var_b8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    float var_d8[0x4] = zmm0
    
    if (rdx_5 != r11_1)
        void* rax_10 = *(r15_1 + 0x10)
        void* r10_2 = r15_1
        
        if (rax_10 != 0)
            r10_2 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_2 + (sx.q(r8_4) << 2)) & rsi_1
        int32_t var_e4_3
        
        if (rdx_9 != 0)
        label_140f080a3:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_5
            temp0_5, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t rbx_1
            
            if (rax_17 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_5
            
            int32_t var_e4_2 = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_e4_3 = r11_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_2 + (rcx_5 << 2) + 4)
                var_e8_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140f080a3
            
            var_e4_3 = r11_1
        r10_1 = arg1 + 0x38
    
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    
    while (true)
        result = sx.q(var_a8_1[3])
        int64_t* rdx_10 = var_d8[0].q
        
        if (result.d == (var_e8_1.q u>> 0x20).d && var_a8_1[0].q == r15_1 && rdx_10 == r10_1)
            break
        
        int32_t rbx_2 = *(arg1 + 0xa8)
        int64_t* rdi_2 = sx.q(*(*rdx_10 + result * 0xc)) * 0x58 + *(arg1 + 0x28)
        
        if (rdi_2[0xa].b == 1)
            if (rbx_2 == 0)
                rbx_2 = 2
            else if (rbx_2 == 2)
                rbx_2 = 0
        
        zmm7 = *(rdi_2 + 0x44)
        
        if (rbx_2 == 2)
            r14 |= 1
            int64_t* rcx_11 = *(*rdi_2 + sx.q(rdi_2[1].d) * 0x10 - 0x10)
            
            if (*((*(*rcx_11 + 0x20))(rcx_11, &var_b0) + 0x18) == 1)
                r15_1.b = 1
            else
                r15_1.b = 0
        else if (rbx_2 != 0)
            r15_1.b = 0
        else
            r14 |= 2
            int64_t* rcx_16 = **rdi_2
            void var_f8
            
            if (*((*(*rcx_16 + 0x20))(rcx_16, &var_f8) + 0x18) != rbx_2.b)
                r15_1.b = 0
            else
                r15_1.b = 1
        
        if ((r14.b & 2) != 0)
            int64_t* rsi_2 = var_e8_1.q
            r14 &= 0xfffffffd
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp6_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
        
        if ((r14.b & 1) != 0)
            int64_t* rsi_3 = var_a8_1[2].q
            r14 &= 0xfffffffe
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp8_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)
        
        if (r15_1.b != 0)
            zmm7 = rdi_2[7].d
        
        zmm6 = data_143dbb1f0.d
        zmm8 = data_143dbb1f0:4.d
        
        if (rbx_2 == 0)
            zmm6 = zmm7
            zmm6[0] = zmm6[0] f- rdi_2[7].d
        else if (rbx_2 == 1)
            zmm6 = temp0_1
            zmm6[0] = zmm6[0] - zmm7[0]
            zmm6[0] = zmm6[0] * 0.5f
        else if (rbx_2 == 2)
            zmm6 = temp0_1
            zmm6[0] = zmm6[0] - zmm7[0]
        
        zmm6[0] = zmm6[0] f+ rdi_2[6].d
        zmm8[0] = zmm8[0] f+ *(rdi_2 + 0x34)
        rdi_2[6].d = zmm6[0]
        *(rdi_2 + 0x34) = zmm8[0]
        int64_t* i = *rdi_2
        
        for (void* rdi_5 = &i[sx.q(rdi_2[1].d) * 2]; i != rdi_5; i = &i[2])
            int64_t* rbx_4 = *i
            void arg_10
            int32_t* rax_31 = (*(*rbx_4 + 0x38))(rbx_4, &arg_10)
            zmm8[0] = zmm8[0] f+ rax_31[1]
            zmm6[0] = zmm6[0] f+ *rax_31
            float arg_c = zmm8[0]
            arg_8 = zmm6[0]
            (*(*rbx_4 + 0x30))(rbx_4, &arg_8)
        
        var_a8_1[2] &= not.d(var_d8[3])
        sub_14059bdd0(&var_d8[2])
        r15_1 = var_110_1
        r10_1 = arg1 + 0x38

return result
