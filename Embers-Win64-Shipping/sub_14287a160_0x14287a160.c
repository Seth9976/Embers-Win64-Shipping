// 函数: sub_14287a160
// 地址: 0x14287a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x170)
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rsi = nullptr
void* rcx_1 = *(*(arg1 + 0x508) + 0xf8)
int32_t r15_1 = *(*(*(arg1 + 0xa8) + 0x238) + 0x20) & 0x80
int64_t result

if (rcx_1 != 0)
    int64_t* rax_5 = sub_1428bcf30(sub_1428a38c0(rcx_1), nullptr)
    
    if (rax_5 != 0)
        int64_t rax_6 = sub_1428a6730(0x20)
        int32_t rax_7
        int32_t r9_2
        
        if (rax_6 != 0)
            int32_t rax_8 = sub_1428bd980(rax_5)
            int32_t rax_9
            
            if (rax_8 s> 0)
                rax_9 = sub_142897af0(rax_6, 0x20)
            
            if (rax_8 s<= 0 || rax_9 s<= 0)
                rax_7 = 0xc91
                r9_2 = 0x44
                goto label_14287a466
            
            int64_t* rax_10 = sub_142891ee0()
            rsi = rax_10
            
            if (rax_10 == 0)
            label_14287a43d:
                rax_7 = 0xca1
                r9_2 = 0x44
                goto label_14287a466
            
            int32_t rcx_7 = 0x3d6
            
            if (r15_1 == 0)
                rcx_7 = 0x329
            
            if (sub_142891980(rsi, sub_14289b970(sub_1428a9620(rcx_7))) s<= 0)
                goto label_14287a43d
            
            if (sub_142891c10(rsi, *(arg1 + 0xa8) + 0xb8, 0x20) s<= 0)
                goto label_14287a43d
            
            if (sub_142891c10(rsi, *(arg1 + 0xa8) + 0x98, 0x20) s<= 0)
                goto label_14287a43d
            
            void var_160
            void var_158
            
            if (sub_1428918e0(rsi, &var_158, &var_160) s<= 0)
                goto label_14287a43d
            
            sub_142891ea0(rsi)
            rsi = nullptr
            int32_t var_170
            var_170.q = &var_158
            
            if (sub_1428bcb30(rax_5, 0xffffffff, 0x100, 8, 8, var_170) s< 0)
                rax_7 = 0xca9
                r9_2 = 0x112
                goto label_14287a466
            
            int64_t var_168 = 0xff
            void var_138
            
            if (sub_1428bd830(rax_5, &var_138, &var_168, rax_6, 0x20) s<= 0)
                rax_7 = 0xcb3
                r9_2 = 0x112
                goto label_14287a466
            
            if (sub_142873b60(arg2, 0x30, 1) == 0)
            label_14287a436:
                rax_7 = 0xcbb
                r9_2 = 0x44
                goto label_14287a466
            
            int64_t r8_4 = var_168
            
            if (r8_4 u< 0x80)
                goto label_14287a3fe
            
            if (sub_142873b60(arg2, 0x81, 1) == 0)
                goto label_14287a436
            
            r8_4 = var_168
        label_14287a3fe:
            
            if (sub_142874080(arg2, &var_138, r8_4, 1) == 0)
                goto label_14287a436
            
            sub_1428bcda0(rax_5)
            result = 1
            *(*(arg1 + 0xa8) + 0x2b8) = rax_6
            *(*(arg1 + 0xa8) + 0x2c0) = 0x20
        else
            rax_7 = 0xc87
            r9_2 = (rax_6 + 0x41).d
        label_14287a466:
            sub_142856580(arg1, 0x50, 0x196, r9_2, "ssl\statem\statem_clnt.c", rax_7)
            sub_1428bcda0(rax_5)
            sub_1428a6890(rax_6, 0x20, "ssl\statem\statem_clnt.c", 0xcc6)
            sub_142891ea0(rsi)
            result = 0
    else
        sub_142856580(arg1, (&rax_5[0xa]).d, 0x196, (rax_5 + 0x41).d, "ssl\statem\statem_clnt.c", 
            0xc79)
        result = 0
else
    sub_142856580(arg1, 0x28, 0x196, 0x14a, "ssl\statem\statem_clnt.c", 0xc72)
    result = 0

__security_check_cookie(rax_1 ^ &var_198)
return result
