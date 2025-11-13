// 函数: sub_14223bea0
// 地址: 0x14223bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[5]

for (int64_t i = 2; i != 0; )
    void* rax_1 = *(rdi - 8)
    rdi -= 0x10
    i -= 1
    void* j = *(rax_1 + 0x10000)
    
    if (j != 0)
        do
            void* j_1 = j
            j = *(j + 0x10000)
            sub_140a74f90(j_1)
        while (j != 0)
        
        rax_1 = *(rdi + 8)
    
    *(rax_1 + 0x10000) = 0
    *(*(rdi + 8) + 0x10010) = 0
    int64_t rcx = *(rdi + 8)
    *rdi = rcx
    sub_140a74f90(rcx)

*arg1 = &data_142d5c278
return &data_142d5c278
