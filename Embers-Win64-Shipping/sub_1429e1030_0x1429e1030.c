// 函数: sub_1429e1030
// 地址: 0x1429e1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
void* rdi = arg1 + 0x430

for (int32_t i = 0; i s< 2; )
    void* rax_1 = sub_1429dddd0(r14, 1)
    *rdi = rax_1
    
    if (rax_1 == 0)
        return 1
    
    i += 1
    rdi += 8

bool cond:0_1 = *(arg1 + 0x115c) != 0
*(arg1 + 0x450) = r14.d
*(arg1 + 0x424) = 0
*(arg1 + 0x428) = 1
*(arg1 + 0x448) = *(arg1 + 0x430)

if (not(cond:0_1))
    *(arg1 + 0x440) = *(arg1 + 0x438)

return 0
