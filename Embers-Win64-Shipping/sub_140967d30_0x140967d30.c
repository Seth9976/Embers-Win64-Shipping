// 函数: sub_140967d30
// 地址: 0x140967d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg3 + 0x4a0))(arg3)
int64_t r8 = *arg1
bool cond:0 = (*(r8 + 0x4a0))(arg1, arg4, r8) == rax_1
int64_t rax_3
rax_3.b = arg1[2] == *(arg2 + 0x10)

if ((arg1[0xb].b & 4) != 0)
    return zx.q(cond:0)

return zx.q(rax_3.b)
