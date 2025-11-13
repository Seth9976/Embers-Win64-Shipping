// 函数: sub_142bc2ad0
// 地址: 0x142bc2ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b95d30(*arg1, arg2)
void* rax = *arg1
int64_t* rdi = *(rax + 0x1d8)
int64_t rax_1 = sub_142b922e0(*(*(rax + 0x90) + 8), "pshinter")

if (rax_1 != 0 && rdi != 0)
    int64_t rdx = *rdi
    
    if (rdx != 0)
        int64_t rax_2 = rdx(rax_1)
        
        if (rax_2 != 0)
            (*(rax_2 + 8))(*arg1[7], zx.q(*(arg1 + 0x1c)), zx.q(arg1[4].d), 0, 0)

return 0
