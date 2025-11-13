// 函数: sub_1407e37f0
// 地址: 0x1407e37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
arg1[6] = 0
*arg1 = &data_142dcdc80
void*** rax = j_sub_140a82f30(0xe0)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    memset(rax, 0, 0xe0)
    sub_140744780(rbx)
    *rbx = &data_142dcdfc0
    rbx[0x19] = 0
    rbx[0x1a] = 0

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rbx)
    arg1[5] = rbx
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

sub_140806b20(arg1)
return arg1
