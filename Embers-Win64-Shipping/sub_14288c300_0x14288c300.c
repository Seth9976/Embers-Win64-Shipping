// 函数: sub_14288c300
// 地址: 0x14288c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
int32_t var_20_1
int32_t r9_1

if (rcx == 0)
label_14288c440:
    var_20_1 = 0x553
    r9_1 = 0x6e
label_14288c455:
    sub_142856580(arg1, 0x32, 0x244, r9_1, "ssl\statem\extensions_clnt.c", var_20_1)
    return 0

char* rax_1 = zmm0.q
uint128_t var_18
var_18:8.q = rcx - 1
uint64_t rbx_1 = zx.q(*rax_1)
var_18.q = &rax_1[1]

if (rcx - 1 u< rbx_1)
    goto label_14288c440

var_18.q = &rax_1[1 + rbx_1]
var_18:8.q = rcx - 1 - rbx_1

if (rcx - 1 != rbx_1)
    goto label_14288c440

*arg2 = var_18

if (*(arg1 + 0xc8) != 0)
    return 1

if (rbx_1 == 0)
    var_20_1 = 0x55a
    r9_1 = 0x10f
    goto label_14288c455

*(*(arg1 + 0x508) + 0x160) = 0
sub_1428a6780(*(*(arg1 + 0x508) + 0x168))
*(*(arg1 + 0x508) + 0x168) = sub_1428a6730(rbx_1)
void* rax_5 = *(arg1 + 0x508)

if (*(rax_5 + 0x168) != 0)
    *(rax_5 + 0x160) = rbx_1
    memcpy(*(*(arg1 + 0x508) + 0x168), &rax_1[1], rbx_1.d)
    return 1

sub_142856580(arg1, 0x50, 0x244, 0x44, "ssl\statem\extensions_clnt.c", 0x563)
return 0
