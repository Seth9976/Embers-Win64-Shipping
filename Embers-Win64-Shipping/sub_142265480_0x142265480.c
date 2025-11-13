// 函数: sub_142265480
// 地址: 0x142265480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142264fa0(arg1, &arg1[0xa], &arg1[0x11])
int64_t r9_1
r9_1.b = 1
sub_142264fa0(arg1, &arg1[0xc], &arg1[0x13])

if (*(arg1 + 0x83) != 0 && *(arg1 + 0x86) == 0)
    int64_t rbx_1 = sx.q(arg1[0x16].d)
    int32_t rax_1 = (rbx_1 + 1).d
    arg1[0x16].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xb4))
        sub_1405a4d70(&arg1[0x15])
    
    *(arg1[0x15] + (rbx_1 << 3)) = 0
    int64_t* rcx_2 = arg1[0x1d]
    int64_t* rax_4 = (*(*rcx_2 + 0x40))(rcx_2, 0)
    void arg_8
    char result = (*(*rax_4 + 0x20))(rax_4, *sub_140b58170(&arg_8, "PhysXPC", 1), zx.q(arg1[9].b), 
        arg1, &arg1[2], &arg1[4], arg1[8].b & 1, arg1[0x15])
    
    if (result == 0)
        return result
    
    if (*(arg1 + 0x84) != 0)
        sub_14222e7e0(&arg1[0x17], arg1)

return 1
