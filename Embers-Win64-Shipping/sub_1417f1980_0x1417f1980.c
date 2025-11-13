// 函数: sub_1417f1980
// 地址: 0x1417f1980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)
void* result

if (rcx != 0 && (*(*rcx + 0x100))(rcx) != 0)
    int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
    int64_t* rax_3 = (*(*rcx_1 + 0x100))(rcx_1)
    int64_t rdx_1 = *rax_3
    
    if ((*(rdx_1 + 0x40))(rax_3, rdx_1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
