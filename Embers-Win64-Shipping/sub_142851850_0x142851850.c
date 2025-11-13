// 函数: sub_142851850
// 地址: 0x142851850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rax = arg2[1]

if (rax == 0)
    sub_142856580(arg1, (rax + 0x2f).d, 0x208, 0xb7, "ssl\ssl_lib.c", 0x1445)
    return 0

int64_t rsi
rsi.b = arg3 != 0
int32_t var_30_1
int32_t rdx_3
int32_t r9_1

if (modu.dp.q(0:rax, rsi + 2) == 0)
    sub_1428a6780(*(*(arg1 + 0xa8) + 0x2a8))
    *(*(arg1 + 0xa8) + 0x2a8) = 0
    *(*(arg1 + 0xa8) + 0x2b0) = 0
    
    if (arg3 == 0)
        void* rsi_2 = *(arg1 + 0xa8)
        sub_1428a6780(*(rsi_2 + 0x2a8))
        *(rsi_2 + 0x2a8) = 0
        *(rsi_2 + 0x2b0) = 0
        uint64_t rbp_1 = arg2[1]
        
        if (rbp_1 == 0)
            return 1
        
        int64_t rax_15 = sub_1428a6af0(*arg2, rbp_1, 
            "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1ad)
        *(rsi_2 + 0x2a8) = rax_15
        
        if (rax_15 != 0)
            *(rsi_2 + 0x2b0) = rbp_1
            return 1
        
        var_30_1 = 0x147d
        r9_1 = 0x44
    else
        int128_t zmm0_1 = *arg2
        int16_t* rax_7 = sub_1428a6730(divu.dp.q(0:(arg2[1]), rsi + 2) * 2)
        int16_t* r8_2 = rax_7
        *(*(arg1 + 0xa8) + 0x2a8) = rax_7
        
        if (rax_7 != 0)
            int64_t i = zmm0_1:8.q
            *(*(arg1 + 0xa8) + 0x2b0) = 0
            
            if (i != 0)
                char* rdx_7 = zmm0_1.q
                
                do
                    if (i - 1 u< 2)
                        sub_142856580(arg1, 0x32, 0x208, 0xf0, "ssl\ssl_lib.c", 0x1471)
                        sub_1428a6780(*(*(arg1 + 0xa8) + 0x2a8))
                        *(*(arg1 + 0xa8) + 0x2a8) = 0
                        *(*(arg1 + 0xa8) + 0x2b0) = 0
                        return 0
                    
                    if (*rdx_7 != 0)
                        rdx_7 = &rdx_7[3]
                        i -= 3
                    else
                        i -= 3
                        *r8_2 = *(rdx_7 + 1)
                        rdx_7 = &rdx_7[3]
                        void* rax_11 = *(arg1 + 0xa8)
                        *(rax_11 + 0x2b0) += 2
                    
                    r8_2 = &r8_2[1]
                while (i != 0)
            
            return 1
        
        var_30_1 = 0x1464
        r9_1 = (rax_7 + 0x41).d
    
    rdx_3 = 0x50
else
    rdx_3 = 0x32
    var_30_1 = 0x144b
    r9_1 = 0x97

sub_142856580(arg1, rdx_3, 0x208, r9_1, "ssl\ssl_lib.c", var_30_1)
return 0
