// 函数: sub_141f4d0f0
// 地址: 0x141f4d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) s<= 0)
    return 

int64_t rbp_1 = 0
int64_t* rsi_1 = *(arg1 + 0xd0)
uint64_t r14_2 = sx.q(*(arg1 + 0xd8)) << 3 u>> 3

if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0xd8))])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    int64_t* rbx_1 = *rsi_1
    
    if (rbx_1 != 0)
        if ((*(rbx_1 + 0x14c) & 1) == 0)
            sub_1405c6ac0(rbx_1, (arg2 & 0xfffffffb) | 2, arg3)
        else
            uint64_t rax
            int32_t rcx
            
            if (((arg2 u>> 2).b & 1) != 0)
                int32_t rdi_1 = *(rbx_1 + 0xcc)
                rax = sub_140b5b8a0(rbx_1[0x19].d, 0)
                rcx.b = rdi_1 == 0
            
            if (((arg2 u>> 2).b & 1) == 0 || (rcx.b & rax.b) == 0)
                rax.b = *(rbx_1 + 0x14c) & 0x1c
                
                if (rax.b != 0x1c)
                    sub_1405c6ac0(rbx_1, (arg2 & 0xfffffffb) | 2, arg3)
    
    rsi_1 = &rsi_1[1]
    rbp_1 += 1
while (rbp_1 != r14_2)
