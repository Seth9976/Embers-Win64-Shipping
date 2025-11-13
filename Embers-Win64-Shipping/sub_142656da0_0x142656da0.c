// 函数: sub_142656da0
// 地址: 0x142656da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg1[0x20]
int64_t* r8 = r10
void* r9 = &r10[sx.q(arg1[0x21].d)]

if (r10 != r9)
    do
        if (*r8 == arg2)
            jump(*(*arg1 + 0x30))
        
        r8 = &r8[1]
    while (r8 != r9)

jump(*(*arg1 + 0x30))
