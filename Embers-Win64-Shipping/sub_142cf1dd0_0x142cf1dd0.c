// 函数: sub_142cf1dd0
// 地址: 0x142cf1dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439c9120 = &data_143005ea8
sub_14198bce0(&data_1439c9120)
sub_1405ec8a0(&data_1439c9138)
data_1439c9120 = &data_142dda848
int64_t r9 = sub_1405d1550(&data_1439c9130)
bool cond:0 = data_1439c9128 == 0xffffffff
data_1439c9120 = &data_142d54860

if (cond:0 || data_143de542b != 0)
    return &data_142d54860

sub_140af98a0("Unknown", 0x95, u"A FRenderResource was deleted without being released first!", r9)
return sub_140afbb40() __tailcall
