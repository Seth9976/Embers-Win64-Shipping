// 函数: sub_14271aad0
// 地址: 0x14271aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14271a410(arg1, arg2)
int64_t* rdx = &arg1[0x12]
int64_t* rcx = &arg1[0x1c]
*arg1 = &data_14347fe20
arg1[0x10] = 0
arg1[0x11] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
arg1[0x22] = 0
arg1[0x23].d = 0
arg1[0x24].d = 0
*(arg1 + 0x124) = 1
__builtin_memset(&arg1[0x25], 0, 0x20)
arg1[0x2a] = 0x3f747ae147ae147b
uint8_t rax_3 = (arg1[1].d u>> 4).b
arg1[0x29].d = 6
*(arg1 + 0x14c) = 0x28
arg1[0x2b].d = 0x43960000
arg1[0x2c].d = 0x42700000
*(arg1 + 0x164) = 0x41200000

if ((rax_3 & 1) == 0)
    int64_t* rax_4 = sub_14272a9f0()
    void* rsi_1 = rax_4[0x23]
    
    if (rsi_1 == 0)
        int64_t rdx_1 = *rax_4
        (*(rdx_1 + 0x390))(rax_4, rdx_1)
        rsi_1 = rax_4[0x23]
    
    *(rsi_1 + 0x48) = sub_14272a430()
    sub_142718ef0(&arg1[0xa], arg1, sub_14271f000)
    sub_142718ef0(&arg1[0xc], arg1, sub_14271e7f0)
    sub_142718ef0(&arg1[0xe], arg1, sub_14271e4a0)

arg1[6].d |= 6
*(arg1 + 0x2c) = 1
int64_t* rax_6 = sub_14272b250()
void* rax_7 = rax_6[0x23]

if (rax_7 == 0)
    int64_t rdx_5 = *rax_6
    (*(rdx_5 + 0x390))(rax_6, rdx_5)
    rax_7 = rax_6[0x23]

arg1[0x2d].d = zx.d(*(rax_7 + 0x9b))
return arg1
