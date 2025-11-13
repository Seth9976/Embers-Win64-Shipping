// 函数: sub_14102b5d0
// 地址: 0x14102b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (arg2 != 0 && data_1439c7a34 u> 1)
    while (*(rbx + 0x28) != *(arg1 + 0x138))
        rbx = *(rbx + 0xd8)
        
        if (rbx == 0)
            break

*(arg1 + 0x3b80) += 1

if (*(arg1 + 0x134) != 0)
    void* rax_3 = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rax_3 + 0x838) != 0)
        void* rax_4 = *(rax_3 + 0x850)
        
        if (rax_4 != 0)
            *(rax_4 + 0x10) += 1

sub_141017de0(arg1, sub_141017c10(arg1))
sub_1410388f0(arg1 + 0x250)
sub_141037220(arg1 + 0x1c0, *(rbx + 0x78), 0x200, 0xffffffff)
void* rsi = *(arg1 + 0x1c8)
int32_t rdx_1 = *(rsi + 0x128)
int64_t* rcx_3 = *(rsi + 0x30)

if (rdx_1 != 0)
    (*(*rcx_3 + 0xd0))(rcx_3, rdx_1, *(rsi + 0x120))
    *(rsi + 0x128) = 0
    rsi = *(arg1 + 0x1c8)

int64_t* rcx_4 = *(rsi + 0x30)
(*(*rcx_4 + 0x1d8))(rcx_4, *(*(*(arg1 + 0x138) + 0x20) + 0x418), 1, *(*(rbx + 0x78) + 0x20), 
    zx.q(arg3) + *(rbx + 0xb8), 0, 0)
return sub_14105c1a0(*(rbx + 0x78), arg1 + 0x1c0) __tailcall
