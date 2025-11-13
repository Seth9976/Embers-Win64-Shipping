// 函数: sub_140b2b3b0
// 地址: 0x140b2b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg2
int64_t* rdi = rax[1]

if (rdi != 0)
    rdi[1].d += 1

int32_t rdx = rax[2].d
*arg1 = *rax
arg1[1] = rdi

if (rdi != 0)
    rdi[1].d += 1

arg1[2].d = rdx
arg1[3].b = 1

if (rdi == 0)
    arg1[6].b = 0
    return arg1

rdi[1].d -= 1

if (rdi[1].d != 1)
    arg1[6].b = 0
    return arg1

(**rdi)(rdi)
int32_t rsi = *(rdi + 0xc)
*(rdi + 0xc) -= 1

if (rsi == 1)
    (*(*rdi + 8))(rdi, zx.q(rsi))

arg1[6].b = 0
return arg1
