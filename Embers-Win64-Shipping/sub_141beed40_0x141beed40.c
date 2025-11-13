// 函数: sub_141beed40
// 地址: 0x141beed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x50)
int128_t zmm1 = *(arg1 + 0x40)
int128_t var_38
char var_28

if (rdx != 0)
    *(rdx + 0x58) = 1
    *(rdx + 0x48) = zmm1
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    var_38 = zmm1
    var_28 = 1
    sub_140692f90(rdx + 0x60, &var_20)
    sub_140745b20(&var_20)
    rdx = *(arg1 + 0x50)

int64_t arg_8 = *(arg1 + 0x38)

if (rdx != 0)
    int32_t* rax_1 = sub_141b9ebe0(&var_38, &arg_8)
    void* r8_1 = *(arg1 + 0x50)
    *(r8_1 + 0x28) = *rax_1
    *(r8_1 + 0x30) = rax_1[2]
    *(r8_1 + 0x34) = rax_1[3].b
    sub_140692f90(r8_1 + 0x38, &rax_1[4])
    sub_140745b20(&var_28)
    rdx = *(arg1 + 0x50)

if (rdx != 0)
    *(rdx + 0x20) = *(arg1 + 0x58)
    rdx = *(arg1 + 0x50)

char result = *(arg1 + 0x59)

if (rdx != 0)
    *(rdx + 0x21) = result

return result
