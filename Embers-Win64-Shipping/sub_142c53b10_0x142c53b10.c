// 函数: sub_142c53b10
// 地址: 0x142c53b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = nullptr
void* rsi_2 = sx.q(arg3) * 0x30 + arg1
*(rsi_2 + 0x4c50) = *arg2
*(rsi_2 + 0x4c60) = arg3

if (sub_142891590(arg1 + 0x4c18) != 0)
    for (int64_t* i = *(arg1 + 0x4c18); i != 0; i = i[2])
        void* rax_2 = *i
        int128_t var_28 = *(rsi_2 + 0x4c50)
        int128_t var_18 = *(rax_2 + 0x18)
        
        if (sub_142c595d0(&var_18, &var_28) s> 0)
            break
        
        i_1 = i

sub_142c69f60(arg1 + 0x4c18, i_1, rsi_2 + 0x4c38, rsi_2 + 0x4c38)
return 0
