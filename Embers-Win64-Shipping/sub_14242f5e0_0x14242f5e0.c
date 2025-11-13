// 函数: sub_14242f5e0
// 地址: 0x14242f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x148)
int64_t* rax = r9
void* r8 = &r9[sx.q(*(arg1 + 0x150))]

if (r9 != r8)
    do
        if (*rax == arg2)
            int32_t result
            result.b = ((rax - r9) s>> 3).d != 0xffffffff
            return result
        
        rax = &rax[1]
    while (rax != r8)

int64_t rax_1
rax_1.b = false
return 0xffffff00
