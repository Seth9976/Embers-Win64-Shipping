// 函数: sub_140d75ab0
// 地址: 0x140d75ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ebff58
arg1[0x1f].d = 0
int64_t rcx = arg1[0x1e]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140d7a1a0(&arg1[0x16], 0)
int64_t rcx_2 = arg1[0x1a]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x16]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x15].d = 0
int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140d72870(&arg1[0xc])
int64_t* rdi = arg1[0xb]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_8 = arg1[7]

if (rcx_8 != 0)
    (*(*rcx_8 + 0x10))(rcx_8)

int64_t* rcx_9 = arg1[6]

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

int64_t* rcx_10 = arg1[4]

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)

int64_t* rcx_11 = arg1[3]

if (rcx_11 != 0)
    (*(*rcx_11 + 0x10))(rcx_11)

int64_t* rcx_12 = arg1[2]

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

*arg1 = &data_142e2dc48

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
