// 函数: sub_140d08790
// 地址: 0x140d08790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s<= 0)
    return 

do
    int32_t* rdi_2 = sx.q(i * *(arg1 + 0x3c)) + arg2
    *(rdi_2 + 0x20) = 0
    *rdi_2 = 0xffffffff
    __builtin_memset(&rdi_2[1], 0, 0x20)
    
    if (rdi_2[9] s<= 0xffffffff)
        sub_1405947f0(&rdi_2[6], 0)
    
    int16_t* rax = *(rdi_2 + 0x18)
    
    if (rax != 0)
        *rax = 0
    
    i += 1
    rdi_2[2] = 0
while (i s< *(arg1 + 0x38))
