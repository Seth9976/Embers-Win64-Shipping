// 函数: sub_140b73b20
// 地址: 0x140b73b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t pcbBuffer

if (arg1 == 0)
    if (data_143e19020 == 0)
        pcbBuffer = 0x100
        GetUserNameW(&data_143e19020, &pcbBuffer)
    
    return &data_143e19020

if (data_143e19220 == 0)
    pcbBuffer = 0x100
    GetUserNameW(&data_143e19220, &pcbBuffer)
    wint_t _C = data_143e19220
    int16_t* rbx_1 = &data_143e19220
    int16_t* rdi_1 = &data_143e19220
    
    while (_C != 0)
        if (iswalnum(_C) != 0)
            *rdi_1 = *rbx_1
            rdi_1 = &rdi_1[1]
        
        _C = rbx_1[1]
        rbx_1 = &rbx_1[1]
    
    *rdi_1 = 0

return &data_143e19220
