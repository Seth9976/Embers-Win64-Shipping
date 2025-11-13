// 函数: sub_142384130
// 地址: 0x142384130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = &arg1[0xa2]
*arg1 = &data_143335bb8
int64_t* i_2 = arg1[0xc2]

if (i_2 != 0)
    i = i_2

for (void* rbp_2 = &i[sx.q(arg1[0xc3].d) * 4]; i != rbp_2; i = &i[4])
    void* rcx = *i
    
    if (rcx != 0)
        int32_t rax = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax = *(rcx + 8)
        
        if (rax == 1)
            void* rdi_1 = *i
            
            if (*(rdi_1 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_1 = data_143f0f180
                    (*(*rcx_1 + 0x630))(rcx_1, rdi_1)
                
                *(rdi_1 + 0x11) = 0
    
    i[3].d = 0
    sub_1405d16e0(i, nullptr)
    sub_1405d16e0(&i[1], nullptr)
    sub_1405d16e0(&i[2], nullptr)

void* i_3 = arg1[0xa0]
void* i_1 = &arg1[0x30]

if (i_3 != 0)
    i_1 = i_3

for (void* rdi_3 = sx.q(arg1[0xa1].d) * 0x70 + i_1; i_1 != rdi_3; i_1 += 0x70)
    (*(*i_1 + 0x30))(i_1)

sub_142380f80(&arg1[0xa2])
sub_142381110(&arg1[0x30])
sub_142381070(&arg1[0x2c])
sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
