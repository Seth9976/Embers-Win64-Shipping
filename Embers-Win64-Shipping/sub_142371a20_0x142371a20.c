// 函数: sub_142371a20
// 地址: 0x142371a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x54)
*(arg1 + 0x54) = 1
*arg2 = 0
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
    arg1[9].d
    arg1[9].d = 0

bool z_1

if (0 == arg1[0xb].d)
    arg1[0xb].d = 0
    z_1 = true
else
    arg1[0xb].d
    z_1 = false

if (not(z_1))
    return (*(*arg1 + 0x38))(arg1, arg2, arg3)

int64_t result = arg2[4]
*arg3 = result
return result
