// 函数: sub_1426e6a40
// 地址: 0x1426e6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg2 s< 0 || arg2 s>= arg1[1].d)
    arg1.b = 0
else
    arg1.b = 1

int32_t rdi = 0
int32_t rax = 0

if (arg1.b != 0)
    rax = arg2

int64_t rcx = sx.q(rax)
int64_t rax_1 = *rbx
int32_t zmm0 = *(rax_1 + (rcx << 3))
int32_t rcx_1 = *(rbx + 0xc)
int32_t arg_c = *(rax_1 + (rcx << 3) + 4) & 0x7fffffff
rbx[1].d = 0

if (rcx_1 != 1)
    sub_1405c5570(rbx, 1)
    rcx_1 = *(rbx + 0xc)
    rdi = rbx[1].d

rbx[1].d = rdi + 1

if (rdi + 1 s> rcx_1)
    sub_1405a4d70(rbx)

int64_t result = zmm0.q
*(*rbx + (sx.q(rdi) << 3)) = result
rbx[0x27].d = 1
return result
