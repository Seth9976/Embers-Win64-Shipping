// 函数: sub_14288c920
// 地址: 0x14288c920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void* rax = *(arg1 + 0xa8)
int64_t* r11 = arg2

if (*(rax + 0x198) != 0 && *(rax + 0x220) != 0)
    return 1

void* r10 = *(arg1 + 0x598)

if (*(r10 + 0x288) == 0)
    sub_142856580(arg1, 0x6e, 0x246, 0x6e, "ssl\statem\extensions_clnt.c", 0x620)
    return 0

uint128_t zmm1 = *arg2
uint128_t var_18 = zmm1
int64_t rax_3 = _mm_bsrli_si128(zmm1, 8).q
uint128_t var_28

if (rax_3 != 0)
    while (true)
        var_28 = zmm1
        
        if (rax_3 == 0)
            sub_142856580(arg1, 0x32, 0x235, 0x6e, "ssl\statem\extensions_clnt.c", 0x60a)
            return 0
        
        char* rcx = var_18.q
        var_28:8.q -= 1
        var_28.q = &rcx[1]
        uint64_t r8_1 = zx.q(*rcx)
        
        if (var_28:8.q - 1 u< r8_1)
            sub_142856580(arg1, 0x32, 0x235, 0x6e, "ssl\statem\extensions_clnt.c", 0x60a)
            return 0
        
        int64_t rdx_2 = var_28:8.q - 1 - r8_1
        var_28.q = &rcx[1 + r8_1]
        var_28:8.q = rdx_2
        zmm1 = var_28
        var_18 = zmm1
        
        if (r8_1 == 0)
            sub_142856580(arg1, 0x32, 0x235, 0x6e, "ssl\statem\extensions_clnt.c", 0x60a)
            return 0
        
        if (rdx_2 == 0)
            break
        
        rax_3 = var_18:8.q

int32_t var_30
var_30.q = *(r10 + 0x290)
int64_t var_38
var_38.d = (r11[1]).d
int32_t var_30_1
char arg_8
int32_t rdx_4
int32_t r9_3

if ((*(r10 + 0x288))(arg1, &var_28, &arg_8, *r11, var_38, var_30) == 0)
    sub_1428a6780(*(arg1 + 0x6d0))
    int64_t rax_8 = sub_1428a6730(zx.q(arg_8))
    *(arg1 + 0x6d0) = rax_8
    
    if (rax_8 != 0)
        memcpy(rax_8, var_28.q, zx.d(arg_8))
        *(arg1 + 0x6d8) = zx.q(arg_8)
        *(*(arg1 + 0xa8) + 0x3dc) = 1
        return 1
    
    var_30_1 = 0x63c
    rdx_4 = (rax_8 + 0x50).d
    r9_3 = (rax_8 + 0x44).d
else
    rdx_4 = 0x28
    var_30_1 = 0x630
    r9_3 = 0x6e

sub_142856580(arg1, rdx_4, 0x246, r9_3, "ssl\statem\extensions_clnt.c", var_30_1)
return 0
