// 函数: sub_142969c30
// 地址: 0x142969c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0

if (arg2 == 0 || arg3 s<= 0)
    return 0

int64_t rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (rax != 0 && rax_1 != 0)
    rdi = sub_14289aa40(rax_1, arg2, arg3)

if (sub_140611e80(arg1) != 0 && rdi s> 0)
    int32_t rax_4 = sub_142891c10(rax, arg2, zx.q(rdi))
    
    if (rax_4 == 0)
        sub_142899cc0(arg1, rax_4 + 0xf)
        return 0

if (rax_1 != 0)
    sub_142899cc0(arg1, 0xf)
    sub_142899cd0(arg1)

return zx.q(rdi)
