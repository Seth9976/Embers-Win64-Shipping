// 函数: sub_1421f68b0
// 地址: 0x1421f68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8

if (sub_141fe97f0(arg1 + 0x30) == 0)
    *(arg1 + 0x70) =
        sub_1421a7f20(arg1, *sub_140b58260(&arg_8, DistributionDampingFactor", 1), 0, 0, 0, 0)

if (sub_141fe97f0(arg1 + 0x78) == 0)
    void* rax_5 =
        sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionDampingFactorRotation", 1), 0, 0, 0, 
        0)
    int32_t var_10_1 = 0x3f800000
    *(rax_5 + 0x38) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    *(rax_5 + 0x40) = 0x3f800000
    *(arg1 + 0xb8) = rax_5

if (sub_141fe97c0(arg1 + 0xc0) == 0)
    *(arg1 + 0xe8) =
        sub_1421a7de0(arg1, *sub_140b58260(&arg_8, DistributionMaxCollisions", 1), 0, 0, 0, 0)

if (sub_141fe97c0(arg1 + 0x118) == 0)
    void* rax_11 =
        sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionParticleMass", 1), 0, 0, 0, 0)
    *(rax_11 + 0x38) = 0x3dcccccd
    *(arg1 + 0x140) = rax_11

if (sub_141fe97c0(arg1 + 0x158) == 0)
    void* rax_14 =
        sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionDelayAmount", 1), 0, 0, 0, 0)
    *(rax_14 + 0x38) = 0
    *(arg1 + 0x180) = rax_14

int32_t rsi = 0

while (true)
    arg_8 = rdi
    
    if (rsi s< 0 || rsi s>= *(arg1 + 0x100))
        char arg_c = 0
        int64_t result = arg_8.q
        *(arg1 + 0x108) = result
        return result
    
    rdi |= 1 << (sub_141ffde70(zx.d(*(sx.q(rsi) + *(arg1 + 0xf8)))) u% 0x20)
    rsi += 1
