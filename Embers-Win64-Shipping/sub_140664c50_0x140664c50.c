// 函数: sub_140664c50
// 地址: 0x140664c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int64_t rdi = sx.q(arg1[1].d)
int64_t* rax = r9
void* r8 = &r9[rdi]
int32_t result

if (r9 != r8)
    while (*rax != *arg2)
        rax = &rax[1]
        
        if (rax == r8)
            goto label_140664cac
    
    result = ((rax - r9) s>> 3).d

if (r9 == r8 || result == 0xffffffff)
label_140664cac:
    int32_t rcx_1 = (rdi + 1).d
    arg1[1].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    result = rdi.d
    *((rdi << 3) + *arg1) = *arg2

return result
