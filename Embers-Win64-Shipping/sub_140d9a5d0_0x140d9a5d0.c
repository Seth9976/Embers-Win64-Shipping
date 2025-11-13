// 函数: sub_140d9a5d0
// 地址: 0x140d9a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dba5f0(arg1, arg2)
uint8_t rax_1

if (arg1[1].d != 0)
    rax_1 = sub_140e1ab90(*arg2)

void* result

if (arg1[1].d == 0 || rax_1 != 0)
    int64_t rdi_6 = sx.q(arg1[1].d)
    int32_t rax_9 = (rdi_6 + 1).d
    arg1[1].d = rax_9
    
    if (rax_9 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rcx_10 = (rdi_6 << 4) + *arg1
    *rcx_10 = *arg2
    result = arg2[1]
    rcx_10[1] = result
else
    int32_t rbp_1 = arg1[1].d
    int32_t rbp_2 = rbp_1 - 1
    int64_t rsi_1 = sx.q(rbp_2)
    
    if (rbp_1 - 1 s>= 0)
        int64_t rdi_2 = rsi_1 << 4
        int64_t temp1_1
        
        do
            if (sub_140e1ab90(*(rdi_2 + *arg1)) == 0)
                if (sub_140de7d60(*arg2) == 0)
                    break
                
                if (sub_140de7d60(*(rdi_2 + *arg1)) != 0)
                    break
            
            rbp_2 -= 1
            rdi_2 -= 0x10
            temp1_1 = rsi_1
            rsi_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    int32_t rsi_2 = arg1[1].d
    arg1[1].d = rsi_2 + 1
    
    if (rsi_2 + 1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t rdx_2 = *arg1 + ((sx.q(rbp_2) + 1) << 4)
    memmove(rdx_2 + 0x10, rdx_2, (rsi_2 - (rbp_2 + 1)) << 4)
    int64_t* rcx_6 = *arg1
    rcx_6[(sx.q(rbp_2) + 1) * 2] = *arg2
    result = arg2[1]
    rcx_6[(sx.q(rbp_2) + 1) * 2 + 1] = result

if (result != 0)
    *(result + 8) += 1

return result
