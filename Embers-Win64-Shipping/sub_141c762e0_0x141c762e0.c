// 函数: sub_141c762e0
// 地址: 0x141c762e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[5]
int32_t i_1 = arg1[6].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            int32_t rax_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (rax_1 == 1 && rcx_1 != 0)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[5]

if (rcx != 0)
    sub_140a74f90(rcx)

return sub_140d163b0(arg1) __tailcall
