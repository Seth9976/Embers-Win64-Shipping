// 函数: sub_141eb5da0
// 地址: 0x141eb5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14325a580
sub_140596d10(&arg1[1], arg3)
int64_t rbx = 0
arg1[3] = 0
arg1[4] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xf] = 0
arg1[0x10] = 0
__builtin_memset(&arg1[0x30], 0, 0x18)
uint128_t zmm6
sub_141ec98d0(arg1, arg2, zmm6)

if (std::operator!=<char,struct std::char_traits<char> >(&data_143f3a500) != 0)
    sub_140d3a3a0(&data_143f3a500, sub_141fe0c50(0))

if (sub_140d3e110(&data_143f3a500) != 0)
    uint64_t* rax_4 = sub_140a3f490(sub_141fe0c50(0))
    int64_t* rax_5 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_5 != 0)
        rax_5[1] = arg1
        *rax_5 = &data_142d3fe58
        rax_5[2] = sub_141ec82b0
        rax_5[4] = sub_140a387b0()
        *rax_5 = &data_142d3feb0
    
    if (rax_5 != 0)
        sub_140599630(rax_4, 1)
        void arg_8
        int64_t* rax_8 = (*(*rax_5 + 0x30))(rax_5, &arg_8)
        int64_t r14_1 = sx.q(rax_4[1].d)
        rbx = *rax_8
        int32_t rax_9 = (r14_1 + 1).d
        rax_4[1].d = rax_9
        
        if (rax_9 s> *(rax_4 + 0xc))
            sub_1405a4f90(rax_4)
        
        void** rax_12 = (r14_1 << 4) + *rax_4
        *rax_12 = rax_5
        rax_12[1].d = 3
    
    arg1[0x32] = rbx

return arg1
