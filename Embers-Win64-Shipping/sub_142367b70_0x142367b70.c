// 函数: sub_142367b70
// 地址: 0x142367b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x38)
void arg_8

if (rdi != 0)
    void* rax_1 = sub_1425a21c0()
    void* rcx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t rax_5 = *sub_141c4a970(&arg_8)
        
        if (*(arg1 + 0x40) == rax_5)
            sub_142367b70(rdi, arg2)
            return arg2

int64_t* rax_7 = sub_141c4a970(&arg_8)
int64_t rcx_4 = *(arg1 + 0x40)

if (rcx_4 != *rax_7)
    *arg2 = rcx_4
    return arg2

sub_141c4a9f0(arg2)
return arg2
