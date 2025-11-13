// 函数: sub_142c1dd70
// 地址: 0x142c1dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
int32_t r9_3 = r9_2 - 1
uint32_t result

if (r9_2 - 1 s>= 0)
    do
        uint64_t rax_1 = zx.q((r10 + r9_3) u>> 1)
        int32_t r8 = rax_1.d
        uint64_t rax_2 = rax_1 * 3
        void* rcx = &arg1[2 + (rax_2 << 1)]
        uint32_t rdx_4 = (zx.d(arg1[(rax_2 << 1) + 3]) << 0x10)
            + (zx.d(arg1[(rax_2 << 1) + 4]) << 8) + (zx.d(*rcx) << 0x18) + zx.d(*(rcx + 3))
        
        if (arg2 u>= rdx_4)
            result.b = arg2 != rdx_4
        
        if (arg2 u< rdx_4 || result s< 0)
            r9_3 = r8 - 1
        else
            if (result s<= 0)
                if (arg3 != 0)
                    *arg3 = r8
                
                result.b = 1
                return 1
            
            r10 = r8 + 1
    while (r10 s<= r9_3)

if (arg3 != 0)
    *arg3 = 0xffff

result.b = 0
return result
