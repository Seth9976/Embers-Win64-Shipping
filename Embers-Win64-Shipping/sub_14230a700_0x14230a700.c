// 函数: sub_14230a700
// 地址: 0x14230a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = sub_140cd7d40(arg1)
int64_t* rcx = *(arg1 + 0x348)

if (rcx != 0 && *(rcx + 0x54) == 0)
    (*(*rcx + 0x20))(rcx)

int128_t entry_zmm3

if (sub_140d23dc0(arg1, 0x30) == 0 && *(arg1 + 0x34) != 0xffffffff)
    void*** rax_3
    rax_3, zmm2, entry_zmm3 = sub_141f88540()
    int64_t* rax_4 = sub_140963350(rax_3)
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0xd0))(rax_4, arg1, r8_1)

void* rcx_4 = *(arg1 + 0x60)

if (rcx_4 != 0)
    sub_141e47910(rcx_4, arg1)

int64_t* rdi = *(arg1 + 0x58)

if (rdi != 0)
    entry_zmm3 = sub_1419a21e0(0)
    zmm2 = sub_142344650(rdi)

return sub_141997ac0(arg1 + 0x178, 0, zmm2, entry_zmm3) __tailcall
