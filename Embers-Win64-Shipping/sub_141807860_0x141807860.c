// 函数: sub_141807860
// 地址: 0x141807860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    do
        int64_t* rcx_1 = data_143ef9cf8
        
        if (rcx_1 == 0)
            void arg_8
            int64_t rbx_1 = *sub_140b58170(&arg_8, "HTTP", (rcx_1 + 1).d)
            j_sub_140b3db50()
            j_sub_140b407e0(&data_143de7d78, rbx_1)
            rcx_1 = data_143ef9cf8
        
        void var_48
        int64_t* rax_2 = (*(*rcx_1 + 0x40))(rcx_1, &var_48)
        int64_t* rdi_1 = rax_2[1]
        int64_t* r14_1 = *rax_2
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        int64_t* rax_6 = (*(*r14_1 + 0x90))(r14_1)
        int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_7 != 0)
            rax_7[1] = arg1
            *rax_7 = &data_142fe23d8
            rax_7[2] = sub_141807730
            rax_7[4] = sub_140a387b0()
            *rax_7 = &data_142fe2430
        
        void var_38
        
        if (&var_38 == rax_6)
            goto label_141807983
        
        if (rax_7 != 0)
            (*(*rax_7 + 0x40))(rax_7, rax_6)
        label_141807983:
            
            if (rax_7 != 0)
                (*(*rax_7 + 0x38))(rax_7, 0)
                int64_t rax_11 = sub_140a84c80(rax_7, 0, 0)
                
                if (rax_11 != 0)
                    sub_140a74f90(rax_11)
        else if (rax_6[1].d != 0)
            int64_t* rcx_15 = *rax_6
            
            if (rcx_15 != 0)
                (*(*rcx_15 + 0x38))(rcx_15, 0)
                int64_t rcx_16 = *rax_6
                
                if (rcx_16 != 0)
                    *rax_6 = sub_140a84c80(rcx_16, 0, 0)
                
                rax_6[1].d = 0
        
        (*(*r14_1 + 0x50))(r14_1, arg1 + 0x20)
        int32_t rax_13 = *(arg1 + 0x18)
        
        if (rax_13 != 0 && rax_13 - 1 s> 0)
            (*(*r14_1 + 0x60))(r14_1, arg1 + 0x10)
        
        (*(*r14_1 + 0x48))(r14_1, arg1)
        result = (*(*r14_1 + 0x88))(r14_1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        i += 1
    while (i s< *(arg1 + 0x30))

return result
