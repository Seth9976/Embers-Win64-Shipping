// 函数: sub_1423ff450
// 地址: 0x1423ff450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14094b310(&arg1[0x1c])
int64_t* rbx = arg1[0x1b]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_3 = arg1[0x17]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_14094ab00(&arg1[0x12])
sub_14094ab00(&arg1[0x10])
int32_t i_3 = arg1[0xd].d
int64_t* rbx_1 = arg1[0xc]

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx_1 = arg1[0xc]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_4 = arg1[0xb].d
int64_t* rbx_2 = arg1[0xa]

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx_2 = arg1[0xa]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int32_t i_5 = arg1[9].d
int64_t* rbx_3 = arg1[8]

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_11 = *rbx_3
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx_3 = &rbx_3[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_3 = arg1[8]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_13 = arg1[5]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return sub_140d163b0(arg1) __tailcall
