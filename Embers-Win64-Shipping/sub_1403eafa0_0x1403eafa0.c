// 函数: sub_1403eafa0
// 地址: 0x1403eafa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2 ^= data_142d3f780
float zmm2 = *(arg1 + (sx.q(arg3) << 2) - 4)
int64_t rdx = sx.q(arg3 - 2)

if (arg3 - 2 s>= 0)
    if (rdx + 1 s>= 4)
        uint64_t i_1 = (rdx + 1) u>> 2
        void* rcx_1 = arg1 - 8 + (rdx << 2)
        rdx -= i_1 << 2
        uint64_t i
        
        do
            rcx_1 -= 0x10
            zmm2 = (((zmm2 f* arg2.d f+ *(rcx_1 + 0x18)) f* arg2.d f+ *(rcx_1 + 0x14)) f* arg2.d f+
                *(rcx_1 + 0x10)) f* arg2.d f+ *(rcx_1 + 0xc)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (rdx s>= 0)
        int64_t temp0_1
        
        do
            temp0_1 = rdx
            rdx -= 1
            zmm2 = zmm2 f* arg2.d f+ *(arg1 + (rdx << 2) + 4)
        while (temp0_1 - 1 s>= 0)

int512_t result
result.o = 0x3f800000
arg2.d = 1f - zmm2 f* arg2.d
result.d = 1f f/ arg2.d
return result
