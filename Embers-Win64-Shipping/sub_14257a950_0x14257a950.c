// 函数: sub_14257a950
// 地址: 0x14257a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_8 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
uint64_t rdx_2 = zx.q(arg_8)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
char result = (*(*arg1 + 0x4d0))(arg1, rdx_2)
*arg3 = result
return result
