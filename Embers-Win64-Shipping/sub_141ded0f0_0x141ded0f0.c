// 函数: sub_141ded0f0
// 地址: 0x141ded0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (arg1[1].d s> 0)
    int64_t** rdi_1 = nullptr
    
    do
        void** rbp_1 = *arg1
        int64_t* rbx_1 = *(rdi_1 + rbp_1)
        
        if (rbx_1 == 0)
            goto label_141ded1c2
        
        void* rax = sub_14245c440()
        void* rdx = rbx_1[2]
        result = sx.q(*(rax + 0x38))
        
        if (result.d s> *(rdx + 0x38))
        label_141ded1be:
            rbx_1 = *(rdi_1 + rbp_1)
        label_141ded1c2:
            char r14_1 = 0
            
            if (rbx_1 != 0 && not(0f f>= rbx_1[0x12].d))
                result = (*(*rbx_1 + 0x320))(rbx_1)
                
                if (result.b != 0)
                    if (arg1[1].d s<= 0)
                        r14_1 = 1
                    else
                        result = *arg1
                        void* const rcx_5 = *result
                        
                        if (rcx_5 == 0)
                            r14_1 = 1
                        else
                            result = (*(*rcx_5 + 0x318))(rcx_5)
                            int32_t r15_1 = result.d
                            
                            if (result.d == 0xffffffff)
                                r14_1 = 1
                            else
                                int64_t rdx_4 = *rbx_1
                                result = (*(rdx_4 + 0x318))(rbx_1, rdx_4)
                                
                                if (r15_1 == result.d)
                                    r14_1 = 1
            
            *(rdi_1 + rbp_1 + 0x1c) = r14_1
        else
            void* const* result_1 = result
            result = *(rdx + 0x30)
            
            if (result[result_1] != rax + 0x30)
                goto label_141ded1be
            
            int64_t* var_48 = nullptr
            int64_t var_40_1 = 1
            sub_1405a4d70(&var_48)
            *var_48 = arg2
            
            if ((*(*rbx_1 + 0x340))(rbx_1, &var_48).b == 0)
                result = sub_141ded740(arg1, rbx_1)
            else
                result.b = 0
            
            *(rdi_1 + rbp_1 + 0x1c) = result.b
            int64_t* rcx_3 = var_48
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
        
        i += 1
        rdi_1 = &rdi_1[4]
    while (i s< arg1[1].d)

return result
