// 函数: sub_1425e3c80
// 地址: 0x1425e3c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143449b38
sub_140a2fe90(sub_140b18f30(), arg1[0x2c])
sub_140596eb0(&arg1[0x29])
sub_140596eb0(&arg1[0x26])
sub_140596eb0(&arg1[0x23])
sub_140596eb0(&arg1[0x20])
int32_t i_1 = arg1[0x1f].d
int64_t* rbx = arg1[0x1e]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x1e]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140596eb0(&arg1[0x1b])
sub_140596eb0(&arg1[0x18])
arg1[0x17].d = 0
int64_t rcx_9 = arg1[0x16]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_14090fe30(&arg1[0xe], 0)
int64_t rcx_11 = arg1[0x12]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0xe]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t* rbx_1 = arg1[0xd]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140596d80(&arg1[0xa])
int64_t* rbx_2 = arg1[9]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_5 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_18 = arg1[7]

if (rcx_18 != 0)
    int32_t rsi = *(rcx_18 + 0xc)
    *(rcx_18 + 0xc) -= 1
    
    if (rsi == 1 && rcx_18 != 0)
        (*(*rcx_18 + 8))(rcx_18, zx.q(rsi))

*arg1 = &data_142e1cdc8
int64_t* rcx_19 = arg1[2]

if (rcx_19 != 0)
    int32_t temp4_1 = *(rcx_19 + 0xc)
    *(rcx_19 + 0xc) -= 1
    
    if (temp4_1 == 1)
        return (*(*rcx_19 + 8))(rcx_19, 1)

return &data_142e1cdc8
