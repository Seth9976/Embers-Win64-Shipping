// 函数: sub_14085ae10
// 地址: 0x14085ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_14396e7c0)
int32_t result = sub_140b4e7c0(arg2, &data_14396e7c0)

if (result s>= 0x33)
    int64_t* rax_3
    int512_t zmm1_1
    rax_3, zmm1_1 = sub_140880290()
    bool cond:0_1 = (arg2[5].b & 2) == 0
    int64_t* var_1f0 = rax_3
    int32_t result_1 = 0
    
    if (not(cond:0_1))
        result_1 = *(arg1 + 0xa0)
    
    int64_t* rdx = arg2[1]
    int32_t* r8_1 = *rdx
    
    if (&r8_1[1] u> rdx[1])
        int32_t* rdx_1 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_1, zmm1_1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        result = *r8_1
        result_1 = result
        *rdx += 4
    
    if ((arg2[5].b & 1) != 0)
        result = *(arg1 + 0xa4)
        void* rsi_1 = *(arg1 + 0x98)
        int32_t i_2 = *(arg1 + 0xa0)
        
        if (result s< 0)
            if (i_2 != 0)
                void* rsi_3 = rsi_1 + 8
                int32_t i
                
                do
                    int64_t* rbx_2 = *rsi_3
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp5_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rsi_3 += 0x10
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                result = *(arg1 + 0xa4)
            
            *(arg1 + 0xa0) = 0
            
            if (result != 0)
                result = sub_1405a5410(arg1 + 0x98, 0)
        else
            if (i_2 != 0)
                int64_t* rsi_2 = rsi_1 + 8
                int32_t i_1
                
                do
                    int64_t* rbx_1 = *rsi_2
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            result = (**rbx_1)(rbx_1)
                            int32_t temp6_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rsi_2 = &rsi_2[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            *(arg1 + 0xa0) = 0
    
    int32_t rbp_1 = 0
    
    if (result_1 s> 0)
        int64_t* r13_1 = var_1f0
        int64_t* r14_2 = nullptr
        
        do
            if ((arg2[5].b & 1) != 0)
                void*** rax_9 = j_sub_140a82f30(0x150)
                void*** rbx_3 = rax_9
                
                if (rax_9 == 0)
                    rbx_3 = nullptr
                else
                    rax_9[1].d = 1
                    *(rax_9 + 0xc) = 1
                    *rax_9 = &data_142ddc038
                    sub_140842920(&rax_9[2])
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                int64_t rdi_1 = sx.q(*(arg1 + 0xa0))
                int32_t rax_10 = (rdi_1 + 1).d
                *(arg1 + 0xa0) = rax_10
                
                if (rax_10 s> *(arg1 + 0xa4))
                    sub_1405a4f90(arg1 + 0x98)
                
                void** rax_13 = (rdi_1 << 4) + *(arg1 + 0x98)
                *rax_13 = &rbx_3[2]
                rax_13[1] = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_14 = rbx_3[1].d
                    rbx_3[1].d = rax_14
                    
                    if (rax_14 == 0)
                        (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*rbx_3)[1](rbx_3, 1)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp10_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*rbx_3)[1](rbx_3, 1)
            
            int64_t rax_19 = *(arg1 + 0x98)
            int64_t* rdi_2 = *(r14_2 + rax_19 + 8)
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            void** var_1d8
            (*(*r13_1 + 0x290))(r13_1, *SymBuffer::end(sub_140b4cb20(&var_1d8, arg2), &var_1f0), 
                *(r14_2 + rax_19), r13_1, 0, 0)
            result = sub_140b4cbb0(&var_1d8)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp7_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbp_1 += 1
            r14_2 = &r14_2[2]
        while (rbp_1 s< result_1)

__security_check_cookie(rax_1 ^ &var_228)
return result
