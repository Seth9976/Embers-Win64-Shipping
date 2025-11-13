// 函数: sub_1428909a0
// 地址: 0x1428909a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d

if (r8 != arg2[1].d)
    return zx.q(r8 - arg2[1].d)

int64_t rdx = *arg2
int64_t rcx = sx.q(r8 - 1)

if (r8 - 1 s>= 0)
    int64_t* rax_3 = rdx + (rcx << 3)
    int64_t temp3_1
    
    do
        int64_t rdx_1 = *(*arg1 - rdx + rax_3)
        int64_t temp2_1 = *rax_3
        
        if (rdx_1 != temp2_1)
            if (rdx_1 u> temp2_1)
                return 1
            
            return 0xffffffff
        
        rax_3 -= 8
        temp3_1 = rcx
        rcx -= 1
    while (temp3_1 - 1 s>= 0)

return 0
