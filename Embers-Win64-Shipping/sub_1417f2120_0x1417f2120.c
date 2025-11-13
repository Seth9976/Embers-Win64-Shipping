// 函数: sub_1417f2120
// 地址: 0x1417f2120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x100))(rcx)
    
    if (rax_2 != 0)
        int64_t rdx = *rax_2
        int64_t result
        result.b = (*(rdx + 0xb8))(rax_2, rdx) != 0
        return result

int64_t rax_3
rax_3.b = false
return 0
