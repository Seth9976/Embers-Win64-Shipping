// 函数: sub_140a08b20
// 地址: 0x140a08b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t r13 = sx.q(arg1[1].d)
uint64_t rbx_1 = zx.q(arg2[1].d - arg3)
int32_t var_a8 = r13.d
uint128_t zmm6 = _mm_shuffle_epi32(zx.o(arg3), 0)

if (rbx_1.d s< 3)
    int32_t rax_1 = (r13 + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    *(*arg1 + (r13 << 2)) = 0
    int64_t rbx_2 = sx.q(arg1[1].d)
    int32_t rax_3 = (rbx_2 + 1).d
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    *(*arg1 + (rbx_2 << 2)) = 2
    int64_t rbx_3 = sx.q(arg1[1].d)
    int32_t rax_5 = (rbx_3 + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    *(*arg1 + (rbx_3 << 2)) = 1
    uint64_t result
    result.b = 1
    return result

int32_t rsi_1 = rbx_1.d
void* r14_1 = nullptr
void* var_80 = nullptr
int32_t var_74_1 = 0
int32_t var_78_1 = rbx_1.d

if (rbx_1.d s> 0)
    sub_1405a4cf0(&var_80)
    arg2 = arg_10
    rsi_1 = var_78_1
    r14_1 = var_80

int32_t i = 0
uint128_t zmm0
uint128_t zmm1
int32_t zmm2[0x4]

if (rbx_1.d s> 0 && rbx_1.d u>= 0x10)
    zmm2 = data_142e11d00
    int32_t rax_7 = rbx_1.d & 0x8000000f
    
    if (rax_7 s< 0)
        rax_7 = ((rax_7 - 1) | 0xfffffff0) + 1
    
    void* rcx_3 = r14_1 + 0x20
    int32_t r9 = 8
    
    do
        rcx_3 += 0x40
        zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm2)
        int32_t rax_11 = r9 + 4
        zmm1 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(r9 - 4), 0), zmm2)
        *(rcx_3 - 0x60) = _mm_add_epi32(zmm0, zmm6)
        i += 0x10
        zmm0 = zx.o(r9)
        *(rcx_3 - 0x50) = _mm_add_epi32(zmm1, zmm6)
        r9 += 0x10
        zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zmm0, 0), zmm2)
        zmm1 = _mm_shuffle_epi32(zx.o(rax_11), 0)
        zmm0 = _mm_add_epi32(zmm0, zmm6)
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm2), zmm6)
        *(rcx_3 - 0x40) = zmm0
        *(rcx_3 - 0x30) = zmm1
    while (i s< rbx_1.d - rax_7)

int64_t i_1 = sx.q(i)
int64_t r9_1 = sx.q(rbx_1.d)

if (i_1 s< r9_1)
    int32_t rcx_4 = i + arg3
    
    do
        *(r14_1 + (i_1 << 2)) = rcx_4
        rcx_4 += 1
        i_1 += 1
    while (i_1 s< r9_1)

int128_t zmm7
int128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8

if (rsi_1 s< 3)
label_140a08fd7:
    rbx_1.b = 1
else
    zmm8 = zx.o(0)
    
    while (true)
        int32_t r15_1 = 0
        int64_t rbp_1 = 0
        
        if (rsi_1 s<= 0)
        label_140a08f7b:
            rbx_1 = sx.q(arg1[1].d)
            
            if (var_a8 s<= rbx_1.d)
                if (var_a8 s< rbx_1.d && rbx_1.d != var_a8)
                    arg1[1].d = var_a8
                    sub_1405dac90(arg1)
                
                rbx_1.b = 0
            else
                arg1[1].d = var_a8
                
                if (var_a8 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                memset(*arg1 + (rbx_1 << 2), 0, sx.q(var_a8 - rbx_1.d) << 2)
                rbx_1.b = 0
            
            break
        
        int64_t var_a0_1
        int128_t* var_98_1
        int128_t* var_90_1
        int128_t* var_88_1
        int128_t* rdx_7
        int64_t r8
        int128_t* r10_4
        int128_t* r11_2
        int64_t r13_1
        
        while (true)
            int32_t rax_12 = rsi_1 - 1
            
            if (r15_1 != 0)
                rax_12 = r15_1 - 1
            
            int64_t rcx_5 = *arg2
            r8 = sx.q(rax_12)
            var_a0_1 = r8
            r10_4 = sx.q(*(r14_1 + (r8 << 2))) * 0x4c + rcx_5
            r11_2 = sx.q(*(r14_1 + (rbp_1 << 2))) * 0x4c + rcx_5
            var_98_1 = r10_4
            zmm6.d = (*(r11_2 + 4)).d f- *(r10_4 + 4)
            float zmm3 = *(r11_2 + 8) f- *(r10_4 + 8)
            zmm7.d = (*r11_2).d f- *r10_4
            r13_1 = sx.q(mods.dp.d(sx.q(r15_1 + 1), rsi_1))
            var_90_1 = r11_2
            rdx_7 = sx.q(*(r14_1 + (r13_1 << 2))) * 0x4c + rcx_5
            var_88_1 = rdx_7
            uint128_t zmm5
            zmm5.d = (*(rdx_7 + 4)).d f- *(r10_4 + 4)
            zmm2 = *(rdx_7 + 8)
            zmm2[0] = zmm2[0] f- *(r10_4 + 8)
            uint128_t zmm4
            zmm4.d = (*rdx_7).d f- *r10_4
            zmm0 = zmm5
            zmm5.d = zmm5.d f* zmm7.d
            zmm0.d = zmm0.d f* zmm3
            zmm1.d = zmm2.d f* zmm6.d
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm1.d = zmm1.d f- zmm0.d
            zmm0.d = zmm4.d f* zmm3
            zmm4.d = zmm4.d f* zmm6.d
            zmm1.d = zmm1.d f* *arg4
            zmm0.d = zmm0.d f- zmm2[0]
            zmm5.d = zmm5.d f- zmm4.d
            zmm0.d = zmm0.d f* arg4[1]
            zmm5.d = zmm5.d f* arg4[2]
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f+ zmm5.d
            
            if (not(zmm1.d f> zmm8.d))
                break
            
        label_140a08f5e:
            r15_1 += 1
            rbp_1 += 1
            
            if (r15_1 s>= rsi_1)
                goto label_140a08f7b
            
            arg2 = arg_10
        
        int32_t rdi_1 = 0
        int64_t rbx_4 = 0
        
        do
            if (rbx_4 != r8 && rbx_4 != rbp_1 && rbx_4 != r13_1)
                char rax_21
                rax_21, zmm8 = sub_142063560(r10_4, r11_2, rdx_7, 
                    sx.q(*(r14_1 + (rbx_4 << 2))) * 0x4c + *arg_10, zmm8.d)
                
                if (rax_21 != 0)
                    goto label_140a08f5e
                
                r8 = var_a0_1
                r10_4 = var_98_1
                r11_2 = var_90_1
                rdx_7 = var_88_1
            
            rdi_1 += 1
            rbx_4 += 1
        while (rdi_1 s< rsi_1)
        
        int64_t rbx_5 = sx.q(arg1[1].d)
        int32_t rdi_2 = *(r14_1 + (r8 << 2))
        int32_t rax_22 = (rbx_5 + 1).d
        arg1[1].d = rax_22
        
        if (rax_22 s> *(arg1 + 0xc))
            sub_1405a4cf0(arg1)
        
        *(*arg1 + (rbx_5 << 2)) = rdi_2
        int64_t rbx_6 = sx.q(arg1[1].d)
        int32_t rdi_3 = *(r14_1 + (r13_1 << 2))
        int32_t rax_24 = (rbx_6 + 1).d
        arg1[1].d = rax_24
        
        if (rax_24 s> *(arg1 + 0xc))
            sub_1405a4cf0(arg1)
        
        *(*arg1 + (rbx_6 << 2)) = rdi_3
        rbx_1 = sx.q(arg1[1].d)
        int32_t rdi_4 = *(r14_1 + (rbp_1 << 2))
        int32_t rax_26 = (rbx_1 + 1).d
        arg1[1].d = rax_26
        
        if (rax_26 s> *(arg1 + 0xc))
            sub_1405a4cf0(arg1)
        
        *(*arg1 + (rbx_1 << 2)) = rdi_4
        int32_t rax_29 = rsi_1 - r15_1
        
        if (rax_29 != 1)
            memmove(r14_1 + (sx.q(r15_1) << 2), r14_1 + (sx.q(r15_1 + 1) << 2), (rax_29 - 1) << 2)
        
        sub_1405dac90(&var_80)
        rsi_1 -= 1
        r14_1 = var_80
        
        if (rsi_1 s< 3)
            goto label_140a08fd7
        
        arg2 = arg_10

if (r14_1 != 0)
    sub_140a74f90(r14_1)

return zx.q(rbx_1.b)
