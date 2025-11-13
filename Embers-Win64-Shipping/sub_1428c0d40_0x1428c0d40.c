// 函数: sub_1428c0d40
// 地址: 0x1428c0d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* result = sub_14291a1a0(nullptr)

if (result != 0)
    char* rax = sub_1428c0250(arg1)
    result[3] = rax
    
    if (rax != 0)
        int64_t r8_1 = *(*result + 0x28)
        int32_t rax_1
        
        if (r8_1 != 0)
            rax_1 = r8_1(result, rax)
        
        if (r8_1 == 0 || rax_1 != 0)
            return result
    
    sub_1428c0b90(result)

return 0
