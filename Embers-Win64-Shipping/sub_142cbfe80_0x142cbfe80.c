// 函数: sub_142cbfe80
// 地址: 0x142cbfe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143de71d0
int32_t i_1 = data_143de71d8

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            int32_t rax = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (rax == 1 && rcx_1 != 0)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_143de71d0

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
