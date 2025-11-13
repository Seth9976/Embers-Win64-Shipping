// 函数: sub_14285df40
// 地址: 0x14285df40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int128_t* rax = sub_1428a6730(arg4 + 0x40)

if (rax == 0)
    sub_142856580(arg1, (&rax[5]).d, 0x229, (rax + 0x41).d, "ssl\statem\statem_lib.c", 0x909)
    return 0

void* rcx_2 = *(arg1 + 0xa8)
*rax = *(rcx_2 + 0xb8)
rax[1] = *(rcx_2 + 0xc8)
void* rcx_3 = *(arg1 + 0xa8)
rax[2] = *(rcx_3 + 0x98)
rax[3] = *(rcx_3 + 0xa8)
memcpy(&rax[4], arg3, arg4.d)
*arg2 = rax
return arg4 + 0x40
