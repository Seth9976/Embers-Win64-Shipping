// 函数: sub_1405d4de0
// 地址: 0x1405d4de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg2
int64_t rax
int64_t rdx_2
rdx_2:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg2[1] - rbx)
*arg1 = 0
int64_t rdi_1 = rdx_2 s>> 3
int32_t i_1 = rdi_1.d + (rdi_1 u>> 0x3f).d
arg1[1].d = i_1

if (i_1 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4b40(arg1, i_1, 0)
int32_t* rcx_1 = *arg1
int32_t i

do
    *rcx_1 = *rbx
    *(rcx_1 + 8) = *(rbx + 8)
    *(rcx_1 + 8) = *(rbx + 8)
    rcx_1[2] = rbx[2]
    *(rcx_1 + 8) = *(rbx + 8)
    rcx_1[0xa].b = 0
    
    if (rbx[0xa].b != 0)
        *(rcx_1 + 0x10) = *(rbx + 0x10)
        void* rax_10 = *(rbx + 0x18)
        *(rcx_1 + 0x18) = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        rcx_1[8] = rbx[8]
        rcx_1[0xa].b = 1
    
    rcx_1 = &rcx_1[0xc]
    rbx = &rbx[0xc]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
