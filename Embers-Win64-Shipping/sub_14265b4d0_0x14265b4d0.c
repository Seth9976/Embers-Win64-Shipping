// 函数: sub_14265b4d0
// 地址: 0x14265b4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
int64_t rbx = data_143f71478
uint64_t result = sub_14222c9e0(&arg1[0x18], rbx)

if (result.b != 0)
    result = sub_140bc7f20(sub_142231830(&arg1[0x18], rbx))
    *(arg2 + 8) += result

return result
