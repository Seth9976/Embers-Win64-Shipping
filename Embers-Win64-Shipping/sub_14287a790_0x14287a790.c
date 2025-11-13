// 函数: sub_14287a790
// 地址: 0x14287a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *(arg1 + 0x508)
int64_t arg_18 = 0
int64_t* rsi = nullptr
void* rcx = *(rax + 0xf8)

if (rcx == 0)
    sub_142856580(arg1, 0x50, 0x199, 0x44, "ssl\statem\statem_clnt.c", 0xb9c)
    return 0

int32_t* rax_2 = sub_1428a38c0(rcx)
int64_t rax_3 = sub_142896750(rax_2)

if (rax_3 == 0)
    sub_142856580(arg1, (rax_3 + 0x50).d, 0x199, (rax_3 + 0x44).d, "ssl\statem\statem_clnt.c", 
        0xba3)
    return 0

char* rax_5 = sub_1428a6730(0x30)

if (rax_5 != 0)
    *rax_5 = (arg1[0x179] s>> 8).b
    rax_5[1] = arg1[0x179].b
    
    if (sub_142897af0(&rax_5[2], 0x2e) s> 0)
        int32_t rax_10
        
        if (*arg1 s> 0x300)
            rax_10 = sub_142873e80(arg2, 2)
        
        if (*arg1 s<= 0x300 || rax_10 != 0)
            int64_t* rax_11 = sub_1428bcf30(rax_2, nullptr)
            rsi = rax_11
            
            if (rax_11 == 0)
            label_14287aa04:
                sub_142856580(arg1, 0x50, 0x199, 6, "ssl\statem\statem_clnt.c", 0xbc2)
            else
                if (sub_1428bd980(rax_11) s<= 0)
                    goto label_14287aa04
                
                int64_t arg_8
                
                if (sub_1428bd830(rsi, 0, &arg_8, rax_5, 0x30) s<= 0)
                    goto label_14287aa04
                
                int32_t rax_14 = sub_142873640(arg2, arg_8, &arg_18)
                int32_t rax_15
                
                if (rax_14 != 0)
                    rax_15 = sub_1428bd830(rsi, arg_18, &arg_8, rax_5, 0x30)
                
                if (rax_14 == 0 || rax_15 s<= 0)
                    sub_142856580(arg1, 0x50, 0x199, 0x77, "ssl\statem\statem_clnt.c", 0xbc8)
                else
                    sub_1428bcda0(rsi)
                    rsi = nullptr
                    int32_t rax_16
                    
                    if (*arg1 s> 0x300)
                        rax_16 = sub_1428736e0(arg2)
                    
                    if (*arg1 s<= 0x300 || rax_16 != 0)
                        if (sub_142851f90(arg1, arg_18, arg_8, rax_5, 0x30) != 0)
                            *(*(arg1 + 0xa8) + 0x2b8) = rax_5
                            *(*(arg1 + 0xa8) + 0x2c0) = 0x30
                            return 1
                    else
                        sub_142856580(arg1, 0x50, 0x199, 0x44, "ssl\statem\statem_clnt.c", 0xbd1)
        else
            sub_142856580(arg1, 0x50, 0x199, rax_10 + 0x44, "ssl\statem\statem_clnt.c", 0xbbb)
    else
        sub_142856580(arg1, 0x50, 0x199, 0x41, "ssl\statem\statem_clnt.c", 0xbb4)
    
    sub_1428a6890(rax_5, 0x30, "ssl\statem\statem_clnt.c", 0xbe0)
    sub_1428bcda0(rsi)
else
    sub_142856580(arg1, (&rax_5[0x50]).d, 0x199, (&rax_5[0x41]).d, "ssl\statem\statem_clnt.c", 
        0xbab)

return 0
