// 函数: sub_140fda880
// 地址: 0x140fda880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef5880
void* rdi = &arg1[0x10]

for (int64_t i = 4; i != 0; )
    int64_t* rcx = *(rdi - 8)
    rdi -= 8
    i -= 1
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)

int32_t i_2 = arg1[0xa].d
int64_t* rbx = arg1[9]

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        rbx = &rbx[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx = arg1[9]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_3 = arg1[8]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg1[7]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

*arg1 = &data_142dd6680
return &data_142dd6680
