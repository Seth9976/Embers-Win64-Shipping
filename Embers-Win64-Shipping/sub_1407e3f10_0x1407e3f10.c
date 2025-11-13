// 函数: sub_1407e3f10
// 地址: 0x1407e3f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
arg1[6] = 0
*arg1 = &data_142dd08a0
void*** rax = j_sub_140a82f30(0xe8)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    memset(rax, 0, 0xe8)
    sub_140744780(rbx)
    *rbx = &data_142dd0be0
    rbx[0x19] = 0
    rbx[0x1a] = 0

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rbx)
    arg1[5] = rbx
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

sub_140806ff0(arg1)
return arg1
