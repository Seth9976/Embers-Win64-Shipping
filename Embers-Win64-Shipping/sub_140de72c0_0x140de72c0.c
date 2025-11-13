// 函数: sub_140de72c0
// 地址: 0x140de72c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x30)

if (result != 0)
    int64_t* i = *(arg1 + 0x10)
    
    for (void* rdi_3 = &i[sx.q(*(arg1 + 0x18)) * 2]; i != rdi_3; i = &i[2])
        result = sub_140d992b0(*i, arg2)

return result
