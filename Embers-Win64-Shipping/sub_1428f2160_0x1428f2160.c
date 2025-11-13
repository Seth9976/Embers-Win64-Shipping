// 函数: sub_1428f2160
// 地址: 0x1428f2160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rsi = nullptr
int32_t* rdi = nullptr

if (strncmp(*(arg3 + 8), "fullname", 9) != 0)
    if (strcmp(*(arg3 + 8), "relativename") != 0)
        return 0
    
    int32_t** rax_4 = sub_1428abf60()
    
    if (rax_4 == 0)
        return 0xffffffff
    
    int32_t* rax_5 = sub_1428f8e70(arg2, *(arg3 + 0x10))
    
    if (rax_5 == 0)
        sub_1428a5670((rax_5 + 0x22).d, 0x9e, 0x96, "crypto\x509v3\v3_crld.c", 0x56)
        return 0xffffffff
    
    int32_t rax_6 = sub_1428e89f0(rax_4, rax_5, 0x1001)
    sub_1428f8ed0(arg2, rax_5)
    rdi = *rax_4
    *rax_4 = nullptr
    sub_1428abf30(rax_4)
    
    if (rax_6 != 0 && sub_142898c70(rdi) s> 0)
        if (*(sub_142898ea0(rdi, sub_142898c70(rdi) - 1) + 0x10) == 0)
            goto label_1428f21bb
        
        sub_1428a5670(0x22, 0x9e, 0xa1, "crypto\x509v3\v3_crld.c", 0x66)
else
    int32_t* rax_1 = sub_1428f1e60(arg2, *(arg3 + 0x10))
    rsi = rax_1
    
    if (rax_1 != 0)
    label_1428f21bb:
        
        if (*arg1 == 0)
            int32_t* rax_10 = sub_1428db530(&data_143517350)
            *arg1 = rax_10
            
            if (rax_10 != 0)
                if (rsi != 0)
                    *rax_10 = 0
                    *(*arg1 + 8) = rsi
                    return 1
                
                *rax_10 = 1
                *(*arg1 + 8) = rdi
                return 1
        else
            sub_1428a5670(0x22, 0x9e, 0xa0, "crypto\x509v3\v3_crld.c", 0x6e)

sub_142898cb0(rsi, sub_1428e7b70)
sub_142898cb0(rdi, sub_1428abed0)
return 0xffffffff
