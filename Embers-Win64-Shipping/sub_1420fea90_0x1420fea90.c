// 函数: sub_1420fea90
// 地址: 0x1420fea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1)
int64_t result_1 = result

if (result != 0)
    result = sub_140d3c6e0(&arg1[2])
    
    if (result != 0)
    label_1420fead7:
        result = sub_14226e280(result_1, result)
        
        if (result != 0)
            result.b = *(result + 0x298) != 0
            return result
    else
        int64_t* rax = sub_140d3c6e0(arg1)
        int64_t rdx_1 = *rax
        result = (*(rdx_1 + 0x150))(rax, rdx_1)
        
        if (result != 0)
            goto label_1420fead7

result.b = 0
return result
