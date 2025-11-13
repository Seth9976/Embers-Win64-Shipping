// 函数: sub_142705600
// 地址: 0x142705600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x100) & 2) == 0)
    return 

int64_t rsi_1 = 0
int64_t* rdi_1 = *(arg1 + 0x88)
uint64_t r14_2 = sx.q(*(arg1 + 0x90)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x90))])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    int64_t* rbx_1 = *rdi_1
    
    if (rbx_1 != 0)
        if ((rbx_1[6].b & 1) != 0)
            (*(*rbx_1 + 0x2a0))(rbx_1, arg2)
        
        if (((rbx_1[6].d u>> 1).b & 1) != 0)
            int64_t rax_4 = rbx_1[9]
            char var_28 = *(rbx_1 + 0x44)
            int64_t var_24_1 = rax_4
            sub_14270a4d0(arg1, &var_28, arg2)
    
    rdi_1 = &rdi_1[1]
    rsi_1 += 1
while (rsi_1 != r14_2)
