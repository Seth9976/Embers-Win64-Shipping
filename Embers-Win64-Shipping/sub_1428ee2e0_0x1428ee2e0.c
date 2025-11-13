// 函数: sub_1428ee2e0
// 地址: 0x1428ee2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t count = sx.q(arg3)

if (memcmp(arg1, arg2, count) s> 0)
    uint64_t r9_1 = 0
    
    if (count.d s> 0)
        char* rcx = arg2
        
        while (*(arg1 - arg2 + rcx) == *rcx)
            rcx = &rcx[1]
            r9_1 = zx.q(r9_1.d + 1)
            
            if (rcx - arg2 s>= count)
                break
    
    int32_t rdx_2 = (count - 1).d
    
    if (rdx_2 s>= 0)
        char* rcx_1 = &arg2[sx.q(rdx_2)]
        
        while (*(rcx_1 + arg1 - arg2) == 0)
            if (*rcx_1 != 0xff)
                break
            
            rdx_2 -= 1
            rcx_1 -= 1
            
            if (rcx_1 - arg2 s< 0)
                break
    
    if (r9_1.d s>= rdx_2)
        if (r9_1.d s> rdx_2)
            return zx.q((r9_1 << 3).d)
        
        int64_t rax_6 = sx.q(r9_1.d)
        char r8_3 = arg2[rax_6]
        char r10_1 = *(rax_6 + arg1)
        char rdx_3 = r8_3 ^ r10_1
        int32_t rax_11
        
        if (zx.d(rdx_3) - 1 u<= 0x7e)
            switch (rdx_3)
                case 1
                    rax_11 = 7
                label_1428ee3ed:
                    
                    if ((rdx_3 & r10_1) == 0 && (r8_3 & rdx_3) == rdx_3)
                        return zx.q(rax_11 + (r9_1 << 3).d)
                case 3
                    rax_11 = 6
                    goto label_1428ee3ed
                case 7
                    rax_11 = 5
                    goto label_1428ee3ed
                case 0xf
                    rax_11 = 4
                    goto label_1428ee3ed
                case 0x1f
                    rax_11 = 3
                    goto label_1428ee3ed
                case 0x3f
                    rax_11 = 2
                    goto label_1428ee3ed
                case 0x7f
                    rax_11 = 1
                    goto label_1428ee3ed

return 0xffffffff
