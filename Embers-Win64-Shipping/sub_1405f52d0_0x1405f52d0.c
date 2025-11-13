// 函数: sub_1405f52d0
// 地址: 0x1405f52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[4]
void* rcx = &arg1[6]

if (rax != 0)
    rcx = rax

arg1[2]((*(*rcx + 8))(rcx))
CRITICAL_SECTION* rcx_2 = arg1[0xa]
rcx_2->__offset(0x80).d = 0
sub_1405fc0f0(rcx_2, arg2, arg3, arg4)
jump(*(*arg1 + 0x10))
