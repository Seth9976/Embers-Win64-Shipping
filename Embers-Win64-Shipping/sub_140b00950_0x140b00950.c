// 函数: sub_140b00950
// 地址: 0x140b00950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&data_143de54f0 != arg1)
    int32_t r8_1 = data_143de54f8:4.d
    int64_t rsi_1 = *arg1
    int32_t rdi_1 = arg1[1].d
    data_143de54f8.d = rdi_1
    
    if (rdi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&data_143de54f0, rdi_1, r8_1)
        memcpy(data_143de54f0, rsi_1, rdi_1 * 2)
    else
        data_143de54f8:4.d = rdi_1

int64_t rcx_1 = *arg1

if (rcx_1 == 0)
    return 

return sub_140a74f90(rcx_1) __tailcall
