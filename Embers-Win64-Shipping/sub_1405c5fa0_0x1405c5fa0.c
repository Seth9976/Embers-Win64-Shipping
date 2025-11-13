// 函数: sub_1405c5fa0
// 地址: 0x1405c5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int64_t var_18 = *arg2

if (rcx != 0)
    *(rcx + 0xc) += 1

if (&var_18 != arg1 + 0x38)
    var_18.o = *(arg1 + 0x38)
    *(arg1 + 0x38) = var_18.o

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

*(arg1 + 0x48) = arg2[2]
*(arg1 + 0x50) = arg2[3].d
*(arg1 + 0x54) = *(arg2 + 0x1c)
*(arg1 + 0x58) = arg2[4].d
int32_t result = *(arg2 + 0x24)
*(arg1 + 0x5c) = result
return result
