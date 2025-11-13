// 函数: sub_1405e6970
// 地址: 0x1405e6970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x1e]
*arg1 = &data_142d5b418

if (rdi != 0)
    int64_t* rcx = rdi[3]
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    int64_t* rcx_1 = rdi[2]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    int64_t* rcx_2 = rdi[1]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
    
    int64_t* rcx_3 = *rdi
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))(rcx_3)
    
    j_sub_140a74f90(rdi)

int64_t* rdi_1 = arg1[0x1d]

if (rdi_1 != 0)
    int64_t* rcx_5 = rdi_1[2]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
    
    int64_t* rcx_6 = rdi_1[1]
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
    
    int64_t* rcx_7 = *rdi_1
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x10))(rcx_7)
    
    j_sub_140a74f90(rdi_1)

int64_t* rcx_9 = arg1[0x1a]

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

int64_t* rcx_10 = arg1[0x19]

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)

int64_t* rcx_11 = arg1[0x18]

if (rcx_11 != 0)
    (*(*rcx_11 + 0x10))(rcx_11)

sub_1405e6840(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
