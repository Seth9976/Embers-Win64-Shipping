// 函数: sub_1422354c0
// 地址: 0x1422354c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg2
int128_t zmm6 = arg3

if (arg1[7].b == 1 || *(arg1 + 0x1d) == 1)
    arg2, zmm6 = sub_14227fc60(rbp, arg2, arg1)

uint32_t rdi = 0
int64_t rsi
uint64_t r8_2

if ((arg1[4].b & 1) == 0)
label_14223552e:
    rsi.b = 0
    r8_2 = zx.q(arg1[7].b)
else
    int32_t zmm1 = (zx.o(0)).d
    
    if (zmm6.d * *arg1 f!= zmm1)
        goto label_14223552e
    
    zmm6.d = zmm6.d f* arg1[1]
    
    if (zmm6.d f!= zmm1)
        goto label_14223552e
    
    char rax = arg1[7].b
    rsi.b = 1
    
    if (rax != 1)
        r8_2 = zx.q(rax)
    else
        r8_2 = 0

arg2.b = 5
sub_142277fb0(rbp, arg2, r8_2)

if (rsi.b == 0 || arg1[7].b != 1)
    rdi = zx.d(*(arg1 + 0x1d))

int64_t rdx
rdx.b = 4
return sub_142277fb0(rbp, rdx, zx.q(rdi)) __tailcall
