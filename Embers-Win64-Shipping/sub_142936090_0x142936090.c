// 函数: sub_142936090
// 地址: 0x142936090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_1428e4860(*arg2)
int32_t var_20 = rax
int32_t var_28 = rax + 1
sub_1428b6f70(arg3, "%*sVersion: %ld (0x%lX)", zx.q(arg4))
int32_t rsi = 0

if (sub_142898c70(arg2[1]) s> 0)
    int32_t rax_4
    
    do
        int64_t* rax_2 = sub_142898ea0(arg2[1], rsi)
        int32_t* rax_3 = sub_1428ea3b0(0, *rax_2)
        var_28.q = rax_3
        sub_1428b6f70(arg3, "\n%*sZone: %s, User: ", zx.q(arg4))
        sub_1428a6780(rax_3)
        sub_14292ba90(arg3, rax_2[1])
        rsi += 1
        rax_4 = sub_142898c70(arg2[1])
    while (rsi s< rax_4)

return 1
