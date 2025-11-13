// 函数: sub_1419157e0
// 地址: 0x1419157e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
sub_1419154b0(arg1, arg2[0x18].d, arg2, &arg2[0x32])
int32_t rsi = 0
int32_t var_110
int32_t rax_3

if (sub_14197ee80(&var_110) == 0)
    int32_t var_118 = 0
    data_143effa50(0x821b, &var_118)
    int32_t rax_4 = var_118
    
    if (rax_4 == 3 || rax_4 != 4)
        rax_3 = 1
    else
        int32_t var_114 = 0
        data_143effa50(0x821c, &var_114)
        rax_3 = 1
        
        if (var_114 u> 2)
            rax_3 = 3
else
    rax_3 = var_110

int64_t rcx_1 = sx.q((*U"1111")[sx.q(rax_3)])
int64_t rdi

if (rcx_1.d u> 0x1e)
    if ((*(rcx_1 * 0x14 + &data_143f025fc) u>> 0x1f).b != 0)
        rdi.b = 1
    else
        rdi.b = 0
else if (test_bit(0x41200800, rcx_1.d) || (*(rcx_1 * 0x14 + &data_143f025fc) u>> 0x1f).b != 0)
    rdi.b = 1
else
    rdi.b = 0

int32_t zmm3 = (zx.o(0)).d
char r10 = *(arg2 + 0xc4)
char r9_1 = *(arg2 + 0x1a1)
char r11 = arg2[0x34].b
void var_b8

if (arg2[0x18].d s> 0)
    uint64_t i_1 = zx.q(arg2[0x18].d)
    void* rdx_3 = &var_b8
    int128_t zmm2 = data_14399f5e0
    int64_t* rcx_3 = arg2
    uint64_t i
    
    do
        void* rax_9 = *rcx_3
        
        if (rax_9 != 0)
            int128_t zmm0_1 = *(rax_9 + 0x20)
            int32_t var_c8_1 = *(rax_9 + 0x30)
            
            if (rdi.b != 0)
                int32_t rax_10
                rax_10.b = rcx_3[2].b == 0
                r10 |= rax_10.b
                
                if (zmm0_1.d != 1)
                    zmm0_1 = zmm2
                
                *rdx_3 = zmm0_1
            else if (r10 != 0)
                int128_t var_fc_1 = zmm0_1
                *rdx_3 = zmm0_1
        
        rcx_3 = &rcx_3[3]
        rdx_3 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result = arg2[0x32]

if (result != 0)
    int96_t var_d8_2 = (*(result + 0x20)).12
    
    if (rdi.b != 0)
        result.b = *(arg2 + 0x19a) == 0
        r9_1 |= result.b
        result.b = arg2[0x33].b == 0
        r11 |= result.b
        
        if (var_d8_2.d == 2)
            rsi = var_d8_2:8.d
            zmm3 = var_d8_2:4.d
    else if (r11 != 0 || r9_1 != 0)
        rsi = var_d8_2:8.d
        zmm3 = var_d8_2:4.d

if (r10 != 0 || r9_1 != 0 || r11 != 0)
    int32_t var_120_1 = rsi
    char var_128_1 = r9_1
    result = sub_141911d30(arg1 - 0x18, r10, arg2[0x18].d, &var_b8, r11, zmm3)

__security_check_cookie(rax_1 ^ &var_158)
return result
