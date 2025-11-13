// 函数: sub_14066dd20
// 地址: 0x14066dd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x28)
int64_t rsi = 0
int64_t* result = arg2
int64_t var_48 = 0
int32_t var_3c = 0
int32_t r14 = 0
int32_t r13 = 0
int32_t arg_8
sub_14062d6e0(rdi, &arg_8, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    *result = 0
    result[1] = 0
else
    void* rcx_1 = *rdi + rax * 0x28
    int64_t* rax_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 == 0)
        *result = 0
        result[1] = 0
    else
        void* rax_3 = *rax_2
        
        if (rax_3 == 0 || *(rax_3 + 8) != 5 || arg3[1].d s<= 1)
            *result = 0
            result[1] = 0
        else
            int64_t* rax_4 = sub_140b750d0(*(arg1 + 0x28), arg3)
            uint64_t var_58 = 0
            int32_t i_3 = rax_4[1].d
            int64_t rbx_1 = *rax_4
            int32_t i_4 = i_3
            
            if (i_3 != 0)
                sub_14061cb30(&var_58, i_3, 0)
                uint64_t rcx_4 = var_58
                int64_t rbx_2 = rbx_1 - rcx_4
                int32_t i
                
                do
                    *rcx_4 = *(rbx_2 + rcx_4)
                    void* rax_6 = *(rbx_2 + rcx_4 + 8)
                    *(rcx_4 + 8) = rax_6
                    
                    if (rax_6 != 0)
                        *(rax_6 + 8) += 1
                    
                    rcx_4 += 0x10
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                i_3 = i_4
            
            uint64_t r12 = var_58
            
            for (int32_t i_1 = 0; i_1 s>= 0; i_1 += 1)
                if (i_1 s>= i_3)
                    break
                
                char rax_7 = sub_140b74b60(*(r12 + sx.q(i_1) * 0x10))
                int64_t rbp_1 = sx.q(r14)
                r14 = (rbp_1 + 1).d
                
                if (r14 s> r13)
                    sub_140679a80(&var_48)
                    r13 = var_3c
                    rsi = var_48
                
                *(rbp_1 + rsi) = rax_7
            
            result = arg2
            uint64_t rbp_2 = var_58
            *result = rsi
            result[1].d = r14
            *(result + 0xc) = r13
            
            if (i_3 != 0)
                int64_t* rsi_1 = rbp_2 + 8
                int32_t i_2
                
                do
                    int64_t* rbx_3 = *rsi_1
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp3_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rsi_1 = &rsi_1[2]
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            if (rbp_2 != 0)
                sub_140a74f90(rbp_2)

return result
