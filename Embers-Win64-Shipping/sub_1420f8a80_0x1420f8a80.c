// 函数: sub_1420f8a80
// 地址: 0x1420f8a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
int16_t* var_470 = arg1
int16_t* r15 = arg1
int16_t* var_498 = arg3
arg3.b = 1
int64_t result
int64_t r8
result, r8 = sub_140b0f6c0(&var_498, u"LISTMOVEBODY")

if (result.b == 0)
    r8.b = 1
    char rax_2
    int64_t r8_1
    rax_2, r8_1 = sub_140b0f6c0(&var_498, u"r.LockView")
    
    if (rax_2 == 0)
        r8_1.b = 1
        char rax_7
        int64_t r8_8
        rax_7, r8_8 = sub_140b0f6c0(&var_498, u"r.ResetViewState")
        
        if (rax_7 == 0)
            r8_8.b = 1
            char rax_9
            int64_t r8_9
            rax_9, r8_9 = sub_140b0f6c0(&var_498, u"LISTAWAKEBODIES")
            
            if (rax_9 == 0)
                r8_9.b = 1
                char rax_12
                int64_t r8_10
                rax_12, r8_10 = sub_140b0f6c0(&var_498, u"LISTSIMBODIES")
                
                if (rax_12 == 0)
                    r8_10.b = 1
                    int64_t r8_11
                    result, r8_11 = sub_140b0f6c0(&var_498, u"MOVECOMPTIMES")
                    
                    if (result.b == 0)
                        r8_11.b = 1
                        char rax_15
                        int64_t r8_12
                        rax_15, r8_12 = sub_140b0f6c0(&var_498, u"LISTSKELMESHES")
                        
                        if (rax_15 == 0)
                            r8_12.b = 1
                            char rax_16
                            int64_t r8_14
                            rax_16, r8_14 = sub_140b0f6c0(&var_498, u"LISTPAWNCOMPONENTS")
                            
                            if (rax_16 == 0)
                                r8_14.b = 1
                                char rax_17
                                int64_t r8_16
                                rax_17, r8_16 = sub_140b0f6c0(&var_498, u"EXEC")
                                
                                if (rax_17 == 0)
                                    r8_16.b = 1
                                    char rax_19
                                    int64_t r8_18
                                    rax_19, r8_18 = sub_140b0f6c0(&var_498, TOGGLESTREAMINGVOLUMES")
                                    r8_18.b = 1
                                    
                                    if (rax_19 == 0)
                                        if (sub_140b0f6c0(&var_498, u"CANCELMATINEE") == 0)
                                            void* rcx_48 = *(r15 + 0x48)
                                            
                                            if (rcx_48 != 0)
                                                result = (*(*(rcx_48 + 0x38) + 8))(rcx_48 + 0x38, 
                                                    arg2, var_498, arg4)
                                            
                                            if (rcx_48 != 0 && result.b != 0)
                                                result.b = 1
                                            else
                                                result = sub_142269280(r15, arg2, var_498, arg4)
                                                
                                                if (result.b != 0)
                                                    result.b = 1
                                        else
                                            result = sub_1420fc9c0(&r15[-0x14], var_498, arg5)
                                    else
                                        var_470 = var_498
                                        char rax_21
                                        int64_t r8_19
                                        rax_21, r8_19 = sub_140b0f6c0(&var_470, &data_142fdd24c)
                                        
                                        if (rax_21 == 0)
                                            r8_19.b = 1
                                            char rax_23 = sub_140b0f6c0(&var_470, &data_142fdd290)
                                            int64_t rdx_16 = *(*(r15 - 0x28) + 0x150)
                                            void* rcx_44 = &r15[-0x14]
                                            bool cond:0_1
                                            
                                            if (rax_23 == 0)
                                                cond:0_1 = *(rdx_16(rcx_44) + 0x4dc) != 0xffffffff
                                                rcx_44 = &r15[-0x14]
                                                rdx_16 = *(*(r15 - 0x28) + 0x150)
                                            
                                            if (rax_23 != 0 || cond:0_1)
                                                *(rdx_16(rcx_44) + 0x4dc) = 0xffffffff
                                                result.b = 1
                                            else
                                                *(rdx_16(rcx_44) + 0x4dc) = 0
                                                result.b = 1
                                        else
                                            *((*(*(r15 - 0x28) + 0x150))(r15 - 0x28) + 0x4dc) = 0
                                            result.b = 1
                                else
                                    var_470 = var_498
                                    void var_458
                                    
                                    if (sub_140b297e0(&var_470, &var_458, 0x200, 0).b == 0)
                                        result.b = 1
                                    else
                                        sub_1420f91f0(&r15[-0x14], &var_458, arg4)
                                        result.b = 1
                            else
                                result = sub_1420fdd70()
                        else
                            result = sub_1420fe030()
                    else
                        data_143f48484 = 1
                        result.b = 1
                else
                    sub_142271f90(*((*(*(r15 - 0x28) + 0x150))(r15 - 0x28) + 0x1f8), 0)
                    result.b = 1
            else
                sub_142271f90(*((*(*(r15 - 0x28) + 0x150))(r15 - 0x28) + 0x1f8), 1)
                result.b = 1
        else
            void* rbx_7 = *(r15 + 0x80)
            void* rdi_2 = rbx_7 + sx.q(*(r15 + 0x88)) * 0x28
            
            if (rbx_7 == rdi_2)
                result.b = 1
            else
                do
                    int64_t* rcx_24 = *(rbx_7 + 8)
                    (*(*rcx_24 + 0x38))(rcx_24)
                    rbx_7 += 0x28
                while (rbx_7 != rdi_2)
                
                result.b = 1
    else
        int16_t* rsi_1 = var_498
        int32_t i_6 = 0
        int32_t rdx = 0
        int32_t rcx_2 = 0
        int32_t r8_2 = 0
        int16_t* r9 = nullptr
        int16_t* var_490
        __builtin_memset(&var_490, 0, 0x20)
        int32_t var_488
        int32_t i_4
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rsi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_490, rbx_1.d + 1)
                int32_t var_484
                rcx_2 = var_484
                rdx = var_488
                r9 = var_490
            
            int32_t rax_3 = rdx + rbx_1.d + 1
            var_488 = rax_3
            
            if (rax_3 s> rcx_2)
                sub_140594770(&var_490)
                r9 = var_490
            
            UnDecorator::getReferenceType(r9, rsi_1, (rbx_1.d + 1) * 2)
            int32_t var_474
            r8_2 = var_474
            rdx = var_488
            r9 = var_490
            i_6 = i_4
        
        int16_t* rcx_6 = r9
        void* rdx_3 = &r9[sx.q(rdx)]
        
        if (r9 != rdx_3)
            while (*rcx_6 != 0x3b)
                rcx_6 = &rcx_6[1]
                
                if (rcx_6 == rdx_3)
                    goto label_1420f8bd3
        
        int64_t* var_480
        
        if (r9 == rdx_3 || ((rcx_6 - r9) s>> 1).d == 0xffffffff)
        label_1420f8bd3:
            result = zx.q(i_6 + 1)
            i_4 = result.d
            
            if (result.d s> r8_2)
                result, r9 = sub_1405a4f90(&var_480)
            
            int64_t* rbx_5 = &var_480[sx.q(i_6) * 2]
            *rbx_5 = 0
            int16_t* r14_1 = var_490
            rbx_5[1].d = var_488
            
            if (var_488 != 0)
                sub_1405a4c70(rbx_5, var_488, 0)
                result, r9 = memcpy(*rbx_5, r14_1, var_488 * 2)
            else
                *(rbx_5 + 0xc) = 0
        else
            r9.b = 1
            result, r9 = sub_140a2ccb0(&var_490, &var_480, U";", r9.b)
        
        int32_t i_2 = i_4
        int32_t r14_2 = 0
        
        if (i_2 s> 0)
            TEB* gsbase
            int64_t r13_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            
            do
                r9.b = 1
                int64_t* var_468 = nullptr
                int32_t i_5 = 0
                sub_140a2cee0(&var_480[sx.q(r14_2) * 2], &var_468, nullptr, r9.b)
                
                if (data_143f488c8 s> *(0x14 + r13_1))
                    _Init_thread_header(&data_143f488c8)
                    
                    if (data_143f488c8 == 0xffffffff)
                        __builtin_memset(&data_143f487d0, 0, 0x2c)
                        data_143f487fc = 0x80
                        data_143f48800 = 0xffffffff
                        data_143f48804 = 0
                        data_143f48810 = 0
                        data_143f48818 = 0
                        data_143f48820 = &data_1432c6208
                        __builtin_memset(&data_143f48828, 0, 0x2c)
                        data_143f48854 = 0x80
                        data_143f48858 = 0xffffffff
                        data_143f4885c = 0
                        data_143f48868 = 0
                        data_143f48870 = 0
                        InitializeCriticalSection(&data_143f48878)
                        SetCriticalSectionSpinCount(&data_143f48878, 0xfa0)
                        int32_t rax_28 = data_143dbb200
                        data_143f488a8 = data_143dbb1f8.q
                        int64_t zmm0 = data_143dbb208
                        data_143f488b0 = rax_28
                        int32_t rax_29 = data_143dbb210
                        data_143f488b8 = zmm0
                        data_143f488a0 = 0
                        data_143f488b4 = 0x42b40000
                        data_143f488c0 = rax_29
                        data_143f488c4 = 0
                        atexit(sub_142d02760)
                        _Init_thread_footer(&data_143f488c8)
                
                result, r9 = sub_1420feb10(&data_143f487d0, &r15[-0x14], &var_468)
                int32_t i_3 = i_5
                int64_t* rbx_6 = var_468
                
                if (i_3 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_17 = *rbx_6
                        
                        if (rcx_17 != 0)
                            result, r9 = sub_140a74f90(rcx_17)
                        
                        rbx_6 = &rbx_6[2]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    rbx_6 = var_468
                
                if (rbx_6 != 0)
                    result, r9 = sub_140a74f90(rbx_6)
                
                i_2 = i_4
                r14_2 += 1
            while (r14_2 s< i_2)
            
            r15 = var_470
        
        if (i_2 s> 1)
            sub_1420f9750()
            sub_142101960(&data_143f48820, &r15[-0x14])
            i_2 = i_4
        
        int16_t* rcx_19 = var_490
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
            i_2 = i_4
        
        int64_t* rdi_1 = var_480
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx_20 = *rdi_1
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                rdi_1 = &rdi_1[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rdi_1 = var_480
        
        if (rdi_1 == 0)
            result.b = 1
        else
            sub_140a74f90(rdi_1)
            result.b = 1
else
    data_143f48485 = 1
    result.b = 1

__security_check_cookie(rax_1 ^ &var_4b8)
return result
