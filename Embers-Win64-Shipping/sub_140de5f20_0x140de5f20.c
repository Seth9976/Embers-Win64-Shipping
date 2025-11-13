// 函数: sub_140de5f20
// 地址: 0x140de5f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9760
void* rcx = arg1[1]

if (rcx != 0)
    sub_1405a46b0(rcx + 0x40, arg1)

DeleteCriticalSection(&arg1[0x12])
sub_140596eb0(&arg1[0xf])
sub_140596eb0(&arg1[0xc])
sub_140596eb0(&arg1[9])
sub_140596eb0(&arg1[6])
sub_140596eb0(&arg1[3])
int64_t* rdi = arg1[2]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
