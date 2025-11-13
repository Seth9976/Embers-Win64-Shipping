// 函数: sub_142cc9c30
// 地址: 0x142cc9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_1439ae638

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

if (data_1439ae578 != 0)
    int64_t rcx_1 = data_1439ae538
    data_1439ae578 = 0
    data_1439ae56c = 0
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int64_t* rcx_2 = data_1439ae530

if (rcx_2 == 0)
    return 

int32_t temp1_1 = *(rcx_2 + 0xc)
*(rcx_2 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rcx_2 + 8))
