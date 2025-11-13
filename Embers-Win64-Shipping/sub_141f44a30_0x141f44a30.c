// 函数: sub_141f44a30
// 地址: 0x141f44a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefd40(arg1)
int64_t result = CoCreateGuid(arg1 + 0x21c)

if ((*(arg1 + 8) & 0x30) != 0)
    return result

EnterCriticalSection(&data_143f3b480)
int64_t* r8_1 = data_143f3b470
int64_t rdi_1 = sx.q(data_143f3b478)
int64_t* rcx_1 = r8_1
void* rdx_1 = &r8_1[rdi_1]

if (r8_1 != rdx_1)
    while (*rcx_1 != arg1)
        rcx_1 = &rcx_1[1]
        
        if (rcx_1 == rdx_1)
            goto label_141f44a9c

if (r8_1 == rdx_1 || ((rcx_1 - r8_1) s>> 3).d == 0xffffffff)
label_141f44a9c:
    int32_t rax = (rdi_1 + 1).d
    bool cond:0_1 = rax s<= data_143f3b47c
    data_143f3b478 = rax
    
    if (not(cond:0_1))
        sub_1405a4d70(&data_143f3b470)
        r8_1 = data_143f3b470
    
    r8_1[rdi_1] = arg1

*(arg1 + 0x238) = 1
return LeaveCriticalSection(&data_143f3b480)
