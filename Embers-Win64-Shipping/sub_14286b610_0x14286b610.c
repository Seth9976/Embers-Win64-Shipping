// 函数: sub_14286b610
// 地址: 0x14286b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0x598)
int64_t buffer1 = 0
char count_1 = 0
int64_t r10 = *(rax + 0x258)

if (r10 != 0)
    void* rcx = *(arg1 + 0xa8)
    int64_t r9_1 = *(rcx + 0x3f0)
    
    if (r9_1 != 0)
        int32_t rax_3 = r10(arg1, &buffer1, &count_1, r9_1, *(rcx + 0x3f8), *(rax + 0x260))
        int64_t var_20_1
        
        if (rax_3 == 0)
            sub_1428a6780(*(*(arg1 + 0xa8) + 0x3e0))
            *(*(arg1 + 0xa8) + 0x3e0) =
                sub_1428a6af0(buffer1, zx.q(count_1), "ssl\statem\statem_srvr.c", 0x864)
            void* rcx_6 = *(arg1 + 0xa8)
            
            if (*(rcx_6 + 0x3e0) != 0)
                *(rcx_6 + 0x3e8) = zx.q(count_1)
                *(*(arg1 + 0xa8) + 0x3dc) = 0
                void* rsi_1 = *(arg1 + 0x508)
                int64_t buffer2 = *(rsi_1 + 0x1a0)
                
                if (buffer2 != 0)
                    uint64_t count = zx.q(count_1)
                    
                    if (count == *(rsi_1 + 0x1a8) && memcmp(buffer1, buffer2, count) == 0)
                        return 1
                
                *(arg1 + 0x6ec) = 0
                
                if (*(arg1 + 0xc8) != 0)
                    return 1
                
                if (*(rsi_1 + 0x1a0) == 0)
                    *(*(arg1 + 0x508) + 0x1a0) =
                        sub_1428a6af0(buffer1, zx.q(count_1), "ssl\statem\statem_srvr.c", 0x885)
                    void* rcx_11 = *(arg1 + 0x508)
                    
                    if (*(rcx_11 + 0x1a0) != 0)
                        *(rcx_11 + 0x1a8) = zx.q(count_1)
                        return 1
                    
                    var_20_1.d = 0x889
                else
                    var_20_1.d = 0x881
            else
                var_20_1.d = 0x867
            
            sub_142856580(arg1, 0x50, 0x232, 0x44, "ssl\statem\statem_srvr.c", var_20_1.d)
            return 0
        
        if (rax_3 != 3)
            var_20_1.d = 0x893
            sub_142856580(arg1, 0x78, 0x232, 0xeb, "ssl\statem\statem_srvr.c", var_20_1.d)
            return 0

if (*(*(arg1 + 0x508) + 0x1a0) == 0)
    return 1

*(arg1 + 0x6ec) = 0
return 1
