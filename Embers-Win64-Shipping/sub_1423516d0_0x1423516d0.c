// 函数: sub_1423516d0
// 地址: 0x1423516d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423514c0(arg1, arg2)
*arg1 = &data_14332d190
int64_t rax = j_sub_140a82f30(0x18)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x18)

arg1[0x63] = rax
arg1[0x62] = rax
arg1[0x64].d = 0
__builtin_memset(&arg1[0x65], 0, 0x14)
arg1[0x69] = 0
arg1[0x6a].d = 0
*(arg1 + 0x16d) |= 1
arg1[0x67].d = 0
*(arg1 + 0x33c) = 0x200
arg1[0x68].d = 0x400
void* rcx = data_143f5b298

if (rcx != 0)
    void* rax_1 = sub_1423ddb40(rcx)
    
    if (rax_1 != 0 && (*(rax_1 + 0x352) & 0x20) == 0)
        int32_t rax_2 = *(rax_1 + 0x14)
        arg1[0x68].d = rax_2
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_2)
        *(arg1 + 0x33c) = (temp2_1 - temp1_1) s>> 1

arg1[0x6b].d = 2
return arg1
