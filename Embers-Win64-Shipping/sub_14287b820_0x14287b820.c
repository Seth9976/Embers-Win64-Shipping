// 函数: sub_14287b820
// 地址: 0x14287b820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void** rsi = arg2
int64_t rcx = arg2[1]

if (rcx != 0)
    char* rax_1 = *arg2
    char r8_1 = *rax_1
    *arg2 = &rax_1[1]
    arg2[1] = rcx - 1
    
    if (r8_1 == 1)
        uint64_t rbp_5
        
        if (rcx - 1 u>= 3)
            uint64_t r8_2 = zx.q(rax_1[3])
            uint64_t rbp_3 = zx.q(rax_1[1]) << 8 | zx.q(rax_1[2])
            *rsi = &rax_1[4]
            rbp_5 = rbp_3 << 8 | r8_2
            rsi[1] = rcx - 4
        
        int32_t var_10_1
        int32_t rdx_2
        int32_t r9_3
        
        if (rcx - 1 u< 3 || rcx - 4 != rbp_5)
            var_10_1 = 0xacd
            rdx_2 = 0x32
            r9_3 = 0x9f
        else
            int64_t rax_4 = sub_1428a6730(rbp_5)
            *(arg1 + 0x660) = rax_4
            
            if (rax_4 != 0)
                if (sub_1428672d0(rsi, rax_4, rbp_5) != 0)
                    *(arg1 + 0x668) = rbp_5
                    return 1
                
                var_10_1 = 0xad8
                rdx_2 = 0x32
                r9_3 = 0x9f
            else
                var_10_1 = 0xad3
                rdx_2 = (rax_4 + 0x50).d
                r9_3 = (rax_4 + 0x41).d
        
        sub_142856580(arg1, rdx_2, 0x1ef, r9_3, "ssl\statem\statem_clnt.c", var_10_1)
        return 0

sub_142856580(arg1, 0x32, 0x1ef, 0x149, "ssl\statem\statem_clnt.c", 0xac7)
return 0
