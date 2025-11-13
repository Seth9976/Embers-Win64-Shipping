// 函数: sub_14063c410
// 地址: 0x14063c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* result = nullptr
*arg8 = 0
int64_t var_240 = 0
int32_t var_238 = 0
int32_t var_230 = 0xffffffff
sub_140d3cc80(sub_14256a090(), &var_240, 1, 0x10, 0)
int32_t rcx_2 = var_230 + 1
int64_t rdx_1 = var_240
int32_t var_230_1 = rcx_2

if (rcx_2 s< var_238)
    while (*(rdx_1 + (sx.q(rcx_2) << 3)) == 0)
        int32_t rax_6 = rcx_2 + 1
        int32_t var_230_2 = rax_6
        rcx_2 = rax_6
        
        if (rax_6 s>= var_238)
            break

if (rcx_2 s>= 0 && rcx_2 s< var_238)
    int64_t* rcx_3 = *(rdx_1 + (sx.q(rcx_2) << 3))
    void* rax_9 = (*(*rcx_3 + 0x150))(rcx_3)
    
    if (rax_9 != 0)
        int64_t var_228
        int64_t* rax_10 = sub_140b58260(&var_228, u"VictoryBPTrace::CharacterMeshTrace", 1)
        char var_248 = var_248
        int32_t var_278
        var_278.q = 0
        void var_c8
        sub_141eb54c0(&var_c8, *rax_10, &var_248, 1, var_278)
        char var_b8_1 = 1
        char var_b5_1 = 0
        sub_141eb8b10(&var_c8, arg1)
        int64_t var_168_1 = 0
        int128_t* var_268_1 = &data_143f3a660
        void* var_270_1 = &var_c8
        int128_t var_1e8
        __builtin_memset(&var_1e8, 0, 0x20)
        char var_278_1 = 2
        var_1e8:8.d = 0x3f800000
        int128_t var_1c8
        __builtin_memset(&var_1c8, 0, 0x60)
        sub_141ec6a20(rax_9, &var_1e8, arg2, arg3, var_278_1, var_270_1, var_268_1)
        
        if ((var_1e8.b & 1) != 0)
            int128_t var_188
            void* result_1 = sub_140d3c6e0(&var_188:8)
            result = result_1
            
            if (result_1 != 0)
                void* rax_11 = sub_1424890f0()
                void* rdx_5 = *(result + 0x10)
                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                
                if (rax_12.d s<= *(rdx_5 + 0x38)
                        && *(*(rdx_5 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30
                        && *(result + 0x280) != 0)
                    int64_t var_d8_1 = 0
                    int32_t var_220_1 = arg3[1].d
                    int32_t rax_15 = arg2[1].d
                    int128_t var_158
                    __builtin_memset(&var_158, 0, 0x40)
                    int32_t var_210_1 = rax_15
                    int128_t* var_250_1 = &var_158
                    var_158:8.d = 0x3f800000
                    int128_t var_118
                    __builtin_memset(&var_118, 0, 0x40)
                    var_270_1.b = 0
                    var_278_1 = 0
                    int64_t* rcx_11 = *(result + 0x280)
                    var_228 = *arg3
                    int64_t var_218 = *arg2
                    *arg8 = sub_1422a6cb0(rcx_11, &var_218, &var_228, 1, var_278_1, var_270_1, 
                        arg4, arg5, arg6)
                    int32_t* rax_19 = sub_141f5e140(*(result + 0x280), &var_218, *arg6, 0)
                    *arg7 = *rax_19
                    arg7[1].d = rax_19[2]
        
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t var_88
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
    
    rdx_1 = var_240

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

__security_check_cookie(rax_1 ^ &var_298)
return result
