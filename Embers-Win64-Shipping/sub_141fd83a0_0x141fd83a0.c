// 函数: sub_141fd83a0
// 地址: 0x141fd83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[7]

if (rcx != 0 && arg1[6] != 0)
    (*(*rcx + 0x10))(rcx, &arg1[6])
    arg1[7] = 0

sub_14081c9d0(&arg1[6])
int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0 && arg1[4] != 0)
    (*(*rcx_2 + 0x10))(rcx_2, &arg1[4])
    arg1[5] = 0

sub_14081c9d0(&arg1[4])
int64_t* rcx_4 = arg1[3]

if (rcx_4 != 0 && arg1[2] != 0)
    (*(*rcx_4 + 0x10))(rcx_4, &arg1[2])
    arg1[3] = 0

sub_14081c9d0(&arg1[2])
int64_t* rcx_6 = arg1[1]

if (rcx_6 != 0 && *arg1 != 0)
    (*(*rcx_6 + 0x10))(rcx_6, arg1)
    arg1[1] = 0

return sub_14081c9d0(arg1) __tailcall
