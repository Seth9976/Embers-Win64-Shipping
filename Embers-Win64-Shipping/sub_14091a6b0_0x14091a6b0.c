// 函数: sub_14091a6b0
// 地址: 0x14091a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140745b20(arg1 + 0x70)
int64_t rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x50)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x40)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t* rcx_4 = *(arg1 + 0x38)

if (rcx_4 != 0)
    result = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (result == 1 && rcx_4 != 0)
        result = (*(*rcx_4 + 8))(rcx_4, 1)

int64_t rcx_5 = *(arg1 + 0x18)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t* rcx_6 = *(arg1 + 0x10)

if (rcx_6 != 0)
    int32_t temp1_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp1_1 == 1)
        jump(*(*rcx_6 + 8))

return result
