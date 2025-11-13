// 函数: ?GetSymbolNames@@YAXPEAEAEAVBuffer@pdb_internal@@11_NPEA_N@Z
// 地址: 0x140381530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg7)
int64_t rsi = 0
int64_t r13 = arg1
int64_t r8 = sx.q(divs.dp.d(0:0xbb80, arg9))
uint64_t result = zx.q(divs.dp.d(sx.q(arg5), r8.d))
int64_t r9 = sx.q(result.d)
float zmm1

if (r12.d != 1)
    int64_t r10_4 = 0
    float zmm0
    
    if (r9 s>= 4)
        float* rbx_2 = arg8 + (r8 << 3)
        int64_t r8_6 = arg1 - arg2
        int64_t i_6 = ((r9 - 4) u>> 2) + 1
        r10_4 = i_6 << 2
        result = arg2 + 4
        int64_t i
        
        do
            zmm0 = rbx_2[neg.q(r8) * 2]
            result += 0x20
            zmm0 = zmm0 * zmm0
            zmm1 = (1f - zmm0) * arg3 + zmm0 * arg4
            *(result - 0x24) = zmm1 f* *(r8_6 + result - 0x24)
            *(result - 0x20) = zmm1 f* *(r8_6 + result - 0x20)
            zmm0 = rbx_2[neg.q(r8)]
            zmm0 = zmm0 * zmm0
            zmm1 = (1f - zmm0) * arg3 + zmm0 * arg4
            *(result - 0x1c) = zmm1 f* *(r8_6 + result - 0x1c)
            *(result - 0x18) = zmm1 f* *(r8_6 + result - 0x18)
            zmm0 = *rbx_2
            zmm0 = zmm0 * zmm0
            zmm1 = (1f - zmm0) * arg3 + zmm0 * arg4
            *(result - 0x14) = zmm1 f* *(r8_6 + result - 0x14)
            *(result - 0x10) = zmm1 f* *(r8_6 + result - 0x10)
            zmm0 = rbx_2[r8]
            rbx_2 = &rbx_2[r8 * 4]
            zmm0 = zmm0 * zmm0
            zmm1 = (1f - zmm0) * arg3 + zmm0 * arg4
            *(result - 0xc) = zmm1 f* *(r8_6 + result - 0xc)
            *(result - 8) = zmm1 f* *(r8_6 + result - 8)
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (r10_4 s< r9)
        void* rcx_5 = arg2 + 4 + (r10_4 << 3)
        float* rdx_3 = arg8 + ((r10_4 * r8) << 2)
        result = r13 - arg2
        int64_t i_7 = r9 - r10_4
        int64_t i_1
        
        do
            zmm0 = *rdx_3
            rcx_5 += 8
            rdx_3 = &rdx_3[r8]
            zmm0 = zmm0 * zmm0
            zmm1 = (1f - zmm0) * arg3 + zmm0 * arg4
            *(rcx_5 - 0xc) = zmm1 f* *(result + rcx_5 - 0xc)
            *(rcx_5 - 8) = zmm1 f* *(result + rcx_5 - 8)
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
else
    int64_t rbx_1 = 0
    
    if (r9 s>= 4)
        float* rcx = arg8 + (r8 << 3)
        int64_t r8_2 = r13 - arg2
        int64_t i_8 = ((r9 - 4) u>> 2) + 1
        rbx_1 = i_8 << 2
        result = arg2 + 4
        int64_t i_2
        
        do
            zmm1 = rcx[neg.q(r8) * 2]
            result += 0x10
            zmm1 = zmm1 * zmm1
            *(result - 0x14) = ((1f - zmm1) * arg3 + zmm1 * arg4) f* *(r8_2 + result - 0x14)
            zmm1 = rcx[neg.q(r8)]
            zmm1 = zmm1 * zmm1
            *(result - 0x10) = ((1f - zmm1) * arg3 + zmm1 * arg4) f* *(r8_2 + result - 0x10)
            zmm1 = *rcx
            zmm1 = zmm1 * zmm1
            *(result - 0xc) = ((1f - zmm1) * arg3 + zmm1 * arg4) f* *(r8_2 + result - 0xc)
            zmm1 = rcx[r8]
            rcx = &rcx[r8 * 4]
            zmm1 = zmm1 * zmm1
            *(result - 8) = ((1f - zmm1) * arg3 + zmm1 * arg4) f* *(r8_2 + result - 8)
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    if (rbx_1 s< r9)
        void* rcx_1 = arg2 + (rbx_1 << 2)
        float* rdx_2 = arg8 + ((rbx_1 * r8) << 2)
        result = r9 - rbx_1
        uint64_t i_3
        
        do
            zmm1 = *rdx_2
            rcx_1 += 4
            rdx_2 = &rdx_2[r8]
            zmm1 = zmm1 * zmm1
            *(rcx_1 - 4) = ((1f - zmm1) * arg3 + zmm1 * arg4) f* *(rcx_1 + r13 - arg2 - 4)
            i_3 = result
            result -= 1
        while (i_3 != 1)
int64_t rbp_5 = sx.q(arg6)

do
    int64_t r15_1 = r9
    
    if (r9 s< rbp_5)
        result = rbp_5 - r9
        
        if (result s>= 4)
            float* r8_8 = arg2 + (((r9 + 1) * r12 + rsi) << 2)
            result = ((rbp_5 - r9 - 4) u>> 2) + 1
            r15_1 = r9 + (result << 2)
            uint64_t i_4
            
            do
                r8_8[(0 - 1) * r12] = arg4 f* *(r8_8 + (((0 - 1) * r12) << 2) - arg2 + arg1)
                *r8_8 = arg4 f* *(r13 - arg2 + r8_8)
                r8_8[r12] = arg4 f* *(r8_8 + r12 * 4 - arg2 + r13)
                r8_8[r12 * 2] = arg4 f* *(r8_8 + r13 + r12 * 8 - arg2)
                r8_8 = &r8_8[r12 * 4]
                i_4 = result
                result -= 1
            while (i_4 != 1)
            rbp_5 = sx.q(arg6)
            r13 = arg1
        
        if (r15_1 s< rbp_5)
            float* rcx_8 = arg2 + ((r12 * r15_1 + rsi) << 2)
            result = rbp_5 - r15_1
            uint64_t i_5
            
            do
                *rcx_8 = arg4 f* *(r13 - arg2 + rcx_8)
                rcx_8 = &rcx_8[r12]
                i_5 = result
                result -= 1
            while (i_5 != 1)
    
    rsi += 1
while (rsi s< r12)

return result
