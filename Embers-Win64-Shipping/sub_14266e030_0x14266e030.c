// 函数: sub_14266e030
// 地址: 0x14266e030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *arg1
int64_t rsi = sx.q(arg1[1].d)
int32_t* rax = r9
void* rdx = &r9[rsi * 2]
int32_t result

if (r9 != rdx)
    while (*rax != *arg2 || rax[1] != arg2[1])
        rax = &rax[2]
        
        if (rax == rdx)
            goto label_14266e094
    
    result = ((rax - r9) s>> 3).d

if (r9 == rdx || result == 0xffffffff)
label_14266e094:
    int32_t rcx_1 = (rsi + 1).d
    arg1[1].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    result = rsi.d
    *((rsi << 3) + *arg1) = *arg2

return result
