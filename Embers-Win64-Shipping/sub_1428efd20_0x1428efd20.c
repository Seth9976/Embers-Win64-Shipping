// 函数: sub_1428efd20
// 地址: 0x1428efd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r15 = 0
int64_t* r12 = nullptr

if (arg1 == 0 || arg2 == 0)
    return 0

sub_1428cd400(*arg2)
sub_1428c3620(arg2[1])
int32_t rax_1 = opus_repacketizer_get_nb_frames(sub_140687ad0(arg1))
void* rax_2 = sub_1428a9570(rax_1)
*arg2 = rax_2

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0x10).d, 0x9a, 8, "crypto\ec\ec_asn1.c", 0x103)
else if (rax_1 == 0x196)
    int64_t* rax_3 = sub_142890500()
    r12 = rax_3
    
    if (rax_3 != 0)
        if (sub_1428bef30(arg1, r12, 0, 0, 0) != 0)
            int64_t rax_5 = sub_1428e49c0(r12, nullptr)
            arg2[1] = rax_5
            
            if (rax_5 != 0)
                r15 = 1
            else
                sub_1428a5670(0x10, 0x9a, (rax_5 + 0xd).d, "crypto\ec\ec_asn1.c", 0x114)
        else
            sub_1428a5670(0x10, 0x9a, 0x10, "crypto\ec\ec_asn1.c", 0x10e)
    else
        sub_1428a5670(0x10, 0x9a, (rax_3 + 0x41).d, "crypto\ec\ec_asn1.c", 0x109)
else if (rax_1 != 0x197)
    sub_1428a5670(0x10, 0x9a, 0x83, "crypto\ec\ec_asn1.c", 0x163)
else
    int32_t* rax_6 = sub_1428db530(&data_143515400)
    arg2[1] = rax_6
    
    if (rax_6 != 0)
        *rax_6 = sub_1428bef80(arg1)
        
        if (opus_repacketizer_get_nb_frames(sub_140687ad0(arg1)) != 0x197)
        label_1428f003d:
            sub_1428a5670(0x10, 0x9a, 0x10, "crypto\ec\ec_asn1.c", 0x12f)
        else
            int32_t rdx_1 = 0
            void* rax_10 = &arg1[9]
            int64_t rcx_11 = 0
            
            while (*rax_10 != 0)
                rdx_1 += 1
                rcx_11 += 1
                rax_10 += 4
                
                if (rcx_11 s>= 6)
                    break
            
            int32_t rsi_1
            
            if (rdx_1 != 4)
                if (rdx_1 != 2)
                    goto label_1428f003d
                
                rsi_1 = 0x2aa
                goto label_1428efed0
            
            rsi_1 = 0x2ab
        label_1428efed0:
            void* rax_11 = sub_1428a9570(rsi_1)
            *(rax_6 + 8) = rax_11
            
            if (rax_11 == 0)
                sub_1428a5670(0x10, 0x9a, (rax_11 + 8).d, "crypto\ec\ec_asn1.c", 0x134)
            else if (rsi_1 == 0x2aa)
                int32_t rax_13 = opus_repacketizer_get_nb_frames(sub_140687ad0(arg1))
                int32_t rsi_2
                
                if (rax_13 == 0x197 && arg1[9].d != 0)
                    rsi_2 = *(arg1 + 0x4c)
                
                if (rax_13 != 0x197 || arg1[9].d == 0 || rsi_2 == 0 || arg1[0xa].d != 0)
                    sub_1428a5670(0x10, 0xc2, 0x42, "crypto\ec\ec_asn1.c", 0x34)
                else
                    int32_t* rax_14 = sub_1428c3550()
                    *(rax_6 + 0x10) = rax_14
                    
                    if (rax_14 != 0)
                        int32_t rax_15 = sub_1428e4980(rax_14, rsi_2)
                        
                        if (rax_15 != 0)
                            r15 = 1
                        else
                            sub_1428a5670(0x10, 0x9a, rax_15 + 0xd, "crypto\ec\ec_asn1.c", 0x144)
                    else
                        sub_1428a5670(0x10, 0x9a, (rax_14 + 0x41).d, "crypto\ec\ec_asn1.c", 0x140)
            else if (rsi_1 != 0x2ab)
                int64_t rax_21 = sub_1428c3580()
                *(rax_6 + 0x10) = rax_21
                
                if (rax_21 != 0)
                    r15 = 1
                else
                    sub_1428a5670(0x10, 0x9a, (rax_21 + 0x41).d, "crypto\ec\ec_asn1.c", 0x15c)
            else if (opus_repacketizer_get_nb_frames(sub_140687ad0(arg1)) != 0x197
                || arg1[9].d == 0)
            label_1428f0004:
                sub_1428a5670(0x10, 0xc1, 0x42, "crypto\ec\ec_asn1.c", 0x4a)
            else
                int32_t rsi_3 = *(arg1 + 0x4c)
                
                if (rsi_3 == 0)
                    goto label_1428f0004
                
                int32_t rbp_1 = arg1[0xa].d
                
                if (rbp_1 == 0)
                    goto label_1428f0004
                
                int32_t r14_1 = *(arg1 + 0x54)
                
                if (r14_1 == 0 || arg1[0xb].d != 0)
                    goto label_1428f0004
                
                int32_t* rax_18 = sub_1428db530(&data_1435152a0)
                *(rax_6 + 0x10) = rax_18
                
                if (rax_18 != 0)
                    *rax_18 = r14_1
                    *(*(rax_6 + 0x10) + 4) = rbp_1
                    *(*(rax_6 + 0x10) + 8) = rsi_3
                    r15 = 1
                else
                    sub_1428a5670(0x10, 0x9a, (rax_18 + 0x41).d, "crypto\ec\ec_asn1.c", 0x14f)
    else
        sub_1428a5670(0x10, 0x9a, (rax_6 + 0x41).d, "crypto\ec\ec_asn1.c", 0x126)

sub_1428901a0(r12)
return zx.q(r15)
