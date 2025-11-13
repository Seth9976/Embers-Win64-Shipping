// 函数: sub_142310f50
// 地址: 0x142310f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x20)
void* rbx = arg1
void* arg_20 = rsi

if (rsi == 0)
    return 

void* rax = sub_140bdf2e0()
void* rdx_1 = *(rsi + 0x10)
int64_t k = sx.q(*(rax + 0x38))

if (k.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (k << 3)) != rax + 0x30)
    return 

int32_t i = 0

if (*(rbx + 0x30) s<= 0)
    return 

uint64_t rdi
uint64_t var_20_1 = rdi
int64_t r13_1 = 0

do
    void* rbx_1 = *(*(rbx + 0x28) + r13_1)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(rbx_1 + 0x88), 0).b == 0
    k.b = *(rbx_1 + 0x8c) != 0
    k.b |= rcx_1.b
    
    if (k.b != 0)
        rdi.b = 0
        
        if (*(rbx_1 + 0x98) == 0)
            uint64_t var_a8 = 0
            int32_t var_a0_1 = 0
            sub_141ea2f60(rsi, &var_a8)
            uint64_t r9_5 = var_a8
            k = zx.q(var_a0_1 - 1)
            
            if (k.d s> 0)
                int64_t j = sx.q(k.d)
                
                do
                    void* rdx_15 = *(r9_5 + (j << 3))
                    
                    if (rdx_15 != 0)
                        void* r8_7 = *(rdx_15 + 0x278)
                        
                        if (r8_7 != 0 && *(rdx_15 + 0x18) == *(rbx_1 + 0x90))
                            k = *(r8_7 + 0x38)
                            
                            for (int64_t r8_8 = k + (sx.q(*(r8_7 + 0x40)) << 3); k != r8_8; k += 8)
                                void* rdx_16 = *k
                                
                                if (rdx_16 != 0 && *(rdx_16 + 0xd0) == *(rbx_1 + 0x88))
                                    rdi.b = 1
                                    break
                            
                            break
                    
                    j -= 1
                while (j s> 0)
            
            if (r9_5 != 0)
                sub_140a74f90(r9_5)
            
            if (rdi.b == 0)
                __builtin_memset(rbx_1 + 0x88, 0, 0x11)
        else
            rdi = *(rsi + 0x118)
            
            if (rdi != 0)
                void* rax_2 = sub_142452380()
                void* rdx_2 = *(rdi + 0x10)
                k = sx.q(*(rax_2 + 0x38))
                
                if (k.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (k << 3)) == rax_2 + 0x30)
                    int32_t rcx_3 = 0
                    int32_t var_c4_1 = 1
                    void* r15_1 = rdi + 0x1a0
                    int32_t var_c8_1 = 0
                    int32_t r10_1 = *(r15_1 + 0x28)
                    int32_t r8_3 = 0
                    void* var_c0_1 = r15_1 + 0x10
                    int32_t var_b8_1 = 0xffffffff
                    int64_t var_b4_1 = 0
                    
                    if (r10_1 != 0)
                        void* rax_3 = *(r15_1 + 0x20)
                        void* r9_1 = r15_1 + 0x10
                        
                        if (rax_3 != 0)
                            r9_1 = rax_3
                        
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(r10_1 - 1)
                        int32_t rdx_5 = *r9_1
                        
                        if (rdx_5 != 0)
                        label_1423110d8:
                            int32_t rax_10 = neg.d(rdx_5) & rdx_5
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                            int32_t var_c4_2 = rax_10
                            int32_t rax_11
                            
                            if (rax_10 == 0)
                                rax_11 = 0x20
                            else
                                rax_11 = 0x1f - temp0_2
                            
                            var_b4_1.d = r8_3 - rax_11 + 0x1f
                            
                            if (r8_3 - rax_11 + 0x1f s> r10_1)
                                var_b4_1.d = r10_1
                        else
                            while (true)
                                int64_t rdx_6 = sx.q(rcx_3)
                                r8_3 += 0x20
                                rcx_3 += 1
                                var_b4_1:4.d = r8_3
                                var_c8_1 = rcx_3
                                
                                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                                int32_t var_b8_2 = 0xffffffff
                                
                                if (rdx_5 != 0)
                                    goto label_1423110d8
                            
                            var_b4_1.d = r10_1
                    
                    int32_t rdx_7 = *(r15_1 + 0x28)
                    var_b4_1.d = rdx_7
                    int128_t var_58_1 = 0xffffffff
                    int128_t var_68_1 = var_c8_1.o
                    int32_t rsi_1 = 0xffffffff << (rdx_7 & 0x1f).b
                    int32_t r8_6 = rdx_7 s>> 5
                    int32_t r9_3 = rdx_7 & 0xffffffe0
                    int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_b8_3 = rsi_1
                    int128_t var_98 = r15_1.o
                    int128_t var_88_1 = var_68_1
                    
                    if (rdx_7 != r10_1)
                        void* rax_15 = *(r15_1 + 0x20)
                        void* r11_1 = r15_1 + 0x10
                        
                        if (rax_15 != 0)
                            r11_1 = rax_15
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r10_1 - 1)
                        int32_t rdx_11 = *(r11_1 + (sx.q(r8_6) << 2)) & rsi_1
                        
                        if (rdx_11 != 0)
                        label_1423111b5:
                            int32_t rax_21 = neg.d(rdx_11) & rdx_11
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                            int32_t rax_22
                            
                            if (rax_21 == 0)
                                rax_22 = 0x20
                            else
                                rax_22 = 0x1f - temp0_4
                            
                            var_b4_1.d = r9_3 - rax_22 + 0x1f
                            
                            if (r9_3 - rax_22 + 0x1f s> r10_1)
                                var_b4_1.d = r10_1
                        else
                            while (true)
                                int64_t rcx_7 = sx.q(r8_6)
                                r9_3 += 0x20
                                r8_6 += 1
                                
                                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_11 = *(r11_1 + (rcx_7 << 2) + 4)
                                var_b8_3 = 0xffffffff
                                
                                if (rdx_11 != 0)
                                    goto label_1423111b5
                            
                            var_b4_1.d = r10_1
                    
                    while (true)
                        int64_t rcx_9 = sx.q(var_88_1:0xc.d)
                        int32_t rax_14
                        
                        if (rcx_9.d != (var_b8_3.q u>> 0x20).d || var_88_1.q != r15_1 + 0x10)
                            rax_14.b = 0
                        else
                            rax_14.b = 1
                        
                        int64_t* rdx_12 = var_98.q
                        
                        if (rax_14.b == 0 || rdx_12 != r15_1)
                            rax_14.b = 1
                        else
                            rax_14.b = 0
                        
                        if (rax_14.b == 0)
                            break
                        
                        void* rdx_13 = *(*rdx_12 + rcx_9 * 0x10)
                        
                        if (rdx_13 != 0 && *(rdx_13 + 0x18) == *(rbx_1 + 0x88))
                            goto label_142311315
                        
                        var_88_1:8.d &= not.d(var_98:0xc.d)
                        sub_14059bdd0(&var_98:8)
                    
                    __builtin_memset(rbx_1 + 0x88, 0, 0x11)
    
label_142311315:
    rbx = arg1
    i += 1
    rsi = arg_20
    r13_1 += 8
while (i s< *(rbx + 0x30))
