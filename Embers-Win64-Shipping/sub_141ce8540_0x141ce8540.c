// 函数: sub_141ce8540
// 地址: 0x141ce8540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *(arg1 + 0x20)
int32_t* r9 = arg1
int64_t rdi = sx.q(arg1[0xa])
int32_t* rbx = arg1

if (rax != 0)
    r9 = rax

int32_t* rax_1 = r9
void* rdx = &r9[rdi]
int32_t result

if (r9 != rdx)
    while (*rax_1 != *arg2)
        rax_1 = &rax_1[1]
        
        if (rax_1 == rdx)
            goto label_141ce859e
    
    result = ((rax_1 - r9) s>> 2).d

if (r9 == rdx || result == 0xffffffff)
label_141ce859e:
    int32_t rax_3 = (rdi + 1).d
    rbx[0xa] = rax_3
    
    if (rax_3 s> rbx[0xb])
        sub_141ce8380(rbx, rdi.d)
    
    int32_t* rcx_2 = *(rbx + 0x20)
    result = rdi.d
    
    if (rcx_2 != 0)
        rbx = rcx_2
    
    rbx[rdi] = *arg2

return result
