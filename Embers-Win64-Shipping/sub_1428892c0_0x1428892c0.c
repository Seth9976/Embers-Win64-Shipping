// 函数: sub_1428892c0
// 地址: 0x1428892c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
int32_t var_20
int32_t rdx_2
int32_t r9

if (rcx == 0)
label_1428893a7:
    rdx_2 = 0x32
    var_20 = 0xe0
    r9 = 0x6e
else
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = rcx - 1
    uint64_t rbx_1 = zx.q(*rax_1)
    var_18.q = &rax_1[1]
    
    if (rcx - 1 u< rbx_1)
        goto label_1428893a7
    
    var_18.q = &rax_1[1 + rbx_1]
    var_18:8.q = rcx - 1 - rbx_1
    
    if (rcx - 1 != rbx_1)
        goto label_1428893a7
    
    *arg2 = var_18
    
    if (memchr(&rax_1[1], 0, zx.q(rbx_1.d)) != 0)
        goto label_1428893a7
    
    sub_1428a6780(*(arg1 + 0x7a0))
    char* rax_4 = sub_1428a6c10(&rax_1[1], zx.q(rbx_1.d), 
        "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1c4)
    *(arg1 + 0x7a0) = rax_4
    
    if (rax_4 != 0)
        return 1
    
    var_20 = 0xea
    rdx_2 = (&rax_4[0x50]).d
    r9 = (&rax_4[0x44]).d

sub_142856580(arg1, rdx_2, 0x240, r9, "ssl\statem\extensions_srvr.c", var_20)
return 0
