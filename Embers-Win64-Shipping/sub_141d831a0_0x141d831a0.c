// 函数: sub_141d831a0
// 地址: 0x141d831a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x17]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

int64_t* rcx_2 = arg1[0x15]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_1 = arg1[0xc].d
int64_t* rbx_1 = arg1[0xb]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[0xb]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (arg1[8].b != 0)
    arg1[8].b = 0
    int64_t* rbx_2 = arg1[6]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
