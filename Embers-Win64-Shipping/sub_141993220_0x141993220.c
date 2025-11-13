// 函数: sub_141993220
// 地址: 0x141993220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143008f38
sub_14198bce0(arg1)
*arg1 = &data_143008708
int64_t r9 = sub_14081c9d0(&arg1[2])
bool cond:0 = arg1[1].d == 0xffffffff
*arg1 = &data_142d54860

if (cond:0 || data_143de542b != 0)
    return &data_142d54860

sub_140af98a0("Unknown", 0x95, u"A FRenderResource was deleted without being released first!", r9)
return sub_140afbb40() __tailcall
