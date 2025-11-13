// 函数: sub_141e315f0
// 地址: 0x141e315f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
uint64_t var_78 = __security_cookie ^ &var_1a8
int64_t* rcx = *arg1
uint64_t result

if (rcx != 0)
    int64_t rsi
    
    if ((*(*rcx + 0x2d0))(rcx) == 0 || arg1[0x31].d s> 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    bool cond:0_1 = arg2[0] f<= 9.99999994e-09f
    int64_t var_140
    __builtin_memset(&var_140, 0, 0x20)
    char var_118_1 = 0
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x20)
    int64_t var_164_1 = 0
    int32_t var_15c_1 = 0
    char var_158_1 = 1
    int32_t var_154_1 = 0xffffffff
    int64_t var_150_1 = 0
    char var_148_1 = 0
    int32_t var_144_1 = 0xffffffff
    int32_t var_120_1 = 0x7f7fffff
    int32_t var_11c_1 = 0x7f7fffff
    int64_t* var_178 = arg1
    uint64_t var_170_1 = *arg1
    uint32_t var_168_1 = arg2[0]
    
    if (not(cond:0_1))
        int32_t i
        
        do
            *arg3
            uint32_t zmm6[0x4]
            int32_t zmm9_1
            result, zmm6, i, zmm9_1 = sub_141e14a90(&var_178, arg3, nullptr)
            
            if (result.b != 0)
                break
            
            float zmm0_1[0x4]
            uint32_t zmm1[0x4]
            
            if (rsi.b != 0)
                zmm1 = data_143f395f0
                int128_t zmm4_1 = zx.o(0)
                void* rcx_2 = *arg1
                zmm0_1 = zmm1
                zmm1 = __andps_xmmxud_memxud(zmm1, data_143f39600)
                zmm0_1[0].q = zx.o(0) u>> 0x40
                float zmm3_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
                bool cond:1_1 = *(rcx_2 + 0x160) s<= 0
                char var_b8 = result.b
                int32_t var_b4_1 = 0
                int128_t var_98_1 = zx.o(0)
                
                if (not(cond:1_1))
                    sub_141de7ca0(rcx_2, *(rcx_2 + 0x158) + 8, zmm6, *arg3, &var_b8)
                    zmm4_1 = var_98_1
                
                float var_e8[0x4] = zmm3_1
                int128_t var_d8_1 = zmm4_1
                uint32_t var_c8_1[0x4] = zmm1
                result, i, zmm9_1 = sub_141de06c0(arg4, &var_e8)
            
            if (var_148_1 != 0)
                if (var_158_1 == 0)
                    result = arg1[0x1f]
                else
                    result = arg1[0x1d]
                
                int32_t rdx_5 = *(result + (sx.q(var_154_1) << 2))
                
                if (rdx_5 == 0xffffffff)
                    break
                
                void* r9 = *arg1
                zmm1 = zx.o(0)
                zmm0_1 = *(r9 + 0x90)
                
                if (rdx_5 s>= 0 && rdx_5 s< *(r9 + 0x150))
                    void* rcx_6 = sx.q(rdx_5) * 0x58 + *(r9 + 0x148)
                    char rax_4 = *(rcx_6 + 0x19)
                    
                    if (rax_4 == 0)
                        zmm1 = *(rcx_6 + 0x24)
                    else
                        uint32_t r8 = zx.d(rax_4)
                        
                        if (r8 == 1)
                            zmm1 = *(rcx_6 + 0x24)
                            zmm1[0] = zmm1[0] f+ *(rcx_6 + 0x1c)
                        else if (r8 != 2)
                            zmm1 = *(rcx_6 + 0x24)
                        else
                            zmm1 = *(rcx_6 + 0x24)
                            zmm1[0] = zmm1[0] f* *(rcx_6 + 0x20)
                            zmm1[0] = zmm1[0] f+ *(rcx_6 + 0x1c)
                
                result = zx.q(rdx_5 + 1)
                
                if (result.d s>= 0 && result.d s< *(r9 + 0x150))
                    void* rcx_8 = (sx.q(rdx_5) + 1) * 0x58 + *(r9 + 0x148)
                    result = zx.q(*(rcx_8 + 0x19))
                    
                    if (result.b == 0)
                        zmm0_1 = *(rcx_8 + 0x24)
                    else
                        uint32_t rdx_6 = zx.d(result.b)
                        
                        if (rdx_6 == 1)
                            zmm0_1 = *(rcx_8 + 0x24)
                            zmm0_1[0] = zmm0_1[0] f+ *(rcx_8 + 0x1c)
                        else if (rdx_6 != 2)
                            zmm0_1 = *(rcx_8 + 0x24)
                        else
                            zmm0_1 = *(rcx_8 + 0x24)
                            zmm0_1[0] = zmm0_1[0] f* *(rcx_8 + 0x20)
                            zmm0_1[0] = zmm0_1[0] f+ *(rcx_8 + 0x1c)
                
                if (var_158_1 == 0)
                    zmm0_1[0] = zmm0_1[0] f- zmm9_1
                    zmm1 = zmm0_1
                
                *arg3 = zmm1[0]
        while (var_168_1[0] f> i)
        int64_t var_f8
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
        
        int64_t rcx_10 = var_108
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t var_130
        
        if (var_130 != 0)
            sub_140a74f90(var_130)
        
        int64_t rcx_12 = var_140
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(var_78 ^ &var_1a8)
return result
