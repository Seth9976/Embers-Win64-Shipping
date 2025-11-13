// 函数: sub_142381a50
// 地址: 0x142381a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143335bb8
void* i = &arg1[0xa2]
void* i_2 = arg1[0xc2]

if (i_2 != 0)
    i = i_2

for (void* rsi_2 = (sx.q(arg1[0xc3].d) << 5) + i; i != rsi_2; i += 0x20)
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
    
    *(i + 0x18) = 0
    sub_1405d16e0(i, nullptr)
    sub_1405d16e0(i + 8, nullptr)
    sub_1405d16e0(i + 0x10, nullptr)

void* i_3 = arg1[0xa0]
void* i_1 = &arg1[0x30]

if (i_3 != 0)
    i_1 = i_3

for (void* rdi_3 = sx.q(arg1[0xa1].d) * 0x70 + i_1; i_1 != rdi_3; i_1 += 0x70)
    (*(*i_1 + 0x30))(i_1)

sub_142380f80(&arg1[0xa2])
sub_142381110(&arg1[0x30])
sub_142381070(&arg1[0x2c])
return sub_142289fd0(arg1) __tailcall
