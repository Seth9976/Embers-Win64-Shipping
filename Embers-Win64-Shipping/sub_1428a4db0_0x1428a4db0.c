// 函数: sub_1428a4db0
// 地址: 0x1428a4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdx = 0

if (sub_1428a5c60(&data_143feb13c, sub_1428a5870) != 0)
    rdx = data_143fec930

if (rdx == 0)
    return 0

CRITICAL_SECTION* rcx = data_143feb140
int32_t var_18 = arg1 & 0xfffff000
sub_1428a5c40(rcx)
int64_t* rax_2 = sub_1428a8d10(data_143feb148, &var_18)
sub_1428a5d00(data_143feb140)

if (rax_2 == 0)
    return 0

return rax_2[1]
