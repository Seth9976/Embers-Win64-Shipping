// 函数: sub_14264a2b0
// 地址: 0x14264a2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x288)

if (rdx == 0)
    *arg2 = 0xffffffff
    arg2[1] = 0
    *(arg2 + 8) = data_143b51510
    arg2[4] = data_143b51518
    *(arg2 + 0x14) = data_143b51510
    arg2[7] = data_143b51518
    *(arg2 + 0x20) = 0
    *(arg2 + 0x28) = 0
    arg2[0xe] |= 1
    *(arg2 + 0x30) = 0x7f7fffff
    arg2[0x10] = 0xffffffff
    __builtin_memset(&arg2[0x11], 0, 0x14)
    arg2[0x16].b &= 0xe0
    arg2[0x17] = 0xbf800000
    arg2[0x18] = 0xbf800000
    arg2[0x19] = 0xbf800000
    arg2[0x1a] = 0x3f000000
    __builtin_memset(&arg2[0x1c], 0, 0x18)
else
    int64_t* r9_1 = *(arg1 + 0x2d0)
    int128_t var_30 = zx.o(0)
    void var_20
    int64_t* rax = sub_14265ad90(&var_20, rdx, arg1, r9_1)
    int64_t r8_1 = *(arg3 + 0x220)
    void var_48
    int64_t* rax_1 = (*(r8_1 + 0x18))(arg3 + 0x220, &var_48, r8_1)
    int64_t r8_2 = *(arg1 + 0x220)
    void var_3c
    int64_t* rax_2 = (*(r8_2 + 0x18))(arg1 + 0x220, &var_3c, r8_2)
    sub_142642800(arg2, arg1, *(arg1 + 0x288), rax_2, rax_1, rax, &var_30, 0x7f7fffff)

return arg2
