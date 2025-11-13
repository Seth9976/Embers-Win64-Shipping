// 函数: sub_140f56740
// 地址: 0x140f56740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rsi = nullptr

if (arg1[0x75].d != 0)
    int64_t* rcx = arg1[0x74]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x75].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x74]
        
        arg1[0x72] = (*(*rcx_1 + 0x48))(rcx_1)

void* r14 = arg1[0x72]

if (arg9 == 0)
    rsi.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx_2 = arg1[0x33]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (arg1[0x34].d != 0)
                rsi = arg1[0x33]
            
            arg1[0x32].b = (*(*rsi + 0x48))(rsi)
    
    if (arg1[0x32].b == 0)
        rsi.b = 0
    else
        rsi.b = 1

void* r14_1

if (r14 == 0 || *(r14 + 0x6c) == 0)
    r14_1 = arg6
else
    int64_t r12
    
    if (*sub_140eff7d0(&arg1[0x93]) == 0 || rsi.b != 0)
        r12.b = 0
    else
        r12.b = 0x20
    
    int128_t* var_138
    int32_t var_130
    float var_118
    float var_88
    char rcx_9
    float zmm3[0x4]
    
    if (arg1[0x96].b == 0 || data_143e20cf4 != 1)
        int32_t* rax_15 = sub_140e11270(&arg1[0x87], arg5)
        int32_t* r8_3 = rax_15
        uint32_t rdx_5 = zx.d(rax_15[4].b)
        
        if (rdx_5 != 0)
            if (rdx_5 == 1)
                r8_3 = *(rax_15 + 0x18)
            else if (rdx_5 == 3)
                r8_3 = &arg8[2]
            else
                r8_3 = &arg8[1]
        
        uint32_t rcx_12 = zx.d(*(r14 + 0x30))
        void* rdx_7 = r14 + 0x20
        
        if (rcx_12 != 0)
            if (rcx_12 == 1)
                rdx_7 = *(rdx_7 + 0x18)
            else if (rcx_12 == 3)
                rdx_7 = &arg8[2]
            else
                rdx_7 = &arg8[1]
        
        float zmm2[0x4] = *rdx_7
        rcx_9 = *(arg3 + 0x34)
        float zmm1_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm1_2[0] = zmm1_2[0] f* *(arg8 + 8)
        uint128_t zmm0_2
        zmm0_2.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f* *(arg8 + 4)
        zmm1_2[0] = zmm1_2[0] f* r8_3[2]
        zmm0_2.d = zmm0_2.d f* r8_3[1]
        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        zmm2[0] = zmm2[0] f* *arg8
        zmm3[0] = zmm3[0] f* *(arg8 + 0xc)
        zmm2[0] = zmm2[0] f* *r8_3
        zmm3[0] = zmm3[0] f* r8_3[3]
        int64_t var_114
        var_114:4.d = zmm1_2[0]
        var_114.d = zmm0_2.d
        float var_84_2 = arg3[2].d[0]
        zmm1_2 = *arg3
        var_88 = (*(arg3 + 0xc)).d
        zmm0_2 = *(arg3 + 4)
        float var_74_2 = zmm1_2[0]
        zmm1_2 = *(arg3 + 0x1c)
        var_118 = zmm2[0]
        int32_t var_70_2 = zmm0_2.d
        float var_6c_2[0x4] = zmm1_2
        float var_80_2 = arg3[1].d[0]
        uint64_t var_5c_2 = *(arg3 + 0x2c)
    else
        int32_t zmm0 = *(arg3 + 0xc)
        int128_t var_d8 = data_142ecd460
        int32_t var_f8
        var_130.q = &var_f8
        var_f8 = arg3[1].d.d
        int32_t var_f4_1 = zmm0
        int32_t var_f0_1 = arg3[2].d.d
        int32_t var_100
        var_138 = &var_100
        var_118 = 1f
        var_100 = 0x3f000000
        int32_t var_fc_1 = 0x3f000000
        int64_t var_c8_1 = 0
        int64_t var_114_1 = 0
        int32_t var_c0
        int128_t* rax_13 = sub_140e11270(&arg1[0x87], 
            sub_140dd8200(&var_c0, arg3, &var_118, &var_d8, var_138, var_130, arg3 + 0x1c))
        int128_t* r8_1 = rax_13
        uint32_t rdx_1 = zx.d(rax_13[1].b)
        
        if (rdx_1 != 0)
            if (rdx_1 == 1)
                r8_1 = *(rax_13 + 0x18)
            else if (rdx_1 == 3)
                r8_1 = &arg8[2]
            else
                r8_1 = &arg8[1]
        
        uint32_t rcx_7 = zx.d(*(r14 + 0x30))
        void* rdx_3 = r14 + 0x20
        
        if (rcx_7 != 0)
            if (rcx_7 == 1)
                rdx_3 = *(rdx_3 + 0x18)
            else if (rcx_7 == 3)
                rdx_3 = &arg8[2]
            else
                rdx_3 = &arg8[1]
        
        float zmm2_1[0x4] = *rdx_3
        char var_8c
        rcx_9 = var_8c
        float zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        zmm0_1[0] = zmm0_1[0] f* *(arg8 + 4)
        float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        zmm1_1[0] = zmm1_1[0] f* *(arg8 + 8)
        zmm0_1[0] = zmm0_1[0] f* *(r8_1 + 4)
        zmm1_1[0] = zmm1_1[0] f* *(r8_1 + 8)
        zmm3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
        zmm3[0] = zmm3[0] f* *(arg8 + 0xc)
        zmm2_1[0] = zmm2_1[0] f* *arg8
        zmm3[0] = zmm3[0] f* *(r8_1 + 0xc)
        zmm2_1[0] = zmm2_1[0] f* *r8_1
        var_114_1.d = zmm0_1[0]
        int32_t var_b4
        var_88 = var_b4[0]
        var_114_1:4.d = zmm1_1[0]
        int32_t var_b8
        float var_80_1 = var_b8[0]
        int32_t var_b0
        float var_84_1 = var_b0[0]
        float var_74_1 = var_c0[0]
        int32_t var_bc
        float var_70_1 = var_bc[0]
        float var_a4[0x4]
        float var_6c_1[0x4] = var_a4
        var_118 = zmm2_1[0]
        int64_t var_94
        int64_t var_5c_1 = var_94
    
    float var_10c_1 = zmm3[0]
    int64_t var_7c_1 = 0
    r14_1 = arg6
    char var_54
    char var_54_1 = ((rcx_9 & 1) * 2) | (var_54 & 0xfc)
    var_130.q = &var_118
    var_138.b = r12.b
    sub_140db3600(r14_1, arg7, &var_88, r14, var_138.b, var_130)

uint64_t result = sub_140e1e7e0(arg1, arg2, arg3, arg4, r14_1, arg7, arg8, rsi.b)
__security_check_cookie(rax_1 ^ &var_158)
return result
