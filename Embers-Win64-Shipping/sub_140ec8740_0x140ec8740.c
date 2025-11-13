// 函数: sub_140ec8740
// 地址: 0x140ec8740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (*(arg1 + 0x4f0) == 0)
label_140ec89e6:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
else
    int64_t* rcx = *(arg1 + 0x4e8)
    
    if (rcx == 0)
        goto label_140ec89e6
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140ec89e6
    
    float zmm3[0x4] = *(arg3 + 0x20)
    float zmm4_1[0x4] = *(arg3 + 0x1c)
    zmm3[0] = zmm3[0] f* *(arg3 + 0x24)
    zmm4_1[0] = zmm4_1[0] f* *(arg3 + 0x28)
    float zmm2[0x4] = 0x3f800000
    int32_t zmm5_1 = *(arg4 + 0x18)
    zmm4_1[0] = zmm4_1[0] - zmm3[0]
    int128_t zmm6 = *(arg4 + 0x1c)
    zmm2[0] = 1f / zmm4_1[0]
    zmm3[0] = zmm3[0] * zmm2[0]
    zmm4_1[0] = zmm4_1[0] * zmm2[0]
    zmm3 ^= data_142d3f780
    zmm2 = *(arg3 + 4)
    zmm3[0] = zmm3[0] f* *(arg3 + 0x2c)
    zmm4_1[0] = zmm4_1[0] f* *(arg3 + 0x30)
    float zmm1[0x4] = zmm3 ^ data_142d3f780
    zmm3[0] = zmm3[0] f* zmm5_1
    zmm4_1[0] = zmm4_1[0] f* zmm6.d
    zmm1[0] = zmm1[0] - zmm4_1[0]
    float zmm0[0x4] = 0x40400000
    zmm4_1[0] = zmm4_1[0] + zmm3[0]
    zmm2[0] = zmm2[0] * 0.25f
    bool cond:1_1 = zmm2[0] < 3f
    zmm4_1[0] = zmm4_1[0] + zmm1[0]
    
    if (not(cond:1_1))
        zmm0 = __minss_xmmss_memss(zmm2[0], 0x41200000)
    
    int32_t rax_4 = 0
    
    if (not(zmm4_1[0] < zmm0[0]))
        zmm2[0] = zmm2[0] - zmm0[0]
        rax_4.b = zmm4_1[0] > zmm2[0]
        rax_4 += 1
    
    zmm0 = *(arg4 + 0x20)
    int32_t var_c8 = rax_4
    int16_t var_b8_1 = *(arg4 + 8)
    char var_b6_1 = *(arg4 + 0xa)
    int32_t var_b4_1 = *(arg4 + 0xc)
    int64_t var_b0_1 = *(arg4 + 0x10)
    int64_t var_90_1 = *(arg4 + 0x30)
    int64_t var_88_1 = *(arg4 + 0x38)
    int64_t var_80_1 = *(arg4 + 0x40)
    void* rax_12 = *(arg4 + 0x48)
    int32_t var_a4_1 = zmm6.d
    int32_t var_a8_1 = zmm5_1
    void* var_78_1 = rax_12
    float var_a0_1[0x4] = zmm0
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    zmm0 = *(arg4 + 0x58)
    zmm1 = *(arg4 + 0x64)
    int32_t var_70_1 = *(arg4 + 0x50)
    int32_t var_6c_1 = *(arg4 + 0x54)
    char var_64_1 = *(arg4 + 0x5c)
    char var_63_1 = *(arg4 + 0x5d)
    char var_58_1 = *(arg4 + 0x68)
    char var_57_1 = *(arg4 + 0x69)
    char var_56_1 = *(arg4 + 0x6a)
    void** var_c0 = &data_142ed7318
    int64_t var_50_1 = *(arg4 + 0x70)
    int64_t* rax_21 = *(arg4 + 0x78)
    float var_68_1 = zmm0[0]
    float var_60_1 = (*(arg4 + 0x60))[0]
    float var_5c_1 = zmm1[0]
    
    if (rax_21 != 0)
        rax_21[1].d += 1
    
    void* var_40_1 = arg1 - 8
    void var_38
    int32_t* rax_23 = sub_140e9a260(&var_c8, &var_38)
    
    if (rax_23 != arg1 + 0x508)
        if (*(arg1 + 0x50c) != 0)
            *(arg1 + 0x50c) = 0
        
        if (rax_23[1].b != 0)
            *(arg1 + 0x508) = *rax_23
            *(arg1 + 0x50c) = 1
    
    char var_34_1 = 0
    
    if (rax_21 != 0)
        rax_21[1].d -= 1
        
        if (rax_21[1].d == 1)
            (**rax_21)(rax_21)
            int32_t temp1_1 = *(rax_21 + 0xc)
            *(rax_21 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_21 + 8))(rax_21, 1)
    
    sub_140e29130(&var_c0)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
