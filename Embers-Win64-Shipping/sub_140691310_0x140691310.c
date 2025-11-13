// 函数: sub_140691310
// 地址: 0x140691310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x210) != 0)
    int64_t* rcx = *(arg1 + 0x208)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x208)
        
        if (rcx_1 != 0)
            *(arg1 + 0x208) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x210) = 0

int64_t rcx_2 = *(arg1 + 0x208)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdi = *(arg1 + 0x1c8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_5 = *(arg1 + 0x1a0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140660250(arg1) __tailcall
