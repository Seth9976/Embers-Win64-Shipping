// 函数: sub_14286a940
// 地址: 0x14286a940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void* r8 = *(arg1 + 0x598)
int32_t* rdi = *(arg1 + 0x708)
int32_t arg_10 = 0x50
int32_t* arg_20 = nullptr
int32_t* r12 = nullptr
int32_t* var_68 = nullptr
int32_t arg_8 = 0
int64_t rax = *(r8 + 0x1e0)
int64_t result
int32_t var_70_1
int32_t rdx_2
int32_t r9_1

if (rax == 0)
label_14286aa45:
    void* rax_2 = *(arg1 + 0xa8)
    *(rax_2 + 0xb8) = *(rdi + 8)
    *(rax_2 + 0xc8) = *(rdi + 0x18)
    
    if (*rdi == 0)
        goto label_14286aa8d
    
    int32_t rcx_5 = rdi[1]
    
    if (rcx_5 == 2 || (rcx_5 & 0xff00) != 0x300)
        var_70_1 = 0x65e
        rdx_2 = 0x46
        char const* const var_78_3 = "ssl\statem\statem_srvr.c"
        r9_1 = 0xfc
        goto label_14286a9dc
    
    arg1[0x179] = rcx_5
label_14286aa8d:
    int32_t* rcx_6 = *(arg1 + 8)
    
    if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_6 = sub_14285eef0(arg1, rdi, &arg_8)
        r9_1 = rax_6
        
        if (rax_6 != 0)
            goto label_14286ab67
    else if (*rcx_6 != 0x1ffff)
        int32_t rcx_10 = rdi[1]
        int32_t rax_10 = *arg1
        
        if (rcx_10 == 0x100)
            rcx_10 = 0xff00
        
        if (rax_10 == 0x100)
            rax_10 = 0xff00
        
        if (rcx_10 s> rax_10)
            r9_1 = 0x18c
        label_14286ab67:
            void* rax_11 = *(arg1 + 0xa8)
            
            if (*(rax_11 + 0x198) == 0 || *(rax_11 + 0x220) == 0)
                int32_t rax_12 = rdi[1]
                arg1[0x179] = rax_12
                *arg1 = rax_12
            
            var_70_1 = 0x677
            rdx_2 = 0x46
            char const* const var_78_4 = "ssl\statem\statem_srvr.c"
            goto label_14286a9dc
    
    int32_t* rcx_8 = *(arg1 + 8)
    
    if ((*(*(rcx_8 + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_8 = *rcx_8
        
        if (rax_8 s>= 0x304 && rax_8 != 0x10000 && sub_14285b7b0(&arg1[0x200]) != 0)
            var_70_1 = 0x67f
            rdx_2 = 0xa
            char const* const var_78_2 = "ssl\statem\statem_srvr.c"
            r9_1 = 0xb6
            goto label_14286a9dc
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        if (test_bit(sub_14284fc20(arg1), 0xd))
            int64_t r9_2 = *(*(arg1 + 0x598) + 0xc8)
            void* buffer2
            
            if (r9_2 == 0)
                buffer2 = *(arg1 + 0xb0)
                uint64_t count = *(buffer2 + 0x100)
                int32_t rax_17
                
                if (count == *(rdi + 0x50))
                    rax_17 = memcmp(&rdi[0x16], buffer2, count)
                
                if (count != *(rdi + 0x50) || rax_17 != 0)
                    var_70_1 = 0x695
                    goto label_14286abf2
            else
                if (r9_2(arg1, &rdi[0x16], zx.q(rdi[0x14])) == 0)
                    var_70_1 = 0x68b
                label_14286abf2:
                    char const* const var_78_5 = "ssl\statem\statem_srvr.c"
                    rdx_2 = 0x28
                    r9_1 = 0x134
                    goto label_14286a9dc
                
                buffer2 = *(arg1 + 0xb0)
            
            *(buffer2 + 0x108) = 1
        
        if (**(arg1 + 8) == 0x1ffff)
            int32_t rax_19 = sub_14285eef0(arg1, rdi, &arg_8)
            r9_1 = rax_19
            
            if (rax_19 != 0)
                rdx_2 = 0x46
                var_70_1 = 0x69f
                *arg1 = arg1[0x179]
                char const* const var_78_6 = "ssl\statem\statem_srvr.c"
                goto label_14286a9dc
    
    arg1[0x32] = 0
    
    if (sub_142851850(arg1, &rdi[0x56], *rdi) == 0)
        goto label_14286a9e5
    
    if (sub_142850c30(arg1, &rdi[0x56], &arg_20, &var_68, *rdi) == 0)
        goto label_14286a9e5
    
    *(*(arg1 + 0xa8) + 0x3d8) = 0
    int32_t* rcx_18 = var_68
    
    if (rcx_18 != 0)
        int32_t rsi_1 = 0
        
        if (sub_142898c70(rcx_18) s> 0)
            int32_t rax_31
            
            do
                void* rax_26 = sub_142898ea0(var_68, rsi_1)
                
                if (sub_140611810(rax_26) != 0x30000ff)
                    if (sub_140611810(rax_26) == 0x3005600 && sub_14285eba0(arg1) == 0)
                        var_70_1 = 0x6c8
                        rdx_2 = 0x56
                        char const* const var_78_9 = "ssl\statem\statem_srvr.c"
                        r9_1 = 0x175
                        goto label_14286a9dc
                else
                    if (arg1[0x1d4] != 0)
                        var_70_1 = 0x6b9
                        rdx_2 = 0x28
                        char const* const var_78_8 = "ssl\statem\statem_srvr.c"
                        r9_1 = 0x159
                        goto label_14286a9dc
                    
                    *(*(arg1 + 0xa8) + 0x3d8) = 1
                
                rsi_1 += 1
                rax_31 = sub_142898c70(var_68)
            while (rsi_1 s< rax_31)
    
    int32_t* rcx_24 = *(arg1 + 8)
    
    if ((*(*(rcx_24 + 0xc0) + 0x60) & 8) != 0)
        goto label_14286ae7a
    
    int32_t rax_33 = *rcx_24
    
    if (rax_33 s< 0x304 || rax_33 == 0x10000)
        goto label_14286ae7a
    
    int32_t* rax_34 = sub_14284fa00(arg1)
    void* rax_35 = sub_142870560(arg1, arg_20, rax_34)
    
    if (rax_35 == 0)
        var_70_1 = 0x6d6
    label_14286adbf:
        rdx_2 = 0x28
        char const* const var_78_7 = "ssl\statem\statem_srvr.c"
        r9_1 = 0xc1
        goto label_14286a9dc
    
    void* rdx_13
    
    if (arg1[0x136] == 1)
        rdx_13 = *(*(arg1 + 0xa8) + 0x238)
    
    if (arg1[0x136] == 1 && (rdx_13 == 0 || *(rdx_13 + 0x18) != *(rax_35 + 0x18)))
        var_70_1 = 0x6e2
        rdx_2 = 0x2f
        char const* const var_78_10 = "ssl\statem\statem_srvr.c"
        r9_1 = 0xba
        goto label_14286a9dc
    
    *(*(arg1 + 0xa8) + 0x238) = rax_35
label_14286ae7a:
    
    if (sub_142875ce0(arg1, 0xd, 0x80, *(rdi + 0x288), 0, 0) == 0)
        goto label_14286a9e5
    
    if (*rdi != 0 || (arg1[0xf] != 0 && (arg1[0x171] & 0x10000) != 0))
        if (sub_142857f80(arg1, 1) == 0)
            goto label_14286a9e5
    else
        int32_t rax_40 = sub_142858320(arg1, rdi)
        
        if (rax_40 != 1)
            if (rax_40 == 0xffffffff)
                goto label_14286a9e5
            
            if (sub_142857f80(arg1, 1) == 0)
                goto label_14286a9e5
        else
            arg1[0x32] = rax_40
    
    int32_t* rcx_32 = *(arg1 + 8)
    int32_t* rdx_15 = rcx_32
    
    if ((*(*(rcx_32 + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_44 = *rcx_32
        
        if (rax_44 s>= 0x304 && rax_44 != 0x10000)
            void* r8_10 = *(arg1 + 0x708)
            memcpy(&arg1[0x14c], r8_10 + 0x30, (*(r8_10 + 0x28)).d)
            rdx_15 = *(arg1 + 8)
            *(arg1 + 0x550) = *(*(arg1 + 0x708) + 0x28)
    
    if ((*(*(rdx_15 + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_47 = *rdx_15
        
        if ((rax_47 s< 0x304 || rax_47 == 0x10000) && arg1[0x32] != 0)
        label_14286af6c:
            int32_t rsi_2 = 0
            int32_t r14_2 = *(*(*(arg1 + 0x508) + 0x128) + 0x18)
            
            if (sub_142898c70(arg_20) s> 0)
                int32_t rax_51
                
                do
                    if (*(sub_142898ea0(arg_20, rsi_2) + 0x18) == r14_2)
                        goto label_14286afcd
                    
                    rsi_2 += 1
                    rax_51 = sub_142898c70(arg_20)
                while (rsi_2 s< rax_51)
            
            var_70_1 = 0x73b
            rdx_2 = 0x2f
            char const* const var_78_11 = "ssl\statem\statem_srvr.c"
            r9_1 = 0xd7
            goto label_14286a9dc
    else if (arg1[0x32] != 0)
        goto label_14286af6c
    
label_14286afcd:
    int64_t rcx_39 = *(rdi + 0x168)
    int64_t rax_52 = 0
    
    if (rcx_39 != 0)
        while (*(rdi + rax_52 + 0x170) != 0)
            rax_52 += 1
            
            if (rax_52 u>= rcx_39)
                break
    
    if (rax_52 u>= rcx_39)
        var_70_1 = 0x749
        rdx_2 = 0x32
        char const* const var_78_12 = "ssl\statem\statem_srvr.c"
        r9_1 = 0xbb
        goto label_14286a9dc
    
    uint128_t var_58
    
    if ((arg1[0x171].b & 0x40) != 0)
        uint128_t zmm0 = *(rdi + 0x270)
        var_58 = zmm0
        int64_t rdx_18 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rdx_18 u>= 2)
            void* rcx_40 = var_58.q
            var_58:8.q = rdx_18 - 2
            
            if (rdx_18 - 2 u>= 2)
                uint32_t r9_6 = zx.d(*(rcx_40 + 3)) | zx.d(*(rcx_40 + 2)) << 8
                var_58.q = rcx_40 + 4
                var_58:8.q = rdx_18 - 4
                var_58 = var_58
                
                if (rdx_18 - 4 u>= 2)
                    uint64_t rcx_42 = zx.q(*(rcx_40 + 5)) | zx.q(*(rcx_40 + 4)) << 8
                    
                    if (var_58:8.q - 2 u>= rcx_42)
                        int64_t rsi_5 = var_58:8.q - 2 - rcx_42
                        
                        if (r9_6 == 0)
                            int32_t rax_60
                            
                            if ((sub_14284ea80(arg1) & 0xffffff00) != 0x300)
                                rax_60 = 0
                            else
                                rax_60 = sub_14284ea80(arg1)
                            
                            int64_t r8_13 = 0x12
                            
                            if (rax_60 s>= 0x303)
                                r8_13 = 0x22
                            
                            bool rcx_45
                            
                            if (rsi_5 == r8_13)
                                rcx_45 =
                                    sub_1428bc500(rcx_40 + 4 + rcx_42 + 2, &data_1434dcd38, r8_13)
                                    == 0
                            else
                                rcx_45 = false
                            
                            *(*(arg1 + 0xa8) + 0x404) = rcx_45
    
    int32_t var_70_2 = 1
    
    if (sub_142875b50(arg1, 0x80, *(rdi + 0x288), 0, 0, 1) == 0)
        goto label_14286a9e5
    
    if (sub_1428729e0(arg1, 1, *(arg1 + 0xa8) + 0x98, 0x20, arg_8) s<= 0)
        var_70_1 = 0x765
    label_14286b173:
        rdx_2 = 0x50
        char const* const var_78_14 = "ssl\statem\statem_srvr.c"
        r9_1 = 0x44
        goto label_14286a9dc
    
    if (arg1[0x32] != 0 || *arg1 s< 0x301)
        goto label_14286b305
    
    int32_t* rcx_49 = *(arg1 + 8)
    
    if ((*(*(rcx_49 + 0xc0) + 0x60) & 8) != 0)
        goto label_14286b305
    
    int32_t rax_67 = *rcx_49
    
    if (rax_67 s>= 0x304 && rax_67 != 0x10000)
        goto label_14286b305
    
    int64_t r10_1 = *(arg1 + 0x6b0)
    
    if (r10_1 == 0)
        goto label_14286b305
    
    int32_t* r9_7 = arg_20
    int64_t rdx_21 = *(arg1 + 0x508) + 0x50
    var_70_2.q = *(arg1 + 0x6b8)
    var_58.q = 0
    int32_t arg_18 = 0x40
    
    if (r10_1(arg1, rdx_21, &arg_18, r9_7, &var_58, 1) == 0)
        goto label_14286b305
    
    int64_t rax_70 = sx.q(arg_18)
    
    if (rax_70.d s<= 0)
        goto label_14286b305
    
    *(*(arg1 + 0x508) + 8) = rax_70
    int32_t* rax_72 = arg_20
    void* rcx_52 = *(arg1 + 0x508)
    arg1[0x32] = 1
    *(rcx_52 + 0x138) = rax_72
    *(*(arg1 + 0x508) + 0x110) = 0
    void* rcx_53 = var_58.q
    arg_20 = nullptr
    
    if (rcx_53 == 0)
        int32_t* rax_74 = sub_14284fa00(arg1)
        void* rax_75 = sub_142870560(arg1, *(*(arg1 + 0x508) + 0x138), rax_74)
        var_58.q = rax_75
        rcx_53 = rax_75
        
        if (rax_75 != 0)
            goto label_14286b2ab
        
        var_70_1 = 0x78a
        goto label_14286adbf
    
label_14286b2ab:
    *(*(arg1 + 0x508) + 0x128) = rcx_53
    sub_142898a10(*(arg1 + 0x110))
    int128_t* rax_78 = sub_142898900(*(*(arg1 + 0x508) + 0x138))
    void* rcx_58 = *(arg1 + 0x118)
    *(arg1 + 0x110) = rax_78
    sub_142898a10(rcx_58)
    *(arg1 + 0x118) = sub_142898900(*(*(arg1 + 0x508) + 0x138))
label_14286b305:
    *(*(arg1 + 0xa8) + 0x298) = 0
    int32_t* rcx_60 = *(arg1 + 8)
    int32_t rax_83
    
    if ((*(*(rcx_60 + 0xc0) + 0x60) & 8) == 0)
        rax_83 = *rcx_60
    
    if ((*(*(rcx_60 + 0xc0) + 0x60) & 8) != 0 || rax_83 s< 0x304 || rax_83 == 0x10000)
        int32_t i = *(*(arg1 + 0x508) + 0x120)
        
        if (i != 0)
            int32_t rax_85 = sub_14285eb60(arg1)
            
            if (rax_85 == 0)
                var_70_1 = 0x7b3
                rdx_2 = rax_85 + 0x28
                char const* const var_78_17 = "ssl\statem\statem_srvr.c"
                r9_1 = 0x154
                goto label_14286a9dc
            
            int32_t rsi_6 = 0
            
            if (sub_142898c70(*(*(arg1 + 0x598) + 0x100)) s> 0)
                int32_t rax_90
                
                do
                    int32_t* rax_89 = sub_142898ea0(*(*(arg1 + 0x598) + 0x100), rsi_6)
                    r12 = rax_89
                    
                    if (i == *rax_89)
                        *(*(arg1 + 0xa8) + 0x298) = r12
                        break
                    
                    rsi_6 += 1
                    rax_90 = sub_142898c70(*(*(arg1 + 0x598) + 0x100))
                while (rsi_6 s< rax_90)
            
            if (*(*(arg1 + 0xa8) + 0x298) == 0)
                var_70_1 = 0x7c1
                rdx_2 = 0x28
                char const* const var_78_18 = "ssl\statem\statem_srvr.c"
                r9_1 = 0x155
                goto label_14286a9dc
            
            int64_t rdx_25 = *(rdi + 0x168)
            int32_t rcx_66 = 0
            
            if (rdx_25 != 0)
                uint64_t rax_93 = 0
                
                while (zx.d(*(rax_93 + rdi + 0x170)) != i)
                    rcx_66 += 1
                    rax_93 = zx.q(rcx_66)
                    
                    if (rax_93 u>= rdx_25)
                        break
            
            if (zx.q(rcx_66) u>= rdx_25)
                var_70_1 = 0x7cc
                rdx_2 = 0x2f
                char const* const var_78_19 = "ssl\statem\statem_srvr.c"
                r9_1 = 0x156
                goto label_14286a9dc
        else if (arg1[0x32] == 0 && sub_14285eb60(arg1) != 0)
            int32_t* rcx_68 = *(*(arg1 + 0x598) + 0x100)
            
            if (rcx_68 != 0)
                int32_t rax_98 = sub_142898c70(rcx_68)
                int32_t rsi_7 = 0
                
                if (rax_98 s<= 0)
                label_14286b50d:
                    r12 = nullptr
                else
                    while (true)
                        int32_t* rax_99 = sub_142898ea0(*(*(arg1 + 0x598) + 0x100), rsi_7)
                        int64_t rdx_27 = *(rdi + 0x168)
                        r12 = rax_99
                        int32_t rcx_71 = 0
                        
                        if (rdx_27 != 0)
                            uint64_t rax_100 = 0
                            
                            while (*rax_99 != zx.d(*(rax_100 + rdi + 0x170)))
                                rcx_71 += 1
                                rax_100 = zx.q(rcx_71)
                                
                                if (rax_100 u>= rdx_27)
                                    goto label_14286b506
                            
                            *(*(arg1 + 0xa8) + 0x298) = r12
                            break
                        
                    label_14286b506:
                        rsi_7 += 1
                        
                        if (rsi_7 s>= rax_98)
                            goto label_14286b50d
    else if (*(rdi + 0x168) != 1)
        var_70_1 = 0x7a5
        rdx_2 = 0x2f
        char const* const var_78_16 = "ssl\statem\statem_srvr.c"
        r9_1 = 0x155
        goto label_14286a9dc
    
    int32_t rdx_28 = arg1[0x32]
    int32_t rcx_72
    
    if (rdx_28 != 0)
        int32_t* r8_20 = *(arg1 + 8)
        rcx_72 = rdx_28
        
        if ((*(*(r8_20 + 0xc0) + 0x60) & 8) != 0)
            goto label_14286b592
        
        int32_t rax_103 = *r8_20
        
        if (rax_103 s< 0x304 || rax_103 == 0x10000)
            goto label_14286b592
        
        goto label_14286b54c
    
label_14286b54c:
    sub_142898a10(*(*(arg1 + 0x508) + 0x138))
    *(*(arg1 + 0x508) + 0x138) = arg_20
    
    if (arg_20 == 0)
        var_70_1 = 0x7ff
        goto label_14286b173
    
    rcx_72 = arg1[0x32]
    arg_20 = nullptr
label_14286b592:
    int32_t rax_107
    
    if (rcx_72 == 0)
        int32_t rcx_76 = 0
        
        if (r12 != 0)
            rcx_76 = *r12
        
        *(*(arg1 + 0x508) + 0x120) = rcx_76
        rax_107 = sub_142865c40(arg1)
    
    if (rcx_72 == 0 && rax_107 == 0)
        goto label_14286a9e5
    
    sub_142898a10(arg_20)
    sub_142898a10(var_68)
    sub_1428a6780(*(rdi + 0x288))
    sub_1428a6780(*(arg1 + 0x708))
    result = 1
else
    int32_t rax_1 = rax(arg2, &arg_10, *(r8 + 0x1e8))
    
    if (rax_1 == 0xffffffff)
        arg1[0xa] = 7
        return 0xffffffff
    
    if (rax_1 == 1)
        goto label_14286aa45
    
    rdx_2 = arg_10
    r9_1 = 0xea
    var_70_1 = 0x64a
    char const* const var_78_1 = "ssl\statem\statem_srvr.c"
label_14286a9dc:
    sub_142856580(arg1, rdx_2, 0x209, r9_1, "ssl\statem\statem_srvr.c", var_70_1)
label_14286a9e5:
    sub_142898a10(arg_20)
    sub_142898a10(var_68)
    sub_1428a6780(*(rdi + 0x288))
    sub_1428a6780(*(arg1 + 0x708))
    result = 0
*(arg1 + 0x708) = 0
return result
