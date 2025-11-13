// 函数: sub_141e606e0
// 地址: 0x141e606e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
arg3.b = 1
int32_t* rax = sub_141e5fc50(arg1, arg2, arg3.b)

if (rax != 0)
    int64_t* rax_1 = sub_141e5ea90(arg1)
    int64_t r8 = *rax_1
    rax = (*(r8 + 0x258))(rax_1, *rax, r8)
    int64_t* rdi_1 = rax
    
    if (rax != 0)
        bool rdx_1 = sub_140b5b8a0(*rax, 0).b == 0
        int32_t rcx_2
        rcx_2.b = *(rdi_1 + 4) != 0
        rcx_2.b |= rdx_1
        
        if (rcx_2.b != 0)
            *rsi = *rdi_1
            rsi[1] = rdi_1[1]
            rsi[2] = rdi_1[2]
            rsi[3] = rdi_1[3]
            rsi[4] = rdi_1[4]
            int64_t* rbx_1 = rdi_1[6]
            int64_t var_28 = rdi_1[5]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (&var_28 != &rsi[5])
                var_28.o = *(rsi + 0x28)
                *(rsi + 0x28) = var_28.o
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            sub_14090a0d0(&rsi[7], &rdi_1[7])
            rsi[9].d = rdi_1[9].d
            int32_t rax_10
            rax_10.b = 1
            return rax_10

rax.b = 0
return rax
