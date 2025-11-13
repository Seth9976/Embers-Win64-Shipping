// 函数: sub_14100dcd0
// 地址: 0x14100dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        *(rbx + 8) = &data_142efcdf8
        
        if (*(rbx + 0x10) != 0)
            int64_t j
            
            do
                void* rcx = *(rbx + 0x10)
                j = *(rcx + 0x10)
                j_sub_140a74f90(rcx)
                *(rbx + 0x10) = j
            while (j != 0)
        
        int64_t rax_1 = *(rbx + 8)
        *(rbx + 0x18) = 0
        *(rbx + 0x10) = 0
        (*(rax_1 + 8))(rbx + 8, 0)
        int64_t* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
