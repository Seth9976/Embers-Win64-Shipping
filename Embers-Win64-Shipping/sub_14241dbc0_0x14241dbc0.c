// 函数: sub_14241dbc0
// 地址: 0x14241dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x88)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t rdi_2 = sx.q(rbx_1) * 0x28
    int32_t temp1_1
    
    do
        int64_t* rcx_1 = *(arg1 + 0x80) + rdi_2
        
        if (*rcx_1 == *arg2 && rcx_1[2] == arg2[2])
            char rdx = rcx_1[1].b
            char rcx_2 = arg2[1].b
            uint64_t rax
            rax.b = rcx_2 ^ rdx
            
            if ((rax.b & 1) == 0)
                rax.b = rcx_2 ^ rdx
                
                if ((rax.b & 2) == 0)
                    rax.b = rcx_2 ^ rdx
                    
                    if ((rax.b & 4) == 0 && ((rcx_2 ^ rdx) & 8) == 0)
                        sub_140638160(arg1 + 0x80, rbx_1, 1, 1)
        
        rdi_2 -= 0x28
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

if (arg3 == 0)
    return 

return sub_14240edd0() __tailcall
