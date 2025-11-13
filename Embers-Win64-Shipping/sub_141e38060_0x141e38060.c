// 函数: sub_141e38060
// 地址: 0x141e38060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e4fef0(arg1, arg2)
*arg1 = &data_143247418
void* rbx = &arg1[0x1d]
int64_t i = 3
arg1[5] = &data_1432476b8
arg1[6] = &data_1432476e8
arg1[0x10] = &data_14323e910
arg1[0x16] = 0
arg1[0x17] = 0
__builtin_memset(&arg1[0x19], 0, 0x20)

do
    *rbx = 0
    *(rbx + 8) = 0
    i -= 1
    sub_1405947f0(rbx, 5)
    int32_t rax_1 = *(rbx + 8) + 5
    *(rbx + 8) = rax_1
    
    if (rax_1 s> *(rbx + 0xc))
        sub_140594770(rbx)
    
    UnDecorator::getReferenceType(*rbx, u"None", 0xa)
    *(rbx + 0x10) = 0
    *(rbx + 0x14) = 0x42c80000
    *(rbx + 0x18) = 4
    rbx += 0x20
while (i != 0)

arg1[0x18].d = 0xffffffff
*(arg1 + 0xac) = 1
return arg1
