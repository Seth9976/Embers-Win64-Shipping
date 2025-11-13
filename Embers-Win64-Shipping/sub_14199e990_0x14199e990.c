// 函数: sub_14199e990
// 地址: 0x14199e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1410b3bb0(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_141095ed0(&arg1[2], arg2)
void* result = sub_141999ff0(arg1, arg2, 1)

if (result.b == 0)
    result = zx.q(arg1[9].d)
    
    if (result.d s> 0)
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            void* result_1 = arg1[8]
            result = &arg1[7]
            int64_t rdx_4 = (sx.q(arg1[9].d) - 1) & rdi
            
            if (result_1 != 0)
                result = result_1
            
            rdi += 1
            *(result + (rdx_4 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
