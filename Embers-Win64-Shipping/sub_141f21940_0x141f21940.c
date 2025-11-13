// 函数: sub_141f21940
// 地址: 0x141f21940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int512_t zmm1
result, zmm1 = sub_141eefdd0(arg1)

if (*(arg1 + 0xeb) == 4)
    void var_18
    int64_t* rax = sub_141f17ca0(arg1, &var_18, 4, zmm1)
    arg1[0x1a] = *rax
    result = zx.q(rax[1].d)
    arg1[0x1b].d = result.d

void* rdi = arg1[0x16]

if (rdi != 0)
    void* rax_1 = sub_142577430()
    void* rdx_2 = *(rdi + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_2 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            arg1[0x17] = rdi
            return result

arg1[0x17] = 0
return result
