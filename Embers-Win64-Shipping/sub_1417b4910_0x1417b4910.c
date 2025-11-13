// 函数: sub_1417b4910
// 地址: 0x1417b4910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
void* rax = nullptr
uint32_t rbx = zx.d(arg3)
uint64_t rbp_2 = (zx.q(rbx) & 7) << 5
int64_t* rdi_3 = (zx.q(rbx) u>> 3 << 4) + *(rbp_2 + arg1 + 0x18)
void* rcx = *rdi_3
char rdx = *(rcx + 8)

if (rdx == 1)
    rax = rcx

int32_t rax_1

if (rax == 0)
    if (rdx == 0)
        rax = rcx
    
    if (rax == 0)
        if (rdx == 2)
            rax = rcx
        
        int32_t rax_2 = (neg.q(rax)).d
        rax_1 = sbb.d(rax_2, rax_2, rax != 0) & 2
    else
        rax_1 = 1
else
    rax_1 = 0

switch (rax_1)
    case 0
        sub_1417b3ea0(arg1 + 0x118, rdi_3[1].w)
    case 1
        sub_1417b3ea0(arg1 + 0x138, rdi_3[1].w)
    case 2
        sub_1417b3ea0(arg1 + 0x158, rdi_3[1].w)

if (arg2 != rdi_3)
    int64_t* rcx_6 = *arg2
    *arg2 = *rdi_3
    *rdi_3 = 0
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 1)

sub_1417b3f10(arg1 + 0x18 + rbp_2, rbx.w u>> 3)

if (*(rbp_2 + arg1 + 0x20) == 0)
    *(arg1 + 0x10) &= (not.d(1 << ((zx.d(rbx.w) & 7) u% 0x20))).b

return arg2
