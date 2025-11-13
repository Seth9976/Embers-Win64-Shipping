// 函数: sub_1427e0640
// 地址: 0x1427e0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427d71c0(arg2, arg1 + 0x18)
sub_1427d72a0(arg2, arg1 + 0x38)
sub_1427d71c0(arg2, arg1 + 0x58)
sub_1427d71c0(arg2, arg1 + 0x78)
sub_1427d7530(arg2, arg1 + 0x98)
sub_1427d72a0(arg2, arg1 + 0xe0)
sub_1427d72a0(arg2, arg1 + 0x100)
sub_1427d72a0(arg2, arg1 + 0x120)
sub_1427e5da0(arg2, "Links")
sub_1427e54a0(arg2, arg1 + 0x140)
void* rdx_9 = *arg2

if (*(rdx_9 + 0x10) != 0)
    if (*(*(rdx_9 + 8) + zx.q(*(rdx_9 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_13 = arg2[1]
        (*(*rcx_13 + 0x20))(rcx_13, rdx_9)
    
    void* rax_3 = *arg2
    *(rax_3 + 0x10) -= 1

sub_1427d7700(arg2, arg1 + 0x160)
return zx.q(arg3 + 0xf)
