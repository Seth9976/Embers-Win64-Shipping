// 函数: sub_142882da0
// 地址: 0x142882da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)

if (*(*(arg1 + 0xa8) + 0x268) != 0)
    return 1

void* arg_8
void* arg_10
int64_t arg_18
int32_t rax_2 = sub_142859820(*(arg1 + 0x508), &arg_8, &arg_10, nullptr, nullptr, &arg_18, 0)
int64_t* var_40

if (rax_2 == 0)
    var_40.d = 0x109
    sub_142856580(arg1, rax_2 + 0x50, rax_2 + 0x9d, rax_2 + 0x8a, "ssl\s3_enc.c", var_40.d)
    return 0

*(*(arg1 + 0xa8) + 0x278) = arg_8
*(*(arg1 + 0xa8) + 0x280) = arg_10
*(*(arg1 + 0xa8) + 0x298) = arg_18
int32_t rax_7 = sub_1428916c0(arg_10)

if (rax_7 s< 0)
    return 0

int32_t rax_9 = sub_140611e40(arg_8)
int32_t rax_10 = sub_140611e60(arg_8)
void* rcx_8 = *(arg1 + 0xa8)
int32_t rbp_3 = (rax_10 + rax_7 + rax_9) * 2
sub_1428a6890(*(rcx_8 + 0x270), *(rcx_8 + 0x268), "ssl\s3_enc.c", 0x141)
int64_t rsi_1 = sx.q(rbp_3)
*(*(arg1 + 0xa8) + 0x270) = 0
*(*(arg1 + 0xa8) + 0x268) = 0
int64_t rax_14 = sub_1428a6730(rsi_1)

if (rax_14 == 0)
    int32_t rdx_5 = (rax_14 + 0x50).d
    var_40.d = 0x120
    sub_142856580(arg1, rdx_5, rdx_5 + 0x4d, (rax_14 + 0x41).d, "ssl\s3_enc.c", var_40.d)
    return 0

*(*(arg1 + 0xa8) + 0x268) = rsi_1
*(*(arg1 + 0xa8) + 0x270) = rax_14
int32_t rax_17 = sub_142882770(arg1, rax_14, rbp_3)

if ((*(arg1 + 0x5c4) & 0x800) == 0)
    *(*(arg1 + 0xa8) + 0xd8) = 1
    void* rax_18 = *(arg1 + 0x508)
    void* rcx_13 = *(rax_18 + 0x128)
    
    if (rcx_13 != 0)
        if (*(rcx_13 + 0x24) == 0x20)
            *(*(arg1 + 0xa8) + 0xd8) = 0
            rax_18 = *(arg1 + 0x508)
        
        if (*(*(rax_18 + 0x128) + 0x24) == 4)
            *(*(arg1 + 0xa8) + 0xd8) = 0

return zx.q(rax_17)
