// 函数: sub_140ba6180
// 地址: 0x140ba6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140d3cbe0(arg2)
int32_t r8 = 0
int64_t rax_1 = sx.q(*(arg1 + 0x20))

if (rax_1.d s> 0)
    int32_t* rcx_2 = *(arg1 + 0x18) + 0xc
    int64_t rdx = 0
    
    do
        if ((rcx_2[4].b & 0x10) != 0)
            int32_t rax_2 = *rcx_2
            
            if (rax_2 s> 0 && rax_2 - 1 == rax)
                return zx.q(r8)
        
        r8 += 1
        rdx += 1
        rcx_2 -= -0x80
    while (rdx s< rax_1)

return 0xffffffff
