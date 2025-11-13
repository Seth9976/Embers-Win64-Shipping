// 函数: sub_14144b430
// 地址: 0x14144b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
int64_t i_1 = 4
void** rbx = arg1
int64_t i

do
    void* rdi_1 = *(arg3 - arg1 + rbx)
    
    if (rdi_1 != 0)
        char r9
        char var_30_1 = r9
        char var_2f_1 = 0
        void*** rax_1 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
        
        if (rax_1 == 0)
            rax_1 = nullptr
        else
            rax_1[1] = *(rdi_1 + 8)
            rax_1[2] = 0
            *(rax_1 + 0x18) = rdi_1.o
            *rax_1 = &data_142f285c0
        
        *rbx = rax_1
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
