// 函数: sub_14286c090
// 地址: 0x14286c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x150)
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint128_t zmm0 = *arg2
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
uint128_t var_138
char* rax_2
uint64_t rsi_3

if (rcx u>= 2)
    rax_2 = zmm0.q
    var_138:8.q = rcx - 2
    rsi_3 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
    var_138.q = &rax_2[2]

int64_t result
int32_t var_140_1
int32_t rdx
int32_t r9_1

if (rcx u< 2 || rcx - 2 u< rsi_3)
    var_140_1 = 0xb53
    r9_1 = 0x9f
label_14286c2a8:
    rdx = 0x32
label_14286c2ad:
    sub_142856580(arg1, rdx, 0x19e, r9_1, "ssl\statem\statem_srvr.c", var_140_1)
    result = 0
else
    var_138.q = &rax_2[2 + rsi_3]
    var_138:8.q = rcx - 2 - rsi_3
    *arg2 = var_138
    
    if (rsi_3 u> 0x80)
        var_140_1 = 0xb58
        r9_1 = 0x92
        goto label_14286c2a8
    
    if (*(arg1 + 0x580) == 0)
        var_140_1 = 0xb5d
        rdx = 0x50
        r9_1 = 0xe1
        goto label_14286c2ad
    
    void* rbx_1 = *(arg1 + 0x508)
    sub_1428a6780(*(rbx_1 + 0xe8))
    char* rax_5 = sub_1428a6c10(&rax_2[2], rsi_3, 
        "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1c4)
    *(rbx_1 + 0xe8) = rax_5
    
    if (rax_5 != 0)
        void var_128
        int32_t rax_6 = (*(arg1 + 0x580))(arg1, *(*(arg1 + 0x508) + 0xe8), &var_128, 0x100)
        uint64_t rsi_4 = zx.q(rax_6)
        
        if (rsi_4 u> 0x100)
            rdx = 0x50
            var_140_1 = 0xb6c
            r9_1 = 0x44
            goto label_14286c2ad
        
        if (rax_6 != 0)
            sub_1428a6780(*(*(arg1 + 0xa8) + 0x2c8))
            *(*(arg1 + 0xa8) + 0x2c8) =
                sub_1428a6af0(&var_128, rsi_4, "ssl\statem\statem_srvr.c", 0xb79)
            sub_1428b8960(&var_128, rsi_4)
            void* rax_8 = *(arg1 + 0xa8)
            
            if (*(rax_8 + 0x2c8) != 0)
                *(rax_8 + 0x2d0) = rsi_4
                result = 1
            else
                sub_142856580(arg1, 0x50, 0x19e, 0x41, "ssl\statem\statem_srvr.c", 0xb7e)
                result = 0
        else
            rdx = rax_6 + 0x73
            sub_142856580(arg1, rdx, 0x19e, rdx + 0x6c, "ssl\statem\statem_srvr.c", 0xb74)
            result = 0
    else
        sub_142856580(arg1, (&rax_5[0x50]).d, 0x19e, (&rax_5[0x44]).d, "ssl\statem\statem_srvr.c", 
            0xb63)
        result = 0
__security_check_cookie(rax_1 ^ &var_168)
return result
