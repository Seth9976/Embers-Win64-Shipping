// 函数: sub_141eada00
// 地址: 0x141eada00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xec)
int64_t zmm2 = *(arg1 + 0x2c)
arg1[0x19] = *(arg1 + 0xe4)
*(arg1 + 0xd4) = arg1[0x1e]
int64_t zmm0 = (zx.o(0)).q
bool cond:0 = 0f f>= arg1[6].d
arg1[0x1a].d = rax
*(arg1 + 0xdc) = arg1[0x1f].d
arg1[0x1c].d = *(arg1 + 0xfc)
float __saved_zmm6[0x4] = arg4
arg4 = arg2
*(arg1 + 0x14c) = zmm2.d

if (not(cond:0))
    *(arg1 + 0xac) |= 1
    *(arg1 + 0xb4) = 0

if (not(zmm2.d f<= 0f))
    arg2 = *(arg1 + 0x34)
    
    if (not(arg2[0] <= 0f))
        zmm0.d = zmm2.d f- arg2[0]
        
        if (not(arg4[0] f<= zmm0.d))
            *(arg1 + 0xac) |= 2
            zmm2.d = zmm2.d f- arg4[0]
            arg2[0] = arg2[0] f- zmm2.d
            arg1[0x17].d = arg2[0]

int64_t result = (*(*arg1 + 0x268))(zmm0, arg4, 0x3f800000, arg3, __saved_zmm6)
void* rcx = arg1[0x2a]

if (rcx == 0)
    return result

zmm0.d = (*(rcx + 0x38)).d f/ *(rcx + 0x50)
arg4[0] = arg4[0] f- zmm0.d
sub_141e94090(rcx, arg4, 1)
float zmm15[0x4]
return sub_141e94460(arg1[0x2a], arg3, zmm15)
