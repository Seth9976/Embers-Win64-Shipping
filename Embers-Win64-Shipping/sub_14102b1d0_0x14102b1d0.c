// 函数: sub_14102b1d0
// 地址: 0x14102b1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_1439c7a34
void* rdi = arg3
void* rbx = arg2

if (arg2 != 0 && rcx u> 1)
    while (*(rbx + 0x30) != *(arg1 + 0x138))
        rbx = *(rbx + 0xe0)
        
        if (rbx == 0)
            break

if (arg3 != 0 && rcx u> 1)
    while (*(rdi + 0x28) != *(arg1 + 0x138))
        rdi = *(rdi + 0xd8)
        
        if (rdi == 0)
            break

*(arg1 + 0x3b80) += 1

if (*(arg1 + 0x134) != 0)
    void* rax_4 = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rax_4 + 0x838) != 0)
        void* rax_5 = *(rax_4 + 0x850)
        
        if (rax_5 != 0)
            *(rax_5 + 0x10) += 1

sub_141017de0(arg1, sub_141017c10(arg1))
int64_t rdx = *(rbx + 0xb8)
int32_t rax_6 = 0x2a

if (*(rbx + 0x18) == 2)
    rax_6 = 0x39

int32_t rcx_3 = *(rbx + 0xc8)

if (rdx != *(arg1 + 0x878) || rcx_3 != *(arg1 + 0x880) || rax_6 != *(arg1 + 0x884))
    *(arg1 + 0x880) = rcx_3
    *(arg1 + 0x878) = rdx
    *(arg1 + 0x884) = rax_6
    sub_14104d420(arg1 + 0x250, *(rbx + 0x80))

sub_1410388f0(arg1 + 0x250)
sub_141037220(arg1 + 0x1c0, *(rdi + 0x78), 0x200, 0xffffffff)
void* rbx_1 = *(arg1 + 0x1c8)
int32_t rdx_3 = *(rbx_1 + 0x128)
int64_t* rcx_7 = *(rbx_1 + 0x30)

if (rdx_3 != 0)
    (*(*rcx_7 + 0xd0))(rcx_7, rdx_3, *(rbx_1 + 0x120))
    *(rbx_1 + 0x128) = 0
    rbx_1 = *(arg1 + 0x1c8)

int64_t* rcx_8 = *(rbx_1 + 0x30)
(*(*rcx_8 + 0x1d8))(rcx_8, *(*(*(arg1 + 0x138) + 0x20) + 0x420), 1, *(*(rdi + 0x78) + 0x20), 
    zx.q(arg4) + *(rdi + 0xb8), 0, 0)
return sub_14105c1a0(*(rdi + 0x78), arg1 + 0x1c0) __tailcall
