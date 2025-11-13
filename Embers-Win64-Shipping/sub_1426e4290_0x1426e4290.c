// 函数: sub_1426e4290
// 地址: 0x1426e4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x80)

if (rdx == 0)
    return 

int64_t* rcx = *(arg1 + 0x88)
int512_t entry_zmm2

if (rcx != 0 && *(arg1 + 0x90) == 0)
    entry_zmm2 = sub_141f477c0(rcx, 0)
    rdx = *(arg1 + 0x80)

return sub_1426b08f0(arg1, rdx, 0, entry_zmm2) __tailcall
