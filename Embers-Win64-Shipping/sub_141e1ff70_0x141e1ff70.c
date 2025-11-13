// 函数: sub_141e1ff70
// 地址: 0x141e1ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = 0xb0
char rdx = *(arg1 + 0x198)

if (rdx == 0)
    rax_2 = 0xe0

uint32_t zmm0[0x4]

if (*(rax_2 + arg1 + 8) s<= 0 || **(rax_2 + arg1) != 0)
    void* rax_8
    
    if (arg4 != 0)
        rax_8 = *(arg4 + 0x48)
    
    uint32_t (* rax_9)[0x4]
    
    if (arg4 == 0 || *(rax_8 + 0x28) s<= 0)
        void* rax_10 = *(arg1 + 0x38)
        
        if (arg4 == 0 && rax_10 != 0 && *(rax_10 + 0x80) s> arg4.d)
            rax_9 = *(rax_10 + 0x88)
            goto label_141e200c6
        
        *arg2 = data_143dbb0c0
        arg2[1] = data_143dbb0d0
        zmm0 = data_143dbb0e0
    else
        rax_9 = *(rax_8 + 0x30)
    label_141e200c6:
        *arg2 = *rax_9
        arg2[1] = rax_9[1]
        zmm0 = rax_9[2]
else
    uint32_t zmm3[0x4] = data_143f395f0
    float var_38_1[0x4] = zx.o(0)
    float zmm1[0x4] = zmm3
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_143f39600)
    zmm1[0].q = zx.o(0) u>> 0x40
    uint32_t var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    int64_t rdx_1
    
    if (rdx == 0)
        rdx_1 = *(arg1 + 0x130)
    
    if (rdx == 0 && (*(arg1 + 0xc8) == 0 || rdx_1 != 0))
        zmm0 = *(arg1 + 0x90)
        float var_50_1 = arg3[0]
        char var_64_1 = *(arg1 + 0x16c)
        int64_t rax_5 = *(arg1 + 0x18)
        int64_t* rcx = *(arg1 + 0x138)
        arg3[0] = arg3[0] f/ zmm0[0]
        int64_t var_58_1 = rdx_1
        int64_t var_60_1 = rax_5
        uint32_t var_68 = zmm0[0]
        float var_4c_1 = arg3[0]
        (*(*rcx + 0x290))(rcx, &var_68, 0, &var_48)
    else if (*(arg1 + 0xc8) != 0)
        sub_141de7e90(arg3, *(arg1 + 0xa8), *(arg1 + 0x90), *(arg1 + 0xc0), *(arg1 + 0x16c), 
            &var_48)
    
    *arg2 = var_48
    zmm0 = temp0_1
    arg2[1] = var_38_1

arg2[2] = zmm0
__security_check_cookie(rax_1 ^ &var_98)
return arg2
