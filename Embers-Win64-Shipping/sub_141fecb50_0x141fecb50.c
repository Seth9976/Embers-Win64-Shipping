// 函数: sub_141fecb50
// 地址: 0x141fecb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = arg1[4]
int128_t* rbx = arg2

if (rax == 0)
    rax = sub_140a82f30(0x230, zx.q((&rax[1]).d))
    arg1[4] = rax

int64_t i_1 = 4
int64_t i

do
    rax = &rax[8]
    int128_t zmm0 = *rbx
    rbx = &rbx[8]
    rax[-8] = zmm0
    rax[-7] = rbx[-7]
    rax[-6] = rbx[-6]
    rax[-5] = rbx[-5]
    rax[-4] = rbx[-4]
    rax[-3] = rbx[-3]
    rax[-2] = rbx[-2]
    rax[-1] = rbx[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*rax = *rbx
rax[1] = rbx[1]
rax[2] = rbx[2]
return sub_1419ba620(arg1) __tailcall
