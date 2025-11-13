// 函数: sub_142659580
// 地址: 0x142659580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 == 0)
    return arg2

int64_t* rdi = *(rax_1 + 0x120)

if (rdi != 0)
    void* rax_2 = sub_14269bba0()
    void* rcx = rdi[2]
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        (*(*rdi + 0x3d0))(rdi, arg1, arg2, arg3)

return arg2
