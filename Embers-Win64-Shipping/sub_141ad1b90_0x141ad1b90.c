// 函数: sub_141ad1b90
// 地址: 0x141ad1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
float zmm0[0x4]
zmm0, result = sub_141abcf00(arg1)
uint64_t i_3 = zx.q(*(arg1 + 0x28))
int32_t i_1 = 0

if (i_3.d s<= 0)
    result = zx.q(*(arg1 + 0x3c))
    *(arg1 + 0x38) = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_1405dadb0(arg1 + 0x30, 0)
else if (i_3.d == *(arg1 + 0x38))
    result = memset(*(arg1 + 0x30), 0, sx.q(*(arg1 + 0x3c)) << 2)
else
    *(arg1 + 0x38) = 0
    
    if (*(arg1 + 0x3c) != i_3.d)
        result = sub_1405dadb0(arg1 + 0x30, i_3.d)
    
    if (i_3.d s> 0)
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            int64_t rbx = sx.q(*(arg1 + 0x38))
            int32_t rax = (rbx + 1).d
            *(arg1 + 0x38) = rax
            
            if (rax s> *(arg1 + 0x3c))
                sub_1406105e0(arg1 + 0x30)
            
            result = *(arg1 + 0x30)
            int32_t* rdx_3 = result + (rbx << 2)
            
            if (rdx_3 != 0)
                *rdx_3 = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)

if (not(sub_141e3b510(arg1 + 0x40, zmm0) f<= 9.99999975e-06f))
    result = zx.q(*(arg1 + 0x28))
    
    if (*(arg1 + 0x49) == 0)
        if (result.d s> 0)
            int32_t* r14_2 = nullptr
            
            do
                result = *(arg1 + 0x20)
                *(r14_2 + *(arg1 + 0x30)) = sub_141e3b510(arg1 + 0x40, *(r14_2 + result))
                r14_2 = &r14_2[1]
                i_1 += 1
            while (i_1 s< *(arg1 + 0x28))
    else if (result.d s> 0)
        int32_t* r14_1 = nullptr
        float zmm6[0x4] = 0x3f800000
        zmm6[0] = 1f / zmm0[0]
        
        do
            result = *(arg1 + 0x20)
            int64_t rbx_1 = *(arg1 + 0x30)
            zmm6[0] = zmm6[0] f* *(r14_1 + result)
            *(r14_1 + rbx_1) = sub_141e3b510(arg1 + 0x40, zmm6)
            r14_1 = &r14_1[1]
            i_1 += 1
        while (i_1 s< *(arg1 + 0x28))

return result
