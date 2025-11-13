// 函数: sub_1428856c0
// 地址: 0x1428856c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int64_t* result = nullptr

if (rax != 0)
    for (int64_t* i = rax[2]; i != 0; i = i[2])
        if (*rax == *arg2)
            result = rax
            break
        
        rax = i
    
    if (*rax == *arg2)
        result = rax
    
    if (result != 0)
        return result

return 0
