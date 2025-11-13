// 函数: sub_14102a860
// 地址: 0x14102a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xa28)
int64_t var_38
void* const arg_8
int32_t rax
void* const rbx_1
int32_t rsi

if (rbx == 0)
    rbx_1 = nullptr
    var_38 = 0
    rsi = 0
    rax = 2
else
    rbx_1 = *(rbx + 0x18)
    arg_8 = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 8) += 1
        rbx_1 = arg_8
    
    rsi = 1
    rax = 0

if (rax != 0)
    arg5 = sub_1405d1550(&var_38)

if (rsi != 0)
    arg5 = sub_1405d1550(&arg_8)

if (*(arg1 + 0x135) != 0)
    var_38.d = arg2
    var_38:4.d = arg3
    void* rdx = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rdx + 0x838) != 0)
        void* rax_2 = *(rdx + 0x850)
        
        if (rax_2 != 0)
            *(rax_2 + 0x1c) += 1
            void* rdx_1 = *(rdx + 0x850)
            uint32_t rax_4 = (var_38 u>> 0x20).d
            *(rdx_1 + 0x20) = arg2
            *(rdx_1 + 0x24) = rax_4
            *(rdx_1 + 0x28) = arg4

if (*(rbx_1 + 0xe0) != 0)
    sub_141017b40(arg1, arg5)

sub_141004990(arg1, rbx_1)
sub_1410385c0(arg1 + 0x250)
void* rax_5 = *(arg1 + 0x1c8)
*(arg1 + 0x3b84) += 1
jump(*(**(rax_5 + 0x30) + 0x70))
