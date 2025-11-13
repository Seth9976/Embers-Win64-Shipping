// 函数: sub_140969410
// 地址: 0x140969410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
int64_t* result = *(arg1 + 0x10)

if (result[0x11] != 0)
    int64_t* rcx_43
    
    if (arg3 == 2)
        int64_t* rcx_58 = arg4[1]
        int32_t* rdx_31 = *rcx_58
        int32_t var_4c0
        
        if (&rdx_31[1] u> rcx_58[1])
            int32_t* rdx_32 = &var_4c0
            
            if ((*(arg4 + 0x29) & 0x20) != 0)
                sub_140b54070(arg4, rdx_32, arg5)
            else
                (*(*arg4 + 0x150))(arg4, rdx_32, 4)
        else
            var_4c0 = *rdx_31
            *rcx_58 += 4
        result.b = not.b(*(arg4 + 0x29))
        
        if ((result.b & 1) != 0)
            void var_420
            int64_t* rax_54 = sub_140ac6680(
                _vfprintf_p_l(&var_420, 
                    The match you are trying to join is running an incompatible version of the game.  Pleas", 
                Engine"))
            uint64_t var_498 = 0
            int32_t rbx_5 = rax_54[1].d
            int64_t r14_3 = *rax_54
            int32_t var_490_1 = rbx_5
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_498, rbx_5, 0)
                memcpy(var_498, r14_3, rbx_5 * 2)
            else
                int32_t var_48c_1 = 0
            
            int64_t* var_418
            
            if (var_418 != 0)
                var_418[1].d -= 1
                
                if (var_418[1].d == 1)
                    (**var_418)(var_418)
                    int32_t rbx_6 = *(var_418 + 0xc)
                    *(var_418 + 0xc) -= 1
                    
                    if (rbx_6 == 1)
                        (*(*var_418 + 8))(var_418, zx.q(rbx_6))
            
            int64_t rax_59 = (*(*(arg1 - 0x220) + 0x150))(arg1 - 0x220)
            result = sub_1423d2710(data_143f5b298, rax_59, *(arg1 + 0x10), 6, &var_498)
            rcx_43 = var_498
        label_140969c4e:
            
            if (rcx_43 != 0)
                result = sub_140a74f90(rcx_43)
    else
        if (arg3 == 6)
            uint64_t var_4a8 = 0
            int32_t var_4a0_1 = 0
            sub_140a1d9d0(arg4, &var_4a8, arg5)
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                if (var_4a0_1 s<= 1)
                    void var_438
                    sub_140597df0(&var_4a8, 
                        sub_140ac6680(_vfprintf_p_l(&var_438, Beacon Connection Failed.", 
                            NetworkErrors")))
                    int64_t* var_430
                    
                    if (var_430 != 0)
                        var_430[1].d -= 1
                        
                        if (var_430[1].d == 1)
                            (**var_430)(var_430)
                            int32_t rbx_4 = *(var_430 + 0xc)
                            *(var_430 + 0xc) -= 1
                            
                            if (rbx_4 == 1)
                                (*(*var_430 + 8))(var_430, zx.q(rbx_4))
                
                result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
            
            rcx_43 = var_4a8
            goto label_140969c4e
        
        int64_t* var_478
        
        if (arg3 != 0x15)
            int64_t* var_488
            
            if (arg3 == 0x19)
                if (*(arg2 + 0x1a0) != &(*U"RGBXYZF10|")[8])
                    int32_t rdi_1 = 0
                    bool cond:1_1 = *(arg2 + 0x1ac) == 2
                    *(arg2 + 0x1a8) = 0
                    
                    if (not(cond:1_1))
                        sub_1405947f0(arg2 + 0x1a0, 2)
                        rdi_1 = *(arg2 + 0x1a8)
                    
                    *(arg2 + 0x1a8) = rdi_1 + 2
                    
                    if (rdi_1 + 2 s> *(arg2 + 0x1ac))
                        sub_140594770(arg2 + 0x1a0)
                    
                    **(arg2 + 0x1a0) = 0x30
                
                void* rdx_12 = **(arg2 + 0x1310)
                
                if (rdx_12 != 0 && (*(rdx_12 + 0x30) & 2) == 0)
                    void** var_408
                    sub_141f79620(&var_408, rdx_12, 0)
                    char var_4c7 = 4
                    int64_t* var_400
                    char* rdx_13 = *var_400
                    
                    if (&rdx_13[1] u> var_400[1])
                        var_408[0x2a](&var_408, &var_4c7, 1)
                    else
                        var_4c7 = *rdx_13
                        *var_400 += 1
                    
                    int32_t* rdx_15 = *var_400
                    
                    if (&rdx_15[1] u> var_400[1])
                        int64_t* rcx_30 = &var_408
                        char var_3df
                        
                        if ((var_3df & 0x20) != 0)
                            sub_140b54070(rcx_30, arg2 + 0x38, arg5)
                        else
                            var_408[0x2a](rcx_30, arg2 + 0x38, 4)
                    else
                        *(arg2 + 0x38) = *rdx_15
                        *var_400 += 4
                    
                    int64_t r9_1
                    r9_1.b = 1
                    int64_t* rcx_31 = **(arg2 + 0x1310)
                    void var_448
                    (*(*rcx_31 + 0x2c8))(rcx_31, &var_448, &var_408, r9_1)
                    sub_141f7bb50(&var_408)
                
                int64_t var_460 = *(*(arg1 - 0x210) + 0x18)
                int512_t zmm1_1 = sub_140b63b70(&var_460, &var_488)
                int32_t var_480
                
                if (var_480 s<= 1)
                    result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
                    rcx_43 = var_488
                else
                    void* rdx_19 = **(arg2 + 0x1310)
                    
                    if (rdx_19 != 0 && (*(rdx_19 + 0x30) & 2) == 0)
                        void** var_2e8
                        sub_141f79620(&var_2e8, rdx_19, 0)
                        char var_4c6 = 0x1a
                        int64_t* var_2e0
                        char* rdx_20 = *var_2e0
                        
                        if (&rdx_20[1] u> var_2e0[1])
                            var_2e8[0x2a](&var_2e8, &var_4c6, 1)
                        else
                            var_4c6 = *rdx_20
                            *var_2e0 += 1
                        
                        sub_14215ddd0(&var_2e8, arg2 + 0x160, 
                            sub_140a1d9d0(&var_2e8, &var_488, zmm1_1))
                        int64_t r9_2
                        r9_2.b = 1
                        int64_t* rcx_40 = **(arg2 + 0x1310)
                        void var_440
                        (*(*rcx_40 + 0x2c8))(rcx_40, &var_440, &var_2e8, r9_2)
                        sub_141f7bb50(&var_2e8)
                    
                    int64_t* rcx_42 = *(*(arg1 + 0x10) + 0x88)
                    result = (*(*rcx_42 + 0x2a8))(rcx_42, 0)
                    rcx_43 = var_488
                
                goto label_140969c4e
            
            if (arg3 == 0x1b)
                int64_t rax_3 = *arg4
                int32_t var_4c4 = 0
                (*(rax_3 + 0x168))(arg4, &var_4c4)
                result.b = not.b(*(arg4 + 0x29))
                
                if ((result.b & 1) != 0)
                    if (var_4c4 u> 0)
                        sub_142173190(*(*(arg2 + 0x58) + 0x150), &var_4c4, arg1 - 0x220)
                        int64_t var_468 = *(*(arg1 - 0x210) + 0x18)
                        int512_t zmm1 = sub_140b63b70(&var_468, &var_478)
                        void* rdx_3 = **(arg2 + 0x1310)
                        
                        if (rdx_3 != 0 && (*(rdx_3 + 0x30) & 2) == 0)
                            void** var_1c8
                            sub_141f79620(&var_1c8, rdx_3, 0)
                            char var_4c8 = 0x1c
                            int64_t* var_1c0
                            char* rdx_4 = *var_1c0
                            
                            if (&rdx_4[1] u> var_1c0[1])
                                var_1c8[0x2a](&var_1c8, &var_4c8, 1)
                            else
                                var_4c8 = *rdx_4
                                *var_1c0 += 1
                            
                            sub_140a1d9d0(&var_1c8, &var_478, zmm1)
                            int64_t r9
                            r9.b = 1
                            int64_t* rcx_10 = **(arg2 + 0x1310)
                            void var_450
                            (*(*rcx_10 + 0x2c8))(rcx_10, &var_450, &var_1c8, r9)
                            sub_141f7bb50(&var_1c8)
                        
                        int32_t var_480_1 = 0
                        var_488 = sub_14094ead8
                        void*** rax_11 = sub_140a84c80(0, 0x30, 0)
                        
                        if (rax_11 != 0)
                            *rax_11 = &data_142e33ea8
                            sub_140d3a3a0(&rax_11[1], arg1 - 0x220)
                            *(rax_11 + 0x10) = var_488.o
                            rax_11[5] = sub_140a387b0()
                            *rax_11 = &data_142e33f00
                        
                        void* rax_13 = sub_141dcc7f0(arg1 - 0x220)
                        int64_t var_a8 = 0
                        int32_t var_a0_1 = 0
                        
                        if (rax_11 != 0)
                            void** r8_2 = *rax_11
                            r8_2[8](rax_11, &var_a8, r8_2)
                        
                        void var_98
                        sub_140d3a3a0(&var_98, nullptr)
                        int64_t var_90_1 = 0
                        int64_t var_88_1 = 0
                        void* var_78_1 = nullptr
                        sub_1423e6200(rax_13, arg1 + 0x58, &var_a8, 0x41700000, 0, 0xbf800000)
                        
                        if (var_88_1 != 0)
                            void var_68
                            void* rcx_17 = &var_68
                            
                            if (var_78_1 != 0)
                                rcx_17 = var_78_1
                            
                            (*(*rcx_17 + 0x10))(rcx_17)
                        
                        result = sub_140745b20(&var_a8)
                        
                        if (rax_11 != 0)
                            (*rax_11)[7](rax_11, 0)
                            result = sub_140a84c80(rax_11, 0, 0)
                            
                            if (result != 0)
                                result = sub_140a74f90(result)
                        
                        rcx_43 = var_478
                        goto label_140969c4e
                    
                    result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
            else
                result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
        else if (data_143f4cf80 == 0)
            result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
        else
            int64_t* rcx_45 = data_143f4cf78
            
            if (rcx_45 == 0)
                result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
            else if ((*(*rcx_45 + 0x28))(rcx_45) == 0)
                result = (*(*(arg1 - 0x220) + 0x640))(arg1 - 0x220)
            else
                int64_t var_458
                sub_140d3a3a0(&var_458, arg2)
                int64_t rbx_3 = var_458
                var_478 = sub_14095fd30
                int32_t var_470_1 = 0
                int64_t* result_1 = nullptr
                int64_t* result_2 = sub_140a84c80(0, 0x30, 0)
                result_1 = result_2
                int32_t var_4b0_1 = 3
                
                if (result_2 != 0)
                    *result_2 = &data_142e33f58
                    sub_140d3a3a0(&result_2[1], arg1 - 0x220)
                    *(result_2 + 0x10) = var_478.o
                    result_2[4] = rbx_3
                    result_2[5] = sub_140a387b0()
                    *result_2 = &data_142e33fb0
                
                int64_t* rcx_48 = nullptr
                
                if (data_143f4cf80 != 0)
                    rcx_48 = data_143f4cf78
                
                result = (*(*rcx_48 + 0x48))(rcx_48, &result_1)
                
                if (var_4b0_1 == 0)
                    result = result_1
                label_140969a53:
                    
                    if (result != 0)
                        result = sub_140a74f90(result)
                else
                    int64_t* result_3 = result_1
                    
                    if (result_3 != 0)
                        (*(*result_3 + 0x38))(result_3, 0)
                        result = result_1
                        
                        if (result != 0)
                            result = sub_140a84c80(result, 0, 0)
                            result_1 = result
                        
                        int32_t var_4b0_2 = 0
                        goto label_140969a53

__security_check_cookie(rax_1 ^ &var_4f8)
return result
