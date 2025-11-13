// 函数: sub_1417f1850
// 地址: 0x1417f1850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee7360(arg1)
void* result = *(arg1 + 0xa8)

if (result != 0)
label_1417f187a:
    result = sub_14243ade0(result)
    
    if (result.b != 0)
        return sub_1417f37b0(arg1, *(arg1 + 0x408), *(arg1 + 0x410)) __tailcall
else
    result = sub_141ee69e0(arg1)
    
    if (result != 0)
        goto label_1417f187a

return result
