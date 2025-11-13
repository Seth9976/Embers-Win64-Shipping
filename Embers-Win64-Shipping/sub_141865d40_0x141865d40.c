// 函数: sub_141865d40
// 地址: 0x141865d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = arg1[1]
void** const rax = &data_142fe6b80
*arg1 = &data_142fe6b80

if (i_1 != 0)
    void* i
    
    do
        i = *(i_1 + 0x38)
        *(i_1 + 0x18) = &data_142fe6b70
        
        if (*(i_1 + 0x20) != 0)
            int64_t j
            
            do
                void* rcx = *(i_1 + 0x20)
                j = *(rcx + 0x28)
                j_sub_140a74f90(rcx)
                *(i_1 + 0x20) = j
            while (j != 0)
        
        int64_t rax_1 = *(i_1 + 0x18)
        *(i_1 + 0x28) = 0
        *(i_1 + 0x20) = 0
        (*(rax_1 + 8))(i_1 + 0x18, 0)
        j_sub_140a74f90(i_1)
        arg1[1] = i
        i_1 = i
    while (i != 0)
    rax = *arg1

arg1[2] = 0
arg1[1] = 0
jump(*(rax + 8))
