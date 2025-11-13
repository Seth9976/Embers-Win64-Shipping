// 函数: sub_142a1c830
// 地址: 0x142a1c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t j_2 = sx.q(arg9)
int64_t r14_1 = arg1 - arg2 * 3
char* r15 = arg3
uint64_t result = zx.q(arg8)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t result_1 = result
    uint64_t i
    
    do
        int32_t r11_1 = arg6
        
        if (j_2 s> 0)
            char* r10_1 = r15
            int64_t j_1 = j_2
            int64_t j
            
            do
                int64_t rcx = sx.q(r11_1)
                int16_t* rdx_1 = arg5 + ((zx.q(rcx.d) & 0xf) << 4)
                char* r9_3 = (rcx s>> 4) * arg2 + r14_1
                int32_t r8_3 = zx.d(r9_3[arg2]) * sx.d(rdx_1[1])
                    + zx.d(r9_3[arg2 << 1]) * sx.d(rdx_1[2])
                    + zx.d(r9_3[arg2 << 2]) * sx.d(rdx_1[4])
                int32_t r8_6 = r8_3 + zx.d(*(arg2 * 5 + r9_3)) * sx.d(rdx_1[5])
                    + zx.d(*(arg2 * 6 + r9_3)) * sx.d(rdx_1[6])
                    + zx.d(r9_3[arg2 * 7]) * sx.d(rdx_1[7])
                result = zx.q((zx.d(*r9_3) * sx.d(*rdx_1) + r8_6
                    + zx.d(*(arg2 * 3 + r9_3)) * sx.d(rdx_1[3]) + 0x40) s>> 7)
                
                if (result.d s> 0xff)
                    result = 0xff
                else if (result.d s< 0)
                    result = 0
                
                *r10_1 = result.b
                r11_1 += arg7
                r10_1 = &r10_1[arg4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            r15 = arg_18
            i_1 = result_1
            j_2 = sx.q(arg9)
        
        r15 = &r15[1]
        r14_1 += 1
        i = i_1
        i_1 -= 1
        arg_18 = r15
        result_1 = i_1
    while (i != 1)

return result
