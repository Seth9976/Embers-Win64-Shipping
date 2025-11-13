// 函数: sub_140d97cd0
// 地址: 0x140d97cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec2a20
sub_140d9b5c0(arg1, 1)
void* rcx = data_143e20d08

if (rcx == 0)
    int64_t* rdi_1 = arg1[0x6c]
    
    if (rdi_1 != 0)
        sub_140596e10(&rdi_1[0x3d])
        int64_t rcx_4 = rdi_1[0x3b]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_140596d80(&rdi_1[7])
        rdi_1[1].d = 0
        
        if (*(rdi_1 + 0xc) != 0)
            sub_140888ba0(rdi_1, 0)
        
        rdi_1[6].d = 0xffffffff
        *(rdi_1 + 0x34) = 0
        sub_14059a8e0(&rdi_1[2], 0)
        int64_t rcx_8 = rdi_1[4]
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *rdi_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        j_sub_140a74f90(rdi_1)
else
    sub_1405a46b0(rcx + 0xb8, arg1)
    int64_t* rcx_2 = *(data_143e20d08 + 0x20)
    (*(*rcx_2 + 0x160))(rcx_2, arg1[0x6c])

arg1[0x6c] = 0
int64_t rcx_11 = arg1[0x6a]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x36]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[2]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

*arg1 = &data_142d44d70
void* rcx_14 = data_143e1a338

if (rcx_14 != 0 && arg1[1].b != 0)
    sub_140bb6e00(rcx_14, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
