// 函数: sub_14193ee40
// 地址: 0x14193ee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141910250(arg1, arg2, arg3)
int64_t* rax = j_sub_140a82f30(0x308)
void* rcx

if (rax == 0)
    rcx = nullptr
else
    int64_t i_1 = 6
    rcx = &rax[1]
    *rax = 6
    void* rax_1 = rcx + 0x28
    int64_t i
    
    do
        *(rax_1 + 0x50) = 0xffffffff
        __builtin_memset(rax_1, 0, 0x28)
        rax_1 += 0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x420) = rcx
sub_14193efa0(rcx, data_1439c74ac << 4)
sub_14193efa0(*(arg1 + 0x420) + 0x80, data_1439c74b0 << 4)
sub_14193efa0(*(arg1 + 0x420) + 0x100, data_1439c74b4 << 4)

if (data_143eff5c5 != 0)
    sub_14193efa0(*(arg1 + 0x420) + 0x180, data_1439c74b8 << 4)
    sub_14193efa0(*(arg1 + 0x420) + 0x200, data_1439c74bc << 4)

*(arg1 + 0x418) = 0

if (data_1439c74e8 != 0)
    sub_14193efa0(*(arg1 + 0x420) + 0x280, data_1439c74dc << 4)

*(arg1 + 0x6da) = -1
*(arg1 + 0x6e2) = 0xffffffff
*(arg1 + 0x6d8) = 1
return 0
