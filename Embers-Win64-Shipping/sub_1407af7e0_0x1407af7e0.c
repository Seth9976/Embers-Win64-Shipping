// 函数: sub_1407af7e0
// 地址: 0x1407af7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int128_t zmm6 = zx.o(0)
int64_t rsi = sx.q(*(rax + 0x88))
int512_t result

if (rsi.d s<= 1)
    result.o = zx.o(0)
    return result

int64_t rdi = 0
void* r15 = *(rax + 0x58)
arg2[1].d = 0

if (*(arg2 + 0xc) != rsi.d)
    sub_1405dadb0(arg2, rsi.d)

if (rsi.d s> 0)
    int128_t zmm7
    int128_t var_38_1 = zmm7
    
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        zmm7 = *(sx.q(*(*(*(arg1 + 0x30) + 0x80) + (rdi << 2))) * 0x78 + *(r15 + 0x328) + 0x58)
        int32_t rax_4 = (rsi_1 + 1).d
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        zmm6.d = zmm6.d f+ zmm7.d
        rdi += 1
        *(*arg2 + (rsi_1 << 2)) = zmm7.d
    while (rdi s< rsi)

result.o = zmm6
return result
