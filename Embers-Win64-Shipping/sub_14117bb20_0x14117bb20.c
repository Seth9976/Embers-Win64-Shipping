// 函数: sub_14117bb20
// 地址: 0x14117bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408c8cf0(arg1, *arg2)
sub_1408c8cf0(&arg1[1], arg2[1])
sub_1405d16e0(&arg1[2], arg2[2])
sub_14117b740(&arg1[3], &arg2[3])

if (&arg1[6] != &arg2[6])
    void* rax_1 = arg1[9]
    void* rbx_1 = &arg1[6]
    int32_t i_1 = arg1[0xa].d
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    if (i_1 != 0)
        void* rbx_2 = rbx_1 + 0x10
        int32_t i
        
        do
            sub_1405ec8a0(rbx_2)
            rbx_2 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rax_2 = arg2[9]
    void* rdx_4 = &arg2[6]
    
    if (rax_2 != 0)
        rdx_4 = rax_2
    
    sub_14115fec0(&arg1[6], rdx_4, arg2[0xa].d, *(arg1 + 0x54), 0)

sub_1405d16e0(&arg1[0xb], arg2[0xb])
sub_1405d16e0(&arg1[0xc], arg2[0xc])
sub_1405d16e0(&arg1[0xd], arg2[0xd])
sub_1405d16e0(&arg1[0xe], arg2[0xe])
return arg1
