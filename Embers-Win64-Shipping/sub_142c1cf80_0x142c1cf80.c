// 函数: sub_142c1cf80
// 地址: 0x142c1cf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x90)
int32_t rbp = arg2
int32_t r8

if (*(r15 + 0x59) == 0)
    r8 = *(r15 + 0x5c)
else
    r8 = *(r15 + 0x64)

arg6 += r8
int32_t r9 = 0
int32_t r8_1 = r8 - *(r15 + 0x5c)
int32_t i = 0
int32_t arg_10 = 0
uint128_t zmm2 = _mm_shuffle_epi32(zx.o(r8_1), 0)

if (rbp != 0)
    if (rbp u>= 8)
        do
            uint64_t i_3 = zx.q(i)
            *(arg3 + (i_3 << 2)) = _mm_add_epi32(zmm2, *(arg3 + (i_3 << 2)))
            uint64_t rax_1 = zx.q(i + 4)
            i += 8
            *(arg3 + (rax_1 << 2)) = _mm_add_epi32(*(arg3 + (rax_1 << 2)), zmm2)
        while (i u< (rbp & 0xfffffff8))
        
        r9 = 0
    
    if (i u< rbp)
        int32_t* rcx = arg3 + (zx.q(i) << 2)
        uint64_t i_4 = zx.q(rbp - i)
        uint64_t i_1
        
        do
            *rcx += r8_1
            rcx = &rcx[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

int32_t rax_13

if (arg4 == 0)
    rax_13 = arg6
else
    int32_t zmm6[0x4]
    int32_t var_48_1[0x4] = zmm6
    char* r12_2 = arg5 + 3
    
    while (true)
        if (*(r15 + 0x58) != 0)
            uint64_t rbx_3 = zx.q((zx.d(r12_2[-3]) << 8) + zx.d(r12_2[-2]))
            
            if (rbx_3.d u>= rbp
                    || (rbx_3.d == 0 && (zx.d(r12_2[-1]) << 8) + zx.d(*r12_2) == *(arg1 + 0xbc)))
                goto label_142c1d291
            
            if (sub_142bf54e0(r15, *(arg3 + (rbx_3 << 2))) != 0 && *(r15 + 0x30) s> 0)
                int32_t rax_8 = sub_142c1d840(r15)
                char r8_2 = *r12_2
                int32_t rdi_3 = *(r15 + 0x60) - *(r15 + 0x5c) + rax_8
                char r9_3 = r12_2[-1]
                
                if (*(arg1 + 0xc4) == 0 || *(arg1 + 0x98) == 0)
                label_142c1d28c:
                    r9 = arg_10
                label_142c1d291:
                    r9 += 1
                    r12_2 = &r12_2[4]
                    arg_10 = r9
                    
                    if (r9 u< arg4)
                        continue
                else
                    void* rdx_1 = *(arg1 + 0x90)
                    int32_t rcx_6 = *(rdx_1 + 0x30)
                    *(rdx_1 + 0x30) = rcx_6 - 1
                    
                    if (rcx_6 s<= 0)
                        goto label_142c1d28c
                    
                    *(arg1 + 0xc4) -= 1
                    char rax_11 = (*(arg1 + 0x98))(arg1, zx.q((zx.d(r9_3) << 8) + zx.d(r8_2)))
                    *(arg1 + 0xc4) += 1
                    
                    if (rax_11 == 0)
                        goto label_142c1d28c
                    
                    int32_t rdi_4 = sub_142c1d840(r15) + *(r15 + 0x60) - *(r15 + 0x5c) - rdi_3
                    
                    if (rdi_4 == 0)
                        goto label_142c1d28c
                    
                    arg6 += rdi_4
                    rax_13 = *(arg3 + (rbx_3 << 2))
                    
                    if (arg6 s<= rax_13)
                        break
                    
                    uint64_t rbx_4 = zx.q(rbx_3.d + 1)
                    int32_t r14_2 = rbx_4.d
                    
                    if (rdi_4 s<= 0)
                        int32_t rax_16 = r14_2 - rbp
                        
                        if (rdi_4 s> rax_16)
                            rax_16 = rdi_4
                        
                        rdi_4 = rax_16
                        r14_2 -= rax_16
                        goto label_142c1d1cd
                    
                    if (rdi_4 + rbp u<= 0x40)
                    label_142c1d1cd:
                        uint64_t rcx_13 = zx.q(r14_2)
                        zmm6 = _mm_shuffle_epi32(zx.o(rdi_4), 0)
                        memmove(arg3 + ((sx.q(rdi_4) + rcx_13) << 2), arg3 + (rcx_13 << 2), 
                            (rbp - r14_2) << 2)
                        uint64_t rdx_7 = zx.q(r14_2 + rdi_4)
                        rbp += rdi_4
                        
                        if (rbx_4.d u< rdx_7.d)
                            int32_t* r8_6 = arg3 + (rbx_4 << 2)
                            
                            do
                                uint64_t rax_19 = zx.q((rbx_4 - 1).d)
                                rbx_4 = zx.q(rbx_4.d + 1)
                                *r8_6 = *(arg3 + (rax_19 << 2)) + 1
                                r8_6 = &r8_6[1]
                            while (rbx_4.d u< rdx_7.d)
                        
                        int32_t rax_23 = rbp - rdx_7.d
                        
                        if (rdx_7.d u< rbp)
                            if (rax_23 u>= 8)
                                uint64_t rcx_15 = zx.q((rdx_7 + 4).d)
                                
                                do
                                    *(arg3 + (rdx_7 << 2)) =
                                        _mm_add_epi32(*(arg3 + (rdx_7 << 2)), zmm6)
                                    rdx_7 = zx.q(rdx_7.d + 8)
                                    *(arg3 + (rcx_15 << 2)) =
                                        _mm_add_epi32(zmm6, *(arg3 + (rcx_15 << 2)))
                                    rcx_15 = zx.q((rcx_15 + 8).d)
                                while (rdx_7.d u< rbp - (rax_23 & 7))
                            
                            if (rdx_7.d u< rbp)
                                int32_t* rax_25 = arg3 + (rdx_7 << 2)
                                uint64_t i_5 = zx.q(rbp - rdx_7.d)
                                uint64_t i_2
                                
                                do
                                    *rax_25 += rdi_4
                                    rax_25 = &rax_25[1]
                                    i_2 = i_5
                                    i_5 -= 1
                                while (i_2 != 1)
                        
                        goto label_142c1d28c
        
        rax_13 = arg6
        break

sub_142bf54e0(r15, rax_13)
int64_t result
result.b = 1
return result
