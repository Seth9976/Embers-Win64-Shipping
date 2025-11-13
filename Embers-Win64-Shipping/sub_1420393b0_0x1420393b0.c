// 函数: sub_1420393b0
// 地址: 0x1420393b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1424c7800()
void** result = rax[0x23]

if (result == 0)
    int64_t rdx_2 = *rax
    (*(rdx_2 + 0x390))(rax, rdx_2)
    result = rax[0x23]

if ((result[7].b & 4) != 0)
    void* rcx_1 = *(arg1 + 0x90)
    
    if (rcx_1 != 0)
        result = data_143f58d48
        
        if (*(rcx_1 + 0xbc) == result && rcx_1 != 8 && *(rcx_1 + 0x298) == 0)
            result = sub_140e88cf0(data_143e29f28, 1, nullptr)

void* rcx_4 = data_143f5b298

if (rcx_4 != 0)
    result = sub_1423dcff0(rcx_4)
    
    if (result != 0)
        int32_t rax_1 = sub_1405f8ab0(arg1 + 0x68)
        result = sub_141e86100(sub_1423dcff0(data_143f5b298), rax_1)
        *(arg1 + 0x305) = 1

return result
