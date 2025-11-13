// 函数: sub_142879cf0
// 地址: 0x142879cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdx = *(*(arg1 + 0xa8) + 0x238)
int32_t rsi = *(rdx + 0x20)
char rdi = (*(rdx + 0x1c)).b

if ((rsi.b & 0xab) != 0)
    int64_t arg_8
    void* rax_2 = sub_142854230(sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8)), &arg_8)
    int32_t rax_3
    
    if (rax_2 != 0)
        rax_3 = *(rax_2 + 4)
    
    int32_t var_10
    int32_t r9
    
    if (rax_2 == 0 || (rsi & rax_3) == 0)
        var_10 = 0xe01
        r9 = 0xdd
    label_142879d8d:
        sub_142856580(arg1, 0x28, 0x82, r9, "ssl\statem\statem_clnt.c", var_10)
        return 0
    
    if ((rax_3.b & 8) == 0)
        if ((rdi & 0x41) != 0 && arg_8 != 0)
            var_10 = 0xe12
            r9 = 0xa9
            goto label_142879d8d
        
        if ((rdi & 2) != 0 && *(*(arg1 + 0xa8) + 0x408) == 0)
            sub_142856580(arg1, 0x50, 0x82, 0x44, "ssl\statem\statem_clnt.c", 0xe19)
            return 0
    else if (sub_142851b80(*(*(arg1 + 0x508) + 0xf8), arg1) == 0)
        var_10 = 0xe0a
        r9 = 0x130
        goto label_142879d8d

return 1
