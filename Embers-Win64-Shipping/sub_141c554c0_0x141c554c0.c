// 函数: sub_141c554c0
// 地址: 0x141c554c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209740
int64_t rdx = arg1[0x37]
arg1[0xe] = &data_143209790
sub_1405c2d80(&data_143a2d488, rdx)
void* rax = sub_141e7c7a0()

if (rax != 0)
    void var_28
    sub_141e7c8f0(rax, &var_28, arg1[0x19].d)
    
    if (sub_141e80b60(&var_28) != 0)
        int64_t* rax_2 = sub_1405948a0(&var_28)
        
        if (sub_140d3e110(&arg1[0xf]) != 0)
            int64_t rax_4 = sub_140d3c6e0(&arg1[0xf])
            int64_t r9_1 = *rax_2
            (*(r9_1 + 0x70))(rax_2, &arg1[0xe], rax_4, r9_1)
    
    sub_141e71cd0(&var_28)

sub_141c318e0(&arg1[0x1a])
int64_t rcx_8 = arg1[0x17]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x15]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x13]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x10]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_141c514d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
