// 函数: sub_1426177f0
// 地址: 0x1426177f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *arg1)
    return 

int64_t rdx = sx.q(arg2)
void* rdx_2 = (rdx << 6) + *(arg1 + 0x18)
void* rbx_2 = rdx * 0x328 + *(arg1 + 8)

if (*(rdx_2 + 0x38) != 0)
    *(rdx_2 + 0x38) = 0
    
    if (*(arg1 + 0x2b21) != 0)
        float zmm1 = *(rbx_2 + 0x230)
        float zmm2 = *(rbx_2 + 0x22c)
        float zmm0 = *(rbx_2 + 0x234)
        float zmm3 = *(rdx_2 + 0x18) - zmm2
        float zmm4 = *(rdx_2 + 0x1c) - zmm1
        float zmm5 = *(rdx_2 + 0x14) - zmm0
        int128_t zmm6
        zmm6.d = (*(rdx_2 + 0xc)).d f- zmm2
        int128_t zmm7
        zmm7.d = (*(rdx_2 + 0x10)).d f- zmm1
        zmm6.d = zmm6.d f* zmm6.d
        zmm1 = *(rdx_2 + 0x20) - zmm0
        zmm7.d = zmm7.d f* zmm7.d
        zmm7.d = zmm7.d f+ zmm6.d
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        
        if (not(zmm4 * zmm4 + zmm3 * zmm3 + zmm1 * zmm1 f>= zmm7.d))
            sub_14262e5c0(rbx_2, *(rdx_2 + 0x28))

if (*(rbx_2 + 0x326) == 0)
    return 

if (arg3 != 0)
    *(rbx_2 + 0x327) = 0
    *(rbx_2 + 0x308) = arg1[0xac1]
    return 

*(rbx_2 + 0x327) = 1
