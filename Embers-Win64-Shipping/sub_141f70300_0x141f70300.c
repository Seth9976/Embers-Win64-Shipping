// 函数: sub_141f70300
// 地址: 0x141f70300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14c) & 0x20) == 0 || (*(arg1 + 0x20c) & 1) == 0 || sub_141f74360(arg1) != 0)
    return 

EnterCriticalSection(&data_143f3b838)
int64_t* r8_1 = data_143f3b9c0
int64_t rdi_1 = sx.q(data_143f3b9c8)
int64_t* rcx = r8_1
void* rdx_1 = &r8_1[rdi_1]

if (r8_1 != rdx_1)
    while (*rcx != arg1)
        rcx = &rcx[1]
        
        if (rcx == rdx_1)
            goto label_141f7037c

if (r8_1 == rdx_1 || ((rcx - r8_1) s>> 3).d == 0xffffffff)
label_141f7037c:
    int32_t rax_1 = (rdi_1 + 1).d
    bool cond:1_1 = rax_1 s<= data_143f3b9cc
    data_143f3b9c8 = rax_1
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f3b9c0)
        r8_1 = data_143f3b9c0
    
    r8_1[rdi_1] = arg1

*(arg1 + 0x265) = 0
LeaveCriticalSection(&data_143f3b838)
