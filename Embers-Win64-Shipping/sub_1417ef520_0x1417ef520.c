// 函数: sub_1417ef520
// 地址: 0x1417ef520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)
void* result

if (rcx != 0)
    result = (*(*rcx + 0x100))(rcx)
    
    if (result != 0)
        int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
        int64_t* rax_3 = (*(*rcx_1 + 0x100))(rcx_1)
        int64_t r8_1 = *rax_3
        (*(r8_1 + 0x58))(rax_3, zx.q(arg1), r8_1)
        int64_t* rcx_3 = *(data_143f5b298 + 0xaf8)
        
        if (rcx_3 != 0)
            result = (*(*rcx_3 + 0x18))(rcx_3, zx.q(arg1))
        
        if (rcx_3 == 0 || result.b != 0 || arg1 == 0)
            result.b = 1
            return result

result.b = 0
return result
