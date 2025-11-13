// 函数: sub_140b3fa70
// 地址: 0x140b3fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4] = 0x7fefffffffffffff
arg1[2] = 0
int64_t result = -0x10000000000001
arg1[5] = -0x10000000000001
arg1[3] = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    result = sub_1405a51b0(arg1, 0)

int64_t r14 = sx.q(arg2[1].d)

if (r14 s> 0)
    int64_t rdi_1 = 0
    int64_t r15_1 = *arg2
    int64_t rbp_1
    
    do
        int64_t rsi_1 = sx.q(arg1[1].d)
        rbp_1 = rdi_1 + 1
        int32_t rcx = *(arg1 + 0xc)
        int32_t rax = (rsi_1 + 1).d
        arg1[1].d = rax
        int64_t rcx_4
        
        if (rbp_1 != r14)
            if (rax s> rcx)
                sub_1405c4e40(arg1)
            
            result = *(r15_1 + (rdi_1 << 3))
            rcx_4 = (rsi_1 << 5) + *arg1
            *(rcx_4 + 8) = *(r15_1 + (rdi_1 << 3) + 8)
        else
            if (rax s> rcx)
                sub_1405c4e40(arg1)
            
            result = *(r15_1 + (rdi_1 << 3))
            rcx_4 = (rsi_1 << 5) + *arg1
            *(rcx_4 + 8) = 0x47efffffe0000000
        
        *(rcx_4 + 0x18) = 0
        rdi_1 = rbp_1
        *(rcx_4 + 0x10) = 0
        *rcx_4 = result
    while (rbp_1 s< r14)

return result
