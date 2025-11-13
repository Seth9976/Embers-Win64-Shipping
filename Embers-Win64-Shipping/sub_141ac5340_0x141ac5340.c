// 函数: sub_141ac5340
// 地址: 0x141ac5340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
sub_141e29640(&arg1[2], arg2)
*(arg1 + 0x41) = 0
*(arg1 + 0x8b) = 0
sub_141ac0aa0(&arg1[0x1c], *arg2)
sub_141ac0960(&arg1[0x2c])

if (not(0f f!= arg1[0x2c].d) && not(0f f!= *(arg1 + 0x164)) && not(0f f!= arg1[0x2d].d))
    arg1[0x2c] = data_1439dbe60
    arg1[0x2d].d = data_1439dbe68

int32_t result
int32_t zmm6
result, zmm6 = sub_141ac0960(arg1 + 0x14c)

if (not(zmm6 f!= *(arg1 + 0x14c)) && not(zmm6 f!= arg1[0x2a].d) && not(zmm6 f!= *(arg1 + 0x154)))
    *(arg1 + 0x14c) = data_1439dbe50
    result = data_1439dbe58
    *(arg1 + 0x154) = result

return result
