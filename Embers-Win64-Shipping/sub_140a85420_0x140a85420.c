// 函数: sub_140a85420
// 地址: 0x140a85420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = TlsGetValue(data_143db7a78)

if (result != 0)
    int64_t rdi_1 = sx.q(*(result + 0x38))
    int32_t rax = (rdi_1 + 1).d
    *(result + 0x38) = rax
    
    if (rax s> *(result + 0x3c))
        sub_140a88850(result + 0x30)
    
    result = *(result + 0x30)
    *(result + (rdi_1 << 3)) = arg1

return result
