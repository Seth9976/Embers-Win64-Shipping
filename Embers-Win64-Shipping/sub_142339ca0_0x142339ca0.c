// 函数: sub_142339ca0
// 地址: 0x142339ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg2
*(arg1 + 0x30) = arg4
int64_t rdi = sx.q(arg5[1].d)

if (rdi.d != 0)
    int32_t rax_1 = *(arg1 + 0x40)
    int32_t rdx = rax_1 + rdi.d
    
    if (rdx s> *(arg1 + 0x44))
        sub_1405a5410(arg1 + 0x38, rdx)
        rax_1 = *(arg1 + 0x40)
    
    memcpy((sx.q(rax_1) << 4) + *(arg1 + 0x38), *arg5, (rdi << 4).d)
    *(arg1 + 0x40) += rdi.d

int64_t rdi_1 = sx.q(arg6[1].d)

if (rdi_1.d != 0)
    int32_t rax_2 = *(arg1 + 0x50)
    int32_t rdx_2 = rax_2 + rdi_1.d
    
    if (rdx_2 s> *(arg1 + 0x54))
        sub_1405dadb0(arg1 + 0x48, rdx_2)
        rax_2 = *(arg1 + 0x50)
    
    memcpy(*(arg1 + 0x48) + (sx.q(rax_2) << 2), *arg6, (rdi_1 << 2).d)
    *(arg1 + 0x50) += rdi_1.d

int32_t r9 = *(arg1 + 0x30)
*(arg1 + 0x68) = 0
int64_t* rsi_2 = r12[0x7d]
void* rdi_2 = &rsi_2[0x35]

if (rsi_2 == 0)
    rdi_2 = nullptr

int128_t zmm6
int128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_14234b010(arg1 + 0x10, r12, arg3, r9, rdi_2)

if (arg7 == 0)
    *(arg1 + 0x28) = 0
    
    if (*(arg1 + 0x2c) s<= 0xffffffff)
        sub_1405a52a0(arg1 + 0x20, 0)
else if (arg7 == 1)
    zmm6, zmm7, zmm8 = sub_14234ae30(arg1 + 0x20, r12, arg3, *(arg1 + 0x30), rdi_2)
else if (arg7 == 2)
    zmm6, zmm7, zmm8 = sub_14234b010(arg1 + 0x20, r12, arg3, *(arg1 + 0x30), rdi_2)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) != 0)
    sub_1405dadb0(arg1 + 0x58, 0)

int32_t r15 = *(arg1 + 0x40)
int32_t r15_1 = r15 - 1

if (r15 - 1 s>= 0)
    int128_t var_48_1 = zmm6
    int128_t var_58_1 = zmm7
    int64_t rsi_4 = sx.q(r15_1) << 4
    int64_t* r9_3 = rsi_4
    int128_t var_68_1 = zmm8
    arg5 = rsi_4
    int64_t r12_2 = sx.q(r15_1 + 1) << 4
    int32_t temp3_1
    
    do
        int64_t rbp_1 = *(arg1 + 0x38)
        void* rcx_15 = *(rsi_4 + rbp_1)
        uint32_t zmm0_1[0x4] =
            _mm_and_ps(*(*(arg1 + 0x48) + (sx.q(*(rsi_4 + rbp_1 + 8)) << 2)), 0x7fffffff)
        
        if (rcx_15 == 0 || zmm0_1[0] f< 9.99999994e-09f || zmm0_1[0] f> 5f)
            goto label_142339f15
        
        if (sub_14214bc80(rcx_15, *(arg1 + 0x30)) == 0)
            r9_3 = arg5
        label_142339f15:
            int32_t rax_16 = *(arg1 + 0x40)
            int32_t rcx_23 = rax_16 - r15_1
            
            if (rcx_23 != 1)
                int64_t rax_15 = *(arg1 + 0x38)
                memmove(r9_3 + rax_15, r12_2 + rax_15, (rcx_23 - 1) << 4)
                rax_16 = *(arg1 + 0x40)
            
            *(arg1 + 0x40) = rax_16 - 1
        else
            *(arg1 + 0x68) += 1
            int32_t i = 0
            int64_t rdx_8 = *(*(rsi_4 + rbp_1) + 0x30)
            
            if (*(rdx_8 + sx.q(*(arg1 + 0x30)) * 0x30 + 0x20) s> 0)
                do
                    sub_1408d92c0(arg1 + 0x58, 
                        *(rdx_8 + sx.q(*(arg1 + 0x30)) * 0x30 + 0x18) + (sx.q(i) << 2))
                    i += 1
                    rdx_8 = *(*(rsi_4 + rbp_1) + 0x30)
                while (i s< *(rdx_8 + sx.q(*(arg1 + 0x30)) * 0x30 + 0x20))
        
        r12_2 -= 0x10
        r9_3 = arg5 - 0x10
        rsi_4 -= 0x10
        temp3_1 = r15_1
        r15_1 -= 1
        arg5 = r9_3
    while (temp3_1 - 1 s>= 0)
    r12 = arg2

sub_142348d10(arg1, r12)
char result = sub_141f6c7d0(r12, arg4)
char rcx_28 = (*(arg1 + 0x104) & 0xfe) | result
*(arg1 + 0x104) = rcx_28

if (rsi_2 != 0)
    result = (((rsi_2[0x2f].b * 2) ^ rcx_28) & 2) ^ rcx_28
    *(arg1 + 0x104) = result

return result
