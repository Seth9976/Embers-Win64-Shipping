// 函数: sub_14066e1d0
// 地址: 0x14066e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x28)
int64_t rsi = 0
int64_t var_58 = 0
int32_t var_4c = 0
int32_t r14 = 0
int32_t r12 = 0
int32_t arg_8
sub_14062d6e0(rdi, &arg_8, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    *arg2 = 0
    arg2[1] = 0
else
    void* rcx_1 = *rdi + rax * 0x28
    int64_t* rax_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        void* rax_3 = *rax_2
        
        if (rax_3 == 0 || *(rax_3 + 8) != 5 || arg3[1].d s<= 1)
            *arg2 = 0
            arg2[1] = 0
        else
            int64_t* rax_4 = sub_140b750d0(*(arg1 + 0x28), arg3)
            uint64_t r13_1 = 0
            uint64_t var_48 = 0
            int32_t i_3 = rax_4[1].d
            int64_t rbx_1 = *rax_4
            int32_t i_4 = i_3
            
            if (i_3 != 0)
                sub_14061cb30(&var_48, i_3, 0)
                r13_1 = var_48
                uint64_t rcx_4 = r13_1
                int64_t rbx_2 = rbx_1 - r13_1
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
            
            int32_t i_1 = 0
            int128_t zmm6
            int128_t var_38_1 = zmm6
            
            for (; i_1 s>= 0; i_1 += 1)
                if (i_1 s>= i_3)
                    break
                
                int64_t rbp_1 = sx.q(r14)
                zmm6.d = fconvert.s(sub_140b74be0(*(r13_1 + sx.q(i_1) * 0x10)))
                r14 = (rbp_1 + 1).d
                
                if (r14 s> r12)
                    sub_1406105e0(&var_58)
                    r12 = var_4c
                    rsi = var_58
                
                *(rsi + (rbp_1 << 2)) = zmm6.d
            
            *arg2 = rsi
            arg2[1].d = r14
            *(arg2 + 0xc) = r12
            
            if (i_3 != 0)
                int64_t* rsi_1 = r13_1 + 8
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
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)

return arg2
