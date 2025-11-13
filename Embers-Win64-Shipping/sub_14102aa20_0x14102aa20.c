// 函数: sub_14102aa20
// 地址: 0x14102aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x135) != 0)
    int32_t var_34_1 = 1
    void* rcx = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rcx + 0x838) != 0)
        void* rax_2 = *(rcx + 0x850)
        
        if (rax_2 != 0)
            *(rax_2 + 0x1c) += 1
            void* rcx_1 = *(rcx + 0x850)
            *(rcx_1 + 0x20) = 1
            *(rcx_1 + 0x24) = (1.q u>> 0x20).d
            *(rcx_1 + 0x28) = 1

void* rbx = *(arg1 + 0xa28)
void* arg_8
void* arg_10
int32_t rax_5
int32_t rbp

if (rbx == 0)
    arg_10 = rbx
    rbp = 0
    rax_5 = 2
else
    rbx = *(rbx + 0x18)
    arg_8 = rbx
    
    if (rbx != 0)
        *(rbx + 8) += 1
        rbx = arg_8
    
    rbp = 1
    rax_5 = 0

if (rax_5 != 0)
    arg4 = sub_1405d1550(&arg_10)

if (rbp != 0)
    arg4 = sub_1405d1550(&arg_8)

if (*(rbx + 0xe0) != 0)
    sub_141017b40(arg1, arg4)

sub_141004990(arg1, rbx)
sub_1410385c0(arg1 + 0x250)
sub_141037220(arg1 + 0x1c0, *(arg2 + 0x78), 0x200, 0xffffffff)
void* rbx_1 = *(arg1 + 0x1c8)
int32_t rdx_2 = *(rbx_1 + 0x128)
int64_t* rcx_8 = *(rbx_1 + 0x30)

if (rdx_2 != 0)
    (*(*rcx_8 + 0xd0))(rcx_8, rdx_2, *(rbx_1 + 0x120))
    *(rbx_1 + 0x128) = 0
    rbx_1 = *(arg1 + 0x1c8)

*(arg1 + 0x3b84) += 1
int64_t* rcx_9 = *(rbx_1 + 0x30)
(*(*rcx_9 + 0x1d8))(rcx_9, *(*(*(arg1 + 0x138) + 0x20) + 0x428), 1, *(*(arg2 + 0x78) + 0x20), 
    zx.q(arg3) + *(arg2 + 0xb8), 0, 0)
return sub_14105c1a0(*(arg2 + 0x78), arg1 + 0x1c0) __tailcall
