// 函数: sub_142158250
// 地址: 0x142158250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ba820(arg1 + 0x208, 0)

if (*(arg1 + 0x20) != 0)
    void* rax_1 = sub_1424851f0()
    void* r8_1 = *(*(arg1 + 0x20) + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38))
        int64_t result = *(r8_1 + 0x30)
        
        if (*(result + (rax_2 << 3)) == rax_1 + 0x30)
            return result

int128_t zmm2_1
int128_t zmm3_1
zmm2_1, zmm3_1 = sub_142369e60(arg1 + 0xf0, arg1 + 0xe0)
bool cond:0_1 = *(arg1 + 0xec) == 0
*(arg1 + 0xe8) = 0

if (not(cond:0_1))
    sub_1405a52a0(arg1 + 0xe0, 0)

return sub_141997ac0(arg1 + 0x208, 0, zmm2_1, zmm3_1)
