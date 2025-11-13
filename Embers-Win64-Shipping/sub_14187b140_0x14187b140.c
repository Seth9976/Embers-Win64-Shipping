// 函数: sub_14187b140
// 地址: 0x14187b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1[0xa].b
void* rax_1 = arg1[4]
void* rcx = &arg1[6]

if (rax_1 != 0)
    rcx = rax_1

arg1[2]((*(*rcx + 8))(rcx), &arg_8)
CRITICAL_SECTION* rcx_2 = **arg1
rcx_2->__offset(0x80).d = 0
return sub_1405fc0f0(rcx_2, arg2, arg3, arg4) __tailcall
