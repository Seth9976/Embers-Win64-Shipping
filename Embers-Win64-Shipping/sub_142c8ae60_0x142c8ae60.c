// 函数: sub_142c8ae60
// 地址: 0x142c8ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
uint64_t rax_2

if (*(rcx + 8) != 3)
    if (arg1[2] == 0)
        FILE* rax_3 = fopen(*(rcx + 0x10), "rb")
        arg1[2] = rax_3
        
        if (rax_3 == 0)
            return -1
    
    rax_2 = fread(arg2, 1, arg3, arg1[2])
else
    int64_t rax_1 = arg1[3]
    
    if (rax_1 == 0)
        return rax_1
    
    rax_2 = rax_1(arg2, 1, arg4, *(rcx + 0x10))

if (rax_2 == 0)
    FILE* _Stream = arg1[2]
    
    if (_Stream != 0)
        fclose(_Stream)
        arg1[2] = rax_2
    
    *arg1 = **arg1

return rax_2
