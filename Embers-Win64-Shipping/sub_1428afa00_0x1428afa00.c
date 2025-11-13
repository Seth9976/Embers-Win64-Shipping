// 函数: sub_1428afa00
// 地址: 0x1428afa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0
int32_t r9 = 0

if (sub_1428a5c60(&data_143fecb10, sub_1428afe40) != 0)
    r9 = data_143fecb14

if (r9 == 0)
    return 0

int32_t* rax_2 = sub_1428a6730(0x18)

if (rax_2 != 0)
    CRITICAL_SECTION* rcx = data_143fecb00
    *(rax_2 + 8) = arg1
    *(rax_2 + 0x10) = arg3
    rax_2[1] = arg2 & 0x8000
    *rax_2 = arg2 & 0xffff7fff
    sub_1428a5c40(rcx)
    int32_t* rax_5 = sub_1428a8a90(data_143fecaf8, rax_2)
    
    if (rax_5 == 0)
        if (sub_142890ee0(data_143fecaf8) == 0)
            rsi = 1
        else
            sub_1428a6780(rax_2)
    else
        int32_t* rcx_2 = data_143fecb08
        
        if (rcx_2 != 0)
            int32_t rax_6 = sub_142898c70(rcx_2)
            int32_t rdx_2 = *rax_5
            
            if (rax_6 s> rdx_2)
                int64_t rax_7 = sub_142898ea0(data_143fecb08, rdx_2)
                (*(rax_7 + 0x10))(*(rax_5 + 8), zx.q(*rax_5), *(rax_5 + 0x10))
        
        sub_1428a6780(rax_5)
        rsi = 1

sub_1428a5d00(data_143fecb00)
return zx.q(rsi)
