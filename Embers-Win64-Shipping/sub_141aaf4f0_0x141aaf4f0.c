// 函数: sub_141aaf4f0
// 地址: 0x141aaf4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r14 = arg2 + 8
void* r13 = arg2
int64_t* var_88 = r14
sub_141acb4e0(r14, r14[2])
uint64_t result = sub_140d3e110(arg1 + 0x2c)
uint64_t result_2

if (result.b == 0)
    result_2 = 0
else
    result = sub_140d3c6e0(arg1 + 0x2c)
    result_2 = result

uint64_t result_3 = result_2
void* var_78

if (*(arg1 + 0xe8) s> 0 && result_2 != 0)
    void* r11_1 = r14[2]
    int32_t result_4 = 0
    int32_t rdi_1 = r14[1].d
    void* var_90_1 = r11_1
    
    if (rdi_1 != 0)
        do
            int32_t rax_2 = *(arg1 + 0x48)
            int32_t result_1 = result_4
            int32_t* rdx_4
            
            if (rax_2 == *(arg1 + 0x74))
            label_141aaf5fe:
                rdx_4 = nullptr
            else
                void* r9_1 = arg1 + 0x78
                void* r8_1 = *(r9_1 + 8)
                int64_t r10_1 = sx.q(
                    *(*(r11_1 + 0x50) + (sx.q(*(*(r11_1 + 0x70) + (sx.q(result_4) << 2))) << 2)))
                
                if (r8_1 != 0)
                    r9_1 = r8_1
                
                int32_t rax_5 = *(r9_1 + (((sx.q(*(arg1 + 0x88)) - 1) & r10_1) << 2))
                
                if (rax_5 == 0xffffffff)
                label_141aaf5fe_1:
                    rdx_4 = nullptr
                else
                    while (true)
                        rdx_4 = (sx.q(rax_5) << 4) + *(arg1 + 0x40)
                        
                        if (*rdx_4 == r10_1.d)
                            break
                        
                        rax_5 = rdx_4[2]
                        
                        if (rax_5 == 0xffffffff)
                            goto label_141aaf5fe_2
                    
                    if (rax_5 == 0xffffffff)
                    label_141aaf5fe_2:
                        rdx_4 = nullptr
            
            result = &rdx_4[1]
            
            if (rdx_4 == 0)
                result = 0
            
            if (result != 0)
                int64_t rcx_7 = sx.q(*result)
                
                if (rcx_7.d s>= 0 && rcx_7.d s< *(arg1 + 0xe8))
                    int64_t r13_1 = sx.q(*(*(result_2 + 0x1a8) + rcx_7 * 0xc + 8))
                    int32_t var_a8
                    sub_141ea4020(r11_1, &var_a8, &result_1)
                    
                    if (r13_1.d s< 0 || r13_1.d s>= *(arg1 + 0xe8) || var_a8 == 0xffffffff)
                        result = sx.q(result_1)
                        double (* rdx_12)[0x2] = rcx_7 * 0x30 + *(arg1 + 0xe0)
                        double (* rcx_15)[0x2] = result * 0x30 + *r14
                        *rcx_15 = *rdx_12
                        rcx_15[1] = rdx_12[1]
                        rcx_15[2] = rdx_12[2]
                    else
                        int64_t rdx_6 = *(arg1 + 0xe0)
                        int64_t result_5 = sx.q(result_1)
                        int64_t r14_1 = *r14
                        result = sub_140ad7d70(rcx_7 * 0x30 + rdx_6, &var_78, r13_1 * 0x30 + rdx_6)
                        result_2 = result_3
                        int64_t rdx_9 = result_5 * 6
                        *(r14_1 + (rdx_9 << 3)) = *result
                        *(r14_1 + (rdx_9 << 3) + 0x10) = *(result + 0x10)
                        *(r14_1 + (rdx_9 << 3) + 0x20) = *(result + 0x20)
                        r14 = var_88
                    
                    r11_1 = var_90_1
            
            result_4 += 1
        while (result_4 != rdi_1)
        
        r13 = arg2

if (*(arg1 + 0x19) != 0)
    int32_t var_cc_1 = 1
    int32_t r10_2 = *(arg1 + 0x118)
    void* r9_2 = arg1 + 0x100
    void* var_c8 = r9_2
    int32_t rcx_16 = 0
    int32_t var_d0_1 = 0
    int32_t r8_8 = 0
    int32_t var_c0_1 = 0xffffffff
    int64_t var_bc_1 = 0
    
    if (r10_2 != 0)
        void* rax_7 = *(r9_2 + 0x10)
        
        if (rax_7 != 0)
            r9_2 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_2 - 1)
        int32_t rdx_15 = *r9_2
        
        if (rdx_15 != 0)
        label_141aaf798:
            int32_t rax_14 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_cc_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            var_bc_1.d = r8_8 - rax_15 + 0x1f
            
            if (r8_8 - rax_15 + 0x1f s> r10_2)
                var_bc_1.d = r10_2
        else
            while (true)
                int64_t rdx_16 = sx.q(rcx_16)
                r8_8 += 0x20
                rcx_16 += 1
                var_bc_1:4.d = r8_8
                var_d0_1 = rcx_16
                
                if (rdx_16.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r9_2 + (rdx_16 << 2) + 4)
                var_c0_1 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_141aaf798
            
            var_bc_1.d = r10_2
    
    var_78 = arg1 + 0xf0
    int128_t var_60_1 = 0xffffffff
    double var_70_1[0x2] = var_d0_1.o
    var_d0_1.o = var_78.o
    result = 0
    int64_t var_b0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_c0_1.o = var_70_1
    
    if (0 s< r10_2)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t* rsi = var_d0_1.q
            int64_t rdi_2 = sx.q(i) * 5
            int64_t rbx_3 = *(*rsi + (rdi_2 << 2))
            void* const rcx_21
            
            if (*(arg1 + 0x98) == *(arg1 + 0xc4))
            label_141aaf891:
                rcx_21 = nullptr
            else
                int32_t rax_20 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                void* r8_10 = arg1 + 0xc8
                void* rcx_19 = *(r8_10 + 8)
                
                if (rcx_19 != 0)
                    r8_10 = rcx_19
                
                int32_t rax_22 = *(r8_10 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_20)) << 2))
                
                if (rax_22 == 0xffffffff)
                label_141aaf891_1:
                    rcx_21 = nullptr
                else
                    int64_t r8_11 = *(arg1 + 0x90)
                    
                    while (true)
                        int64_t rdx_20 = sx.q(rax_22) * 5
                        rcx_21 = r8_11 + (rdx_20 << 2)
                        
                        if (*(r8_11 + (rdx_20 << 2)) == rbx_3)
                            break
                        
                        rax_22 = *(rcx_21 + 0xc)
                        
                        if (rax_22 == 0xffffffff)
                            goto label_141aaf891_2
                    
                    if (rax_22 == 0xffffffff)
                    label_141aaf891_2:
                        rcx_21 = nullptr
            
            void* rdx_21 = rcx_21 + 8
            
            if (rcx_21 == 0)
                rdx_21 = nullptr
            
            if (rdx_21 != 0)
                uint32_t rcx_22 = zx.d(*rdx_21)
                int64_t* rdx_22 = *(r13 + 0x30)
                int16_t rdx_23
                
                if (rcx_22 s>= rdx_22[1].d)
                    rdx_23 = -1
                else
                    rdx_23 = *(*rdx_22 + (zx.q(rcx_22.w) << 1))
                
                if (rdx_23 != 0xffff)
                    int64_t rax_25 = *(r13 + 0x20)
                    uint64_t rcx_24 = zx.q(rdx_23)
                    *(rax_25 + (rcx_24 << 3)) = (*(*rsi + (rdi_2 << 2) + 8))[0].d
                    *(rax_25 + (rcx_24 << 3) + 4) = 1
            
            var_bc_1:4.d &= not.d(var_c8:4.d)
            sub_14059bdd0(&var_c8)
            result = var_c0_1.q
            i = i_1
        while (i s< *(result + 0x18))

__security_check_cookie(rax_1 ^ &var_f8)
return result
