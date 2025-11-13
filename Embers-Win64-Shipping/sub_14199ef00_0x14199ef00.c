// 函数: sub_14199ef00
// 地址: 0x14199ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("FRDGBuilder_Execute")
sub_1419baa70(arg1)
int64_t* rbx = arg1[2]
int64_t rsi = 0
uint64_t r15_1 = sx.q(arg1[3].d) << 3 u>> 3

if (rbx u> &rbx[arg1[3]])
    r15_1 = 0

if (r15_1 != 0)
    do
        sub_14199f8f0(arg1, *rbx)
        rsi += 1
        rbx = &rbx[1]
    while (rsi != r15_1)

sub_1419a9390(arg1)
int32_t rax_2 = arg1[3].d
int64_t rbx_1 = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t* rcx_3 = *(arg1[2] + (rbx_1 << 3))
        (**rcx_3)(rcx_3, 0)
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_14083ad10(&arg1[2], 0)

arg1[0x2d].d = 0

if (*(arg1 + 0x16c) != 0)
    sub_1410b3bb0(&arg1[0x2c], 0)

arg1[0x2f].d = 0

if (*(arg1 + 0x17c) != 0)
    sub_1410b3bb0(&arg1[0x2e], 0)

sub_14199e990(&arg1[0x18], 0)
sub_14199e990(&arg1[0x22], 0)
sub_14199e910(&arg1[4], 0)
sub_14199e890(&arg1[0xe], 0)
return sub_140b37f60("FRDGBuilder_Execute") __tailcall
