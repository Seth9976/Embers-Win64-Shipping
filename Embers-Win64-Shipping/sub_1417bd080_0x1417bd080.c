// 函数: sub_1417bd080
// 地址: 0x1417bd080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = *(arg1 + 0x18)
result[0] = result[0] f- *(arg1 + 0x14)
int64_t* r12 = *arg2
result[0] = result[0] - 1f
int64_t rsi = sx.q(r12[1].d)
result = __andps_xmmxud_memxud(result, data_142d3f770)
int64_t rdi
rdi.b = result[0] > 9.99999975e-05f
int64_t r14 = 0
float zmm1[0x4]
float zmm2

if (rsi s>= 4)
    void* rcx = *r12
    int64_t rdx = *arg4
    int32_t* r9 = rcx + 4
    int64_t rbx_1 = *arg2[1]
    int32_t* r8 = rcx + 0x14
    int64_t i_2 = ((rsi - 4) u>> 2) + 1
    r14 = i_2 << 2
    int64_t i
    
    do
        *(rdx + (sx.q(*r9) << 2)) = *(arg1 + 0x1c)
        result = *arg3
        int64_t rcx_2 = sx.q(r9[-1]) * 3
        zmm2 = *(rbx_1 + (rcx_2 << 2) + 4) * (*arg3)[1]
        result[0] = result[0] f* *(rbx_1 + (rcx_2 << 2))
        zmm1 = *(rbx_1 + (rcx_2 << 2) + 8)
        zmm1[0] = zmm1[0] * (*arg3)[2]
        zmm2 = zmm2 + result[0] + zmm1[0] - (*arg3)[3]
        
        if (not(zmm2 >= 0f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 <= (zmm1 ^ 0x80000000)[0]))
                int64_t rax_4 = sx.q(*r9)
                result = 0x3f800000
                result[0] = 1f - zmm2 / zmm1[0]
                result[0] = result[0] f* *(arg1 + 0x10)
                *(rdx + (rax_4 << 2)) = result[0]
                
                if (rdi.b != 0)
                    int64_t rax_5 = sx.q(*r9)
                    *(rdx + (rax_5 << 2)) = __minss_xmmss_memss(
                        __maxss_xmmss_memss((*(rdx + (rax_5 << 2)))[0], *(arg1 + 0x14))[0], 
                        *(arg1 + 0x18))[0]
        
        *(rdx + (sx.q(r8[-2]) << 2)) = *(arg1 + 0x1c)
        result = *arg3
        int64_t rcx_4 = sx.q(r9[1]) * 3
        zmm2 = *(rbx_1 + (rcx_4 << 2) + 4) * (*arg3)[1]
        result[0] = result[0] f* *(rbx_1 + (rcx_4 << 2))
        zmm1 = *(rbx_1 + (rcx_4 << 2) + 8)
        zmm1[0] = zmm1[0] * (*arg3)[2]
        zmm2 = zmm2 + result[0] + zmm1[0] - (*arg3)[3]
        
        if (not(zmm2 >= 0f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 <= (zmm1 ^ 0x80000000)[0]))
                int64_t rax_8 = sx.q(r8[-2])
                result = 0x3f800000
                result[0] = 1f - zmm2 / zmm1[0]
                result[0] = result[0] f* *(arg1 + 0x10)
                *(rdx + (rax_8 << 2)) = result[0]
                
                if (rdi.b != 0)
                    int64_t rax_9 = sx.q(r8[-2])
                    *(rdx + (rax_9 << 2)) = __minss_xmmss_memss(
                        __maxss_xmmss_memss((*(arg1 + 0x14))[0], *(rdx + (rax_9 << 2)))[0], 
                        *(arg1 + 0x18))[0]
        
        *(rdx + (sx.q(*r8) << 2)) = *(arg1 + 0x1c)
        result = *arg3
        int64_t rcx_6 = sx.q(r9[3]) * 3
        zmm2 = *(rbx_1 + (rcx_6 << 2) + 4) * (*arg3)[1]
        result[0] = result[0] f* *(rbx_1 + (rcx_6 << 2))
        zmm1 = *(rbx_1 + (rcx_6 << 2) + 8)
        zmm1[0] = zmm1[0] * (*arg3)[2]
        zmm2 = zmm2 + result[0] + zmm1[0] - (*arg3)[3]
        
        if (not(zmm2 >= 0f))
            zmm1 = *(arg1 + 0x20)
            
            if (not(zmm2 <= (zmm1 ^ 0x80000000)[0]))
                int64_t rax_12 = sx.q(*r8)
                result = 0x3f800000
                result[0] = 1f - zmm2 / zmm1[0]
                result[0] = result[0] f* *(arg1 + 0x10)
                *(rdx + (rax_12 << 2)) = result[0]
                
                if (rdi.b != 0)
                    int64_t rax_13 = sx.q(*r8)
                    *(rdx + (rax_13 << 2)) = __minss_xmmss_memss(
                        __maxss_xmmss_memss((*(arg1 + 0x14))[0], *(rdx + (rax_13 << 2)))[0], 
                        *(arg1 + 0x18))[0]
        
        *(rdx + (sx.q(r8[2]) << 2)) = *(arg1 + 0x1c)
        result = *arg3
        int64_t rcx_8 = sx.q(r9[5]) * 3
        zmm2 = *(rbx_1 + (rcx_8 << 2) + 4) * (*arg3)[1]
        result[0] = result[0] f* *(rbx_1 + (rcx_8 << 2))
        zmm1 = *(rbx_1 + (rcx_8 << 2) + 8)
        zmm1[0] = zmm1[0] * (*arg3)[2]
        zmm2 = zmm2 + result[0] + zmm1[0] - (*arg3)[3]
        
        if (not(zmm2 >= 0f))
            zmm1 = *(arg1 + 0x20)
            result = zmm1 ^ 0x80000000
            
            if (not(zmm2 <= result[0]))
                int64_t rax_16 = sx.q(r8[2])
                result = 0x3f800000
                result[0] = 1f - zmm2 / zmm1[0]
                result[0] = result[0] f* *(arg1 + 0x10)
                *(rdx + (rax_16 << 2)) = result[0]
                
                if (rdi.b != 0)
                    int64_t rax_17 = sx.q(r8[2])
                    result = __minss_xmmss_memss(
                        __maxss_xmmss_memss((*(arg1 + 0x14))[0], *(rdx + (rax_17 << 2)))[0], 
                        *(arg1 + 0x18))
                    *(rdx + (rax_17 << 2)) = result[0]
        
        r9 = &r9[8]
        r8 = &r8[8]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r14 s< rsi)
    int64_t i_3 = rsi - r14
    int64_t r8_1 = *arg4
    int64_t r9_1 = *arg2[1]
    int32_t* rdx_1 = *r12 + (r14 << 3)
    int64_t i_1
    
    do
        *(r8_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x1c)
        result = *arg3
        int64_t rcx_10 = sx.q(*rdx_1) * 3
        zmm2 = *(r9_1 + (rcx_10 << 2) + 4) * (*arg3)[1]
        result[0] = result[0] f* *(r9_1 + (rcx_10 << 2))
        zmm1 = *(r9_1 + (rcx_10 << 2) + 8)
        zmm1[0] = zmm1[0] * (*arg3)[2]
        zmm2 = zmm2 + result[0] + zmm1[0] - (*arg3)[3]
        
        if (not(zmm2 >= 0f))
            zmm1 = *(arg1 + 0x20)
            result = zmm1 ^ 0x80000000
            
            if (not(zmm2 <= result[0]))
                int64_t rax_22 = sx.q(rdx_1[1])
                result = 0x3f800000
                result[0] = 1f - zmm2 / zmm1[0]
                result[0] = result[0] f* *(arg1 + 0x10)
                *(r8_1 + (rax_22 << 2)) = result[0]
                
                if (rdi.b != 0)
                    int64_t rax_23 = sx.q(rdx_1[1])
                    result = __minss_xmmss_memss(
                        __maxss_xmmss_memss((*(arg1 + 0x14))[0], *(r8_1 + (rax_23 << 2)))[0], 
                        *(arg1 + 0x18))
                    *(r8_1 + (rax_23 << 2)) = result[0]
        
        rdx_1 = &rdx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
