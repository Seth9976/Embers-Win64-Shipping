// 函数: sub_1406af870
// 地址: 0x1406af870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    int32_t rax = *(rcx + 0x2c)
    *(rcx + 0x2c) -= 1
    
    if (rax == 1)
        int64_t* i = *arg1
        
        while (i != 0)
            int64_t* rax_1 = &i[2]
            int64_t* i_1 = i
            i = *rax_1
            *rax_1 = 0
            (**i_1)(i_1, 1)
        
        *arg1 = 0
        return 

*arg1 = 0
