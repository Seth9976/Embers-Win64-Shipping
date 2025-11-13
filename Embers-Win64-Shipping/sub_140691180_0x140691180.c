// 函数: sub_140691180
// 地址: 0x140691180
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

if (*(arg1 + 0x1f8) != 0)
    int64_t* rcx_3 = *(arg1 + 0x1f0)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        int64_t rcx_4 = *(arg1 + 0x1f0)
        
        if (rcx_4 != 0)
            *(arg1 + 0x1f0) = sub_140a84c80(rcx_4, 0, 0)
        
        *(arg1 + 0x1f8) = 0

int64_t rcx_5 = *(arg1 + 0x1f0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (*(arg1 + 0x1e0) != 0)
    int64_t* rcx_6 = *(arg1 + 0x1d8)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        int64_t rcx_7 = *(arg1 + 0x1d8)
        
        if (rcx_7 != 0)
            *(arg1 + 0x1d8) = sub_140a84c80(rcx_7, 0, 0)
        
        *(arg1 + 0x1e0) = 0

int64_t rcx_8 = *(arg1 + 0x1d8)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (*(arg1 + 0x1c8) != 0)
    int64_t* rcx_9 = *(arg1 + 0x1c0)
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x38))(rcx_9, 0)
        int64_t rcx_10 = *(arg1 + 0x1c0)
        
        if (rcx_10 != 0)
            *(arg1 + 0x1c0) = sub_140a84c80(rcx_10, 0, 0)
        
        *(arg1 + 0x1c8) = 0

int64_t rcx_11 = *(arg1 + 0x1c0)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rdi = *(arg1 + 0x1a8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return sub_140660250(arg1) __tailcall
