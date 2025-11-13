// 函数: sub_142c533d0
// 地址: 0x142c533d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 != 0xbab1e)
    return 1

*arg1 = 0
sub_142c531c0(arg1)
void* rcx = *(arg1 + 0x140)

if (rcx != 0)
    *(rcx + 0xb0) = &arg1[0x20]
    void* rcx_1 = *(arg1 + 0x140)
    sub_142c5a0d0(rcx_1, *(rcx_1 + 0xb0))
    sub_142c5c560(*(arg1 + 0x140))

sub_142c66fd0(&arg1[0x2e])
sub_142c6ec60(&arg1[0x3c])
sub_142c69e80(&arg1[8], 0)
sub_142c69e80(&arg1[0x10], 0)
int64_t* i_1 = *(arg1 + 8)

if (i_1 != 0)
    int64_t* i
    
    do
        i = *i_1
        
        if (i_1[0x17].d == 2)
            sub_142c5a0d0(i_1, i_1[0x16])
            i_1[0x16] = 0
            i_1[0x17].d = 0
        
        i_1[0x149] = 0
        i_1[0x18] = 0
        i_1 = i
    while (i != 0)

sub_142c66fd0(&arg1[0x20])
sub_142c70210(nullptr, &arg1[0x58])
sub_142c70140(nullptr, &arg1[0x60])
data_143ccb8a0(arg1)
return 0
