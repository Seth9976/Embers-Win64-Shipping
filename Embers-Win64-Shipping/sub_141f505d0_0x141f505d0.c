// 函数: sub_141f505d0
// 地址: 0x141f505d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = *(arg2 + 0x268)
*(arg1 + 0x14) = *(arg2 + 0x238)
arg1[3] = *(arg2 + 0x320)
arg1[4].b ^= ((*(arg2 + 0x20c) u>> 1).b ^ arg1[4].b) & 1
char rax_5 = 0

if (*(arg2 + 0x14f) == 1)
    rax_5 = 2

arg1[4].b = rax_5 | (arg1[4].b & 0xfd)
char rax_6 = sub_141f1d5e0(arg2)
float zmm6[0x4] = zx.o(0)
char rcx_2 = (arg1[4].b & 0xfb) | rax_6 << 2
arg1[4].b = rcx_2
uint8_t rax_8 = (((*(arg2 + 0x20c) u>> 6).b << 3 ^ rcx_2) & 8) ^ rcx_2
arg1[4].b = rax_8
uint8_t rcx_4 = (((*(arg2 + 0x20c) u>> 8).b << 4 ^ rax_8) & 0x10) ^ rax_8
arg1[4].b = rcx_4
uint8_t rdx_1 = (((*(arg2 + 0x20c) u>> 9).b << 5 ^ rcx_4) & 0x20) ^ rcx_4
arg1[4].b = rdx_1
arg1[4].b = (((*(arg2 + 0x20c) u>> 0xa).b << 6 ^ rdx_1) & 0x40) ^ rdx_1
*(arg1 + 0x21) = *(arg2 + 0x264)
arg1[5].d = *(arg2 + 0x210)
*(arg1 + 0x2c) = _mm_max_ss(*(arg2 + 0x214), 0)
memset(&arg1[6], 0, 0x90)
float zmm1[0x4] = 0x3dcccccd
arg1[0x18].d = *(arg2 + 0x250)
*(arg1 + 0xc4) = *(arg2 + 0x254)
float zmm0_1[0x4] = *(arg2 + 0x258)

if (not(zmm0_1[0] < 0.100000001f))
    zmm1 = __minss_xmmss_memss(zmm0_1[0], 0x41200000)

arg1[0x19].d = zmm1[0]
zmm0_1 = *(arg2 + 0x25c)

if (not(zmm0_1[0] < 0f))
    zmm6 = __minss_xmmss_memss(zmm0_1[0], 0x3f800000)

*(arg1 + 0xcc) = zmm6[0]
sub_140acc920(&arg1[0x1a], arg2 + 0x260)
arg1[0x1c].d = *(arg2 + 0x218)
arg1[0x1d] = *(arg2 + 0x308)
zmm6 = *(arg2 + 0x204)
void var_88
int32_t* rax_17 = sub_140acc920(&var_88, arg2 + 0x208)
float zmm2 = zmm6[0]
int64_t* var_38 = arg1
float zmm0_2 = zmm6[0]
zmm6[0] = zmm6[0] f* *rax_17
void* var_58 = arg2 + 0x330
zmm2 = zmm2 f* rax_17[3]
zmm6[0] = zmm6[0] f* rax_17[2]
void* var_48 = arg2 + 0x3c0
arg1[0x1e].d = zmm6[0]
arg1[0x1f].d = zmm6[0]
*(arg1 + 0xf4) = zmm0_2 f* rax_17[1]
*(arg1 + 0xfc) = zmm2
int32_t* rcx_7
rcx_7.b = *(arg2 + 0x14f) == 2
rcx_7.b |= arg1[0x20].b & 0xfe
arg1[0x20].b = rcx_7.b
zmm6 = *(arg2 + 0x310)
float var_40 = zmm6[0]

if (sub_140a80f40() != 0)
    sub_141f6bde0(arg1, zmm6, arg2 + 0x270, arg2 + 0x330, arg2 + 0x300, arg2 + 0x3c0)
else if (data_143f138f4 != 0)
label_141f5088c:
    void var_78
    int64_t* rax_21 = sub_141f5a650(&var_78, nullptr, 0xff)
    void* rcx_10 = *rax_21
    *(rcx_10 + 0x10) = (arg2 + 0x270).o
    *(rcx_10 + 0x20) = (arg2 + 0x300).o
    *(rcx_10 + 0x30) = var_40.o
    void* rcx_11 = *rax_21
    int64_t* rsi_1 = *(rcx_11 + 0x48)
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
    
    sub_141b66b40(rcx_11, rax_21[1], rax_21[2].d, 1)
    
    if (rsi_1 != 0)
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            sub_140a2f6e0(rsi_1)
else if (data_143de5480 == 0)
    sub_141f6bde0(arg1, zmm6, arg2 + 0x270, arg2 + 0x330, arg2 + 0x300, arg2 + 0x3c0)
else
    uint32_t rax_20
    rax_20.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_20.b == 0)
        goto label_141f5088c
    
    sub_141f6bde0(arg1, zmm6, arg2 + 0x270, arg2 + 0x330, arg2 + 0x300, arg2 + 0x3c0)

return arg1
