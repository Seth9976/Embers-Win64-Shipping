// 函数: sub_142873b60
// 地址: 0x142873b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i_1 = arg3

if (arg3 u<= 4 && arg1[5] != 0 && i_1 != 0)
    int64_t r8 = arg1[3]
    
    if (arg1[4] - r8 u>= i_1)
        if (arg1[1] != 0)
        label_142873c06:
            int64_t r8_1 = arg1[1]
            
            if (r8_1 == 0)
                r8_1 = *(*arg1 + 8)
            
            int64_t rcx_1 = arg1[2]
            uint64_t rdx_1 = zx.q(arg2)
            arg1[3] += i_1
            arg1[2] = rcx_1 + i_1
            char* rcx_4 = rcx_1 - 1 + i_1 + r8_1
            
            if (i_1 != 0)
                int64_t i
                
                do
                    *rcx_4 = rdx_1.b
                    rcx_4 = &rcx_4[-1]
                    rdx_1 u>>= 8
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (rdx_1 == 0)
                return zx.q((rdx_1 + 1).d)
        else
            int64_t* r9_1 = *arg1
            int64_t i_2 = *r9_1
            
            if (i_2 - r8 u>= i_1)
                goto label_142873c06
            
            if (i_1 u> i_2)
                i_2 = i_1
            
            int64_t rdx
            
            if (i_2 u<= 0x7fffffffffffffff)
                rdx = i_2 * 2
                
                if (rdx u< 0x100)
                    rdx = 0x100
            else
                rdx = -1
            
            if (sub_1428a7260(r9_1, rdx) != 0)
                goto label_142873c06

return 0
