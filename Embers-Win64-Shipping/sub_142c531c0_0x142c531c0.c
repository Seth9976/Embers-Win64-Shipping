// 函数: sub_142c531c0
// 地址: 0x142c531c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = sub_142c6ed40(arg1 + 0xf0)
int64_t* i_1 = i

while (i != 0)
    void* rax = *(arg1 + 0x140)
    *i_1 = rax
    *(rax + 0x10) = 0
    sub_142c65340(i_1, 1)
    int512_t entry_zmm2 = sub_142c5c970(i_1, 0, entry_zmm2)
    i = sub_142c6ed40(arg1 + 0xf0)
    i_1 = i

return i
