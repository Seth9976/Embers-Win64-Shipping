// 函数: sub_1426c3610
// 地址: 0x1426c3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg5

if ((arg1[0xb].b & 4) == 0 && (*(arg1 + 0x55) & 4) == 0)
    return 

int64_t* rdi_1

if ((*(arg1 + 0x55) & 4) == 0)
    rdi_1 = arg1
else
    rdi_1 = sub_1426b2ab0(arg1, arg2, arg3)

if (rdi_1 == 0)
    return 

uint64_t rax = zx.q(rdi_1[0xb].b)

if ((rax.b & 4) == 0)
    return 

if ((rax.b & 8) == 0)
    (*(*rdi_1 + 0x2c0))(rdi_1, arg2, arg3, arg4, __saved_zmm6)
    return 

uint32_t rax_3 = zx.d((*(*arg1 + 0x298))(arg1))

if (rax_3 == 0)
    rax = 0
else
    rax = arg3 - (zx.q(rax_3 + 3) & 0xfffffffffffffffc)

float zmm1 = *(rax + 4) f- arg4.d
arg5.d = arg4.d f+ *(rax + 8)
*(rax + 8) = arg5.d
*(rax + 4) = zmm1

if (not(zmm1 > 0f))
    *(rax + 8) = 0
    (*(*rdi_1 + 0x2c0))(rdi_1, arg2, arg3, arg5, __saved_zmm6)
