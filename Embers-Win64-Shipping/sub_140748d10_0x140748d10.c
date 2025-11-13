// 函数: sub_140748d10
// 地址: 0x140748d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9a920
arg1[0x34] = 0
int64_t* rdi = arg1[0x2f]
int64_t rsi = 0
uint64_t r15_1 = sx.q(arg1[0x30].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0x30]])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 0x18))(rbx_1)
            (**rbx_1)(rbx_1, 1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r15_1)

arg1[0x2a][6](&arg1[0x2a])
arg1[0x30].d = 0

if (*(arg1 + 0x184) != 0)
    sub_1405c5570(&arg1[0x2f], 0)

int64_t rcx_4 = arg1[0x31]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x2f]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x2e]
arg1[0x2a] = &data_142d99570

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405d1550(&arg1[0x2d])
sub_1419948a0(&arg1[0x2a])
sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
