// 函数: sub_140660250
// 地址: 0x140660250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140627040(arg1 + 0x190)
sub_1406601b0(arg1 + 0x160)

if (*(arg1 + 0x158) != 0)
    *(arg1 + 0x158) = 0
    sub_1406601b0(arg1 + 0x128)
    sub_1406601b0(arg1 + 0xf8)

if (*(arg1 + 0xe0) != 0)
    int64_t* rcx_4 = *(arg1 + 0xd8)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        int64_t rcx_5 = *(arg1 + 0xd8)
        
        if (rcx_5 != 0)
            *(arg1 + 0xd8) = sub_140a84c80(rcx_5, 0, 0)
        
        *(arg1 + 0xe0) = 0

int64_t rcx_6 = *(arg1 + 0xd8)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (*(arg1 + 0xc0) != 0)
    int64_t* rcx_7 = *(arg1 + 0xb8)
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        int64_t rcx_8 = *(arg1 + 0xb8)
        
        if (rcx_8 != 0)
            *(arg1 + 0xb8) = sub_140a84c80(rcx_8, 0, 0)
        
        *(arg1 + 0xc0) = 0

int64_t rcx_9 = *(arg1 + 0xb8)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (*(arg1 + 0xb0) != 0)
    *(arg1 + 0xb0) = 0

if (*(arg1 + 0x88) != 0)
    int64_t* rcx_10 = *(arg1 + 0x80)
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x38))(rcx_10, 0)
        int64_t rcx_11 = *(arg1 + 0x80)
        
        if (rcx_11 != 0)
            *(arg1 + 0x80) = sub_140a84c80(rcx_11, 0, 0)
        
        *(arg1 + 0x88) = 0

int64_t rcx_12 = *(arg1 + 0x80)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (*(arg1 + 0x70) != 0)
    int64_t* rcx_13 = *(arg1 + 0x68)
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x38))(rcx_13, 0)
        int64_t rcx_14 = *(arg1 + 0x68)
        
        if (rcx_14 != 0)
            *(arg1 + 0x68) = sub_140a84c80(rcx_14, 0, 0)
        
        *(arg1 + 0x70) = 0

int64_t rcx_15 = *(arg1 + 0x68)

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (*(arg1 + 0x58) != 0)
    int64_t* rcx_16 = *(arg1 + 0x50)
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16, 0)
        int64_t rcx_17 = *(arg1 + 0x50)
        
        if (rcx_17 != 0)
            *(arg1 + 0x50) = sub_140a84c80(rcx_17, 0, 0)
        
        *(arg1 + 0x58) = 0

int64_t rcx_18 = *(arg1 + 0x50)

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x44) = 0

int64_t* rdi = *(arg1 + 0x38)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return sub_1406601b0(arg1) __tailcall
