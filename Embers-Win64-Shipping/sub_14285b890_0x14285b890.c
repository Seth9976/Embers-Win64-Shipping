// 函数: sub_14285b890
// 地址: 0x14285b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xfc8)
void var_1008
int64_t rax_1 = __security_cookie ^ &var_1008
int64_t r12 = arg6
int64_t r13 = 0
int64_t var_f90 = arg4
int64_t r14 = arg4
int32_t rsi = arg2
int64_t r15 = 0
int64_t var_fa8 = 0
int64_t rdi = 0
int32_t var_fc0 = 0
int64_t i = 0
int64_t i_3 = 0

if (r12 u>= 4)
    int32_t zmm2[0x4] = zx.o(0)
    arg5.o = zx.o(0)
    
    do
        zmm2 = _mm_add_epi64(*(r14 + (i << 3)), zmm2)
        int32_t zmm0[0x4] = *(r14 + (i << 3) + 0x10)
        i += 4
        arg5.o = _mm_add_epi64(zmm0, arg5.o)
    while (i u< (r12 & 0xfffffffffffffffc))
    
    arg5.o = _mm_add_epi64(arg5.o, zmm2)
    arg5.o = _mm_add_epi64(arg5.o, _mm_bsrli_si128(arg5.o, 8))
    rdi = arg5.q

int64_t rdx = 0
int64_t r8 = 0

if (i u< r12)
    if (r12 - i u>= 2)
        do
            rdx += *(r14 + (i << 3))
            r8 += *(r14 + (i << 3) + 8)
            i += 2
        while (i u< r12 - 1)
    
    if (i u< r12)
        rdi += *(r14 + (i << 3))
    
    rdi += r8 + rdx

int64_t rax_8 = *(arg1 + 0x818)
int32_t result

if (rax_8 == 0 || *(arg1 + rax_8 * 0x28 + 0x840) == 0)
    if (*(*(arg1 + 0xa8) + 0xfc) != 0)
        result = (*(*(arg1 + 8) + 0x78))(arg1)
    
    if (*(*(arg1 + 0xa8) + 0xfc) == 0 || result s> 0)
        int32_t rax_12
        
        if (*(arg1 + 0x818) u< r12)
            rax_12 = sub_14285db30(arg1, r12, 0)
        
        if (*(arg1 + 0x818) u< r12 && rax_12 == 0)
            result = -1
        else
            int32_t rcx_6 = arg7
            
            if (rdi != 0 || rcx_6 != 0)
                if (*(arg1 + 0x508) == 0 || *(arg1 + 0x460) == 0)
                    goto label_14285baa5
                
                int64_t var_fe8
                int32_t var_fe0
                int32_t var_fe0_2
                int64_t* var_fd8
                int32_t var_fb0_1
                int64_t var_f98
                void var_f58
                
                if (sub_142891580(*(arg1 + 0x478)) == 0)
                    rcx_6 = arg7
                label_14285baa5:
                    var_fb0_1 = 0
                    
                    if (*(arg1 + 0x460) != 0)
                        goto label_14285bab7
                    
                    if (rcx_6 == 0)
                        goto label_14285bb3e
                    
                label_14285bb99:
                    int64_t rdx_7 = *(arg1 + 0x848)
                    int64_t r8_4 = *(arg1 + 0x858)
                    *(arg1 + 0x860) = 7 - (zx.q(rdx_7.d + 1) & 7)
                    int32_t rax_23 = sub_142873900(&var_f58, rdx_7, r8_4, 0)
                    int32_t rax_24
                    
                    if (rax_23 != 0)
                        rax_24 = sub_142873640(&var_f58, 7 - (zx.q(rdx_7.d + 1) & 7), nullptr)
                    
                    if (rax_23 == 0 || rax_24 == 0)
                        sub_142856580(arg1, 0x50, 0x68, 0x44, "ssl\record\rec_layer_s3.c", 0x2fa)
                        result = -1
                    else
                        r12 = arg6
                        i_3 = 1
                    label_14285bc9d:
                        int64_t* r8_6 = *(arg1 + 0x460)
                        
                        if (r8_6 != 0)
                            int32_t* rdx_11 = *(arg1 + 8)
                            char rcx_14 = (*(*(rdx_11 + 0xc0) + 0x60)).b
                            
                            if ((rcx_14 & 1) != 0)
                                int32_t rax_30
                                
                                if ((rcx_14 & 8) == 0)
                                    rax_30 = *rdx_11
                                
                                if (((rcx_14 & 8) != 0 || rax_30 s< 0x304 || rax_30 == 0x10000)
                                        && arg1[0x21] - 1 u> 3 && arg1[0x136] != 1)
                                    int32_t rcx_18 = sub_142890eb0(sub_140687ad0(r8_6)) & 0xf0007
                                    
                                    if (rcx_18 == 2)
                                        int32_t rax_35 = sub_142890ed0(*(arg1 + 0x460))
                                        var_fc0 = rax_35
                                        
                                        if (rax_35 s<= 1)
                                            var_fc0 = 0
                                    else if (rcx_18 != 6)
                                        int32_t rax_36 = 0
                                        
                                        if (rcx_18 == 7)
                                            rax_36 = 8
                                        
                                        var_fc0 = rax_36
                                    else
                                        var_fc0 = 8
                        
                        int64_t var_f80_1 = 0
                        void var_958
                        memset(&var_958, 0, 0x900)
                        int64_t var_fb8_1 = 0
                        int64_t var_f88
                        int64_t var_f70
                        void var_950
                        int32_t* rcx_35
                        int32_t r9_3
                        
                        if (r12 != 0)
                            void* r12_2 = &var_f58
                            int64_t* r15_1 = &var_950
                            
                            while (true)
                                int32_t rdi_2 = *arg1
                                var_f98 = 0
                                
                                if (rdi_2 == 0x304)
                                    rdi_2 = 0x303
                                
                                int32_t* rcx_21 = *(arg1 + 8)
                                
                                if ((*(*(rcx_21 + 0xc0) + 0x60) & 8) == 0)
                                    int32_t rax_38 = *rcx_21
                                    
                                    if ((rax_38 s>= 0x304 && rax_38 != 0x10000)
                                        || arg1[0x21] - 1 u<= 3 || arg1[0x136] == 1)
                                    label_14285bdd3:
                                        
                                        if (*(arg1 + 0x460) != 0
                                                && (arg1[0x1f] != 2 || rsi != 0x15))
                                            rsi = 0x17
                                else if (arg1[0x21] - 1 u<= 3 || arg1[0x136] == 1)
                                    goto label_14285bdd3
                                
                                *(r15_1 - 4) = rsi
                                
                                if (sub_1428563e0(arg1) == 0xc && arg1[0x1d4] == 0
                                        && (sub_1406938b0(arg1) & 0xffffff00) == 0x300
                                        && sub_1406938b0(arg1) s> 0x301 && arg1[0x136] == 0)
                                    rdi_2 = 0x301
                                
                                r15_1[-1].d = rdi_2
                                int64_t rax_46 = *(r14 + (var_fb8_1 << 3))
                                int64_t r14_2 = rax_46 + 0x400
                                
                                if (*(arg1 + 0x450) == 0)
                                    r14_2 = rax_46
                                
                                if (sub_142873b60(r12_2, rsi, 1) != 0
                                        && sub_142873b60(r12_2, rdi_2, 2) != 0
                                        && sub_142873e80(r12_2, 2) != 0)
                                    int64_t rax_50 = sx.q(var_fc0)
                                    int32_t rax_51
                                    
                                    if (rax_50.d s> 0)
                                        rax_51 = sub_142873640(r12_2, rax_50, nullptr)
                                    
                                    if (rax_50.d s<= 0 || rax_51 != 0)
                                        int32_t rax_52
                                        
                                        if (r14_2 != 0)
                                            rax_52 = sub_142873c80(r12_2, r14_2, &var_f98)
                                        
                                        if (r14_2 == 0 || rax_52 != 0)
                                            r14 = var_f90
                                            int64_t rdi_3 = var_fb8_1
                                            r15_1[3] = var_f98
                                            int64_t r8_8 = *(r14 + (rdi_3 << 3))
                                            int64_t rdx_17 = arg3 + var_f80_1
                                            *r15_1 = r8_8
                                            bool cond:4_1 = *(arg1 + 0x450) == 0
                                            r15_1[4] = rdx_17
                                            var_f80_1 += r8_8
                                            
                                            if (cond:4_1)
                                                if (sub_142873970(r12_2, rdx_17, r8_8) == 0)
                                                    var_fe0_2 = 0x37c
                                                    goto label_14285c433
                                                
                                                r15_1[4] = r15_1[3]
                                            else
                                                int32_t rax_56 = sub_14287fd40(arg1, &r15_1[-1])
                                                int32_t rax_57
                                                
                                                if (rax_56 != 0)
                                                    rax_57 = sub_142873640(r12_2, *r15_1, nullptr)
                                                
                                                if (rax_56 == 0 || rax_57 == 0)
                                                    var_fe0_2 = 0x376
                                                    r9_3 = 0x8d
                                                    goto label_14285c439
                                            
                                            int32_t* rcx_33 = *(arg1 + 8)
                                            
                                            if ((*(*(rcx_33 + 0xc0) + 0x60) & 8) != 0)
                                                if (arg1[0x21] - 1 u<= 3 || arg1[0x136] == 1)
                                                    goto label_14285bfa1
                                                
                                                rsi = arg2
                                            else
                                                int32_t rax_61 = *rcx_33
                                                
                                                if ((rax_61 s< 0x304 || rax_61 == 0x10000)
                                                        && arg1[0x21] - 1 u> 3 && arg1[0x136] != 1)
                                                    rsi = arg2
                                                else
                                                label_14285bfa1:
                                                    rsi = arg2
                                                    
                                                    if (*(arg1 + 0x460) != 0
                                                            && (arg1[0x1f] != 2 || rsi != 0x15))
                                                        rcx_35 = arg1
                                                        
                                                        if (sub_142873b60(r12_2, rsi, 1) == 0)
                                                            var_fe0_2 = 0x38a
                                                            r9_3 = 0x44
                                                            break
                                                        
                                                        *r15_1 += 1
                                                        uint64_t rdi_4 = zx.q(sub_142851cc0(rcx_35))
                                                        int64_t rax_66 = *r15_1
                                                        
                                                        if (rax_66 u< rdi_4)
                                                            int64_t r10_1 = *(arg1 + 0x16f0)
                                                            uint64_t rdi_5 = rdi_4 - rax_66
                                                            uint64_t rcx_37
                                                            
                                                            if (r10_1 == 0)
                                                                int64_t rcx_38 = *(arg1 + 0x1700)
                                                                
                                                                if (rcx_38 != 0)
                                                                    uint64_t rdx_23
                                                                    
                                                                    if (((rcx_38 - 1) & rcx_38) != 0)
                                                                        rdx_23 = modu.dp.q(0:rax_66, rcx_38)
                                                                    else
                                                                        rdx_23 = (rcx_38 - 1) & rax_66
                                                                    
                                                                    if (rdx_23 != 0)
                                                                        rcx_37 = rcx_38 - rdx_23
                                                                        goto label_14285c034
                                                            else
                                                                rcx_37 = r10_1(arg1, zx.q(rsi), rax_66, 
                                                                    *(arg1 + 0x16f8), var_fe8, var_fe0, 
                                                                    var_fd8)
                                                            label_14285c034:
                                                                
                                                                if (rcx_37 != 0)
                                                                    if (rcx_37 u<= rdi_5)
                                                                        rdi_5 = rcx_37
                                                                    
                                                                    if (sub_142873a70(r12_2, 0, rdi_5) == 0)
                                                                        var_fe0_2 = 0x3ac
                                                                        goto label_14285c433
                                                                    
                                                                    *r15_1 += rdi_5
                                                        
                                                        rdi_3 = var_fb8_1
                                            
                                            if ((**(arg1 + 0xa8) & 0x400) == 0)
                                                int64_t rax_71 = sx.q(var_fb0_1)
                                                
                                                if (rax_71.d != 0)
                                                    int32_t rax_72 =
                                                        sub_142873640(r12_2, rax_71, &var_f70)
                                                    int32_t rax_74
                                                    
                                                    if (rax_72 != 0)
                                                        rax_74 = (*(*(*(arg1 + 8) + 0xc0) + 8))(
                                                            arg1, &r15_1[-1], var_f70, 1, var_fe8, 
                                                            var_fe0, var_fd8)
                                                    
                                                    if (rax_72 == 0 || rax_74 == 0)
                                                        var_fe0_2 = 0x3c0
                                                        goto label_14285c433
                                            
                                            if (sub_142873c80(r12_2, 0x10, nullptr) != 0
                                                    && sub_142873820(r12_2, &var_f88) != 0)
                                                int64_t rax_77 = sub_142873800(r12_2)
                                                int64_t rcx_45 = var_f88
                                                int64_t rax_78 = rax_77 - rcx_45
                                                *r15_1 = rcx_45
                                                r15_1[3] = rax_78
                                                r12_2 += 0x30
                                                r15_1[4] = rax_78
                                                r13 = 0
                                                r15_1 = &r15_1[9]
                                                var_fb8_1 = rdi_3 + 1
                                                
                                                if (rdi_3 + 1 u< arg6)
                                                    continue
                                                
                                                r12 = arg6
                                                goto label_14285c124
                                            
                                            var_fe0_2 = 0x3d2
                                            goto label_14285c433
                                
                                var_fe0_2 = 0x362
                                goto label_14285c433
                            
                            goto label_14285c452
                        
                    label_14285c124:
                        int32_t* rdx_28 = &var_958
                        
                        if (arg1[0x1f] == 2)
                            if (sub_14287e9a0(arg1, rdx_28, r12, 1, arg5) s>= 1)
                                goto label_14285c1f8
                            
                            if (sub_142856600(arg1) != 0)
                                goto label_14285c457
                            
                            var_fe0_2 = 0x3e6
                            goto label_14285c433
                        
                        if ((**(*(arg1 + 8) + 0xc0))(arg1, rdx_28, r12, 1, var_fe8, var_fe0, 
                            var_fd8) s>= 1)
                        label_14285c1f8:
                            int32_t r14_4
                            
                            if (r12 == 0)
                                r14_4 = arg2
                            else
                                void* rsi_2 = &var_f58
                                void* r15_2 = &arg1[0x21a]
                                void* rdi_7 = &var_950
                                
                                while (true)
                                    if (sub_142873820(rsi_2, &var_f70) != 0)
                                        int64_t rdx_30 = *rdi_7
                                        int64_t rax_85 = var_f70
                                        
                                        if (rax_85 u<= rdx_30)
                                            int32_t rax_86
                                            
                                            if (rax_85 u< rdx_30)
                                                rax_86 =
                                                    sub_142873640(rsi_2, rdx_30 - rax_85, nullptr)
                                            
                                            if (rax_85 u>= rdx_30 || rax_86 != 0)
                                                if ((**(arg1 + 0xa8) & 0x400) != 0)
                                                    int64_t rax_88 = sx.q(var_fb0_1)
                                                    
                                                    if (rax_88.d != 0)
                                                        int32_t rax_89 =
                                                            sub_142873640(rsi_2, rax_88, &var_f90)
                                                        int32_t rax_91
                                                        
                                                        if (rax_89 != 0)
                                                            rax_91 = (*(*(*(arg1 + 8) + 0xc0) + 8))(
                                                                arg1, rdi_7 - 8, var_f90, 1, var_fe8, 
                                                                var_fe0, var_fd8)
                                                        
                                                        if (rax_89 == 0 || rax_91 == 0)
                                                            var_fe0_2 = 0x40b
                                                            goto label_14285c433
                                                        
                                                        *rdi_7 += rax_88
                                                
                                                if (sub_142873820(rsi_2, &var_f88) != 0
                                                        && sub_1428736e0(rsi_2) != 0)
                                                    if (*(arg1 + 0xb8) == 0)
                                                        r14_4 = arg2
                                                    else
                                                        int64_t rax_94 = sub_142873800(rsi_2)
                                                        var_fd8 = *(arg1 + 0xc0)
                                                        var_fe0.q = arg1
                                                        var_fe8 = 5
                                                        (*(arg1 + 0xb8))(1, 0, 0x100, 
                                                            rax_94 + -5 - var_f88, var_fe8, 
                                                            var_fe0, var_fd8)
                                                        int32_t* rcx_56 = *(arg1 + 8)
                                                        
                                                        if ((*(*(rcx_56 + 0xc0) + 0x60) & 8) != 0)
                                                            if (arg1[0x21] - 1 u<= 3
                                                                    || arg1[0x136] == 1)
                                                                goto label_14285c360
                                                            
                                                            r14_4 = arg2
                                                        else
                                                            int32_t rax_98 = *rcx_56
                                                            
                                                            if ((rax_98 s< 0x304
                                                                    || rax_98 == 0x10000)
                                                                    && arg1[0x21] - 1 u> 3
                                                                    && arg1[0x136] != 1)
                                                                r14_4 = arg2
                                                            else
                                                            label_14285c360:
                                                                r14_4 = arg2
                                                                
                                                                if (*(arg1 + 0x460) != 0)
                                                                    uint64_t rdx_35 = zx.q(*arg1)
                                                                    var_fd8 = *(arg1 + 0xc0)
                                                                    var_fe0.q = arg1
                                                                    var_fe8 = 1
                                                                    char var_fc4 = r14_4.b
                                                                    (*(arg1 + 0xb8))(1, rdx_35, 0x101, 
                                                                        &var_fc4, var_fe8, var_fe0, var_fd8)
                                                    
                                                    if (sub_142873790(rsi_2) == 0)
                                                        var_fe0_2 = 0x429
                                                        goto label_14285c433
                                                    
                                                    int64_t rcx_59 = *rdi_7 + 5
                                                    *(rdi_7 - 4) = r14_4
                                                    *rdi_7 = rcx_59
                                                    
                                                    if (arg7 != 0)
                                                        if (r13 != 0)
                                                            var_fe0_2 = 0x43d
                                                            goto label_14285c433
                                                        
                                                        result = 1
                                                        *arg8 = rcx_59
                                                        goto label_14285c4cb
                                                    
                                                    r13 += 1
                                                    *r15_2 = rcx_59 + var_fa8
                                                    rsi_2 += 0x30
                                                    r15_2 += 0x28
                                                    rdi_7 += 0x48
                                                    
                                                    if (r13 u>= r12)
                                                        break
                                                    
                                                    continue
                                                
                                                var_fe0_2 = 0x414
                                                goto label_14285c433
                                    
                                    var_fe0_2 = 0x402
                                    goto label_14285c433
                            
                            *(arg1 + 0x1678) = var_f80_1
                            *(arg1 + 0x1690) = arg3
                            arg1[0x5a0] = r14_4
                            *(arg1 + 0x1688) = var_f80_1
                            result = sub_14285d5a0(arg1, r14_4, arg3, var_f80_1, arg8)
                        else
                            if (sub_142856600(arg1) != 0)
                                goto label_14285c457
                            
                            var_fe0_2 = 0x3ee
                        label_14285c433:
                            r9_3 = 0x44
                        label_14285c439:
                            rcx_35 = arg1
                        label_14285c452:
                            sub_142856580(rcx_35, 0x50, 0x68, r9_3, "ssl\record\rec_layer_s3.c", 
                                var_fe0_2)
                        label_14285c457:
                            int64_t i_2 = i_3
                            
                            if (i_2 != 0)
                                void* rbx_1 = &var_f58
                                int64_t i_1
                                
                                do
                                    sub_142873690(rbx_1)
                                    rbx_1 += 0x30
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                            
                            result = -1
                else
                    int32_t rax_15 = sub_1428916c0(sub_142891580(*(arg1 + 0x478)))
                    var_fb0_1 = rax_15
                    
                    if (rax_15 s>= 0)
                        rcx_6 = arg7
                    label_14285bab7:
                        
                        if (rcx_6 != 0)
                            goto label_14285bb99
                        
                        void* rax_16 = *(arg1 + 0xa8)
                        
                        if (*(rax_16 + 0xdc) != 0)
                            goto label_14285bb3e
                        
                        if (*(rax_16 + 0xd8) == 0 || rsi != 0x17)
                        label_14285bb34:
                            *(*(arg1 + 0xa8) + 0xdc) = 1
                        label_14285bb3e:
                            
                            if (var_fa8 == 0)
                                if (r12 != 0)
                                    void* rsi_1 = &var_f58
                                    void* rdi_1 = &arg1[0x216]
                                    
                                    while (true)
                                        int64_t rdx_9 = *(rdi_1 - 0x10)
                                        int64_t r8_5 = *rdi_1
                                        *(rdi_1 + 8) = 7 - (zx.q(rdx_9.d - 4) & 7)
                                        
                                        if (sub_142873900(rsi_1, rdx_9, r8_5, 0) != 0 &&
                                                sub_142873640(rsi_1, 7 - (zx.q(rdx_9.d - 4) & 7), 
                                                nullptr) != 0)
                                            i_3 += 1
                                            r15 += 1
                                            rdi_1 += 0x28
                                            rsi_1 += 0x30
                                            
                                            if (r15 u< arg6)
                                                continue
                                            
                                            r14 = var_f90
                                            r12 = arg6
                                            rsi = arg2
                                            break
                                        
                                        var_fe0_2 = 0x318
                                        goto label_14285c433
                                
                                goto label_14285bc9d
                            
                            int32_t rax_19 =
                                sub_142873900(&var_f58, *(arg1 + 0x848), *(arg1 + 0x858), 0)
                            int32_t rax_20
                            
                            if (rax_19 != 0)
                                rax_20 = sub_142873640(&var_f58, var_fa8 + *(arg1 + 0x860), nullptr)
                            
                            if (rax_19 != 0 && rax_20 != 0)
                                i_3 = 1
                                goto label_14285bc9d
                            
                            sub_142856580(arg1, 0x50, 0x68, 0x44, "ssl\record\rec_layer_s3.c", 
                                0x306)
                            result = -1
                        else
                            var_fd8 = &var_fa8
                            var_fe0 = 1
                            var_fe8 = 1
                            var_f98 = 0
                            
                            if (sub_14285b890(arg1, zx.q(rsi), arg3, &var_f98, var_fe8, var_fe0, 
                                    var_fd8) s<= 0)
                                result = -1
                            else
                                if (var_fa8 u<= 0x55)
                                    goto label_14285bb34
                                
                                sub_142856580(arg1, 0x50, 0x68, 0x44, "ssl\record\rec_layer_s3.c", 
                                    0x2e2)
                                result = -1
                    else
                        sub_142856580(arg1, 0x50, 0x68, 0x44, "ssl\record\rec_layer_s3.c", 0x2c0)
                        result = -1
            else
                result = 0
else
    result = sub_14285d5a0(arg1, rsi, arg3, rdi, arg8)

label_14285c4cb:
__security_check_cookie(rax_1 ^ &var_1008)
return result
