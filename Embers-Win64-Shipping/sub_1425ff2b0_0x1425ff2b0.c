// 函数: sub_1425ff2b0
// 地址: 0x1425ff2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = arg1 + 0x158 + (sx.q(arg2) << 4)
int64_t count = sx.q(arg3)
rbx_1[1].d = 0

if (*(rbx_1 + 0xc) s<= 0xffffffff)
    sub_1405c5510(rbx_1, 0)

int64_t rdi = sx.q(rbx_1[1].d)
int32_t rax_2 = (rdi + count).d
rbx_1[1].d = rax_2

if (rax_2 s> *(rbx_1 + 0xc))
    sub_1405daba0(rbx_1)

memset(rdi + *rbx_1, 0, count)
return *rbx_1
