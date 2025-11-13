// 函数: sub_141f70200
// 地址: 0x141f70200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14c) & 0x20) == 0 || (*(arg1 + 0x20c) & 1) == 0 || *(arg1 + 0x318) == 0)
    return 

int64_t* rdx_1 = data_143f3b9d0
int64_t* rcx = rdx_1
int64_t rdi_1 = sx.q(data_143f3b9d8)
void* r8_1 = &rdx_1[rdi_1]

if (rdx_1 != r8_1)
    while (*rcx != arg1)
        rcx = &rcx[1]
        
        if (rcx == r8_1)
            goto label_141f70264

if (rdx_1 == r8_1 || ((rcx - rdx_1) s>> 3).d == 0xffffffff)
label_141f70264:
    int32_t rax = (rdi_1 + 1).d
    bool cond:1_1 = rax s<= data_143f3b9dc
    data_143f3b9d8 = rax
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f3b9d0)
        rdx_1 = data_143f3b9d0
    
    rdx_1[rdi_1] = arg1

*(arg1 + 0x265) = 0
