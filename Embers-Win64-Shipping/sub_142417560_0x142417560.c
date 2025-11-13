// 函数: sub_142417560
// 地址: 0x142417560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4[1].d
*arg2 = *arg4
arg2[1].d = rax
sub_142403cf0(arg1)
int32_t arg_8
sub_140d446e0(arg1 + 0x170, &arg_8, arg3)
int64_t rax_1 = sx.q(arg_8)
void* const rax_4

if (rax_1.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_1 * 0x30 + *(arg1 + 0x170)

int128_t* rbx_1 = rax_4 + 0x18

if (rax_4 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    uint32_t zmm1_1[0x4] = *rbx_1
    uint32_t zmm6[0x4] = *arg2
    int128_t zmm9 = 0x3f800000
    uint32_t zmm0_1[0x4]
    
    if (not(zmm1_1[0] f<= 0f))
        bool cond:2_1 = zmm6[0] f<= 0f
        uint32_t zmm2[0x4] = 0x3f800000
        float zmm3 = zmm1_1[0] - 1f
        zmm2[0] = 1f f- zmm1_1[0]
        
        if (cond:2_1)
            zmm6 ^= 0x80000000
            zmm6[0] = zmm6[0] f- zmm1_1[0]
            zmm6 = _mm_max_ss(zmm6[0], 0)
            zmm6[0] = zmm6[0] f/ zmm3
        else
            zmm6[0] = zmm6[0] f- zmm1_1[0]
            zmm6 = _mm_max_ss(zmm6[0], 0)
            zmm6[0] = zmm6[0] f/ zmm2[0]
        
        zmm0_1 = *(arg2 + 4)
        
        if (zmm0_1[0] f<= 0f)
            zmm0_1 ^= 0x80000000
            zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
            zmm0_1 = _mm_max_ss(zmm0_1[0], 0)
            zmm0_1[0] = zmm0_1[0] f/ zmm3
        else
            zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
            zmm0_1 = _mm_max_ss(zmm0_1[0], 0)
            zmm0_1[0] = zmm0_1[0] f/ zmm2[0]
        
        *(arg2 + 4) = zmm0_1[0]
        zmm0_1 = arg2[1].d
        
        if (zmm0_1[0] f<= 0f)
            zmm0_1 ^= 0x80000000
            zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
            zmm0_1 = _mm_max_ss(zmm0_1[0], 0)
            zmm0_1[0] = zmm0_1[0] f/ zmm3
        else
            zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
            zmm0_1 = _mm_max_ss(zmm0_1[0], 0)
            zmm0_1[0] = zmm0_1[0] f/ zmm2[0]
        
        arg2[1].d = zmm0_1[0]
    
    uint32_t zmm13[0x4] = *(rbx_1 + 8)
    uint32_t zmm8[0x4]
    
    if (zmm13[0] f== 1f)
        zmm8 = *(arg2 + 4)
        zmm1_1 = arg2[1].d
    else
        zmm6[0] f- 0f
        
        if (not(zmm6[0] f<= 0f))
            zmm8 = 0x3f800000
        else if (zmm6[0] f>= 0f)
            zmm8 = zx.o(0)
        else
            zmm8 = 0xbf800000
        
        zmm6 = powf(__andps_xmmxud_memxud(zmm6, data_142d3f770)[0], zmm13[0])
        uint32_t zmm0_2[0x4] = *(arg2 + 4)
        zmm0_2[0] f- 0f
        bool cond:5_1 = zmm0_2[0] f<= 0f
        bool cond:6_1 = zmm0_2[0] f>= 0f
        zmm6[0] = zmm6[0] f* zmm8[0]
        int128_t zmm10
        
        if (not(cond:5_1))
            zmm10 = 0x3f800000
        else if (cond:6_1)
            zmm10 = zx.o(0)
        else
            zmm10 = 0xbf800000
        
        zmm8 = powf(__andps_xmmxud_memxud(zmm0_2, data_142d3f770)[0], zmm13[0])
        uint32_t zmm0_3[0x4] = arg2[1].d
        zmm0_3[0] f- 0f
        bool cond:7_1 = zmm0_3[0] f> 0f
        bool cond:8_1 = zmm0_3[0] f>= 0f
        zmm8[0] = zmm8[0] f* zmm10.d
        
        if (not(cond:7_1))
            if (cond:8_1)
                zmm9 = zx.o(0)
            else
                zmm9 = 0xbf800000
        
        zmm1_1 = powf(__andps_xmmxud_memxud(zmm0_3, data_142d3f770)[0], zmm13[0])
        zmm1_1[0] = zmm1_1[0] f* zmm9.d
    
    bool cond:9_1 = (*(rbx_1 + 0xc) & 1) == 0
    zmm0_1 = *(rbx_1 + 4)
    zmm0_1[0] = zmm0_1[0] f* zmm6[0]
    zmm8[0] = zmm8[0] f* zmm0_1[0]
    zmm1_1[0] = zmm1_1[0] f* zmm0_1[0]
    *arg2 = zmm0_1[0]
    *(arg2 + 4) = zmm8[0]
    arg2[1].d = zmm1_1[0]
    
    if (not(cond:9_1))
        *arg2 = (zmm0_1 ^ 0x80000000)[0]
        *(arg2 + 4) = (zmm8 ^ 0x80000000)[0]
        arg2[1].d = (zmm1_1 ^ 0x80000000)[0]

int64_t* rbx_2 = arg3[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
