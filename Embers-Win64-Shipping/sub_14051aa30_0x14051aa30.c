// 函数: sub_14051aa30
// 地址: 0x14051aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b0b2f0(&data_143f3f2f0)
data_143f3f2f0 = &data_1432977d8
void arg_8
uint64_t* rax_1 = sub_140b1a400(*sub_140b58260(&arg_8, u"engine", 1))
void*** rax_2 = sub_140a84c80(0, 0x20, 0)

if (rax_2 != 0)
    *rax_2 = &data_143297708
    rax_2[2] = sub_140a387b0()
    *rax_2 = &data_143297760

if (rax_2 != 0)
    sub_140599630(rax_1, 1)
    void arg_10
    (*rax_2)[6](rax_2, &arg_10)
    int64_t rsi_1 = sx.q(rax_1[1].d)
    int32_t rax_5 = (rsi_1 + 1).d
    rax_1[1].d = rax_5
    
    if (rax_5 s> *(rax_1 + 0xc))
        sub_1405a4f90(rax_1)
    
    void**** rax_8 = (rsi_1 << 4) + *rax_1
    *rax_8 = rax_2
    rax_8[1].d = 2

return atexit(sub_142cffc70) __tailcall
