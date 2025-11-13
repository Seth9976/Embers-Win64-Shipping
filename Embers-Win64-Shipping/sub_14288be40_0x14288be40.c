// 函数: sub_14288be40
// 地址: 0x14288be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(*(arg1 + 0xa8) + 0x400) == 0)
    sub_142856580(arg1, 0x6e, 0x243, 0x6e, "ssl\statem\extensions_clnt.c", 0x650)
    return 0

int64_t r8 = arg2[1]
int32_t var_10_1
int32_t rdx_4
int32_t r9_2

if (r8 u< 2)
label_14288c07c:
    var_10_1 = 0x65d
    r9_2 = 0x6e
    rdx_4 = 0x32
else
    char* rax_2 = *arg2
    uint64_t rcx_2 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
    *arg2 = &rax_2[2]
    arg2[1] = r8 - 2
    
    if (r8 - 2 != rcx_2 || r8 == 2)
        goto label_14288c07c
    
    uint64_t rcx_3 = zx.q(rax_2[2])
    *arg2 = &rax_2[3]
    uint64_t count = zx.q(rcx_3.d)
    arg2[1] = r8 - 3
    
    if (r8 - 3 != rcx_3)
        goto label_14288c07c
    
    sub_1428a6780(*(*(arg1 + 0xa8) + 0x3e0))
    *(*(arg1 + 0xa8) + 0x3e0) = sub_1428a6730(zx.q(count.d))
    int64_t rdx_3 = *(*(arg1 + 0xa8) + 0x3e0)
    
    if (rdx_3 != 0)
        if (sub_1428672d0(arg2, rdx_3, count) != 0)
            *(*(arg1 + 0xa8) + 0x3e8) = count
            void* rsi_1 = *(arg1 + 0x508)
            int64_t buffer1 = *(rsi_1 + 0x1a0)
            int32_t rax_9
            
            if (buffer1 != 0 && *(rsi_1 + 0x1a8) == count)
                rax_9 = memcmp(buffer1, *(*(arg1 + 0xa8) + 0x3e0), count)
            
            if (buffer1 == 0 || *(rsi_1 + 0x1a8) != count || rax_9 != 0)
                *(arg1 + 0x6ec) = 0
            
            if (*(arg1 + 0xc8) != 0)
                return 1
            
            if (*(rsi_1 + 0x1a0) == 0)
                void* rcx_9 = *(arg1 + 0xa8)
                *(*(arg1 + 0x508) + 0x1a0) = sub_1428a6af0(*(rcx_9 + 0x3e0), *(rcx_9 + 0x3e8), 
                    "ssl\statem\extensions_clnt.c", 0x680)
                void* rdx_8 = *(arg1 + 0x508)
                
                if (*(rdx_8 + 0x1a0) != 0)
                    *(rdx_8 + 0x1a8) = *(*(arg1 + 0xa8) + 0x3e8)
                    return 1
                
                rdx_4 = 0x50
                var_10_1 = 0x683
                r9_2 = 0x44
            else
                rdx_4 = 0x50
                var_10_1 = 0x67c
                r9_2 = 0x44
        else
            var_10_1 = 0x669
            r9_2 = 0x6e
            rdx_4 = 0x32
    else
        rdx_4 = 0x50
        var_10_1 = 0x664
        r9_2 = 0x44

sub_142856580(arg1, rdx_4, 0x243, r9_2, "ssl\statem\extensions_clnt.c", var_10_1)
return 0
