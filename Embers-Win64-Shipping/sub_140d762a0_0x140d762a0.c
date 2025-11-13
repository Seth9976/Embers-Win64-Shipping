// 函数: sub_140d762a0
// 地址: 0x140d762a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = data_143e203a8 + 0xb8
int64_t* r8 = *rbx_1
int64_t rdx = sx.q(rbx_1[1].d)
int64_t* rax = r8
void* rcx = &r8[rdx]
int64_t result

if (r8 != rcx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx)
            goto label_140d762fc
    
    result = (rax - r8) s>> 3

if (r8 == rcx || result.d == 0xffffffff)
label_140d762fc:
    int32_t rax_2 = (rdx + 1).d
    rbx_1[1].d = rax_2
    
    if (rax_2 s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    result = *rbx_1
    *((rdx << 3) + result) = arg2

return result
