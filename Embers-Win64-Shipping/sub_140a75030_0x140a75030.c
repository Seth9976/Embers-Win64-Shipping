// 函数: sub_140a75030
// 地址: 0x140a75030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TlsSetValue(data_143db7a78, nullptr)
int64_t* i = *(arg1 + 0x30)
int64_t result = sx.q(*(arg1 + 0x38))

for (void* rdi_1 = &i[result]; i != rdi_1; i = &i[1])
    int64_t* rcx_1 = *i
    
    if (rcx_1 != 0)
        result = (**rcx_1)(rcx_1, 1)
    
    *i = 0

return result
