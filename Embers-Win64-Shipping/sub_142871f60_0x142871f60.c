// 函数: sub_142871f60
// 地址: 0x142871f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = 0
void* r9 = &data_143b81610
void* rdi = nullptr

for (int64_t i = 0; i u< 5; )
    int64_t r8_1 = *(r9 + 0x10)
    
    if (r8_1 != 0)
        char* rax_1 = arg1
        uint32_t j
        uint32_t rdx_1
        
        do
            rdx_1 = zx.d(*rax_1)
            j = zx.d(*(rax_1 + r8_1 - arg1))
            
            if (rdx_1 != j)
                break
            
            rax_1 = &rax_1[1]
        while (j != 0)
        
        if (rdx_1 - j == 0)
            rdi = r9
            break
    
    i += 1
    r9 += 0x50

int64_t i_1 = 0
void* r9_1 = &data_143b817a0

do
    int64_t r8_3 = *(r9_1 + 0x10)
    
    if (r8_3 != 0)
        char* rax_2 = arg1
        uint32_t j_1
        uint32_t rdx_3
        
        do
            rdx_3 = zx.d(*rax_2)
            j_1 = zx.d(*(rax_2 + r8_3 - arg1))
            
            if (rdx_3 != j_1)
                break
            
            rax_2 = &rax_2[1]
        while (j_1 != 0)
        
        if (rdx_3 - j_1 == 0)
            rdi = r9_1
            break
    
    i_1 += 1
    r9_1 += 0x50
while (i_1 u< 0xa4)

if (rdi == 0)
    void* rax_3 = &data_143b84ae0
    
    do
        char* rcx = arg1
        uint32_t j_2
        uint32_t r8_5
        
        do
            r8_5 = zx.d(*rcx)
            j_2 = zx.d(*(rcx + *(rax_3 + 0x10) - arg1))
            
            if (r8_5 != j_2)
                break
            
            rcx = &rcx[1]
        while (j_2 != 0)
        
        if (r8_5 - j_2 == 0)
            return rax_3
        
        i_2 += 1
        rax_3 += 0x50
    while (i_2 u< 2)

return rdi
