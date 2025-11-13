// 函数: sub_142af4d90
// 地址: 0x142af4d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 8)
uint64_t rax = zx.q(*r9)

if (rax.d != 0)
    int64_t rdx = data_1440168c8
    uint64_t r10_1 = zx.q(r9[1])
    
    if (r10_1.d u< zx.d(*(rdx + (rax << 1))))
        char* result = data_1440168d8 + (zx.q(*(rdx + ((zx.q(rax.d) + r10_1) << 1) + 2)) << 1)
        r9[1] = (r10_1 + 1).d
        
        if (arg2 != 0)
            int64_t rcx_2 = -1
            
            do
                rcx_2 += 1
            while (result[rcx_2] != 0)
            
            *arg2 = rcx_2.d
        
        return result

if (arg2 != 0)
    *arg2 = 0

return 0
