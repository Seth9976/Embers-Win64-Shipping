// 函数: sub_140d8b3c0
// 地址: 0x140d8b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[0x32]
int64_t* r9 = arg1
int64_t rdi = sx.q(arg1[0x33].d)
int64_t* rbx = arg1

if (rax != 0)
    r9 = rax

int64_t* rax_1 = r9
void* rdx = &r9[rdi]
int32_t result

if (r9 != rdx)
    while (*rax_1 != *arg2)
        rax_1 = &rax_1[1]
        
        if (rax_1 == rdx)
            goto label_140d8b42c
    
    result = ((rax_1 - r9) s>> 3).d

if (r9 == rdx || result == 0xffffffff)
label_140d8b42c:
    int32_t rax_3 = (rdi + 1).d
    rbx[0x33].d = rax_3
    
    if (rax_3 s> *(rbx + 0x19c))
        sub_140dbc5d0(rbx, rdi.d)
    
    int64_t* rcx_2 = rbx[0x32]
    result = rdi.d
    
    if (rcx_2 != 0)
        rbx = rcx_2
    
    rbx[rdi] = *arg2

return result
