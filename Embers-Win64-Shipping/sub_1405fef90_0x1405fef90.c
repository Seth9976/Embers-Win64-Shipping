// 函数: sub_1405fef90
// 地址: 0x1405fef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(arg3 + 7)
uint64_t result = (*(r9 + 0x150))(arg1, arg2, ((zx.q(rdx) & 7) + rax_1) s>> 3, r9)

if ((arg1[5].b & 1) != 0)
    int64_t rax_3
    int32_t rdx_3
    rdx_3:rax_3 = sx.o(arg3)
    uint64_t rdx_4 = zx.q(rdx_3) & 7
    int64_t rax_4 = rax_3 + rdx_4
    result = zx.q(rax_4.d) & 7
    int64_t r8_3 = rax_4 s>> 3
    
    if (result != rdx_4)
        *(r8_3 + arg2) &= (1 << (arg3.b & 7)) - 1

return result
