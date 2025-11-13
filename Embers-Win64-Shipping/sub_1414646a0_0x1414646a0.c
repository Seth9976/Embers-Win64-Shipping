// 函数: sub_1414646a0
// 地址: 0x1414646a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r10 = arg2
void* rdx = arg2[1]

if (rdx != 0)
    int32_t rbx_1 = 0
    int32_t r8_1 = 0
    int32_t rsi_1 = *(rdx + 0x1a0)
    int32_t rcx = 0
    int32_t rdi_1 = *(rdx + 0x290)
    void* result_6 = rdx + 0x278
    void* rax = *r10
    int32_t var_c8 = 0
    int32_t var_c4_1 = 1
    int128_t zmm6 = *(rax + 0x38)
    void* result_1 = result_6
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (rdi_1 != 0)
        void* result_7 = *(result_6 + 0x10)
        
        if (result_7 != 0)
            result_6 = result_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *result_6
        
        if (rdx_3 != 0)
        label_141464778:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_c4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_b4_1.d = rcx - rax_8 + 0x1f
            
            if (rcx - rax_8 + 0x1f s> rdi_1)
                var_b4_1.d = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                var_b4_1:4.d = rcx
                var_c8 = r8_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(result_6 + (rdx_4 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141464778
            
            var_b4_1.d = rdi_1
    
    int128_t zmm4 = var_b8_1.o
    void* var_60_1 = rdx + 0x268
    int128_t zmm0 = var_c8.o
    int128_t var_70_1 = zmm4
    int16_t var_90_1 = 0
    result = zmm0.q
    var_b8_1.o = zmm0
    int512_t zmm1
    zmm1.o = zmm4
    var_c8.o = (rdx + 0x268).o
    zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4.q)
    zmm0.q = (zmm1.o).q
    
    if ((zmm4.q u>> 0x20).d s< result[3].d)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rcx_5 = sx.q(i) * 6
            void* r8_2 = *var_c8.q
            
            if (*(r8_2 + (rcx_5 << 3) + 0x18) != rsi_1)
                zmm1, zmm6 = sub_14145e190(zmm0:8.q, i, r8_2, result_6, zmm1)
                var_90_1.b = 1
            else if (*(r8_2 + (rcx_5 << 3) + 0x10) != 0
                    && not(zmm6.d f< *(r8_2 + (rcx_5 << 3) + 0x1c)))
                zmm1, zmm6 = sub_14145e190(zmm0:8.q, i, r8_2, result_6, zmm1)
                var_90_1.b = 1
            
            var_b4_1:4.d &= not.d(result_1:4.d)
            result_6 = sub_14059bdd0(&result_1)
            result = var_b8_1.q
            i = i_1
        while (i s< result[3].d)
        
        if (var_90_1.b != 0 && var_90_1:1.b != 0)
            result = sub_14144aa10(rdx + 0x268, *(rdx + 0x270) - *(rdx + 0x29c), 1)
        
        r10 = arg2
    
    if (data_143ed57bc == 0 && (*(r10 + 0x497c) & 0x40) == 0)
        void* result_5 = &r10[0x2bf]
        var_c8 = 0
        int32_t result_2 = *(result_5 + 0x18)
        int32_t rsi_2 = 1
        int32_t var_c4_3 = 1
        int32_t r14_2 = -1
        result_1 = result_5
        int32_t result_4 = 0
        int32_t result_3 = 0
        int32_t result_10 = 0
        
        if (result_2 != 0)
            void* result_8 = *(result_5 + 0x10)
            result_4 = result_2
            
            if (result_8 != 0)
                result_5 = result_8
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(result_2 - 1)
            int32_t rdx_10 = *result_5
            result = zx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
            
            if (rdx_10 != 0)
            label_141464907:
                rsi_2 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rsi_2)
                var_c4_3 = rsi_2
                int32_t r15_1
                
                if (rsi_2 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_4
                
                result = zx.q(result_10 - r15_1 + 0x1f)
                
                if (result.d s> result_2)
                    result = zx.q(result_2)
                
                result_4 = result.d
                result_3 = result.d
            else
                while (true)
                    int64_t rdx_11 = sx.q(rbx_1)
                    result_10 += 0x20
                    rbx_1 += 1
                    result_3 = result_10
                    var_c8 = rbx_1
                    
                    if (rdx_11.d s>= result.d)
                        result_3 = result_2
                        break
                    
                    rdx_10 = *(result_5 + (rdx_11 << 2) + 4)
                    r14_2 = -1
                    
                    if (rdx_10 != 0)
                        goto label_141464907
        
        if (result_4 s< result_2)
            while (true)
                void* rax_18 = r10[0x2b9]
                void* rcx_10 = &r10[0x2b7]
                int64_t r12_1 = sx.q(rbx_1)
                
                if (rax_18 != 0)
                    rcx_10 = rax_18
                
                int32_t r15_2 = *(rcx_10 + (r12_1 << 2))
                int64_t rax_20 = *(arg1 + 0xe38)
                int64_t result_11 = sx.q(result_4)
                void* rax_21 = sub_141438090(rdx + 0x268, *(rax_20 + (result_11 << 2)), 
                    rax_20 + (result_11 << 2))
                int32_t r15_3 = r15_2 & rsi_2
                sub_141464a90(rax_21, arg2, r15_3 != 0)
                int64_t r9_1 = *(rax_21 + 8)
                
                if (r9_1 != 0 && r15_3 == 0)
                    void* rax_22 = r10[0x2b9]
                    void* rcx_13 = &r10[0x2b7]
                    
                    if (rax_22 != 0)
                        rcx_13 = rax_22
                    
                    *(rcx_13 + (r12_1 << 2)) |= rsi_2
                
                *(arg2[0x2c3] + (sx.q(result_4) << 3)) = r9_1
                void* rdx_14 = &r10[0x2c5]
                void* rax_25 = r10[0x2c7]
                
                if (rax_25 != 0)
                    rdx_14 = rax_25
                
                int32_t result_9 = result_4
                
                if (result_4 s< 0)
                    result_9 = result_4 + 0x1f
                
                int64_t r8_6 = sx.q(result_9 s>> 5)
                int32_t rax_27 = 1 << (result_4.b & 0x1f)
                int32_t rcx_17 = *(rdx_14 + (r8_6 << 2))
                int32_t rcx_18
                
                if (r9_1 == 0)
                    rcx_18 = rcx_17 & not.d(rax_27)
                else
                    rcx_18 = rcx_17 | rax_27
                
                *(rdx_14 + (r8_6 << 2)) = rcx_18
                sub_14059bdd0(&var_c8)
                result = result_1
                result_4 = result_3
                
                if (result_4 s>= result[3].d)
                    break
                
                r14_2 &= not.d(rsi_2)
                rsi_2 = var_c4_3
                rbx_1 = var_c8

return result
