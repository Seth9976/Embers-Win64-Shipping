// 函数: sub_1427e10f0
// 地址: 0x1427e10f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5750(arg2, arg1 + 0x18)
sub_1427d4e00(arg2, arg1 + 0x30)
sub_1427d7880(arg2, arg1 + 0x50)
sub_1427d7990(arg2, arg1 + 0x70)
sub_1427e5da0(arg2, "Materials")
sub_1427d98e0(arg2, arg1 + 0x90)
void* rdx_5 = *arg2

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_9 = arg2[1]
        (*(*rcx_9 + 0x20))(rcx_9, rdx_5)
    
    void* rax_3 = *arg2
    *(rax_3 + 0x10) -= 1

sub_1427d3f70(arg2, arg1 + 0xb0)
sub_1427d3f70(arg2, arg1 + 0xd0)
sub_1427d7af0(arg2, arg1 + 0xf0)
sub_1427d3ac0(arg2, arg1 + 0x128)
return zx.q(arg3 + 0xd)
