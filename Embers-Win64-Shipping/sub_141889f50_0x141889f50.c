// 函数: sub_141889f50
// 地址: 0x141889f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = j_sub_140a82f30(0x38)

if (rax == 0)
    return rax

*rax = *arg2
rax[1] = arg2[1]
rax[2].q = arg2[2].q
*(rax + 0x28) = 0
rax[3].q = 0

if (arg3 == 0 || arg3 == arg1[1])
    int64_t rax_5 = arg1[1]
    
    if (rax_5 == 0)
        arg1[2] = rax
        arg1[1] = rax
    else
        *(rax + 0x28) = rax_5
        *(arg1[1] + 0x30) = rax
        arg1[1] = rax
else
    rax[3].q = *(arg3 + 0x30)
    *(rax + 0x28) = arg3
    *(*(arg3 + 0x30) + 0x28) = rax
    *(arg3 + 0x30) = rax

(*(*arg1 + 8))(arg1, zx.q(arg1[3].d + 1))
int64_t rax_4
rax_4.b = 1
return rax_4
