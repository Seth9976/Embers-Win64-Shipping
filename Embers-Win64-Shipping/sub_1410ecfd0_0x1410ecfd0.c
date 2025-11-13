// 函数: sub_1410ecfd0
// 地址: 0x1410ecfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg2 + 0x9c)
uint64_t result
result.b = (rcx u>> 4).b & 1

if (result.b != 0)
    int512_t zmm0
    
    if (*(arg1 + 0x68) == 0 || (rcx.b & 0x20) != 0 || *(arg1 + 0x6c) s>= 3)
    label_1410ed0e2:
        
        if (result.b != 0)
        label_1410ed0ea:
            int64_t* rcx_2 = *(arg2 + 0x80)
            uint64_t rdx = zx.q(*(arg1 + 0x10))
            uint64_t* var_1a0 = nullptr
            int64_t* rax_2 = (*(*rcx_2 + 0x40))(rcx_2, rdx, &var_1a0, arg5)
            uint64_t* rsi_1 = var_1a0
            int64_t* rdi_1 = rax_2
            
            if (rsi_1 == 0)
                rsi_1 = *(arg2 + 0x80)
            
            int32_t rax_4 = (*(*rax_2 + 0x1d8))(rdi_1)
            int64_t var_198 = sub_141261c60(arg2)
            int32_t rax_6 = sub_141261c10(arg2, rdi_1, &var_198)
            result = sub_141261bd0(arg2, rdi_1, &var_198)
            int32_t var_1a8_1 = result.d
            
            if (rax_4 u<= 1)
                char rcx_7
                
                if (arg4 != 0)
                    rcx_7 = *(arg4 + 0x37)
                
                if (arg4 == 0 || rcx_7 s< 0 || (rcx_7 & 0x40) != 0)
                    result = (*(*rdi_1 + 0x20))(rdi_1)
                    
                    if (result.d != 3)
                        result = (*(*rdi_1 + 0x290))(rdi_1)
                        
                        if (result.b == 0)
                            int64_t arg_10
                            result = (*(*rdi_1 + 0x1e8))(rdi_1, &arg_10)
                            
                            if (((*result u>> 0xa).b & 1) == 0)
                                int128_t var_188
                                int128_t var_178
                                int128_t var_168
                                int128_t var_158
                                int128_t var_118
                                int64_t var_f8
                                int128_t var_b8
                                int128_t var_a8
                                
                                if (rax_4 == 0 && *(arg1 + 0x6c) != 4)
                                    int64_t* rcx_12 = *(arg2 + 0x78)
                                    
                                    if ((*(*rcx_12 + 0x50))(rcx_12) != 0
                                            && sub_14212f090(rdi_1) == 0
                                            && sub_142134f80(rdi_1, 0) != 0)
                                        int64_t* rax_14
                                        int512_t zmm0_1
                                        int512_t zmm1_1
                                        rax_14, zmm0_1, zmm1_1 = sub_14210f630(0)
                                        int64_t rdx_4 = *rax_14
                                        int64_t* rax_15 = (*(rdx_4 + 0x280))(rax_14, rdx_4)
                                        uint64_t rdx_5 = zx.q(*(arg1 + 0x10))
                                        arg_10 = 0
                                        int64_t r9 = *rax_15
                                        int64_t* rax_16 = (*(r9 + 0x40))(rax_15, rdx_5, &arg_10, r9)
                                        int64_t* rcx_17 = *(arg2 + 0x78)
                                        zmm0_1.o = zx.o(0)
                                        zmm1_1.o = zx.o(0)
                                        var_188 = zx.o(0)
                                        var_178 = zx.o(0)
                                        var_168 = zx.o(0)
                                        int64_t rax_17 = *rcx_17
                                        var_158 = zx.o(0)
                                        int128_t var_148
                                        __builtin_memset(&var_148, 0, 0x30)
                                        var_b8 = zx.o(0)
                                        void* rax_18
                                        int128_t* r9_1
                                        rax_18, r9_1 = (*(rax_17 + 0x40))(zmm0_1, zmm1_1)
                                        int128_t* var_1e0_1 = &var_b8
                                        int128_t* var_1e8_1 = &var_158
                                        char var_1f0_1 = &var_188
                                        sub_1410e7230(rax_16, rax_18, *(arg1 + 0x10), zmm0_1, r9_1, 
                                            &var_168)
                                        void* rcx_19 = *(arg1 + 0x18)
                                        var_f8 = *(arg1 + 0x28)
                                        int64_t var_f0_1 = *(arg1 + 0x30)
                                        int32_t var_e8_1 = *(arg1 + 0x38)
                                        int64_t var_e0_1 = *(arg1 + 0x40)
                                        int64_t var_d8_1 = *(arg1 + 0x48)
                                        int64_t var_d0_1 = *(arg1 + 0x50)
                                        int64_t var_c8_1 = *(arg1 + 0x58)
                                        int32_t var_c0_1 = *(arg1 + 0x60)
                                        sub_1411058c0(rcx_19, arg2, arg6, &var_f8)
                                        void* rdx_8 = *(arg1 + 0x18)
                                        int128_t* var_1f8_1
                                        var_1f8_1.d = arg6
                                        __builtin_memset(&var_118, 0, 0x14)
                                        sub_141458e70(&var_118, rdx_8, arg4, arg2, var_1f8_1.d, 1)
                                        int64_t rax_27 = sub_1410ee4e0(0, var_188.q, var_158.q)
                                        int128_t zmm1_2 = var_178
                                        var_a8 = var_188
                                        int128_t var_88_1 = var_168
                                        int128_t var_98_1 = zmm1_2
                                        int128_t var_78_1 = var_158
                                        int128_t var_68_1 = var_148
                                        int128_t var_58
                                        __builtin_memset(&var_58, 0, 0x20)
                                        return sub_1410e4500(arg1, arg2, arg3, arg4, rax_15, 
                                            rax_16, &var_f8, &var_a8, rax_6, var_1a8_1, rax_27, 1, 
                                            &var_118)
                                
                                bool cond:0_1
                                
                                if (sub_142134f80(rdi_1, 0).b == 0)
                                    cond:0_1 = *(arg1 + 0x6c) == 1
                                    result.b = 1
                                else
                                    result = (*(*rdi_1 + 0x38))(rdi_1)
                                    
                                    if (result.b != 0)
                                        cond:0_1 = *(arg1 + 0x6c) == 1
                                        result.b = 1
                                    else
                                        cond:0_1 = *(arg1 + 0x6c) == 4
                                
                                if (not(cond:0_1))
                                    if (result.b == 0 && sub_14212f090(rdi_1) == 0)
                                        int64_t* rax_32
                                        rax_32, zmm0 = sub_14210f630(0)
                                        int64_t rdx_11 = *rax_32
                                        uint64_t* rax_33 = (*(rdx_11 + 0x280))(rax_32, rdx_11)
                                        uint64_t rdx_12 = zx.q(*(arg1 + 0x10))
                                        arg_10 = 0
                                        rsi_1 = rax_33
                                        uint64_t r9_5 = *rax_33
                                        rdi_1 = (*(r9_5 + 0x40))(rax_33, rdx_12, &arg_10, r9_5)
                                    
                                    int64_t* rcx_27 = *(arg2 + 0x78)
                                    zmm0.o = zx.o(0)
                                    var_188 = zx.o(0)
                                    var_178 = zx.o(0)
                                    var_168 = zx.o(0)
                                    int64_t rax_35 = *rcx_27
                                    var_158 = zx.o(0)
                                    int128_t var_148_1
                                    __builtin_memset(&var_148_1, 0, 0x30)
                                    var_b8 = zx.o(0)
                                    sub_1410e7830(rdi_1, (*(rax_35 + 0x40))(zmm0, (zx.o(0)).d), 
                                        *(arg1 + 0x10), &var_178, zmm0, &var_168, &var_188, 
                                        &var_158, &var_b8)
                                    void* rcx_29 = *(arg1 + 0x18)
                                    var_f8 = *(arg1 + 0x28)
                                    int64_t var_f0_2 = *(arg1 + 0x30)
                                    int32_t var_e8_2 = *(arg1 + 0x38)
                                    int64_t var_e0_2 = *(arg1 + 0x40)
                                    int64_t var_d8_2 = *(arg1 + 0x48)
                                    int64_t var_d0_2 = *(arg1 + 0x50)
                                    int64_t var_c8_2 = *(arg1 + 0x58)
                                    int32_t var_c0_2 = *(arg1 + 0x60)
                                    sub_1411058c0(rcx_29, arg2, arg6, &var_f8)
                                    void* rdx_15 = *(arg1 + 0x18)
                                    int128_t* var_1f0_3
                                    var_1f0_3.b = 1
                                    int128_t* var_1f8_3
                                    var_1f8_3.d = arg6
                                    __builtin_memset(&var_118, 0, 0x14)
                                    sub_141458e70(&var_118, rdx_15, arg4, arg2, var_1f8_3.d, 
                                        var_1f0_3.b)
                                    int64_t rax_45 = sub_1410ee4e0(rax_4, var_188.q, var_158.q)
                                    int128_t zmm1_3 = var_178
                                    var_a8 = var_188
                                    int128_t var_88_2 = var_168
                                    int128_t var_98_2 = zmm1_3
                                    int128_t var_68_2 = var_148_1
                                    int128_t var_78_2 = var_158
                                    int128_t var_58_1
                                    __builtin_memset(&var_58_1, 0, 0x20)
                                    return sub_1410e4500(arg1, arg2, arg3, arg4, rsi_1, rdi_1, 
                                        &var_f8, &var_a8, rax_6, var_1a8_1, rax_45, 0, &var_118)
    else if (arg4 != 0)
        if ((*(arg4 + 0x3c) & 1) != 0)
            result.b = *(arg4 + 0x32) - 1
        
        if ((*(arg4 + 0x3c) & 1) != 0 && (result.b u> 1 || *(arg1 + 0x70) != 0))
            result.b = 1
        else
            result.b = 0
        
        void* rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 == 0)
            goto label_1410ed0e2
        
        arg5 = *(arg4 + 0xc0) f- *(rcx_1 + 0x60c)
        float zmm2 = *(arg4 + 0xc4) f- *(rcx_1 + 0x610)
        float zmm4 = *(arg4 + 0xc8) f- *(rcx_1 + 0x614)
        
        if (result.b != 0)
            zmm0.o = *(rcx_1 + 0xd5c)
            float zmm1 = *(arg4 + 0xd8)
            zmm0.d = zmm0.d f* zmm0.d
            arg5 = arg5 * arg5
            zmm2 = (zmm2 * zmm2 + arg5 + zmm4 * zmm4) f* zmm0.d
            zmm0.o = data_1439b6dac
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm1 * zmm1 <= zmm2 f* zmm0.d))
                goto label_1410ed0ea

return result
