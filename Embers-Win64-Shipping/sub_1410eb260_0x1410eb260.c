// 函数: sub_1410eb260
// 地址: 0x1410eb260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 == 0)
    return 

void* rbx_1 = *arg1 + 0x40
int32_t i

do
    int64_t* rdi_1 = *(rbx_1 + 0xe8)
    
    if (rdi_1 != 0)
        rdi_1[0x1a].d -= 1
        
        if (rdi_1[0x1a].d == 1)
            sub_1405d16e0(rdi_1, nullptr)
            sub_14081d930(&rdi_1[1], nullptr)
            sub_1405d16e0(&rdi_1[2], nullptr)
            sub_141096260(&rdi_1[3], 0)
            sub_141096040(&rdi_1[0xd], 0)
    
    sub_1410ebc60(rbx_1)
    sub_1405ec8a0(rbx_1 - 8)
    int64_t* rdi_2 = *(rbx_1 - 0x10)
    
    if (rdi_2 != 0)
        rdi_2[0x1a].d -= 1
        
        if (rdi_2[0x1a].d == 1)
            sub_1405d16e0(rdi_2, nullptr)
            sub_14081d930(&rdi_2[1], nullptr)
            sub_1405d16e0(&rdi_2[2], nullptr)
            sub_141096260(&rdi_2[3], 0)
            sub_141096040(&rdi_2[0xd], 0)
    
    int64_t* rcx_12 = *(rbx_1 - 0x18)
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12)
    
    int64_t* rcx_13 = *(rbx_1 - 0x20)
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x38))(rcx_13)
    
    rbx_1 += 0x130
    i = i_1
    i_1 -= 1
while (i != 1)
