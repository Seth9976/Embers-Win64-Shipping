// 函数: sub_140f54650
// 地址: 0x140f54650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
uint32_t zmm7[0x4] = *(arg4 + 0x2c)

if (arg1[0x83].d != 1)
    zmm7 = *(arg4 + 0x28)

bool cond:1 = *(arg4 + 0x5c) == 0
zmm7[0] = zmm7[0] f/ *(arg3 + 8)
int128_t zmm6
int128_t var_58 = zmm6
int32_t performanceCount
char var_168
int32_t var_b4
int512_t zmm1

if (cond:1)
    int64_t var_248 = data_143e1e020
    int64_t var_240_1 = data_143e1e028
    void* rax_13 = data_143e1e030
    void* var_238_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    char rax_14 = sub_140f4a520(arg4, &var_248)
    char rax_15
    
    if (rax_14 != 0 && *(arg1 + 0x4cc) s< 0)
        uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm7, data_142d3f770)
        temp0_2[0] = temp0_2[0] f+ *(arg1 + 0x3c4)
        *(arg1 + 0x3c4) = temp0_2[0]
        rax_15 = sub_140f4a760(arg1)
    
    if (rax_14 == 0 || *(arg1 + 0x4cc) s>= 0 || rax_15 == 0)
        *arg2 = 0
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
    else
        QueryPerformanceCounter(&performanceCount)
        double zmm2[0x2] = zx.o(0)
        zmm1.o = zmm7 ^ data_142d3f780
        zmm2[0] = float.d(performanceCount.q)
        zmm2[0] = zmm2[0] f* data_143d796f8
        zmm2[0] = zmm2[0] + 16777216.0
        double zmm8_2[0x2]
        int128_t zmm10_1
        zmm8_2, zmm10_1 = sub_140ea2280(&arg1[0x7a], zmm1.o, zmm2)
        char rax_16
        int512_t zmm1_1
        rax_16, zmm1_1 = sub_140f5ca10(arg1, arg3, zmm8_2 ^ data_142d3f780, *(arg1 + 0x3f4), 0)
        int32_t var_b4_2 = var_b4 & 0xffffff00
        var_168 = 1
        zmm1_1.o = zx.o(0)
        int64_t var_160_2 = 0
        int64_t var_158_2 = 0
        char var_148_2 = 0
        int64_t var_140_1
        __builtin_memset(&var_140_1, 0, 0x88)
        int32_t var_b8_2 = 0x20702
        float zmm0_2
        
        if (sub_140e19840(arg1, zmm1_1) == 0)
            int128_t var_88_1 = zmm10_1
            int64_t* rax_18 = sub_140f2cda0(&arg1[1], &performanceCount)
            sub_140f63c00(sub_140eae530(&var_168, sub_140f2cda0(&arg1[1], &var_248)), rax_18)
            zmm6 = *(arg3 + 0x1c)
            zmm1_1.o = zmm6
            zmm1_1.d = zmm1_1.d f* *(arg3 + 0x28)
            int128_t zmm11 = *(arg4 + 0x18)
            zmm10_1 = *(arg4 + 0x1c)
            zmm1_1.d = zmm1_1.d f- *(arg3 + 0x20) f* *(arg3 + 0x24)
            zmm0_2 = zmm11.d f- *(arg3 + 0x2c)
            zmm11.d = zmm11.d f- *(arg3 + 0x2c)
            int128_t zmm8_3
            zmm8_3.d = 1f f/ zmm1_1.d
            zmm1_1.o = zmm8_3
            zmm1_1.d = zmm1_1.d f* *(arg3 + 0x24)
            float zmm7_1 = zmm8_3.d f* *(arg3 + 0x28) * zmm0_2
            zmm0_2 = zmm10_1.d f- *(arg3 + 0x30)
            zmm10_1.d = zmm10_1.d f- *(arg3 + 0x30)
            zmm1_1.d = zmm1_1.d f* zmm0_2
            zmm0_2 = zmm8_3.d
            zmm8_3.d = zmm8_3.d f* *(arg3 + 0x20)
            *(arg1 + 0x4cc) |= 2
            zmm8_3.d = zmm8_3.d f* zmm11.d
            arg1[0x80].d = zmm7_1 f- zmm1_1.d
            *(arg1 + 0x404) = zmm0_2 f* zmm6.d f* zmm10_1.d f- zmm8_3.d
        
        if (rax_16 != 0)
            int32_t temp0_3 = arg1[0x83].d
            zmm0_2 = *(arg1 + 0x404)
            
            if (temp0_3 != 1)
                zmm0_2 = arg1[0x80].d
            
            zmm1_1.o = *(arg4 + 0x2c)
            
            if (temp0_3 != 1)
                zmm1_1.o = *(arg4 + 0x28)
            
            zmm0_2 = zmm0_2 f+ zmm1_1.d
            
            if (temp0_3 != 1)
                arg1[0x80].d = zmm0_2
            else
                *(arg1 + 0x404) = zmm0_2
        
        sub_140e51550(arg2, &var_168)
        sub_140597700(&var_168)
else
    char rax_2 = *(arg1 + 0x4cd)
    int32_t var_b4_1 = var_b4 & 0xffffff00
    zmm1.o = zx.o(0)
    var_168 = 0
    int64_t var_160_1 = 0
    int64_t var_158_1 = 0
    char var_148_1 = 0
    int64_t var_140
    __builtin_memset(&var_140, 0, 0x88)
    int32_t var_b8_1 = 0x20702
    
    if (arg1[0x78].b != 0)
        char var_228
        int32_t var_174
        
        if ((rax_2 & 1) != 0)
            int32_t rdx_3 = *(arg4 + 0xc)
            performanceCount = *(arg4 + 0x50)
            char var_254_1 = 1
            
            if (sub_140e19910(arg1, rdx_3, &performanceCount, zmm1) != 0)
                int64_t* rcx_5 = data_143e29f28
                (*(*rcx_5 + 0x50))(rcx_5)
                arg1[0x98] = (zx.o(0)).q
                int64_t* rcx_6 = data_143e29f28
                (*(*rcx_6 + 0x50))(rcx_6)
                zmm1.o = zmm7 ^ data_142d3f780
                sub_140f5ca10(arg1, arg3, 
                    sub_140ea2280(&arg1[0x7a], zmm1.o, zx.o(0)) ^ data_142d3f780, 0, 0)
            label_140f548a3:
                int32_t var_174_2 = var_174 & 0xffffff00
                var_228 = 1
                int64_t var_220_2 = 0
                int64_t var_218_2 = 0
                char var_208_2 = 0
                int64_t var_200_1
                __builtin_memset(&var_200_1, 0, 0x88)
                int32_t var_178_2 = 0x20702
                sub_1405979f0(&var_168, &var_228)
                sub_140597700(&var_228)
        else if (sub_140e19840(arg1, zmm1) == 0)
            zmm7[0] = zmm7[0] f+ arg1[0x79].d
            arg1[0x79].d = zmm7[0]
            void* rcx = data_143e29f28
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm7, data_142d3f770)
            int128_t zmm0_1 = sub_140e66040(rcx)
            
            if (temp0_1[0] f<= zmm0_1.d)
                goto label_140f548a3
            
            int64_t* rcx_1 = arg1[0x75]
            *(arg1 + 0x4cd) |= 1
            (*(*rcx_1 + 0x248))(rcx_1)
            int32_t var_174_1 = var_174 & 0xffffff00
            var_228 = 1
            int64_t var_220_1 = 0
            int64_t var_218_1 = 0
            char var_208_1 = 0
            int64_t var_200
            __builtin_memset(&var_200, 0, 0x88)
            int32_t var_178_1 = 0x20702
            sub_140e54f20(&var_168, 
                sub_140eae530(&var_228, sub_140f2cda0(&arg1[1], &performanceCount)))
            sub_140597700(&var_228)
    
    sub_140e51550(arg2, &var_168)
    sub_140597700(&var_168)
__security_check_cookie(rax_1 ^ &var_288)
return arg2
