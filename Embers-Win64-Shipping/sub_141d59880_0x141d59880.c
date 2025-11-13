// 函数: sub_141d59880
// 地址: 0x141d59880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rbp = data_143f37908
sub_140b34200("UMediaSoundComponent_OnGenerateAudio", rbp)
uint128_t zmm6 = zx.o(0)
uint128_t var_88 = zx.o(0)
EnterCriticalSection(arg1 + 0x708)
int64_t* rax_3 = *(arg1 + 0x760)

if (rax_3 != 0)
    rax_3[1].d += 1
    zmm6 = var_88

int128_t zmm0 = (*(arg1 + 0x758)).o
int64_t var_70
var_70.o = zmm6
void* rcx_1 = _mm_bsrli_si128(zmm6, 8).q
int128_t var_60 = zmm0

if (rcx_1 != 0)
    int32_t rax_4 = *(rcx_1 + 8)
    *(rcx_1 + 8) -= 1
    
    if (rax_4 == 1)
        (**rax_3)(rax_3)
        int32_t rax_6 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

if (arg1 != -0x708)
    LeaveCriticalSection(arg1 + 0x708)

uint64_t rdi_2

if (zmm0.q == 0)
label_141d59d29:
    sub_141d4d080(*(arg1 + 0x750))
    *(arg1 + 0x768)
    *(arg1 + 0x768) = -0x8000000000000000
    rdi_2 = zx.q(arg3)
else
    rdi_2 = 0
    int32_t rax_8 = 0
    
    if (0 == *(arg1 + 0x6f8))
        *(arg1 + 0x6f8) = 0
    else
        rax_8 = *(arg1 + 0x6f8)
    
    if (rax_8.d f== 0f)
        goto label_141d59d29
    
    int32_t rax_9 = 0
    
    if (0 == *(arg1 + 0x6f8))
        *(arg1 + 0x6f8) = 0
    else
        rax_9 = *(arg1 + 0x6f8)
    
    int64_t* rax_10 = nullptr
    
    if (0 == *(arg1 + 0x700))
        *(arg1 + 0x700) = 0
    else
        rax_10 = *(arg1 + 0x700)
    
    int64_t var_78 = 0
    int32_t var_90 = 0xffffffff
    int32_t temp0_3 = divs.dp.d(sx.q(arg3), *(arg1 + 0x688))
    int32_t* var_a0_1 = &var_90
    int32_t rax_14 =
        sub_141d4d480(*(arg1 + 0x750), arg2, &var_78, temp0_3, rax_9.d, rax_10, zmm0.q + 8)
    
    if (rax_14 != 0)
        if (rax_14 u< temp0_3)
            uint64_t rax_15 = zx.q(rax_14 * *(arg1 + 0x688))
            memset(&arg2[rax_15], 0, zx.q(arg3 - rax_15.d) << 2)
        
        *(arg1 + 0x768)
        *(arg1 + 0x768) = var_78
        char rcx_8 = *(arg1 + 0x8c8)
        
        if (rcx_8 != 0 || *(arg1 + 0x8c9) != 0)
            uint64_t r15_1 = zx.q(arg3)
            int32_t* rbp_2
            
            if (*(arg1 + 0x688) != 2)
                rbp_2 = arg2
            else
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(arg3)
                *(arg1 + 0x8c0) = 0
                r15_1 = sx.q((temp9_1 - temp8_1) s>> 1)
                
                if (*(arg1 + 0x8c4) s<= 0xffffffff)
                    sub_140775b10(arg1 + 0x8b8, 0)
                
                int32_t rax_22 = *(arg1 + 0x8c0) + r15_1.d
                *(arg1 + 0x8c0) = rax_22
                
                if (rax_22 s> *(arg1 + 0x8c4))
                    sub_140775270(arg1 + 0x8b8)
                
                rbp_2 = *(arg1 + 0x8b8)
                int32_t rcx_11 = 0
                int64_t rdx_7
                
                if (r15_1 s< 4)
                    rdx_7 = 0
                else
                    void* r8_4 = &rbp_2[2]
                    int64_t i_1 = ((r15_1 - 4) u>> 2) + 1
                    rdx_7 = i_1 << 2
                    int64_t i
                    
                    do
                        int64_t rax_23 = sx.q(rcx_11)
                        *(r8_4 - 8) = (arg2[rax_23 + 1] f+ arg2[rax_23]) * 0.5f
                        int32_t rcx_12 = rcx_11 + *(arg1 + 0x688)
                        int64_t rax_24 = sx.q(rcx_12)
                        *(r8_4 - 4) = (arg2[rax_24 + 1] f+ arg2[rax_24]) * 0.5f
                        int32_t rcx_13 = rcx_12 + *(arg1 + 0x688)
                        int64_t rax_25 = sx.q(rcx_13)
                        *r8_4 = (arg2[rax_25 + 1] f+ arg2[rax_25]) * 0.5f
                        int32_t rcx_14 = rcx_13 + *(arg1 + 0x688)
                        int64_t rax_26 = sx.q(rcx_14)
                        *(r8_4 + 4) = (arg2[rax_26 + 1] f+ arg2[rax_26]) * 0.5f
                        r8_4 += 0x10
                        rcx_11 = rcx_14 + *(arg1 + 0x688)
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                while (rdx_7 s< r15_1)
                    int64_t rax_27 = sx.q(rcx_11)
                    rbp_2[rdx_7] = (arg2[rax_27 + 1] f+ arg2[rax_27]) * 0.5f
                    rdx_7 += 1
                    rcx_11 += *(arg1 + 0x688)
                
                rcx_8 = *(arg1 + 0x8c8)
            
            if (rcx_8 != 0)
                sub_141c43ba0(arg1 + 0x788, rbp_2, r15_1.d)
                sub_141c3e5b0(arg1 + 0x788, 1, 1)
            
            EnterCriticalSection(arg1 + 0x890)
            
            if (*(arg1 + 0x8c9) != 0)
                if (*(arg1 + 0x8ca) != 0)
                    sub_141c45f40(arg1 + 0x858, _mm_cvtepi32_ps(zx.o(*(arg1 + 0x880)))[0])
                    sub_141c468b0(arg1 + 0x858, _mm_cvtepi32_ps(zx.o(*(arg1 + 0x884))).d)
                    *(arg1 + 0x8ca) = 0
                
                int64_t r15_2 = sx.q(r15_1.d)
                
                if (r15_2 s> 0)
                    do
                        sub_141c3faf0(arg1 + 0x858, rbp_2[rdi_2])
                        rdi_2 += 1
                    while (rdi_2 s< r15_2)
                
                *(arg1 + 0x888) = sub_141c39c30(arg1 + 0x858)
            
            if (arg1 != -0x890)
                LeaveCriticalSection(arg1 + 0x890)
        
        rdi_2 = zx.q(arg3)

void* rcx_23 = zmm0:8.q

if (rcx_23 != 0)
    int32_t rax_28 = *(rcx_23 + 8)
    *(rcx_23 + 8) -= 1
    
    if (rax_28 == 1)
        int64_t* rbx_3 = zmm0:8.q
        (**rbx_3)(rbx_3)
        int32_t r12_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (r12_1 == 1)
            int64_t* rcx_25 = zmm0:8.q
            int64_t r8_7 = *rcx_25
            (*(r8_7 + 8))(rcx_25, zx.q(r12_1), r8_7)

sub_140b38680("UMediaSoundComponent_OnGenerateAudio", rbp)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rdi_2.d)
