// 函数: sub_1426bacd0
// 地址: 0x1426bacd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x263) & 4) != 0 || (*(arg1 + 0x1a0) == 0 && (*(arg1 + 0x1a8) & 1) == 0)
        || (*(arg1 + 0x1a8) & 2) != 0)
    return 

int64_t zmm1 = (*(arg1 + 0x1a0)).q
int32_t var_20
int32_t var_20_1 = var_20 & 0xfffffffc
*(arg1 + 0x1a0) = 0.o
int32_t arg_8

if (zmm1 == 0)
    arg_8 = 0
else
    arg_8.w = *(arg1 + 0x260)
    arg_8:2.w = *(zmm1 + 0x50)

arg_8 = arg_8
sub_1426c1870(arg1, &arg_8)
int512_t entry_zmm2
int512_t zmm2 = sub_1426a9a50(arg1, zmm1, entry_zmm2)
int32_t i = zx.d(*(arg1 + 0x260)) + 1

if (*(arg1 + 0x118) s> i)
    do
        sub_1426aaa20(sx.q(i) * 0x58 + *(arg1 + 0x110), arg1, 1)
        i += 1
    while (i s< *(arg1 + 0x118))
    
    int64_t rsi_1 = sx.q(*(arg1 + 0x118))
    int32_t rdx_5 = zx.d(*(arg1 + 0x260)) + 1
    
    if (rdx_5 s> rsi_1.d)
        *(arg1 + 0x118) = rdx_5
        int32_t i_2 = rdx_5 - rsi_1.d
        
        if (rdx_5 s> *(arg1 + 0x11c))
            sub_1407755b0(arg1 + 0x110)
        
        if (i_2 != 0)
            void* rax_7 = rsi_1 * 0x58 + 0x1c + *(arg1 + 0x110)
            int32_t i_1
            
            do
                *(rax_7 - 0xc) = 0
                *(rax_7 - 4) = 0
                __builtin_memset(rax_7 + 4, 0, 0x20)
                *(rax_7 + 0x2c) = 0
                *(rax_7 + 0x34) = 0
                rax_7 += 0x58
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else if (rdx_5 s< rsi_1.d)
        sub_1426bc8a0(arg1 + 0x110, rdx_5, rsi_1.d - rdx_5, 1)

if (zmm1 != 0 && zx.d(*(arg1 + 0x260)) s< *(arg1 + 0x118))
    sub_1426af910(arg1, zmm1, zmm2)
    return 

bool cond:1_1 = (*(arg1 + 0x263) & 2) == 0
*(arg1 + 0x260) = 0

if (cond:1_1 || *(arg1 + 0x118) == 0)
    sub_1426bfc00(arg1, 0, zmm2)
    return 

void** rbx_3 = *(arg1 + 0x110)
arg_8 = 0
rbx_3[1] = 0
*(rbx_3 + 0x41) = 0
sub_1426c1870(arg1, &arg_8)
void* rdx_9 = *rbx_3
char var_38_1 = 1
sub_1426bcb00(arg1, rdx_9, 0, rdx_9, 0, 3)
