// 函数: sub_142a1c3c0
// 地址: 0x142a1c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = arg9
int64_t rdi = arg1 - 3
int64_t j_2 = sx.q(arg8)
int64_t r12 = arg4
char* rbp = arg3

if (result s> 0)
    uint64_t r14_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t r11_1 = arg6
        
        if (j_2 s> 0)
            int64_t j_1 = j_2
            char* r10_1 = rbp
            int64_t j
            
            do
                int64_t rcx = sx.q(r11_1)
                uint64_t rcx_2 = (zx.q(rcx.d) & 0xf) * 2
                int16_t* rdx = arg5 + (rcx_2 << 3)
                char* r9_2 = (rcx s>> 4) + rdi
                int32_t r8_3 = zx.d(r9_2[7]) * sx.d(*(arg5 + (rcx_2 << 3) + 0xe))
                    + zx.d(r9_2[6]) * sx.d(rdx[6]) + zx.d(r9_2[5]) * sx.d(rdx[5])
                int32_t rax_10 = (sx.d(*rdx) * zx.d(*r9_2) + r8_3 + zx.d(r9_2[4]) * sx.d(rdx[4])
                    + zx.d(r9_2[3]) * sx.d(rdx[3]) + zx.d(r9_2[2]) * sx.d(rdx[2])
                    + sx.d(rdx[1]) * zx.d(r9_2[1]) + 0x40) s>> 7
                
                if (rax_10 s> 0xff)
                    rax_10 = 0xff
                else if (rax_10 s< 0)
                    rax_10 = 0
                
                r11_1 += arg7
                result = (zx.d(rax_10.b) + 1 + zx.d(*r10_1)) u>> 1
                *r10_1 = result.b
                r10_1 = &r10_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_2 = sx.q(arg8)
            r12 = arg4
        
        rdi += arg2
        rbp = &rbp[r12]
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
