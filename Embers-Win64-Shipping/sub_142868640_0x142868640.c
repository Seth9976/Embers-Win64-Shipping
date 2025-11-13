// 函数: sub_142868640
// 地址: 0x142868640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

switch (arg1[0x17] - 0x14)
    case 0
        return sub_14286d130(arg1, arg2) __tailcall
    case 7
        return sub_14286ca90(arg1, arg2) __tailcall
    case 8
        return sub_14286d710(arg1, arg2) __tailcall
    case 9
        return sub_1428608b0(arg1, arg2, arg3) __tailcall
    case 0xa
        uint128_t zmm0 = *arg2
        int64_t rcx_13 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rcx_13 != 0)
            char* rax_15 = zmm0.q
            uint128_t var_18
            var_18:8.q = rcx_13 - 1
            uint64_t rsi_1 = zx.q(*rax_15)
            
            if (rcx_13 - 1 u>= rsi_1)
                void* r8_8 = &rax_15[1 + rsi_1]
                var_18.q = r8_8
                var_18:8.q = rcx_13 - 1 - rsi_1
                *arg2 = var_18
                
                if (rcx_13 - 1 != rsi_1)
                    uint64_t r8_9 = zx.q(*r8_8)
                    uint128_t var_18_1
                    var_18_1.q = r8_8 + 1
                    var_18_1:8.q = var_18:8.q - 1
                    
                    if (var_18:8.q - 1 u>= r8_9)
                        var_18_1.q = r8_9 + r8_8 + 1
                        var_18_1:8.q = var_18:8.q - 1 - r8_9
                        *arg2 = var_18_1
                        
                        if (arg2[1] u<= 0)
                            sub_1428a6780(*(arg1 + 0x6d0))
                            uint64_t rdi = 0
                            *(arg1 + 0x6d0) = 0
                            
                            if (rsi_1 != 0)
                                int64_t rax_17 = sub_1428a6af0(&rax_15[1], zx.q(rsi_1.d), 
                                    "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1ad)
                                *(arg1 + 0x6d0) = rax_17
                                
                                if (rax_17 == 0)
                                    *(arg1 + 0x6d8) = 0
                                    sub_142856580(arg1, 0x50, 0x17f, 0x44, 
                                        "ssl\statem\statem_srvr.c", 0x1076)
                                    return 0
                                
                                rdi = zx.q(rsi_1.d)
                            
                            *(arg1 + 0x6d8) = rdi
                            return 3
        
        sub_142856580(arg1, 0x32, 0x17f, 0x9f, "ssl\statem\statem_srvr.c", 0x106f)
        return 0
    case 0xb
        return sub_142860e00(arg1, arg2) __tailcall
    case 0xc
        return sub_142860f10(arg1, arg2) __tailcall
    case 0x18
        return sub_142861220(arg1, arg2) __tailcall
    case 0x1d
        int32_t var_20
        int32_t* rcx_2
        int32_t rdx_1
        int32_t r9_2
        
        if (arg2[1] != 0)
            rdx_1 = 0x32
            var_20 = 0x108f
            r9_2 = 0x9f
            rcx_2 = arg1
        else if (arg1[0x21] - 0xa u<= 1)
            rcx_2 = arg1
            
            if (sub_14285b7b0(&arg1[0x200]) == 0)
                void* rax_9 = *(arg1 + 8)
                arg1[0x21] = 0xc
                int64_t r8_4 = *(rax_9 + 0xc0)
                int32_t rax_10
                int32_t rcx_4
                rax_10, rcx_4 = (*(r8_4 + 0x20))(rcx_2, 0xa1, r8_4)
                return zx.q(sbb.d(rcx_4, rcx_4, rax_10 != 0)) & 3
            
            var_20 = 0x10a1
            rdx_1 = 0xa
            r9_2 = 0xb6
        else
            rdx_1 = 0x50
            var_20 = 0x1096
            r9_2 = 0x44
            rcx_2 = arg1
        
        sub_142856580(rcx_2, rdx_1, 0x219, r9_2, "ssl\statem\statem_srvr.c", var_20)
        return 0

sub_142856580(arg1, 0x50, 0x25b, 0x44, "ssl\statem\statem_srvr.c", 0x48a)
return 0
