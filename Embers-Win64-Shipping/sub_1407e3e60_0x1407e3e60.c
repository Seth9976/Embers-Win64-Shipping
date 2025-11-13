// 函数: sub_1407e3e60
// 地址: 0x1407e3e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
arg1[6] = 0
*arg1 = &data_142dcfcd0
arg1[7].w = 0
*(arg1 + 0x3a) = 0
void*** rax = j_sub_140a82f30(0xf8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    memset(rax, 0, 0xf8)
    sub_140744780(rdi)
    *rdi = &data_142dd0010
    rdi[0x1e] = 0

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rdi)
    arg1[5] = rdi
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

sub_140806c90(arg1)
return arg1
