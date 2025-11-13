// 函数: sub_140bc3290
// 地址: 0x140bc3290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xd0)
int64_t rdi = sx.q(rbx[1].d)
int32_t rax = (rdi + 1).d
rbx[1].d = rax

if (rax s> *(rbx + 0xc))
    sub_1405c4fe0(rbx)

int64_t* rcx_3 = (rdi << 6) + *rbx
*rcx_3 = *arg2
rcx_3[2] = 0

if (*rcx_3 != 0)
    void* rax_1 = arg2[2]
    void* rcx_4 = &arg2[4]
    
    if (rax_1 != 0)
        rcx_4 = rax_1
    
    (**rcx_4)(rcx_4)

int64_t result
result.b = 1
return result
