// 函数: sub_1423c5940
// 地址: 0x1423c5940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x118) = arg2
sub_1423c04b0()
int32_t rcx = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r10 = *(arg1 + 0xe8)
void* r9 = arg1 + 0xd0
void* var_90 = r9
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1423c59e8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1423c59e8
        
        var_84.d = r10

void* var_28 = arg1 + 0xc0
int128_t var_60 = 0xffffffff
double var_70[0x2] = var_98.o
double var_50[0x2] = (arg1 + 0xc0).o
int64_t var_30 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t i = var_70[1]:4.d
    
    do
        void* r10_1 = *(*var_50[0] + sx.q(i) * 0x10)
        
        if (not(0f f>= *(r10_1 + 0xc)))
            if (*(arg1 + 0x10) != *(arg1 + 0x3c))
                void* r11_1 = arg1 + 0x40
                int64_t rdi_2 = sx.q(*(arg1 + 0x50)) - 1
                uint32_t r8_3 = (r10_1 u>> 4).d
                int32_t rdx_7 = (0x9e3779b9 - r8_3) ^ r8_3 << 8
                int32_t rcx_5 = neg.d(rdx_7 + r8_3) ^ rdx_7 u>> 0xd
                int32_t r8_6 = (r8_3 - rdx_7 - rcx_5) ^ rcx_5 u>> 0xc
                int32_t rdx_10 = (rdx_7 - r8_6 - rcx_5) ^ r8_6 << 0x10
                int32_t rcx_8 = (rcx_5 - rdx_10 - r8_6) ^ rdx_10 u>> 5
                int32_t r8_9 = (r8_6 - rdx_10 - rcx_8) ^ rcx_8 u>> 3
                int32_t rdx_13 = (rdx_10 - r8_9 - rcx_8) ^ r8_9 << 0xa
                void* rax_27 = *(arg1 + 0x48)
                
                if (rax_27 != 0)
                    r11_1 = rax_27
                
                int32_t j =
                    *(r11_1 + (((sx.q(rcx_8 - rdx_13 - r8_9) ^ zx.q(rdx_13) u>> 0xf) & rdi_2) << 2))
                
                if (j != 0xffffffff)
                    void* r9_1 = *(arg1 + 8)
                    
                    do
                        int64_t j_1 = sx.q(j)
                        int64_t rax_31 = j_1 * 2
                        
                        if (*(r9_1 + (rax_31 << 3)) == r10_1)
                            int64_t r8_10 = j_1 * 2
                            int64_t rax_33 = sx.q(*(r9_1 + (r8_10 << 3) + 0xc)) & rdi_2
                            void* rcx_14 = r11_1 + (rax_33 << 2)
                            
                            for (int32_t k = *(r11_1 + (rax_33 << 2)); k != 0xffffffff; k = *rcx_14)
                                if (k == j)
                                    *rcx_14 = *(r9_1 + (r8_10 << 3) + 8)
                                    break
                                
                                rcx_14 = r9_1 + 8 + (sx.q(k) << 4)
                            
                            void* r11_2 = arg1 + 0x18
                            int32_t r9_2 = rol.d(1, j.b)
                            
                            if (*(arg1 + 0x3c) != 0)
                                *(*(arg1 + 8) + sx.q(*(arg1 + 0x38)) * 0x10) = j
                            
                            int64_t rcx_19 = *(arg1 + 8)
                            *(rcx_19 + (r8_10 << 3)) = 0xffffffff
                            int32_t rax_38
                            
                            if (*(arg1 + 0x3c) s<= 0)
                                rax_38 = -1
                            else
                                rax_38 = *(arg1 + 0x38)
                            
                            *(rcx_19 + (r8_10 << 3) + 4) = rax_38
                            *(arg1 + 0x3c) += 1
                            *(arg1 + 0x38) = j
                            void* rax_39 = *(r11_2 + 0x10)
                            
                            if (rax_39 != 0)
                                r11_2 = rax_39
                            
                            if (j s< 0)
                                j += 0x1f
                            
                            int64_t rax_40 = sx.q(j s>> 5)
                            *(r11_2 + (rax_40 << 2)) &= not.d(r9_2)
                            break
                        
                        j = *(r9_1 + (rax_31 << 3) + 8)
                    while (j != 0xffffffff)
            
            int64_t rsi_1 = sx.q(*(arg1 + 0xb8))
            var_90.d = (*(r10_1 + 0xc))[0].d
            var_98.q = r10_1
            int32_t rax_41 = (rsi_1 + 1).d
            var_90:4.b = 0
            *(arg1 + 0xb8) = rax_41
            
            if (rax_41 s> *(arg1 + 0xbc))
                sub_1405a4f90(arg1 + 0xb0)
            
            *(*(arg1 + 0xb0) + rsi_1 * 0x10) = var_98.o
        
        var_70[1].d &= not.d(var_50[1]:4.d)
        sub_14059bdd0(&var_50[1])
        i = var_70[1]:4.d
    while (i s< *(var_70[0] i+ 0x18))

sub_1423c8d00(arg1)
return sub_1419e1590(arg1 + 0xc0, 0) __tailcall
