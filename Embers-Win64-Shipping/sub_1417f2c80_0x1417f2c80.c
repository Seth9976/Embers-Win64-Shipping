// 函数: sub_1417f2c80
// 地址: 0x1417f2c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x88) & 1) != 0)
    int64_t r14_1 = 0
    void* var_78 = nullptr
    result = &var_78
    int32_t result_2 = 0
    void* rdi_1 = nullptr
    void* var_68 = arg1
    void** var_60_1 = &var_78
    
    if (arg2 != 0)
        result = sub_1417eb0a0(&var_68)
        rdi_1 = var_78
    
    int64_t* result_4 = nullptr
    
    if (*(arg1 + 0x41d) == 0)
        int64_t* rcx_31 = *(arg1 + 0x4a0)
        
        if (rcx_31 != 0)
            result = sub_141f479b0(rcx_31, 1, 1)
            rdi_1 = var_78
    else
        int32_t i
        uint64_t result_9
        uint64_t result_3
        
        if (*(arg1 + 0x420) != data_143ef96f0)
            int64_t* rax_6 = sub_1417f08f0(&result_9)
            sub_140a387e0()
            int64_t* var_58
            sub_140d6fcf0(&data_14399e720, &var_58, *rax_6)
            int64_t* r13_1 = var_58
            int32_t var_50
            result = &r13_1[sx.q(var_50)]
            result_3 = result
            
            if (r13_1 != result)
                do
                    int64_t rbx_5 = *(arg1 + 0x420)
                    int64_t* r15_1 = *r13_1
                    void arg_20
                    
                    if (rbx_5 != 0)
                        result, i = (**r15_1)(r15_1, &arg_20)
                    
                    if (rbx_5 == 0 || *result == rbx_5)
                        result = *(arg1 + 0x410)
                        int32_t rdi_2
                        
                        if (result != data_143ef9718)
                            char r10_1 = 0
                            int64_t* r9_2 = &data_143ef9720
                            char rcx_11
                            
                            for (i = 0; i s< 0x11; )
                                int32_t rdx_5 = 0
                                int64_t* rcx_10 = r9_2
                                
                                while (true)
                                    if (*rcx_10 == result)
                                        rcx_11 = i.b
                                        r10_1 = 1
                                        result_9.b = rcx_11
                                        break
                                    
                                    rdx_5 += 1
                                    rcx_10 = &rcx_10[1]
                                    
                                    if (rdx_5 u>= 2)
                                        rcx_11 = result_9.b
                                        break
                                
                                i += 1
                                r9_2 = &r9_2[2]
                            
                            if (r10_1 == 0)
                                break
                            
                            rdi_2 = (*(*r15_1 + 0x10))(r15_1, zx.q(rcx_11), i)
                        else
                            rdi_2 = 0
                        
                        int64_t var_98
                        
                        if (*(arg1 + 0x4a0) != 0 && r15_1 != 0)
                            int64_t rbx_6 = *(arg1 + 0x4ac)
                            result, i = (**r15_1)(r15_1, &var_98)
                            
                            if (*result == rbx_6 && *(arg1 + 0x4b4) == rdi_2)
                                break
                        
                        *(arg1 + 0x4a8) = 1
                        int32_t var_40_1 = 0
                        void (* var_48_1)(void* arg1, int64_t* arg2) = sub_1417f21c0
                        void* const* result_1 = nullptr
                        int32_t var_80_1 = 0
                        void*** result_5 = sub_140a84c80(0, 0x30, 0)
                        result_1 = result_5
                        int32_t var_80_2 = 3
                        
                        if (result_5 != 0)
                            *result_5 = &data_142fd1390
                            sub_140d3a3a0(&result_5[1], arg1)
                            *(result_5 + 0x10) = var_48_1.o
                            result_5[5] = sub_140a387b0()
                            *result_5 = &data_142fd13e8
                        
                        int32_t var_c8
                        var_c8.b = 0
                        result, i = (*(*r15_1 + 0x18))(r15_1, zx.q(rdi_2), *(arg1 + 0xa0), 
                            0x100008, 0, &result_1)
                        result_4 = result
                        
                        if (result != 0)
                            if (*(arg1 + 0x4a8) != 3)
                                *(arg1 + 0x4a8) = 2
                            
                            sub_1417eb0a0(&var_68)
                            result, i = (**r15_1)(r15_1, &var_98)
                            *(arg1 + 0x4ac) = var_98
                            *(arg1 + 0x4b4) = rdi_2
                            
                            if (var_80_2 == 0)
                                result = result_1
                            label_1417f3080:
                                
                                if (result != 0)
                                    result, i = sub_140a74f90(result)
                            else
                                void* const* result_7 = result_1
                                
                                if (result_7 != 0)
                                    (*(*result_7 + 0x38))(result_7, 0)
                                    result = result_1
                                    
                                    if (result != 0)
                                        result, i = sub_140a84c80(result, 0, 0)
                                        result_1 = result
                                    
                                    int32_t var_80_4 = 0
                                    goto label_1417f3080
                            
                            break
                        
                        *(arg1 + 0x4a8) = 0
                        
                        if (var_80_2 == 0)
                            result = result_1
                        label_1417f2fed:
                            
                            if (result != 0)
                                result, i = sub_140a74f90(result)
                        else
                            void* const* result_6 = result_1
                            
                            if (result_6 != 0)
                                void* const r8_5 = *result_6
                                (*(r8_5 + 0x38))(result_6, 0, r8_5)
                                result = result_1
                                
                                if (result != 0)
                                    result, i = sub_140a84c80(result, 0, 0)
                                    result_1 = result
                                
                                int32_t var_80_3 = 0
                                goto label_1417f2fed
                    
                    r13_1 = &r13_1[1]
                while (r13_1 != result_3)
            
            int64_t* rcx_22 = var_58
            
            if (rcx_22 != 0)
                result, i = sub_140a74f90(rcx_22)
            
        label_1417f30a3:
            
            if (result_4 == 0 || result_4 == *(arg1 + 0x4a0))
                rdi_1 = var_78
            else
                result_9 = 0
                sub_141f4a650(result_4, arg1, 0)
                (*(*result_4 + 0x618))(result_4, 0)
                sub_141ef1390(result_4)
                rdi_1 = var_78
                result = sx.q(result_2)
                void* rcx_26 = rdi_1 + (result << 3)
                uint64_t r15_5 = (rcx_26 - rdi_1 + 7) u>> 3
                
                if (rdi_1 u> rcx_26)
                    r15_5 = 0
                
                if (r15_5 != 0)
                    result_9 = 0
                    
                    do
                        result = sub_141f4a650(*rdi_1, result_4, 0)
                        r14_1 += 1
                        rdi_1 += 8
                    while (r14_1 != r15_5)
                    
                    rdi_1 = var_78
                
                *(arg1 + 0x4a0) = result_4
        else
            void* rbx_1 = *(arg1 + 0x4a0)
            int64_t rbx_2
            
            if (rbx_1 != 0)
                rbx_2 = *(rbx_1 + 0x10)
                result, i = sub_1425b0750()
            
            if (rbx_1 == 0 || rbx_2 != result)
                sub_1417eb0a0(&var_68)
                sub_140d25240(&result_3, arg1, sub_1425b0750(), 
                    *sub_140b58260(&result_9, MotionControllerMesh", 1))
                uint64_t result_8 = result_3
                result_9 = result_8
                char rax_3 = sub_140b5b8a0(result_8.d, 0)
                int32_t rcx_4
                rcx_4.b = result_9:4.d == 0
                
                if ((rcx_4.b & rax_3) != 0)
                    sub_140d19010(arg1, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                result, i = sub_140d2dfc0(sub_1425b0750(), arg1, result_8, 0x100008, 0, 0, 0, 0, 0)
                result_4 = result
            else
                result_4 = *(arg1 + 0x4a0)
            
            if (result_4 != 0)
                int64_t rdx_2 = *(arg1 + 0x428)
                
                if (rdx_2 != 0)
                    result, i = (*(*result_4 + 0x8a0))(result_4, rdx_2)
                
                goto label_1417f30a3
            
            rdi_1 = var_78
        int64_t* rcx_29 = *(arg1 + 0x4a0)
        
        if (rcx_29 != 0)
            if (*(arg1 + 0x4a8) != 2)
                sub_1417f21c0(arg1, rcx_29)
                rcx_29 = *(arg1 + 0x4a0)
            
            i.b = 1
            sub_141f479b0(rcx_29, *(arg1 + 0x14d) u>> 2 & 1, i.b)
            result = sub_141f49a80(*(arg1 + 0x4a0), *(arg1 + 0x14c) u>> 5 & 1, 1)
            rdi_1 = var_78
    
    if (rdi_1 != 0)
        return sub_140a74f90(rdi_1)

return result
