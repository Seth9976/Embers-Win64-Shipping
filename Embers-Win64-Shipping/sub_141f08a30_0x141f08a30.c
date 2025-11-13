// 函数: sub_141f08a30
// 地址: 0x141f08a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t entry_zmm3

if ((arg1[0x41].b & 0x18) != 0)
    void*** rax_1
    rax_1, entry_zmm3 = sub_141f88540()
    void** r8_1 = *rax_1
    r8_1[0xd](rax_1, arg1, r8_1)

int64_t result
int128_t zmm2_1
int128_t zmm3
result, zmm2_1, zmm3 = sub_141997ac0(&arg1[0x7e], 0, sub_141f34810(arg1), entry_zmm3)
void* rcx_3 = arg1[0x14]

if (rcx_3 == 0)
    return result

return sub_141997ac0(rcx_3 + 0x210, 0, zmm2_1, zmm3) __tailcall
