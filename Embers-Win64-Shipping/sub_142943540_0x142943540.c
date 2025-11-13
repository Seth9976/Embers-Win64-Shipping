// 函数: sub_142943540
// 地址: 0x142943540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
int64_t r14 = sx.q(arg2[1]) * 0x1db42
int64_t rcx = sx.q(arg2[3]) * 0x1db42
int64_t r10 = sx.q(arg2[5]) * 0x1db42
int64_t rbp = sx.q(arg2[7]) * 0x1db42
int64_t rax_5 = sx.q(arg2[9]) * 0x1db42
int32_t var_50 = rax_5.d
int64_t r8_1 = sx.q(*arg2) * 0x1db42 + ((rax_5 + 0x1000000) s>> 0x19) * 0x13
int64_t r11_1 = sx.q(arg2[2]) * 0x1db42 + ((r14 + 0x1000000) s>> 0x19)
int64_t rdi_1 = sx.q(arg2[4]) * 0x1db42 + ((rcx + 0x1000000) s>> 0x19)
int64_t r15_1 = sx.q(arg2[6]) * 0x1db42 + ((r10 + 0x1000000) s>> 0x19)
int64_t r13_1 = sx.q(arg2[8]) * 0x1db42 + ((rbp + 0x1000000) s>> 0x19)
*arg1 = r8_1.d - ((r8_1 + 0x2000000).d & 0xfc000000)
arg1[1] = ((r8_1 + 0x2000000) s>> 0x1a).d - ((r14 + 0x1000000).d & 0xfe000000) + r14.d
arg1[2] = r11_1.d - ((r11_1 + 0x2000000).d & 0xfc000000)
arg1[3] = ((r11_1 + 0x2000000) s>> 0x1a).d - ((rcx + 0x1000000).d & 0xfe000000) + rcx.d
arg1[5] = ((rdi_1 + 0x2000000) s>> 0x1a).d - ((r10 + 0x1000000).d & 0xfe000000) + r10.d
arg1[4] = rdi_1.d - ((rdi_1 + 0x2000000).d & 0xfc000000)
arg1[6] = r15_1.d - ((r15_1 + 0x2000000).d & 0xfc000000)
arg1[8] = r13_1.d - ((r13_1 + 0x2000000).d & 0xfc000000)
int32_t result = (var_50 + 0x1000000) & 0xfe000000
arg1[7] = ((r15_1 + 0x2000000) s>> 0x1a).d - ((rbp + 0x1000000).d & 0xfe000000) + rbp.d
arg1[9] = ((r13_1 + 0x2000000) s>> 0x1a).d - result + var_50
return result
