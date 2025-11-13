// 函数: sub_141f6cac0
// 地址: 0x141f6cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc6] = sub_141f69e80(arg1)

if (sub_140d3e110(&arg1[0x87]) == 0)
    (*(*arg1 + 0x920))(arg1)
else
    int64_t* rax_2
    int32_t r8_1
    rax_2, r8_1 = sub_140d3c6e0(&arg1[0x87])
    r8_1.b = 1
    sub_141f70fe0(arg1, rax_2, r8_1)

sub_141f20900(arg1)
void* rax_4 = sub_141ee6400(arg1)
int32_t rax_5

if (rax_4 == 0)
    rax_5 = 4
else
    rax_5 = *(rax_4 + 8)

arg1[0xb4].d = rax_5
(*(*arg1 + 0x8f8))(arg1)
return sub_141f6c530(arg1) __tailcall
