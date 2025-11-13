// 函数: sub_1406987d0
// 地址: 0x1406987d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = arg1[5]
*arg1 = &data_142d8b5b0

while (i != 0)
    int64_t* rax_1 = &i[5]
    int64_t* j = i
    i = *rax_1
    *rax_1 = 0
    int64_t rdi_1 = arg1[4]
    
    if (j != rdi_1)
        while (j != 0)
            void* rax_2 = &j[2]
            int64_t* j_1 = j
            j = *rax_2
            *rax_2 = 0
            (**j_1)(j_1, 1)
            
            if (j == rdi_1)
                break

*arg1 = &data_142d8b590

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
