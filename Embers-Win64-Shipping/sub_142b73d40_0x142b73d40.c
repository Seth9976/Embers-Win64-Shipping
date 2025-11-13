// 函数: sub_142b73d40
// 地址: 0x142b73d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (arg2 - arg3 + 1 s<= 0xfff)
    rdi = 0x1777
    arg1[2].d = 0xc
    *(arg1 + 0x14) = 0xfff
else if (arg2 - arg3 + 1 s<= 0x7fff)
    rdi = 0xc365
    arg1[2].d = 0xf
    *(arg1 + 0x14) = 0x7fff
else if (arg2 - arg3 + 1 s> 0x1ffff)
    rdi = 0x16e367
    arg1[2].d = 0x15
    *(arg1 + 0x14) = 0x1fffff
else
    rdi = 0x30d43
    arg1[2].d = 0x11
    *(arg1 + 0x14) = 0x1ffff

if (rdi.d s> arg1[1].d)
    sub_142a7dcd0(*arg1)
    int64_t rax_1 = sub_142a7dd00(zx.q((rdi << 2).d))
    *arg1 = rax_1
    
    if (rax_1 == 0)
        return rax_1
    
    arg1[1].d = rdi.d

int64_t rcx_2 = *arg1
*(arg1 + 0xc) = rdi.d
memset(rcx_2, 0, sx.q((rdi << 2).d))
arg1[3].d = arg3
int64_t rax_3
rax_3.b = 1
return rax_3
