// 函数: sub_14286bdd0
// 地址: 0x14286bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rax_2 = *(arg1 + 0xa8)
int32_t result_1 = 0
int64_t var_48 = 0x20
int32_t* r8 = nullptr
char rax_3 = (*(*(rax_2 + 0x238) + 0x20)).b

if (rax_3 s< 0)
    void* rax_4 = *(arg1 + 0x488)
    r8 = *(rax_4 + 0x118)
    
    if (r8 == 0)
        r8 = *(rax_4 + 0xf0)
        
        if (r8 == 0)
            r8 = *(rax_4 + 0xc8)
else if ((rax_3 & 0x20) != 0)
    r8 = *(*(arg1 + 0x488) + 0xc8)

int64_t* rax_5 = sub_1428bcf30(r8, nullptr)
uint64_t result

if (rax_5 != 0)
    if (sub_1428bd370(rax_5) s> 0)
        int32_t* rax_7 = sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8))
        
        if (rax_7 != 0 && sub_1428bd610(rax_5, rax_7) s<= 0)
            sub_1428a49e0()
        
        int64_t rdx_1 = *(arg2 + 8)
        char* rax_9
        char rcx_7
        
        if (rdx_1 != 0)
            rax_9 = *arg2
            rcx_7 = *rax_9
            *arg2 = &rax_9[1]
            *(arg2 + 8) = rdx_1 - 1
        
        int32_t var_60_2
        
        if (rdx_1 == 0 || rcx_7 != 0x30 || rdx_1 == 1)
            var_60_2 = 0xd1f
        label_14286c03b:
            sub_142856580(arg1, 0x32, 0x19d, 0x93, "ssl\statem\statem_srvr.c", var_60_2)
        else
            char rax_10 = rax_9[1]
            
            if (rax_10 != 0x81)
                if (rax_10 u< 0x80)
                    goto label_14286bf34
                
                var_60_2 = 0xd33
                goto label_14286c03b
            
            if (rdx_1 - 1 u< 1)
                sub_142856580(arg1, 0x50, 0x19d, 0x93, "ssl\statem\statem_srvr.c", 0xd2a)
            else
                *arg2 = &rax_9[2]
                *(arg2 + 8) = rdx_1 - 2
            label_14286bf34:
                uint128_t zmm0_1 = *arg2
                int64_t rcx_8 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rcx_8 == 0)
                    var_60_2 = 0xd39
                    goto label_14286c03b
                
                char* rax_13 = zmm0_1.q
                uint128_t var_58_1
                var_58_1:8.q = rcx_8 - 1
                uint64_t rdx_3 = zx.q(*rax_13)
                var_58_1.q = &rax_13[1]
                
                if (rcx_8 - 1 u< rdx_3)
                    var_60_2 = 0xd39
                    goto label_14286c03b
                
                var_58_1.q = &rax_13[1 + rdx_3]
                var_58_1:8.q = rcx_8 - 1 - rdx_3
                
                if (rcx_8 - 1 != rdx_3)
                    var_60_2 = 0xd39
                    goto label_14286c03b
                
                *arg2 = var_58_1
                void var_40
                
                if (sub_1428bd220(rax_5, &var_40, &var_48, &rax_13[1], rdx_3) s> 0)
                    if (sub_142872ab0(arg1, &var_40, 0x20, 0) != 0)
                        int32_t var_60
                        var_60.q = 0
                        uint64_t var_68_2
                        var_68_2.d = 2
                        
                        if (sub_1428bcb30(rax_5, 0xffffffff, 0xffffffff, 2, var_68_2.d, var_60)
                                s> 0)
                            *(arg1 + 0x74) = 1
                        
                        result_1 = 1
                else
                    sub_142856580(arg1, 0x32, 0x19d, 0x93, "ssl\statem\statem_srvr.c", 0xd42)
        sub_1428bcda0(rax_5)
        result = zx.q(result_1)
    else
        sub_142856580(arg1, 0x50, 0x19d, 0x44, "ssl\statem\statem_srvr.c", 0xd0c)
        result = 0
else
    sub_142856580(arg1, 0x50, 0x19d, (rax_5 + 0x41).d, "ssl\statem\statem_srvr.c", 0xd07)
    result = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
