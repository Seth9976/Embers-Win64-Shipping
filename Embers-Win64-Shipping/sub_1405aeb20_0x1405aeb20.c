// 函数: sub_1405aeb20
// 地址: 0x1405aeb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405aec80(&arg1[0x6d])
void*** rbx = &arg1[0x59]
sub_1405aec80(rbx)
int64_t i_1 = 2

for (int64_t i = 2; i != 0; )
    rbx = &rbx[-0x14]
    i -= 1
    sub_1405ae180(&rbx[9])
    int32_t j_2 = rbx[8].d
    void* rax_1 = rbx[7]
    
    if (j_2 != 0)
        char* rax_2 = rax_1 + 4
        int32_t j
        
        do
            if (*rax_2 != 0)
                *rax_2 = 0
            
            rax_2 = &rax_2[8]
            j = j_2
            j_2 -= 1
        while (j != 1)
        rax_1 = rbx[7]
    
    if (rax_1 != 0)
        sub_140a74f90(rax_1)
    
    int64_t rcx_4 = rbx[4]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = rbx[2]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *rbx = &data_142d4bb80

void* rbx_1 = &arg1[0x31]

do
    rbx_1 -= 0xa0
    i_1 -= 1
    sub_1405ae180(rbx_1 + 0x48)
    int32_t j_3 = *(rbx_1 + 0x40)
    void* rax_3 = *(rbx_1 + 0x38)
    
    if (j_3 != 0)
        char* rax_4 = rax_3 + 4
        int32_t j_1
        
        do
            if (*rax_4 != 0)
                *rax_4 = 0
            
            rax_4 = &rax_4[8]
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        rax_3 = *(rbx_1 + 0x38)
    
    if (rax_3 != 0)
        sub_140a74f90(rax_3)
    
    int64_t rcx_8 = *(rbx_1 + 0x20)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = *(rbx_1 + 0x10)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *rbx_1 = &data_142d4bb80
while (i_1 != 0)

int64_t rcx_10 = arg1[5]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*arg1 = &data_142d4b9d8
return &data_142d4b9d8
