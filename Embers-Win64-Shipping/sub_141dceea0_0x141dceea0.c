// 函数: sub_141dceea0
// 地址: 0x141dceea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int64_t var_18 = 0
int64_t var_10 = 0

if (arg3 != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg3 + 0x38) && *(*(arg3 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            rdi = arg3

int64_t* r8 = &var_18

if (rdi != sub_142459c10())
    sub_1417ea690(arg1, arg3, r8)
else
    sub_1417ea490(arg1, arg3, r8)

*arg2 = var_18
arg2[1].d = var_10.d
*(arg2 + 0xc) = var_10:4.d
return arg2
