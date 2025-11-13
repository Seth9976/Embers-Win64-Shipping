// 函数: sub_140aa65e0
// 地址: 0x140aa65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int16_t i_1 = *(arg1 + 0x120)
int16_t i

do
    i = i_1
    i_1 += 1
while (i == 0xffff)
*(arg1 + 0x120) = i_1
sub_140aa8af0(arg1 + 0xd0, 0)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

int64_t rbp
rbp.b = 0
*(arg1 + 0x13c) += 1
int32_t rax = *(arg1 + 0x130)
int32_t rcx_3 = *(arg1 + 0x13c)
int64_t rbx_1 = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rdi_2 = rbx_1 << 4
    int64_t temp2_1
    
    do
        int64_t rax_2 = *(arg1 + 0x128)
        
        if (*(rdi_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_4 = *(rdi_2 + rax_2)
            
            if (rcx_4 == 0)
                rbp.b = 1
            else if ((*(*rcx_4 + 0x50))(rcx_4) == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_3 = *(arg1 + 0x13c)

*(arg1 + 0x13c) = rcx_3 - 1

if (rbp.b == 0)
    return rcx_3 - 1

return sub_140599630(arg1 + 0x128, 0) __tailcall
