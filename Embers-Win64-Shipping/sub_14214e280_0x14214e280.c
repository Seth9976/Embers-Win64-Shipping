// 函数: sub_14214e280
// 地址: 0x14214e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rcx = arg1[0x88]

if (rcx == 0)
    return 

int32_t rax_1 = sub_1423660e0(rcx)
sub_142397ac0(arg1, rax_1, rax_1)
void arg_8
sub_140ae16d0(arg2, &arg_8, arg3)
void* i = arg1[0x8c]
int32_t rsi_2 = 0

for (void* r14_3 = sx.q(arg1[0x8d].d) * 0x90 + i; i != r14_3; i += 0x90)
    sub_141f6f2b0(arg1, rsi_2)
    int32_t rbp_1 = *(*(**(arg1[0x88] + 0x50) + (sx.q(rsi_2) << 3)) + 0x12c)
    void*** rax_6 = j_sub_140a82f30(0x40)
    
    if (rax_6 != 0)
        rax_6 = sub_1422877b0(rax_6)
    
    *(i + 0x30) = rax_6
    sub_1422a3d10(rax_6, &arg_8, rbp_1, 0, 1)
    sub_141997e80(*(i + 0x30))
    rsi_2 += 1

sub_141ee8490(arg1)
*(arg1 + 0x44c) |= 0x20
