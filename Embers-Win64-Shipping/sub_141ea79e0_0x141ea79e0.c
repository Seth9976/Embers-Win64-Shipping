// 函数: sub_141ea79e0
// 地址: 0x141ea79e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x6a0))()
int64_t* rsi = arg1[2]
void* rdi = rsi[0x23]

if (rdi == 0)
    (*(*rsi + 0x390))(rsi)
    rdi = rsi[0x23]

int64_t rcx_1 = arg1[0x50]
float zmm0

if (rcx_1 == 0 || *(rdi + 0x280) == 0)
    zmm0 = arg2.d f+ *(rdi + 0x304)
else
    void* rax_2 = sub_141f3cd50(rcx_1)
    zmm0 = *(*(rdi + 0x280) + 0x124) f+ arg2.d
    *(rax_2 + 8) = zmm0

*(arg1 + 0x304) = zmm0
return sub_14248a1e0(arg1, arg2.d) __tailcall
