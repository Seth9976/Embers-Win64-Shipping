// 函数: sub_141afd050
// 地址: 0x141afd050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = arg1 + 0x5a0
sub_1405aec80(rbx)
int64_t i_2 = 3

for (int64_t i = 3; i != 0; )
    rbx = &rbx[-0x14]
    i -= 1
    sub_1405ae180(&rbx[9])
    int32_t j_3 = rbx[8].d
    void* rax_1 = rbx[7]
    
    if (j_3 != 0)
        char* rax_2 = rax_1 + 4
        int32_t j
        
        do
            if (*rax_2 != 0)
                *rax_2 = 0
            
            rax_2 = &rax_2[8]
            j = j_3
            j_3 -= 1
        while (j != 1)
        rax_1 = rbx[7]
    
    if (rax_1 != 0)
        sub_140a74f90(rax_1)
    
    int64_t rcx_3 = rbx[4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = rbx[2]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *rbx = &data_142d4bb80

int64_t i_1 = 3
void* rbx_1 = arg1 + 0x3c0

do
    rbx_1 -= 0xa0
    i_1 -= 1
    sub_1405ae180(rbx_1 + 0x48)
    int32_t j_4 = *(rbx_1 + 0x40)
    void* rax_3 = *(rbx_1 + 0x38)
    
    if (j_4 != 0)
        char* rax_4 = rax_3 + 4
        int32_t j_1
        
        do
            if (*rax_4 != 0)
                *rax_4 = 0
            
            rax_4 = &rax_4[8]
            j_1 = j_4
            j_4 -= 1
        while (j_1 != 1)
        rax_3 = *(rbx_1 + 0x38)
    
    if (rax_3 != 0)
        sub_140a74f90(rax_3)
    
    int64_t rcx_7 = *(rbx_1 + 0x20)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *(rbx_1 + 0x10)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *rbx_1 = &data_142d4bb80
while (i_1 != 0)

void* rbx_2 = arg1 + 0x1e0
void* result

do
    rbx_2 -= 0xa0
    i_2 -= 1
    sub_1405ae180(rbx_2 + 0x48)
    int32_t j_5 = *(rbx_2 + 0x40)
    result = *(rbx_2 + 0x38)
    
    if (j_5 != 0)
        char* rax_5 = result + 4
        int32_t j_2
        
        do
            if (*rax_5 != 0)
                *rax_5 = 0
            
            rax_5 = &rax_5[8]
            j_2 = j_5
            j_5 -= 1
        while (j_2 != 1)
        result = *(rbx_2 + 0x38)
    
    if (result != 0)
        result = sub_140a74f90(result)
    
    int64_t rcx_11 = *(rbx_2 + 0x20)
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = *(rbx_2 + 0x10)
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    *rbx_2 = &data_142d4bb80
while (i_2 != 0)

return result
