// 函数: sub_142240e70
// 地址: 0x142240e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result

if (arg1[0x86] != 0 && arg1[0x101].d s> 0)
    result = zx.q((*(*arg1 + 0x4c8))() - 2)
    
    if (result.d u<= 1)
        sub_141f3e990(arg1, 1, 1)
        char rax_4
        
        if (*data_143f51a08 != 0)
            rax_4 = sub_140b011d0()
        
        if (*data_143f51a08 == 0 || rax_4 == 0)
            sub_142250050(arg1)
            result = sub_142249610(arg1)
        else
            if (*(arg1[0x86] + 0x1b0) != arg1[0x144].d)
                void* rax_9 = &arg1[(sx.q(*(arg1 + 0x494)) + 0x45) * 2]
                
                if (&arg1[0x141] != rax_9)
                    int64_t rdi_1 = sx.q(*(rax_9 + 8))
                    int64_t r14_1 = *rax_9
                    int32_t r8_2 = *(arg1 + 0xa14)
                    arg1[0x142].d = rdi_1.d
                    
                    if (rdi_1.d != 0 || r8_2 != 0)
                        sub_1405a4b40(&arg1[0x141], rdi_1.d, r8_2)
                        memcpy(arg1[0x141], r14_1, (rdi_1 * 0x30).d)
                    else
                        *(arg1 + 0xa14) = rdi_1.d
            
            int32_t rdx_2 = arg1[0xd0].d
            arg1[0x144].d = 0
            
            if (rdx_2 s> *(arg1 + 0xa24))
                sub_1405a5220(&arg1[0x143], rdx_2)
            
            int64_t rdi_2 = sx.q(arg1[0xd0].d)
            
            if (rdi_2.d != 0)
                int32_t rcx_5 = arg1[0x144].d
                int32_t rdx_3 = rcx_5 + rdi_2.d
                
                if (rdx_3 s> *(arg1 + 0xa24))
                    sub_1405a5220(&arg1[0x143], rdx_3)
                    rcx_5 = arg1[0x144].d
                
                memcpy(sx.q(rcx_5) * 0x30 + arg1[0x143], arg1[0xcf], (rdi_2 * 0x30).d)
                arg1[0x144].d += rdi_2.d
            
            void var_90
            int64_t* rax_11 = sub_142244b30(&var_90, nullptr, 0xff)
            void* rbx_3 = *rax_11
            int64_t var_b0
            sub_140d3a3a0(&var_b0, arg1)
            *(rbx_3 + 0x10) = var_b0
            void* rcx_13 = *rax_11
            int32_t r8_7 = rax_11[2].d
            int64_t* rdx_6 = rax_11[1]
            int64_t* rbx_4 = *(rcx_13 + 0x20)
            int64_t* var_c0 = rbx_4
            
            if (rbx_4 != 0)
                rbx_4[9].d += 1
            
            sub_142253340(rcx_13, rdx_6, r8_7, 1)
            
            if (&arg1[0x13c] != &var_c0)
                int64_t* rcx_14 = arg1[0x13c]
                arg1[0x13c] = rbx_4
                
                if (rcx_14 != 0)
                    rcx_14[9].d -= 1
                    
                    if (rcx_14[9].d == 1)
                        sub_140a2f6e0(rcx_14)
            else if (rbx_4 != 0)
                rbx_4[9].d -= 1
                
                if (rbx_4[9].d == 1)
                    sub_140a2f6e0(var_c0)
            
            void* rax_14 = arg1[0x13c]
            void** var_40_1 = nullptr
            int32_t var_34_1 = 4
            int32_t i_2 = 1
            void* var_60 = rax_14
            
            if (rax_14 != 0)
                *(rax_14 + 0x48) += 1
            
            void var_78
            int64_t* rax_15 = sub_1422449b0(&var_78, &var_60, 0xff)
            void* rbx_5 = *rax_15
            int64_t var_a8
            sub_140d3a3a0(&var_a8, arg1)
            *(rbx_5 + 0x10) = var_a8
            void* rcx_18 = *rax_15
            int32_t r8_8 = rax_15[2].d
            int64_t* rdx_9 = rax_15[1]
            int64_t* rbx_6 = *(rcx_18 + 0x20)
            int64_t* var_b8 = rbx_6
            
            if (rbx_6 != 0)
                rbx_6[9].d += 1
            
            sub_141f4a6e0(rcx_18, rdx_9, r8_8, 1)
            
            if (&arg1[0x13d] != &var_b8)
                int64_t* rcx_19 = arg1[0x13d]
                arg1[0x13d] = rbx_6
                
                if (rcx_19 != 0)
                    rcx_19[9].d -= 1
                    
                    if (rcx_19[9].d == 1)
                        sub_140a2f6e0(rcx_19)
            else if (rbx_6 != 0)
                rbx_6[9].d -= 1
                
                if (rbx_6[9].d == 1)
                    sub_140a2f6e0(var_b8)
            
            int64_t* var_a0
            *(*sub_1423c0d30(arg2, &var_a0) + 0x4c) = 2
            int64_t* rcx_22 = var_a0
            
            if (rcx_22 != 0)
                rcx_22[9].d -= 1
                
                if (rcx_22[9].d == 1)
                    sub_140a2f6e0(rcx_22)
            
            int64_t* rbx_7 = arg1[0x13d]
            
            if (rbx_7 != 0)
                rbx_7[9].d += 1
            
            int64_t* var_98
            uint64_t result_2 = *sub_1423c0d30(arg2, &var_98) + 0x18
            int64_t r14_2 = sx.q(*(result_2 + 0x28))
            int32_t rax_21 = (r14_2 + 1).d
            *(result_2 + 0x28) = rax_21
            
            if (rax_21 s> *(result_2 + 0x2c))
                sub_14083a490(result_2, r14_2.d)
            
            result = *(result_2 + 0x20)
            
            if (result != 0)
                result_2 = result
            
            void* rcx_25 = result_2 + (r14_2 << 3)
            
            if (rcx_25 == 0)
                goto label_1422411c9
            
            *rcx_25 = rbx_7
            
            if (rbx_7 != 0)
                rbx_7[9].d += 1
            label_1422411c9:
                
                if (rbx_7 != 0)
                    result = zx.q(rbx_7[9].d)
                    rbx_7[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rbx_7)
            
            int64_t* rcx_27 = var_98
            
            if (rcx_27 != 0)
                result = zx.q(rcx_27[9].d)
                rcx_27[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_27)
            
            void** rcx_29 = var_40_1
            void** rbx_8 = &var_60
            int32_t i_1 = i_2
            
            if (rcx_29 != 0)
                rbx_8 = rcx_29
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t* rcx_28 = *rbx_8
                    
                    if (rcx_28 != 0)
                        result = zx.q(rcx_28[9].d)
                        rcx_28[9].d -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(rcx_28)
                    
                    rbx_8 = &rbx_8[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rcx_29 = var_40_1
            
            if (rcx_29 != 0)
                result = sub_140a74f90(rcx_29)

__security_check_cookie(result_1 ^ &var_e8)
return result
