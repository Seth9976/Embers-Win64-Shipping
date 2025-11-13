// 函数: sub_142c30190
// 地址: 0x142c30190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
void* rcx = *(arg2 + 0x10)
int32_t rbp = *(rcx + 0x30)

if (rbp == 0xffffffff)
    rbp = sub_142bf77e0(rcx)

void* rax_2 = *(arg2 + 0x18)
int32_t i_2 = *(rax_2 + 0x60)
int32_t* rbx_1 = *(rax_2 + 0x70)

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rax_3 = sub_142c31d20(arg1, *rbx_1, rbp)
        
        if (rax_3 != 0)
            rsi.b = 1
            *rbx_1 = (zx.d(*rax_3) << 8) + zx.d(*(rax_3 + 1))
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rsi.b)
