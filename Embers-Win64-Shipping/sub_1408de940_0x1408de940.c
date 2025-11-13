// 函数: sub_1408de940
// 地址: 0x1408de940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
int128_t entry_zmm3
int64_t result = sub_141997ac0(arg1 + 0xb8, 0, sub_141997f50(arg1 + 0x98), entry_zmm3)
*(arg1 + 0x58) = 0
int32_t i_1 = *(arg1 + 0x70)

if (i_1 != 0)
    void* rbx_1 = *(arg1 + 0x68) + 0x10
    int32_t i
    
    do
        result = sub_140bc0410(rbx_1)
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x74) == 0
*(arg1 + 0x70) = 0

if (not(cond:0))
    result = sub_1405a5220(arg1 + 0x68, 0)

bool cond:1 = *(arg1 + 0x84) == 0
*(arg1 + 0x80) = 0

if (cond:1)
    return result

return sub_1405c5660(arg1 + 0x78, 0)
