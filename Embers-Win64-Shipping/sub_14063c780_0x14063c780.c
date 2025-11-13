// 函数: sub_14063c780
// 地址: 0x14063c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
*arg9 = 0
void* rax_5

if (arg1 != 0)
    rax_5 = sub_1423de540(data_143f5b298, arg1, 0)

uint64_t result

if (arg1 == 0 || rax_5 == 0)
    result = 0
else
    int64_t var_238
    int64_t* rax_6 = sub_140b58260(&var_238, u"VictoryBPTrace::CharacterMeshSocketTrace", 1)
    char var_268 = var_268
    uint64_t result_3 = 0
    void var_e8
    sub_141eb54c0(&var_e8, *rax_6, &var_268, 1, nullptr)
    char var_d8_1 = 1
    char var_d5_1 = 0
    sub_141eb8b10(&var_e8, arg2)
    int64_t var_188_1 = 0
    int128_t* var_288_1 = &data_143f3a660
    int64_t* var_290_1 = &var_e8
    int128_t var_208
    __builtin_memset(&var_208, 0, 0x20)
    void* const var_298_1
    var_298_1.d = 2
    var_208:8.d = 0x3f800000
    int128_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x60)
    int128_t zmm7_1 = sub_141ec6a20(rax_5, &var_208, arg3, arg4, var_298_1.b, var_290_1, var_288_1)
    uint64_t result_1
    
    if ((var_208.b & 1) == 0)
        result_1 = result_3
    else
        int128_t var_1a8
        uint64_t result_2 = sub_140d3c6e0(&var_1a8:8)
        result_1 = result_2
        void* rax_7
        int64_t rax_8
        void* rdx_4
        
        if (result_2 != 0)
            rax_7 = sub_1424890f0()
            rdx_4 = *(result_1 + 0x10)
            rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (result_2 == 0 || rax_8.d s> *(rdx_4 + 0x38)
                || *(*(rdx_4 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
            result_1 = result_1
        else if (*(result_1 + 0x280) != 0)
            int64_t var_228 = 0
            int64_t var_f8_1 = 0
            int32_t rax_10 = arg4[1].d
            int128_t var_178
            __builtin_memset(&var_178, 0, 0x50)
            int32_t var_230_1 = rax_10
            int32_t var_250_1 = arg3[1].d
            int128_t* var_270_1 = &var_178
            int64_t* var_278_1 = &var_228
            var_178:8.d = 0x3f800000
            int128_t var_128
            __builtin_memset(&var_128, 0, 0x30)
            var_290_1.b = 0
            var_298_1.b = 0
            int64_t* rcx_8 = *(result_1 + 0x280)
            var_238 = *arg4
            int64_t var_258 = *arg3
            char rax_12
            uint128_t zmm6_1
            rax_12, zmm6_1 = sub_1422a6cb0(rcx_8, &var_258, &var_238, 1, var_298_1.b, var_290_1, 
                arg5, arg6, var_278_1)
            
            if (rax_12 != 0)
                int64_t var_248 = 0
                int32_t var_240_1 = 0
                int64_t* rcx_9 = *(result_1 + 0x280)
                uint128_t var_58_1 = zmm6_1
                (*(*rcx_9 + 0x438))(rcx_9, &var_248)
                int32_t result_4 = 0
                zmm6_1 = 0xbf800000
                
                if (var_240_1 s> 0)
                    int128_t var_68_1 = zmm7_1
                    int64_t r14_1 = 0
                    
                    do
                        int64_t rdx_7 = var_248
                        
                        if (*(rdx_7 + r14_1 + 8) != 1)
                            int64_t* rcx_10 = *(result_1 + 0x280)
                            int64_t* rax_16 = (*(*rcx_10 + 0x410))(rcx_10, &var_238, 
                                *(rdx_7 + sx.q(result_4) * 0xc))
                            uint128_t zmm0_2 = zx.o(*rax_16)
                            int32_t rax_17 = rax_16[1].d
                            uint128_t zmm1_1
                            zmm1_1.d = zmm0_2.d f- *arg5
                            var_258 = zmm0_2.q
                            uint128_t zmm2_1
                            zmm2_1.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d f- *(arg5 + 4)
                            zmm0_2.d = rax_17.d f- arg5[1].d
                            zmm1_1.d = zmm1_1.d f* zmm1_1.d
                            zmm2_1.d = zmm2_1.d f* zmm2_1.d
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                            zmm1_1 = _mm_sqrt_ss(0, zmm2_1.d)
                            
                            if (zmm6_1.d f< 0f || not(zmm6_1.d f< zmm1_1.d))
                                result_3 = zx.q(result_4)
                                zmm6_1 = zmm1_1
                        
                        result_4 += 1
                        r14_1 += 0xc
                    while (result_4 s< var_240_1)
                
                *arg7 = *(var_248 + sx.q(result_3.d) * 0xc)
                int64_t* rcx_12 = *(result_1 + 0x280)
                int64_t* rax_22 = (*(*rcx_12 + 0x410))(rcx_12, &var_258)
                *arg8 = *rax_22
                arg8[1].d = rax_22[1].d
                int64_t rcx_14 = var_248
                *arg9 = 1
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
    
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_2b8)
return result
