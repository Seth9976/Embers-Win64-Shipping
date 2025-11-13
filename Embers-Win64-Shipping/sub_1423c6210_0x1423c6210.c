// 函数: sub_1423c6210
// 地址: 0x1423c6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x118) = arg2
int32_t r14 = 0
sub_1423c04b0()
int32_t var_b4 = 1
int32_t r10 = *(arg1 + 0xe8)
void* r9 = arg1 + 0xd0
void* var_b0 = r9
int32_t rcx = 0
int32_t var_b8 = 0
int32_t var_a8 = 0xffffffff
int32_t r8 = 0
int64_t var_a4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1423c62b9:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_b4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_a4:4.d = r8
            var_b8 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9 + (rax_4 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1423c62b9
        
        var_a4.d = r10

void* var_48 = arg1 + 0xc0
int128_t var_80 = 0xffffffff
double zmm1 = var_b8.o[1]
double var_70[0x2] = (arg1 + 0xc0).o
int64_t var_50 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rdi_1 = *(*var_70[0] + sx.q(i) * 0x10)
        r14 += 1
        
        if (not(sub_1423c65b0(rdi_1, &data_143f5a850, arg1 + 0x110) f>= *(rdi_1 + 0xc)))
            if (*(arg1 + 0x10) != *(arg1 + 0x3c))
                void* r10_1 = arg1 + 0x40
                int64_t r11_4 = sx.q(*(arg1 + 0x50)) - 1
                uint32_t r8_4 = (rdi_1 u>> 4).d
                int32_t rdx_6 = (0x9e3779b9 - r8_4) ^ r8_4 << 8
                int32_t rcx_6 = neg.d(rdx_6 + r8_4) ^ rdx_6 u>> 0xd
                int32_t r8_7 = (r8_4 - rdx_6 - rcx_6) ^ rcx_6 u>> 0xc
                int32_t rdx_9 = (rdx_6 - r8_7 - rcx_6) ^ r8_7 << 0x10
                int32_t rcx_9 = (rcx_6 - rdx_9 - r8_7) ^ rdx_9 u>> 5
                int32_t r8_10 = (r8_7 - rdx_9 - rcx_9) ^ rcx_9 u>> 3
                int32_t rdx_12 = (rdx_9 - r8_10 - rcx_9) ^ r8_10 << 0xa
                void* rax_26 = *(arg1 + 0x48)
                
                if (rax_26 != 0)
                    r10_1 = rax_26
                
                int32_t j = *(r10_1
                    + (((sx.q(rcx_9 - rdx_12 - r8_10) ^ zx.q(rdx_12) u>> 0xf) & r11_4) << 2))
                
                if (j != 0xffffffff)
                    void* r9_1 = *(arg1 + 8)
                    
                    do
                        int64_t j_1 = sx.q(j)
                        int64_t rax_30 = j_1 * 2
                        
                        if (*(r9_1 + (rax_30 << 3)) == rdi_1)
                            int64_t r8_11 = j_1 * 2
                            int64_t rax_32 = sx.q(*(r9_1 + (r8_11 << 3) + 0xc)) & r11_4
                            void* rcx_15 = r10_1 + (rax_32 << 2)
                            
                            for (int32_t k = *(r10_1 + (rax_32 << 2)); k != 0xffffffff; k = *rcx_15)
                                if (k == j)
                                    *rcx_15 = *(r9_1 + (r8_11 << 3) + 8)
                                    break
                                
                                rcx_15 = r9_1 + 8 + (sx.q(k) << 4)
                            
                            void* r10_2 = arg1 + 0x18
                            int32_t r9_2 = rol.d(1, j.b)
                            
                            if (*(arg1 + 0x3c) != 0)
                                *(*(arg1 + 8) + sx.q(*(arg1 + 0x38)) * 0x10) = j
                            
                            int64_t rcx_20 = *(arg1 + 8)
                            *(rcx_20 + (r8_11 << 3)) = 0xffffffff
                            int32_t rax_37
                            
                            if (*(arg1 + 0x3c) s<= 0)
                                rax_37 = -1
                            else
                                rax_37 = *(arg1 + 0x38)
                            
                            *(rcx_20 + (r8_11 << 3) + 4) = rax_37
                            *(arg1 + 0x3c) += 1
                            *(arg1 + 0x38) = j
                            void* rax_38 = *(r10_2 + 0x10)
                            
                            if (rax_38 != 0)
                                r10_2 = rax_38
                            
                            if (j s< 0)
                                j += 0x1f
                            
                            int64_t rax_39 = sx.q(j s>> 5)
                            *(r10_2 + (rax_39 << 2)) &= not.d(r9_2)
                            break
                        
                        j = *(r9_1 + (rax_30 << 3) + 8)
                    while (j != 0xffffffff)
            
            int64_t rsi_1 = sx.q(*(arg1 + 0xb8))
            var_b0.d = (*(rdi_1 + 0xc)).d
            var_b8.q = rdi_1
            int32_t rax_40 = (rsi_1 + 1).d
            var_b0:4.b = 0
            *(arg1 + 0xb8) = rax_40
            
            if (rax_40 s> *(arg1 + 0xbc))
                sub_1405a4f90(arg1 + 0xb0)
            
            *(*(arg1 + 0xb0) + rsi_1 * 0x10) = var_b8.o
        
        int32_t var_58 = var_58 & not.d(var_70[1]:4.d)
        sub_14059bdd0(&var_70[1])
        i = i_1
    while (i s< *(zmm1 i+ 0x18))

sub_1423c8d00(arg1)
sub_1419e1590(arg1 + 0xc0, 0)
return zx.q(r14)
