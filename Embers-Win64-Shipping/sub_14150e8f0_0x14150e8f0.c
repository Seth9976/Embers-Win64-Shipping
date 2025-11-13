// 函数: sub_14150e8f0
// 地址: 0x14150e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d16e0(&arg1[1], nullptr)
sub_1405d16e0(arg1, nullptr)

for (int32_t i = 0; i u< 4; i += 1)
    sub_1405d16e0(&arg1[0xb + sx.q(i) * 0xa], nullptr)

int64_t* rbp = arg1[0x2a]
int64_t i_2 = 4
int64_t* rbx = &rbp[2]
int64_t i_1

do
    if (*rbx != 0)
        int64_t* rcx_4 = rbx[1]
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4, rbx)
            rbx[1] = 0
    
    rbx = &rbx[2]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
sub_1405d16e0(&rbp[1], nullptr)
int64_t* result = sub_1405d16e0(rbp, nullptr)
*(arg1 + 0x164) = 0
*(arg1 + 0x16c) = 0
return result
