// 函数: sub_141b85140
// 地址: 0x141b85140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x1be]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = arg1[0x1bc]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rbx_1 = arg1[0x1ba]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[0x1b8]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_140596d80(&arg1[0x1b5])
int64_t rcx_8 = arg1[0x1b3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x1b1]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rbx_3 = arg1[0x1ad]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp9_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg1[0x1a6]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

sub_140de0590(&arg1[0xa3])
arg1[0x25] = &data_142ec9258
sub_140ddf1d0(&arg1[0x26])
arg1[0x25] = &data_142d8ad00
int64_t rcx_16 = arg1[0x23]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t i_1 = arg1[0x22].d
int64_t* rbx_5 = arg1[0x21]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_17 = *rbx_5
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx_5 = &rbx_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = arg1[0x21]

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

return sub_140660b20(arg1) __tailcall
