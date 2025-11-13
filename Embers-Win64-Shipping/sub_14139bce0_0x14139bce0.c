// 函数: sub_14139bce0
// 地址: 0x14139bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d u> 0)
    do
        int64_t rax_1 = *arg1
        char arg_8 = 0
        void*** (* var_18)() = j_sub_140597fc0
        int64_t* rsi_1 = *(rax_1 + (sx.q(i) << 3))
        char* var_10_1 = &arg_8
        char rax_3 = sub_140b11820(sub_140a756e0(&var_18, &data_143958018) + 0x10, rsi_1)
        int64_t r8_1 = *rsi_1
        
        if (rax_3 == 0)
            (*(r8_1 + 0x88))(rsi_1)
        else
            (*r8_1)(rsi_1, 0, r8_1)
        
        i += 1
    while (i u< arg1[1].d)

arg1[1].d = 0

if (*(arg1 + 0xc) == 0)
    return 

return sub_1405c5570(arg1, 0) __tailcall
