// 函数: sub_14288a8b0
// 地址: 0x14288a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if ((*(arg1 + 0x5c4) & 0x10) == 0)
    return 2

int32_t var_20
uint64_t count

if (sub_142873850(arg2, &count) != 0)
    int32_t* rax_3 = *(arg1 + 0x508)
    uint64_t count_2
    
    if (*rax_3 != 0x304 || *(rax_3 + 0x188) == 0)
        count_2 = count
    else
        void* rcx_2 = *(rax_3 + 0x128)
        
        if (rcx_2 == 0)
            count_2 = count
        else
            void* rax_4 = sub_14285b4c0((*(rcx_2 + 0x40)).b)
            
            if (rax_4 == 0)
                count_2 = count
            else
                count_2 = sx.q(sub_1428916c0(rax_4)) + *(*(arg1 + 0x508) + 0x188) + count + 0xf
    
    if (count_2 - 0x100 u> 0xff)
        return 1
    
    uint64_t count_1
    
    if (0x200 - count_2 u<= 4)
        count_1 = 1
    else
        count_1 = 0x200 - count_2 - 4
    
    count = count_1
    int64_t var_18
    
    if (sub_142873b60(arg2, 0x15, 2) != 0 && sub_142873ff0(arg2, count, &var_18, 2) != 0)
        memset(var_18, 0, count)
        return 1
    
    var_20 = 0x3cb
else
    var_20 = 0x3a2

sub_142856580(arg1, 0x50, 0x1d8, 0x44, "ssl\statem\extensions_clnt.c", var_20)
return 0
