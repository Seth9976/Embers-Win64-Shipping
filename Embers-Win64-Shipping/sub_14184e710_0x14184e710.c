// 函数: sub_14184e710
// 地址: 0x14184e710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* i_3
sub_1418426d0(arg2, &i_3, arg3)
int64_t* rbx_1 = *arg2
int64_t rbp = 0
int64_t* i_2 = i_3
int64_t* i = i_2

if (rbx_1 != 0)
    while (i != 0)
        int64_t rcx_1 = rbx_1[1]
        int64_t r9_1 = *rbx_1
        int64_t rdx_1 = *i
        int64_t r8 = i[1]
        
        if (rcx_1 == 0 || r8 == 0 || r9_1 u> rdx_1 - 1 + r8 || r9_1 - 1 + rcx_1 u< rdx_1)
            rbx_1 = rbx_1[3]
            rbp += rcx_1
        else
            sub_1418286b0(arg1, rdx_1 - r9_1 + rbp, r8, 0)
            i = i[3]
        
        if (rbx_1 == 0)
            break

if (i_2 != 0)
    int64_t* i_1
    
    do
        i_1 = i_2[3]
        i_2[2] = 0
        i_2[3] = 0
        j_sub_140a74f90(i_2)
        i_2 = i_1
    while (i_1 != 0)

return arg1
