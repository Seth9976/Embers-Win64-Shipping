// 函数: sub_141cde150
// 地址: 0x141cde150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t rdx = sx.q(arg2) * 5
int64_t rax_1 = *(arg1 + 0xe0)
int32_t* r11 = *(rax_1 + (rdx << 3))
int64_t result = sx.q(*(rax_1 + (rdx << 3) + 8))
int32_t* rdx_1 = r11
void* r9 = &r11[result]

if (r11 != r9)
    do
        result = sx.q(*rdx_1)
        
        if (*(*(arg1 + 0x38) + result * 0x18) == arg3)
            int32_t rdx_3 = ((rdx_1 - r11) s>> 2).d
            
            if (rdx_3 != 0xffffffff)
                return sub_141cd7970(&arg_8, rax_1 + (rdx << 3), rdx_3)
            
            break
        
        rdx_1 = &rdx_1[1]
    while (rdx_1 != r9)

int512_t zmm0
zmm0.o = zx.o(0)
return result
