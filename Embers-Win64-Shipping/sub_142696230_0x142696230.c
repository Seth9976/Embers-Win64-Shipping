// 函数: sub_142696230
// 地址: 0x142696230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]

if (arg2 == rcx)
    return 

if (rcx != 0)
    sub_142609270(rcx)

arg1[1] = 0
sub_142679620(&arg1[2], 0)
void* rsi_1 = *arg1
arg1[1] = arg2

if (rsi_1 != 0)
    int64_t rbp
    rbp.b = 0
    *(rsi_1 + 0x49c) += 1
    int32_t rax_1 = *(rsi_1 + 0x490)
    int32_t rcx_2 = *(rsi_1 + 0x49c)
    int64_t rdi_1 = sx.q(rax_1 - 1)
    
    if (rax_1 - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp1_1
        
        do
            int64_t rax_3 = *(rsi_1 + 0x488)
            
            if (*(rbx_2 + rax_3 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_3 = *(rbx_2 + rax_3)
                
                if (rcx_3 == 0)
                    rbp.b = 1
                else if ((*(*rcx_3 + 0x50))(rcx_3) == 0)
                    rbp.b = 1
            
            rbx_2 -= 0x10
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_2 = *(rsi_1 + 0x49c)
    
    *(rsi_1 + 0x49c) = rcx_2 - 1
    
    if (rbp.b != 0)
        sub_140599630(rsi_1 + 0x488, 0)

sub_14268d440(arg1)
