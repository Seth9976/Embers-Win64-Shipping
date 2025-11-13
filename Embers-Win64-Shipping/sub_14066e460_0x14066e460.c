// 函数: sub_14066e460
// 地址: 0x14066e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x28)
int64_t* result = arg2
int64_t var_70 = 0
int32_t var_64 = 0
int32_t r12 = 0
int32_t i_4
sub_14062d6e0(rdi, &i_4, arg3)
int64_t i_5 = sx.q(i_4)

if (i_5.d == 0xffffffff)
    *result = 0
    result[1] = 0
else
    void* rcx_1 = *rdi + i_5 * 0x28
    int64_t* rax_1 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_1 = nullptr
    
    if (rax_1 == 0)
        *result = 0
        result[1] = 0
    else
        void* rcx_2 = *rax_1
        
        if (rcx_2 == 0 || *(rcx_2 + 8) != 5 || arg3[1].d s<= 1)
            *result = 0
            result[1] = 0
        else
            int64_t* rax_2 = sub_140b750d0(*(arg1 + 0x28), arg3)
            uint64_t rsi_1 = 0
            uint64_t var_60 = 0
            int32_t i_2 = rax_2[1].d
            int64_t rbx_1 = *rax_2
            i_4 = i_2
            int32_t i_3 = i_2
            
            if (i_2 != 0)
                sub_14061cb30(&var_60, i_2, 0)
                rsi_1 = var_60
                uint64_t rcx_5 = rsi_1
                int64_t rbx_2 = rbx_1 - rsi_1
                int32_t i
                
                do
                    *rcx_5 = *(rbx_2 + rcx_5)
                    void* rax_4 = *(rbx_2 + rcx_5 + 8)
                    *(rcx_5 + 8) = rax_4
                    
                    if (rax_4 != 0)
                        *(rax_4 + 8) += 1
                    
                    rcx_5 += 0x10
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                i_2 = i_3
                i_4 = i_2
            
            uint64_t r15_1 = rsi_1
            int64_t rax_7 = (sx.q(i_2) << 4) + rsi_1
            
            if (rsi_1 != rax_7)
                int64_t rbp_1 = var_70
                int64_t arg_20 = 0
                
                do
                    int64_t* r14 = *(r15_1 + 8)
                    int64_t* rcx_6 = *r15_1
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rax_9 = (**rcx_6)(rcx_6)
                    int64_t* rsi_2 = rax_9[1]
                    int64_t rcx_7 = *rax_9
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d += 1
                    
                    void* rax_10 = sub_140cde0b0()
                    sub_140d19010(rax_10, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                    void* rax_12 = sub_140d2dfc0(sub_140680840(), rax_10, 0, 0, 0, 0, 0, 0, 0)
                    
                    if (rcx_7 == 0)
                        sub_140679620(rax_12)
                    else
                        if (rsi_2 != 0)
                            rsi_2[1].d += 1
                        
                        int64_t* rdi_2 = *(rax_12 + 0x30)
                        *(rax_12 + 0x28) = rcx_7
                        *(rax_12 + 0x30) = rsi_2
                        
                        if (rdi_2 != 0)
                            rdi_2[1].d -= 1
                            
                            if (rdi_2[1].d == 1)
                                (**rdi_2)(rdi_2)
                                int32_t temp6_1 = *(rdi_2 + 0xc)
                                *(rdi_2 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    int64_t rdi_3 = sx.q(r12)
                    r12 = (rdi_3 + 1).d
                    
                    if (r12 s> var_64)
                        sub_140638870(&var_70)
                        rbp_1 = var_70
                    
                    *(rbp_1 + (rdi_3 << 3)) = rax_12
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp8_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    if (r14 != 0)
                        r14[1].d -= 1
                        
                        if (r14[1].d == 1)
                            (**r14)(r14)
                            int32_t temp9_1 = *(r14 + 0xc)
                            *(r14 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*r14 + 8))(r14, 1)
                    
                    r15_1 += 0x10
                while (r15_1 != rax_7)
                
                i_2 = i_4
                result = arg2
                rsi_1 = var_60
            
            *result = var_70
            *(result + 0xc) = var_64
            result[1].d = r12
            
            if (i_2 != 0)
                int64_t* rdi_4 = rsi_1 + 8
                int32_t i_1
                
                do
                    int64_t* rbx_3 = *rdi_4
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp3_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rdi_4 = &rdi_4[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)

return result
