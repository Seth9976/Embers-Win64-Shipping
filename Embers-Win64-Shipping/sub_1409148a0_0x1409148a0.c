// 函数: sub_1409148a0
// 地址: 0x1409148a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_142e1e268
arg1[5] = &data_142e1e650
arg1[0x16].d &= 0xfffffffe
*(arg1 + 0xb4) = 0
arg1[0x18].d &= 0xffffff00
arg1[0x17] = 0x3f800000
int32_t rax = arg1[1].d
*(arg1 + 0x3a) |= 2
bool cond:0_1

if (((rax u>> 4).b & 1) == 0)
    int64_t* rax_2 = sub_1409162c0()
    int64_t rsi_1 = rax_2[0x23]
    
    if (rsi_1 == 0)
        int64_t rdx = *rax_2
        (*(rdx + 0x390))(rax_2, rdx)
        rsi_1 = rax_2[0x23]
    
    cond:0_1 = sub_140d209c0(arg1) != rsi_1

if (((rax u>> 4).b & 1) != 0 || not(cond:0_1))
    void arg_8
    uint64_t rbx_2 = *sub_140b58170(&arg_8, "Sequence", 1)
    int64_t* rax_5 = sub_1409161b0()
    void* rax_6 = sub_140d1dc20(arg2, arg1, rbx_2, rax_5, rax_5, 1, 0)
    arg1[0x19] = rax_6
    *(rax_6 + 8) |= 9

return arg1
