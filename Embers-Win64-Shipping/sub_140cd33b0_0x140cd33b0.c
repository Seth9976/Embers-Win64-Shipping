// 函数: sub_140cd33b0
// 地址: 0x140cd33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd3a20(arg1)
int64_t* rdx = &arg1[0x1b]
int64_t* rcx = &arg1[0x25]
*arg1 = &data_142ea42d0
arg1[0x19] = 0
arg1[0x1a] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
arg1[0x23] = 0
arg1[0x24] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x2f]
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
return arg1
