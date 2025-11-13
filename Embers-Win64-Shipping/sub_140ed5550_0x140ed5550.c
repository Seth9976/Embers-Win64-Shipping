// 函数: sub_140ed5550
// 地址: 0x140ed5550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* result = arg1

if (*(arg1 + 0x90) s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t* r14_1 = *(result + 0x88)
        int128_t var_78 = zx.o(0)
        int64_t* rsi_1 = var_78:8.q
        void* rbp_1 = var_78.q
        
        while (true)
            int64_t* rbx_1 = *(r14_1 + r13_1 + 8)
            int64_t var_68 = *(r14_1 + r13_1)
            int64_t* var_60_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void* var_58
            void** rax_1 = sub_140ebae10(&var_58, arg2, &var_68)
            
            if (&var_78 != rax_1)
                rbp_1 = *rax_1
                int64_t* rdi_1 = rsi_1
                *rax_1 = nullptr
                int64_t* rcx_1 = rax_1[1]
                
                if (rcx_1 != rsi_1)
                    rax_1[1] = 0
                    rsi_1 = rcx_1
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp5_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp2_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rbp_1 == 0)
                break
            
            int64_t* r11_1 = *(rbp_1 + 0x20)
            uint64_t rdi_3 = sx.q(*(rbp_1 + 0x28))
            int64_t* rcx_8 = r11_1
            int128_t zmm0 = *arg2
            int32_t rax_8 = arg2[1].d
            void* r8_4 = &r11_1[rdi_3 * 2]
            int32_t var_38_1 = rax_8
            
            if (r11_1 != r8_4)
                int32_t rdx_1 = zmm0:8.d
                
                do
                    if ((*(rcx_8 + 0xc) & zmm0:0xc.d) != 0 && *rcx_8 == zmm0.q
                            && ((rax_8.b != 0 && rdx_1 == 0xffffffff) || rdx_1 == rcx_8[1].d))
                        int32_t rcx_10 = ((rcx_8 - r11_1) s>> 4).d
                        
                        if (rcx_10 == 0xffffffff)
                            break
                        
                        int32_t rax_11 = rdi_3.d - rcx_10
                        
                        if (rax_11 != 1)
                            memmove(&r11_1[sx.q(rcx_10) * 2], &r11_1[sx.q(rcx_10 + 1) * 2], 
                                (rax_11 - 1) << 4)
                            rdi_3 = zx.q(*(rbp_1 + 0x28))
                        
                        *(rbp_1 + 0x28) = (rdi_3 - 1).d
                        sub_1405a5010(rbp_1 + 0x20)
                        break
                    
                    rcx_8 = &rcx_8[2]
                while (rcx_8 != r8_4)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp7_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        result = arg1
        i += 1
        r13_1 += 0x10
    while (i s< *(result + 0x90))

return result
