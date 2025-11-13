// 函数: sub_14284eec0
// 地址: 0x14284eec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t rdi = 1

if (*(arg1 + 0x30) == 0)
    sub_1428a5670(0x14, 0xb4, 0x90, "ssl\ssl_lib.c", 0xde2)
    return 0xffffffff

sub_1428564a0(arg1, 0xffffffff)
(*(*(arg1 + 8) + 0x60))(arg1, 0)
int32_t rax_2 = sub_142856410(arg1)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428563f0(arg1)

if (rax_2 != 0 || rax_3 != 0)
    if ((*(arg1 + 0x5c8) & 0x100) != 0 && sub_1428ac8c0() == 0)
        void* var_38 = arg1
        return sub_142852530(arg1, &var_38, sub_142851c20)
    
    rdi = (*(arg1 + 0x30))(arg1)

return zx.q(rdi)
