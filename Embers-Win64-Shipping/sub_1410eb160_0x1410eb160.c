// 函数: sub_1410eb160
// 地址: 0x1410eb160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rcx + 0x40
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi_1 + 8)
        
        if (rbx_1 != 0)
            rbx_1[0x1a].d -= 1
            
            if (rbx_1[0x1a].d == 1)
                sub_1405d16e0(rbx_1, nullptr)
                sub_14081d930(&rbx_1[1], nullptr)
                sub_1405d16e0(&rbx_1[2], nullptr)
                sub_141096260(&rbx_1[3], 0)
                sub_141096040(&rbx_1[0xd], 0)
        
        int64_t* rbx_2 = *rdi_1
        
        if (rbx_2 != 0)
            rbx_2[0x1a].d -= 1
            
            if (rbx_2[0x1a].d == 1)
                sub_1405d16e0(rbx_2, nullptr)
                sub_14081d930(&rbx_2[1], nullptr)
                sub_1405d16e0(&rbx_2[2], nullptr)
                sub_141096260(&rbx_2[3], 0)
                sub_141096040(&rbx_2[0xd], 0)
        
        rdi_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
