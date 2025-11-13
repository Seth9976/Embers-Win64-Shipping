// 函数: sub_141845330
// 地址: 0x141845330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == *(arg1 + 0x144))
    *(arg1 + 0x144) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x144))
    z = false

if (not(z))
    int64_t* rdi_1 = *(arg1 + 0x538)
    sub_1405d9400()
    int64_t var_28 = data_143cd6fd8
    void* rdx_2 = data_143cd6fe0
    void* var_20_1 = rdx_2
    
    if (rdx_2 != 0)
        *(rdx_2 + 8) += 1
    
    int32_t var_18_1 = data_143cd6fe8
    result = (*(*rdi_1 + 0x38))(rdi_1, 5, data_1439c67f8, 0, &var_28)

int64_t* rcx_1 = *(arg1 + 0x30)

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x18))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x30)
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x20))(rcx_2, 1)
    
    *(arg1 + 0x30) = 0

int64_t* rcx_3 = *(arg1 + 0x550)

if (rcx_3 == 0)
    return result

jump(*(*rcx_3 + 0x38))
