// 函数: sub_1429371b0
// 地址: 0x1429371b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r8_1 = sub_1428b6f70(arg3, "%*sPath Length Constraint: ", zx.q(arg4))
int32_t* rdx = *arg2

if (rdx == 0)
    sub_1428b6f70(arg3, "infinite", r8_1)
else
    sub_14294a0c0(arg3, rdx)

sub_14289a750(arg3, &data_14370209c)
sub_1428b6f70(arg3, "%*sPolicy Language: ", zx.q(arg4))
sub_1428cdc60(arg3, *arg2[1])
sub_14289a750(arg3, &data_14370209c)
void* rax_1 = *(arg2[1] + 8)

if (rax_1 != 0)
    int64_t rax_2 = *(rax_1 + 8)
    
    if (rax_2 != 0)
        int64_t var_18_1 = rax_2
        sub_1428b6f70(arg3, "%*sPolicy Text: %s\n", zx.q(arg4))

return 1
