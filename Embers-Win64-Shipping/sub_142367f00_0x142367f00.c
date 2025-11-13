// 函数: sub_142367f00
// 地址: 0x142367f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int128_t zmm6 = zx.o(0)
int512_t result

if (rax == 0)
    result.o = zx.o(0)
    return result

int32_t rdx = *(rax + 0x30)
arg2[1].d = 0

if (*(arg2 + 0xc) != rdx)
    sub_1405dadb0(arg2, rdx)

int64_t* rcx_3 = *(arg1 + 0x30)
int32_t i = 0

if (rcx_3[6].d s> 0)
    int64_t rsi_1 = 0
    int128_t zmm7
    int128_t var_38_1 = zmm7
    
    do
        void* rax_1 = rcx_3[0x55]
        
        if ((rax_1.b & 1) != 0)
            rax_1 = (rax_1 s>> 1) + &rcx_3[0x55]
        
        int64_t rdi_1 = sx.q(arg2[1].d)
        zmm7 = *(rsi_1 + rax_1 + 0x28)
        int32_t rax_3 = (rdi_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        zmm6.d = zmm6.d f+ zmm7.d
        rcx_3 = *(arg1 + 0x30)
        i += 1
        rsi_1 += 0x40
        *(*arg2 + (rdi_1 << 2)) = zmm7.d
    while (i s< rcx_3[6].d)

*(arg1 + 0x30) = 0

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3, 1)

result.o = zmm6
return result
