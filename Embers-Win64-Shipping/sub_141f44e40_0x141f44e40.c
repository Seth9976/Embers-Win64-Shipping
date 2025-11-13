// 函数: sub_141f44e40
// 地址: 0x141f44e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14c) & 0x20) == 0)
    return 

int64_t* rcx = data_143f3b460
int64_t* rdx_1 = rcx
int64_t rdi_1 = sx.q(data_143f3b468)
void* r8_1 = &rcx[rdi_1]

if (rcx != r8_1)
    while (*rdx_1 != arg1)
        rdx_1 = &rdx_1[1]
        
        if (rdx_1 == r8_1)
            goto label_141f44e8d

if (rcx == r8_1 || ((rdx_1 - rcx) s>> 3).d == 0xffffffff)
label_141f44e8d:
    int32_t rax = (rdi_1 + 1).d
    bool cond:1_1 = rax s<= data_143f3b46c
    data_143f3b468 = rax
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f3b460)
        rcx = data_143f3b460
    
    rcx[rdi_1] = arg1

*(arg1 + 0x238) = 1
