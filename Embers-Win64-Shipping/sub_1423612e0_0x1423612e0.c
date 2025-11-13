// 函数: sub_1423612e0
// 地址: 0x1423612e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0xffffffff
int32_t arg_1c = 0
int32_t arg_8

if (arg3 != 0)
    sub_140d3a3a0(&arg_8, arg3)
    arg_18.q = arg_8.q

sub_1423611b0(arg1 + 0x40, &arg_8, &arg_18)
int64_t rax_2 = sx.q(arg_8)
int64_t rdi_2
void* rdi_3

if (rax_2.d != 0xffffffff)
    rdi_2 = rax_2 << 5
    rdi_3 = rdi_2 + *(arg1 + 0x40)

int64_t* rdi_4

if (rax_2.d == 0xffffffff || rdi_2 == neg.q(*(arg1 + 0x40)))
    rdi_4 = nullptr
    *arg2 = 0
    arg2[1] = 0
else
    void* rbp_1 = *(rdi_3 + 8)
    rdi_4 = *(rdi_3 + 0x10)
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    if (rbp_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int64_t rbx_1 = *arg4
        arg_8.q = rbx_1
        int64_t* rdx_7
        
        if (*(rbp_1 + 0x30) == *(rbp_1 + 0x5c))
        label_1423613de:
            rdx_7 = nullptr
        else
            int32_t rax_5 = sub_140b5ead0(rbx_1.d) + arg5
            void* r8_1 = rbp_1 + 0x60
            void* rcx_3 = *(r8_1 + 8)
            
            if (rcx_3 != 0)
                r8_1 = rcx_3
            
            int32_t rax_7 = *(r8_1 + (((sx.q(*(rbp_1 + 0x70)) - 1) & sx.q(rax_5)) << 2))
            
            if (rax_7 == 0xffffffff)
            label_1423613de_1:
                rdx_7 = nullptr
            else
                while (true)
                    rdx_7 = (sx.q(rax_7) << 5) + *(rbp_1 + 0x28)
                    
                    if (*rdx_7 == rbx_1)
                        break
                    
                    rax_7 = rdx_7[3].d
                    
                    if (rax_7 == 0xffffffff)
                        goto label_1423613de_2
                
                if (rax_7 == 0xffffffff)
                label_1423613de_2:
                    rdx_7 = nullptr
        
        if (rdx_7 == 0)
            *arg2 = 0
            arg2[1] = 0
        else
            *arg2 = rdx_7[1]
            void* rax_9 = rdx_7[2]
            arg2[1] = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp3_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

return arg2
