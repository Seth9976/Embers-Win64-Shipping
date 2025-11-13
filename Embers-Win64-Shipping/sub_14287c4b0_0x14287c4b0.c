// 函数: sub_14287c4b0
// 地址: 0x14287c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int64_t rdx = arg2[1]
void* arg_18 = nullptr
uint32_t r14 = 0
void* var_58 = nullptr
void* r13 = nullptr
int64_t var_50 = 0

if (rdx u< 4)
label_14287c5ff:
    sub_142856580(arg1, 0x32, 0x16e, 0x9f, "ssl\statem\statem_clnt.c", 0xa1b)
else
    char* rcx = *arg2
    uint32_t r12_4 = (zx.d(rcx[1]) | zx.d(*rcx) << 8) << 8 | zx.d(rcx[2])
    uint32_t rax_4 = zx.d(rcx[3])
    arg2[1] = rdx - 4
    *arg2 = &rcx[4]
    int32_t* r8_1 = *(arg1 + 8)
    
    if ((*(*(r8_1 + 0xc0) + 0x60) & 8) != 0)
        goto label_14287c5a6
    
    int32_t rax_6 = *r8_1
    
    if (rax_6 s< 0x304 || rax_6 == 0x10000)
        goto label_14287c5a6
    
    if (rdx - 4 u< 4)
        goto label_14287c5ff
    
    r14 = ((zx.d(rcx[5]) | zx.d(rcx[4]) << 8) << 8 | zx.d(rcx[6])) << 8 | zx.d(rcx[7])
    *arg2 = &rcx[8]
    arg2[1] = rdx - 8
    
    if (sub_142867330(arg2, &var_58) == 0)
        goto label_14287c5ff
    
    r13 = var_58
label_14287c5a6:
    int64_t r8_2 = arg2[1]
    
    if (r8_2 u< 2)
        goto label_14287c5ff
    
    char* rcx_3 = *arg2
    uint32_t rdx_4 = zx.d(rcx_3[1]) | zx.d(*rcx_3) << 8
    arg2[1] = r8_2 - 2
    *arg2 = &rcx_3[2]
    int32_t* rcx_4 = *(arg1 + 8)
    int32_t r9_2 = *(*(rcx_4 + 0xc0) + 0x60) & 8
    int32_t rax_18
    
    if (r9_2 == 0)
        rax_18 = *rcx_4
    
    uint64_t r15_1
    
    if (r9_2 != 0 || rax_18 s< 0x304 || rax_18 == 0x10000)
        r15_1 = zx.q(rdx_4)
        
        if (r8_2 - 2 != r15_1)
            goto label_14287c5ff
    else
        if (rdx_4 == 0)
            goto label_14287c5ff
        
        r15_1 = zx.q(rdx_4)
        
        if (r8_2 - 2 u< r15_1)
            goto label_14287c5ff
    
    if (rdx_4 == 0)
        return 3
    
    int32_t rax_20
    
    if (r9_2 == 0)
        rax_20 = *rcx_4
    
    void** rsi_1
    
    if (r9_2 != 0 || rax_20 s< 0x304 || rax_20 == 0x10000)
        rsi_1 = &arg1[0x142]
        
        if (*(*rsi_1 + 0x90) u> 0)
            goto label_14287c6a1
        
    label_14287c71e:
        *(*rsi_1 + 0x11c) = _time64(nullptr)
        sub_1428a6780(*(*rsi_1 + 0x180))
        *(*rsi_1 + 0x180) = 0
        *(*rsi_1 + 0x188) = 0
        *(*rsi_1 + 0x180) = sub_1428a6730(r15_1)
        int64_t rdx_11 = *(*rsi_1 + 0x180)
        
        if (rdx_11 != 0)
            int32_t rax_30 = sub_1428672d0(arg2, rdx_11, r15_1)
            
            if (rax_30 != 0)
                *(*rsi_1 + 0x190) = r12_4 << 8 | rax_4
                *(*rsi_1 + 0x194) = r14
                *(*rsi_1 + 0x188) = r15_1
                int32_t* rcx_16 = *(arg1 + 8)
                int32_t var_80
                
                if ((*(*(rcx_16 + 0xc0) + 0x60) & 8) != 0)
                label_14287c87c:
                    void* rbx_1 = *rsi_1
                    var_80.q = 0
                    int32_t arg_10
                    int32_t rax_39 = sub_142891710(*(rbx_1 + 0x180), r15_1, rbx_1 + 0x98, &arg_10, 
                        &data_1434e91b0, nullptr)
                    
                    if (rax_39 != 0)
                        *(*rsi_1 + 0x90) = zx.q(arg_10)
                        *(*rsi_1 + 0xf0) = 0
                        int32_t* rcx_22 = *(arg1 + 8)
                        
                        if ((*(*(rcx_22 + 0xc0) + 0x60) & 8) != 0)
                            return 3
                        
                        int32_t rax_43 = *rcx_22
                        
                        if (rax_43 s< 0x304 || rax_43 == 0x10000)
                            return 3
                        
                        void* rax_44 = sub_14285b130(arg1)
                        int32_t rax_45 = sub_1428916c0(rax_44)
                        
                        if (rax_45 s>= 0)
                            int64_t r14_6 = sx.q(rax_45)
                            int64_t var_68_1 = r14_6
                            var_80.q = r13
                            
                            if (sub_1428628c0(arg1, rax_44, &arg1[0x7b], "resumption", 0xa, var_80, 
                                    var_50, *rsi_1 + 0x50) != 0)
                                *(*rsi_1 + 8) = r14_6
                                sub_1428a6780(arg_18)
                                sub_142852680(arg1, 1)
                                return 1
                        else
                            sub_142856580(arg1, 0x50, 0x16e, 0x44, "ssl\statem\statem_clnt.c", 
                                0xa9f)
                    else
                        sub_142856580(arg1, rax_39 + 0x50, 0x16e, rax_39 + 6, 
                            "ssl\statem\statem_clnt.c", 0xa8e)
                else
                    int32_t rax_35 = *rcx_16
                    
                    if (rax_35 s< 0x304 || rax_35 == 0x10000)
                        goto label_14287c87c
                    
                    void var_48
                    
                    if (sub_1428780e0(arg2, &var_48) == 0 || arg2[1] != 0)
                        sub_142856580(arg1, 0x32, 0x16e, 0x9f, "ssl\statem\statem_clnt.c", 0xa6c)
                    else if (sub_142875450(arg1, &var_48, 0x2000, &arg_18, nullptr, 1) != 0)
                        var_80 = 1
                        
                        if (sub_142875b50(arg1, 0x2000, arg_18, 0, 0, 1) != 0)
                            goto label_14287c87c
            else
                int32_t rdx_5 = rax_30 + 0x32
                sub_142856580(arg1, rdx_5, 0x16e, rdx_5 + 0x6d, "ssl\statem\statem_clnt.c", 0xa5d)
        else
            sub_142856580(arg1, 0x50, 0x16e, 0x41, "ssl\statem\statem_clnt.c", 0xa58)
    else
        rsi_1 = &arg1[0x142]
    label_14287c6a1:
        int128_t* rax_22 = sub_1428587a0(*rsi_1, 0)
        
        if (rax_22 != 0)
            void* rcx_8 = *(arg1 + 0x738)
            
            if ((*(rcx_8 + 0x48) & 1) != 0)
                int32_t* rdx_7 = *(arg1 + 8)
                int32_t rax_24
                
                if ((*(*(rdx_7 + 0xc0) + 0x60) & 8) == 0)
                    rax_24 = *rdx_7
                
                if ((*(*(rdx_7 + 0xc0) + 0x60) & 8) != 0 || rax_24 s< 0x304 || rax_24 == 0x10000)
                    sub_1428574b0(rcx_8, *rsi_1)
            
            sub_1428574d0(*rsi_1)
            *rsi_1 = rax_22
            goto label_14287c71e
        
        sub_142856580(arg1, (&rax_22[5]).d, 0x16e, (rax_22 + 0x41).d, "ssl\statem\statem_clnt.c", 
            0xa39)

sub_1428a6780(arg_18)
return 0
