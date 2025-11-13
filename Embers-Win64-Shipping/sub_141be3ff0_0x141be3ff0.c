// 函数: sub_141be3ff0
// 地址: 0x141be3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int64_t var_18 = *arg2

if (rcx != 0)
    *(rcx + 0xc) += 1

int64_t* result = &var_18

if (&var_18 != arg1 + 0x3b8)
    var_18.o = *(arg1 + 0x3b8)
    *(arg1 + 0x3b8) = var_18.o

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        result = (*(*rcx + 8))(rcx, 1)

int64_t* rcx_1 = arg2[1]

if (rcx_1 != 0)
    int32_t temp1_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        jump(*(*rcx_1 + 8))

return result
