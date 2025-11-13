// 函数: sub_14088ab20
// 地址: 0x14088ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
__builtin_memset(&arg1[0x18], 0, 0x30)
*arg1 = 0
int64_t var_18

if (&arg1[8] != &var_18)
    int64_t rcx = *(arg1 + 8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0

var_18 = 0
int64_t var_10 = 0
int128_t zmm0 = var_18.o
var_18 = 0
int64_t var_10_1 = 0
*(arg1 + 0x18) = zmm0
*(arg1 + 0x28) = var_18.o
*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5410(&arg1[0x38], 0)

return arg1
