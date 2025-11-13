// 函数: sub_140b4e7c0
// 地址: 0x140b4e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
int64_t rax = *arg1
int128_t var_18 = zmm0
void* rax_2 = sub_140b50ef0((*(rax + 0x48))(zmm0), &var_18)

if (rax_2 == 0)
    return 0xffffffff

return zx.q(*(rax_2 + 0x10))
