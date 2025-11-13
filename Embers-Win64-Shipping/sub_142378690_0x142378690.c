// 函数: sub_142378690
// 地址: 0x142378690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142371ab0(arg1)
bool z

if (0 == arg1[9].d)
    arg1[9].d = 0
    z = true
else
    arg1[9].d
    z = false

if (not(z) && sub_140d3e110(arg1 + 0x4c) != 0)
    (*(*arg1 + 8))(arg1)
    arg1[9].d = 0
    int64_t result
    result.b = 1
    return result

return 0
