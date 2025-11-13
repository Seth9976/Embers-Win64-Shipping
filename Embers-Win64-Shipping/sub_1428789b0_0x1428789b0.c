// 函数: sub_1428789b0
// 地址: 0x1428789b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t* rsi = arg2
uint128_t var_18
uint128_t zmm0

switch (arg1[0x17] - 2)
    case 0
        int64_t rax_5 = arg2[1]
        
        if (rax_5 u>= 2)
            *arg2 += 2
            arg2[1] = rax_5 - 2
            zmm0 = *arg2
            var_18 = zmm0
            int64_t rcx_1 = _mm_bsrli_si128(zmm0, 8).q
            
            if (rcx_1 != 0)
                char* rax_7 = var_18.q
                var_18:8.q = rcx_1 - 1
                uint64_t rdi_1 = zx.q(*rax_7)
                var_18.q = &rax_7[1]
                
                if (rcx_1 - 1 u>= rdi_1)
                    var_18:8.q = rcx_1 - 1 - rdi_1
                    var_18.q = &rax_7[1 + rdi_1]
                    *rsi = var_18
                    memcpy(*(arg1 + 0xb0), &rax_7[1], rdi_1.d)
                    *(*(arg1 + 0xb0) + 0x100) = rdi_1
                    return 1
        
        sub_142856580(arg1, 0x32, 0x182, 0x9f, "ssl\statem\statem_clnt.c", 0x523)
        return 0
    case 1
        return sub_14287cf90(arg1, arg2)
    case 2
        return sub_14287c9f0(arg1, arg2)
    case 3
        int64_t rdx_1 = arg2[1]
        char* rax_10
        char rcx_8
        
        if (rdx_1 != 0)
            rax_10 = *rsi
            rcx_8 = *rax_10
            *rsi = &rax_10[1]
            *(rsi + 8) = rdx_1 - 1
        
        int32_t var_20_1
        int32_t rdx_4
        int32_t r9_3
        
        if (rdx_1 == 0 || rcx_8 != 1)
            var_20_1 = 0xac7
            r9_3 = 0x149
            rdx_4 = 0x32
        else
            uint64_t rdi_6
            
            if (rdx_1 - 1 u>= 3)
                uint64_t r8_4 = zx.q(rax_10[3])
                uint64_t rdi_4 = zx.q(rax_10[1]) << 8 | zx.q(rax_10[2])
                *rsi = &rax_10[4]
                rdi_6 = rdi_4 << 8 | r8_4
                *(rsi + 8) = rdx_1 - 4
            
            if (rdx_1 - 1 u< 3 || rdx_1 - 4 != rdi_6)
                var_20_1 = 0xacd
                r9_3 = 0x9f
                rdx_4 = 0x32
            else
                int64_t rax_13 = sub_1428a6730(rdi_6)
                *(arg1 + 0x660) = rax_13
                
                if (rax_13 != 0)
                    int32_t rax_14 = sub_1428672d0(rsi, rax_13, rdi_6)
                    
                    if (rax_14 != 0)
                        *(arg1 + 0x668) = rdi_6
                        return zx.q(sbb.d(rax_14, rax_14, true)) & 3
                    
                    var_20_1 = 0xad8
                    r9_3 = 0x9f
                    rdx_4 = 0x32
                else
                    var_20_1 = 0xad3
                    rdx_4 = (rax_13 + 0x50).d
                    r9_3 = (rax_13 + 0x41).d
        
        int32_t rax_16 =
            sub_142856580(arg1, rdx_4, 0x1ef, r9_3, "ssl\statem\statem_clnt.c", var_20_1)
        return zx.q(sbb.d(rax_16, rax_16, false)) & 3
    case 4
        return sub_14287bf20(arg1, arg2)
    case 5
        return sub_14287b990(arg1, arg2)
    case 6
        if (arg2[1] u> 0)
            sub_142856580(arg1, 0x32, 0x170, 0x9f, "ssl\statem\statem_clnt.c", 0xb24)
            return 0
        
        if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x1c) & 0x20) != 0 && sub_142854ca0(arg1) s<= 0)
            sub_142856580(arg1, 0x50, 0x170, 0x169, "ssl\statem\statem_clnt.c", 0xb2b)
            return 0
        
        if (sub_142879cf0(arg1) != 0)
            if (arg1[0x18e] == 0xffffffff)
            label_142878d49:
                int32_t rax_23
                
                if (*(arg1 + 0x718) != 0)
                    rax_23 = sub_142852820(arg1)
                
                if (*(arg1 + 0x718) == 0 || rax_23 != 0 || (arg1[0x156].b & 1) == 0)
                    return 1
            else
                void* rdx_6 = *(arg1 + 0x598)
                int64_t rax_21 = *(rdx_6 + 0x220)
                
                if (rax_21 == 0)
                    goto label_142878d49
                
                int32_t rax_22 = rax_21(arg1, *(rdx_6 + 0x228))
                
                if (rax_22 != 0)
                    if (rax_22 s>= 0)
                        goto label_142878d49
                    
                    char const* const var_28_2 = "ssl\statem\statem_clnt.c"
                    sub_142856580(arg1, 0x50, 0x1ba, 0x41, "ssl\statem\statem_clnt.c", 0xb0e)
                else
                    char const* const var_28_1 = "ssl\statem\statem_clnt.c"
                    sub_142856580(arg1, rax_22 + 0x71, 0x1ba, 0x148, "ssl\statem\statem_clnt.c", 
                        0xb08)
        
        return 0
    case 7
        return sub_14287c4b0(arg1, arg2)
    case 8
        return sub_142860e00(arg1, arg2)
    case 9
        return sub_142860f10(arg1, arg2)
    case 0x24
        zmm0 = *arg2
        void* arg_8 = nullptr
        var_18 = zmm0
        int64_t rdx_9 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rdx_9 u< 2)
            sub_142856580(arg1, 0x32, 0x1bc, 0x9f, "ssl\statem\statem_clnt.c", 0xe5c)
        else
            char* rax_25 = var_18.q
            var_18.q = &rax_25[2]
            var_18:8.q = rdx_9 - 2
            uint64_t rcx_31 = zx.q(*rax_25) << 8 | zx.q(rax_25[1])
            
            if (rdx_9 - 2 u< rcx_31)
                sub_142856580(arg1, 0x32, 0x1bc, 0x9f, "ssl\statem\statem_clnt.c", 0xe5c)
            else
                var_18.q = &rax_25[2 + rcx_31]
                var_18:8.q = rdx_9 - 2 - rcx_31
                
                if (rdx_9 - 2 != rcx_31)
                    sub_142856580(arg1, 0x32, 0x1bc, 0x9f, "ssl\statem\statem_clnt.c", 0xe5c)
                else
                    var_18.q = &rax_25[2]
                    var_18:8.q = rcx_31
                    *rsi = var_18
                    
                    if (*(rsi + 8) != 0)
                        sub_142856580(arg1, 0x32, 0x1bc, 0x9f, "ssl\statem\statem_clnt.c", 0xe5c)
                    else if (sub_142875450(arg1, &var_18, 0x400, &arg_8, nullptr, 1) != 0
                            && sub_142875b50(arg1, 0x400, arg_8, 0, 0, 1) != 0)
                        sub_1428a6780(arg_8)
                        return 3
        
        sub_1428a6780(arg_8)
        return 0
    case 0x25
        return sub_1428608b0(arg1, arg2, arg3)
    case 0x27
        if (arg2[1] u> 0)
            sub_142856580(arg1, 0x32, 0x1fb, 0x9f, "ssl\statem\statem_clnt.c", 0xe3c)
            return 0
        
        if ((arg1[0x171] & 0x40000000) != 0)
            sub_1428732d0(arg1, 1, 0x64)
            return 1
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
            sub_142850490(arg1)
            return 1
        
        sub_1428503e0(arg1)
        return 1
    case 0x2b
        return sub_142861220(arg1, arg2)

sub_142856580(arg1, 0x50, 0x252, 0x44, "ssl\statem\statem_clnt.c", 0x40b)
return 0
