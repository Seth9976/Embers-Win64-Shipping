// 函数: sub_141b18c70
// 地址: 0x141b18c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t r11 = *(arg3 + 0x20)
uint64_t result = zx.q(*(arg3 + 0x24))
uint64_t result_1

if (r11 != 1)
    if (result.d == 0x80000000)
        void* const rax_2 = 0x10
        
        if (r11 != 0)
            rax_2 = 4
        
        result = zx.q(*(rax_2 + arg3))
else if (result.d == 0x80000000)
    result = *(arg3 + 4)
    result_1 = result
    
    if (not(result_1:4.d f== 0f))
        result = zx.q(result.d + 1)

if (*(arg1 + 0x38) != 0)
    char rcx = *arg4
    result_1.b = 1
    result_1:4.d = result.d
    
    if (rcx == 2)
    label_141b18d3c:
        char rdx_1 = arg4[8]
        void* rcx_2 = &arg4[8]
        result_1.b = 1
        result_1:4.d = result.d
        
        if (rdx_1 == 2)
        label_141b18d7a:
            
            if (*(arg3 + 0x48) != 0 && (*(arg3 + 0x54) & 2) == 0)
                result = zx.q(*(arg1 + 0x30))
                
                if (r11 == 1)
                    if ((result.b & 2) != 0)
                    label_141b18dcc:
                        int64_t* var_1a8
                        sub_141af73b0(&var_1a8, arg1 + 0x38)
                        int32_t var_1c0_1 = 1
                        result_1 = 0
                        sub_1407751d0(&result_1, 1, 0)
                        uint64_t result_2 = result_1
                        *result_2 = var_1a8
                        *(result_2 + 8) = 0
                        *(result_2 + 0x10) = 0xffffffff
                        __builtin_memset(result_2 + 0x14, 0, 0x14)
                        sub_140cea340()
                        void* var_1a0
                        int32_t var_198
                        
                        if (var_1a0 == 0)
                        label_141b18e34:
                            int32_t var_188
                            
                            if (var_188 != 0)
                                void* rax_5 = sub_140cd0630(&var_1a0, nullptr, 0)
                                
                                if (rax_5 != 0 && (data_143e1b828 & *(*(rax_5 + 8) + 0x10)) != 0)
                                    var_1a0 = rax_5
                                else if (var_1a0 != 0)
                                    var_198 = 0xffffffff
                                    int32_t var_194_1 = 0
                                    var_1a0 = nullptr
                        else if (sub_140d3e110(&var_198) == 0)
                            goto label_141b18e34
                        sub_1405af670(result_2 + 8, &var_1a0)
                        int64_t var_190
                        
                        if (var_190 != 0)
                            sub_140a74f90(var_190)
                        
                        int32_t var_1b0_1 = var_1c0_1
                        int32_t var_1bc
                        int32_t var_1ac_1 = var_1bc
                        uint64_t result_3 = result_2
                        void** var_98
                        void*** rax_8 = sub_141af61d0(&var_98, &result_3, arg1 + 0x20)
                        char var_168
                        char var_168_1 = var_168 & 0xfc
                        int64_t* rax_9 = sub_140a82f30(0x58, 8)
                        var_1a8 = rax_9
                        char rcx_11 = var_168_1 | 1
                        int64_t* rcx_12 = &var_1a8
                        
                        if ((rcx_11 & 2) == 0)
                            rcx_12 = rax_9
                        
                        *rcx_12 = &data_143054f88
                        rcx_12[1] = 0
                        rcx_12[1] = rax_8[1]
                        rax_8[1] = 0
                        rcx_12[2].d = rax_8[2].d
                        *(rcx_12 + 0x14) = *(rax_8 + 0x14)
                        rax_8[2] = 0
                        rcx_12[9] = 0
                        
                        if (rax_8[9] == 0)
                            memmove(&rcx_12[3], &rax_8[3], 0x30)
                        
                        int64_t rcx_14 = rcx_12[9]
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rcx_12[9] = rax_8[9]
                        rax_8[9] = 0
                        rcx_12[0xa].d = rax_8[0xa].d
                        *(rcx_12 + 0x54) = *(rax_8 + 0x54)
                        int64_t** var_1d8_1 = &var_1a8
                        rax_8[0xa].d = 0
                        *(rax_8 + 0x54) = 2
                        void var_160
                        int128_t* rax_16 = sub_1405ab790(&var_160, &arg5[0x22], arg5 + 0x124, 
                            &arg5[0x27], var_1d8_1)
                        int64_t rbx_2 = sx.q(arg5[1].d)
                        int32_t rcx_16 = (rbx_2 + 1).d
                        arg5[1].d = rcx_16
                        
                        if (rcx_16 s> *(arg5 + 0xc))
                            sub_1405c5190(arg5)
                        
                        sub_1405ab620(rbx_2 * 0xc8 + *arg5, rax_16)
                        char var_a0
                        
                        if ((var_a0 & 1) != 0)
                            int64_t* var_e0
                            int64_t* rcx_20 = &var_e0
                            
                            if ((var_a0 & 2) == 0)
                                rcx_20 = var_e0
                            
                            (**rcx_20)(rcx_20, 0)
                            
                            if ((var_a0 & 2) == 0)
                                sub_140a74f90(var_e0)
                        
                        int64_t var_100
                        
                        if (var_100 != 0)
                            sub_140a74f90(var_100)
                        
                        if ((rcx_11 & 1) != 0)
                            int64_t* rcx_23 = &var_1a8
                            
                            if ((rcx_11 & 2) == 0)
                                rcx_23 = var_1a8
                            
                            (**rcx_23)(rcx_23, 0)
                            
                            if ((rcx_11 & 2) == 0)
                                sub_140a74f90(var_1a8)
                        
                        int64_t var_50
                        
                        if (var_50 != 0)
                            sub_140a74f90(var_50)
                        
                        void var_90
                        result = sub_140745ac0(&var_90)
                else if ((result.b & 1) != 0)
                    goto label_141b18dcc
        else
            int32_t temp0_1 = *(rcx_2 + 4)
            
            if (temp0_1 s> result.d || (temp0_1 s>= result.d && rdx_1 == 1))
                goto label_141b18d6d
            
            if (rdx_1 == 1)
                rcx_2 = &result_1
            label_141b18d6d:
                result = zx.q(*(arg4 + 0xc))
                
                if (*(rcx_2 + 4) == result.d)
                    goto label_141b18d7a
    else
        int32_t rdx = *(arg4 + 4)
        char* rcx_1
        
        if (rdx s< result.d)
            rcx_1 = arg4
        label_141b18d33:
            
            if (*(rcx_1 + 4) == rdx)
                goto label_141b18d3c
        else if (rdx s> result.d)
            if (rcx == 1)
                rcx_1 = &result_1
                goto label_141b18d33
        else if (rcx == 1)
            rcx_1 = arg4
            goto label_141b18d33

__security_check_cookie(rax_1 ^ &var_1f8)
return result
