// 函数: sub_1417f4370
// 地址: 0x1417f4370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143f5b298
int64_t* rcx = *(result + 0xb08)

if (rcx != 0)
    result = (*(*rcx + 0x120))(rcx)
    
    if (result.b != 0)
        int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
        int64_t rax_2 = *rcx_1
        int512_t zmm1
        
        if (arg2 == 0)
            zmm1.o = arg1
            return (*(rax_2 + 0xa8))(rcx_1, zmm1)
        
        if (arg2 == 1)
            jump(*(rax_2 + 0xb0))
        
        zmm1.o = arg1
        jump(*(rax_2 + 0xa0))

return result
