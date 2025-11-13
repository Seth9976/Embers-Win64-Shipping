// 函数: sub_142932f40
// 地址: 0x142932f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* result = sub_1428c3640()

if (result == 0)
    sub_1428a5670((result + 0xd).d, 0xb3, (result + 0x41).d, "crypto\asn1\asn1_gen.c", 0x24b)
    return 0

char* const rsi = &data_1437020ab

if (arg1 != 0)
    rsi = arg1

if (arg3 - 1 u> 0x1d)
label_142933330:
    sub_1428a5670(0xd, 0xb3, 0xc4, "crypto\asn1\asn1_gen.c", 0x2d9)
    sub_1428a4880(2)
else
    switch (arg3)
        case 1
            if (arg2 == 1)
                char* const var_28_1 = rsi
                int64_t var_30_1 = 0
                int64_t var_38 = 0
                
                if (sub_1428e8de0(&var_38, &result[2]) != 0)
                    *result = arg3
                    return result
                
                sub_1428a5670(0xd, 0xb3, 0xb0, "crypto\asn1\asn1_gen.c", 0x264)
                sub_1428a4880(2)
            else
                sub_1428a5670(0xd, 0xb3, 0xbe, "crypto\asn1\asn1_gen.c", 0x25d)
        case 2, 0xa
            if (arg2 == 1)
                void* rax_6 = sub_1428ea640(0, rsi)
                *(result + 8) = rax_6
                
                if (rax_6 != 0)
                    *result = arg3
                    return result
                
                sub_1428a5670(0xd, 0xb3, 0xb4, "crypto\asn1\asn1_gen.c", 0x271)
                sub_1428a4880(2)
            else
                sub_1428a5670(0xd, 0xb3, 0xb9, "crypto\asn1\asn1_gen.c", 0x26c)
        case 3, 4
            int32_t* rax_14 = sub_1428f2cf0()
            *(result + 8) = rax_14
            
            if (rax_14 == 0)
                sub_1428a5670((rax_14 + 0xd).d, 0xb3, (rax_14 + 0x41).d, "crypto\asn1\asn1_gen.c", 
                    0x2b4)
            else if (arg2 != 3)
                if (arg2 == 1)
                    sub_1428f2d50(rax_14, rsi, arg2 - 2)
                label_1429332b7:
                    
                    if (arg3 != 3)
                        *result = arg3
                        return result
                    
                    void* rax_19 = *(result + 8)
                    *(rax_19 + 0x10) &= 0xfffffff0
                    void* rax_20 = *(result + 8)
                    *(rax_20 + 0x10) |= 8
                    *result = arg3
                    return result
                
                if (arg2 != 4 || arg3 != 3)
                    sub_1428a5670(0xd, 0xb3, 0xaf, "crypto\asn1\asn1_gen.c", 0x2cc)
                else
                    int32_t var_48
                    var_48.q = rax_14
                    
                    if (sub_1428a40b0(rsi, arg2 + 0x28, arg2 - 3, sub_1429333d0, var_48) != 0)
                        *result = arg3
                        return result
                    
                    sub_1428a5670(0xd, 0xb3, 0xbc, "crypto\asn1\asn1_gen.c", 0x2c6)
                    sub_1428a4880(2)
            else
                int32_t arg_20
                char* rax_15 = sub_1428a6e90(rsi, &arg_20)
                
                if (rax_15 != 0)
                    *(*(result + 8) + 8) = rax_15
                    **(result + 8) = arg_20
                    *(*(result + 8) + 4) = arg3
                    goto label_1429332b7
                
                sub_1428a5670(0xd, 0xb3, 0xb2, "crypto\asn1\asn1_gen.c", 0x2ba)
                sub_1428a4880(2)
        case 5
            if (rsi == 0 || *rsi == 0)
                *result = arg3
                return result
            
            sub_1428a5670(0xd, 0xb3, 0xb6, "crypto\asn1\asn1_gen.c", 0x256)
        case 6
            if (arg2 == 1)
                void* rax_7 = sub_1428a9db0(rsi, 0)
                *(result + 8) = rax_7
                
                if (rax_7 != 0)
                    *result = arg3
                    return result
                
                sub_1428a5670(0xd, 0xb3, 0xb7, "crypto\asn1\asn1_gen.c", 0x27c)
                sub_1428a4880(2)
            else
                sub_1428a5670(0xd, 0xb3, 0xbf, "crypto\asn1\asn1_gen.c", 0x278)
        case 7, 8, 9, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 0x15, 0x19, 0x1d
            goto label_142933330
        case 0xc, 0x12, 0x13, 0x14, 0x16, 0x1a, 0x1b, 0x1c, 0x1e
            int32_t rdi_1
            
            if (arg2 != 1)
                if (arg2 == 2)
                    rdi_1 = 0x1000
                    goto label_1429331e1
                
                sub_1428a5670(0xd, 0xb3, 0xb1, "crypto\asn1\asn1_gen.c", 0x2a5)
            else
                rdi_1 = 0x1001
            label_1429331e1:
                
                if (sub_1429352a0(&result[2], rsi, 0xffffffff, rdi_1, sub_1428c42e0(arg3)) s> 0)
                    *result = arg3
                    return result
                
                sub_1428a5670(0xd, 0xb3, 0x41, "crypto\asn1\asn1_gen.c", 0x2ab)
                sub_1428a4880(2)
        case 0x17, 0x18
            if (arg2 == 1)
                int32_t* rax_8 = sub_1428f2cf0()
                *(result + 8) = rax_8
                
                if (rax_8 != 0)
                    if (sub_1428f2d50(rax_8, rsi, 0xffffffff) != 0)
                        *(*(result + 8) + 4) = arg3
                        
                        if (sub_1428e5720(*(result + 8)) != 0)
                            *result = arg3
                            return result
                        
                        sub_1428a5670(0xd, 0xb3, 0xb8, "crypto\asn1\asn1_gen.c", 0x291)
                        sub_1428a4880(2)
                    else
                        sub_1428a5670(0xd, 0xb3, 0x41, "crypto\asn1\asn1_gen.c", 0x28c)
                        sub_1428a4880(2)
                else
                    sub_1428a5670(0xd, 0xb3, 0x41, "crypto\asn1\asn1_gen.c", 0x288)
                    sub_1428a4880(2)
            else
                sub_1428a5670(0xd, 0xb3, 0xc1, "crypto\asn1\asn1_gen.c", 0x284)

sub_1428c3620(result)
return nullptr
