// 函数: sub_140d77be0
// 地址: 0x140d77be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6

if (arg2 != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405dadb0(arg2, 0)

int128_t zmm7
zmm7.d = (*(arg1 + 0x4c)).d f+ *(arg1 + 0x24)
void* rdi_1 = arg1 + 0xc
int128_t zmm9 = zx.o(0)
int64_t i_1 = 2
int64_t i

do
    zmm6.d = (*(rdi_1 + 4)).d f* 100f
    zmm6.d = zmm6.d f/ *rdi_1
    
    if (arg2 != 0)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        *(*arg2 + (rsi_1 << 2)) = zmm6.d
    
    float zmm0
    
    if (zmm7.d f<= 0f)
        zmm0 = (zx.o(0)).d
    else
        zmm0 = *(rdi_1 + 0x18) f/ zmm7.d
    
    rdi_1 += 0x28
    zmm9.d = zmm9.d f+ zmm0 f* zmm6.d
    i = i_1
    i_1 -= 1
while (i != 1)
return zmm9.d
