// 函数: sub_1428840d0
// 地址: 0x1428840d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void* rax = *(arg1 + 0xa8)
int32_t rsi = 0
int32_t arg_8 = 0
int64_t arg_18 = 0

if (*(rax + 0x268) != 0)
    return 1

void var_38
void* arg_10
int64_t arg_20
int32_t rax_3 =
    sub_142859820(*(arg1 + 0x508), &arg_10, &arg_20, &arg_8, &arg_18, &var_38, *(arg1 + 0x6e4))
int64_t* var_90

if (rax_3 == 0)
    var_90.d = 0x16e
    sub_142856580(arg1, rax_3 + 0x50, rax_3 + 0xd3, rax_3 + 0x8a, "ssl\t1_enc.c", var_90.d)
    return 0

*(*(arg1 + 0xa8) + 0x278) = arg_10
*(*(arg1 + 0xa8) + 0x280) = arg_20
*(*(arg1 + 0xa8) + 0x288) = arg_8
*(*(arg1 + 0xa8) + 0x290) = arg_18
int32_t rax_9 = sub_140611e60(arg_10)
uint64_t rbp_3 = (sx.q(sub_140611e40(arg_10)) + sx.q(rax_9) + arg_18) * 2
sub_142882180(arg1)
int64_t rax_11 = sub_1428a6730(rbp_3)

if (rax_11 != 0)
    int32_t var_40_1 = 1
    *(*(arg1 + 0xa8) + 0x268) = rbp_3
    *(*(arg1 + 0xa8) + 0x270) = rax_11
    void* rax_14 = *(arg1 + 0x508)
    int64_t r9_3 = *(arg1 + 0xa8)
    
    if (sub_142883000(arg1, "key expansion", 0xd, r9_3 + 0x98, 0x20, r9_3 + 0xb8, 0x20, 0, 0, 0, 0, 
            rax_14 + 0x50, (*(rax_14 + 8)).d, rax_11, rbp_3.d) != 0)
        if ((*(arg1 + 0x5c4) & 0x800) == 0 && **(arg1 + 8) s<= 0x301)
            *(*(arg1 + 0xa8) + 0xd8) = 1
            void* rax_19 = *(arg1 + 0x508)
            void* rcx_13 = *(rax_19 + 0x128)
            
            if (rcx_13 != 0)
                if (*(rcx_13 + 0x24) == 0x20)
                    *(*(arg1 + 0xa8) + 0xd8) = 0
                    rax_19 = *(arg1 + 0x508)
                
                if (*(*(rax_19 + 0x128) + 0x24) == 4)
                    *(*(arg1 + 0xa8) + 0xd8) = 0
        
        rsi = 1
else
    var_90.d = 0x17d
    sub_142856580(arg1, (rax_11 + 0x50).d, 0xd3, (rax_11 + 0x41).d, "ssl\t1_enc.c", var_90.d)

return zx.q(rsi)
