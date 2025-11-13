// 函数: sub_14284e270
// 地址: 0x14284e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void** result = nullptr

if (arg1 != 0)
    if (sub_142852cd0(0x200000, nullptr) != 0)
        if (sub_1428535c0() s>= 0)
            void** result_1 = sub_1428a6a70(0x3e0)
            result = result_1
            
            if (result_1 == 0)
                goto label_14284e304
            
            *result_1 = arg1
            result_1[0x24] = 0
            *(result_1 + 0x11c) = 4
            result_1[9].d = 2
            result_1[6] = 0x5000
            *(result + 0x4c) = (*(arg1 + 0xb8))()
            *(result + 0x94) = 1
            CRITICAL_SECTION* rax_7 = sub_1428a5be0()
            result[0x6f] = rax_7
            
            if (rax_7 != 0)
                result[0x25] = 0x19000
                result[0x2a].d = 0
                int64_t* rax_8 = sub_142854280()
                result[0x26] = rax_8
                
                if (rax_8 == 0)
                    goto label_14284e304
                
                int64_t* rax_9 = sub_1428a8c10(sub_142852250, sub_142852200)
                result[5] = rax_9
                
                if (rax_9 == 0)
                    goto label_14284e304
                
                int32_t* rax_10 = sub_14289db80()
                result[4] = rax_10
                
                if (rax_10 == 0)
                    goto label_14284e304
                
                void** rax_11 = sub_1428ae200()
                result[0x34] = rax_11
                
                if (rax_11 == 0)
                    goto label_14284e304
                
                if (sub_142858d10(result, 
                        "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256") == 0)
                    goto label_14284e304
                
                int32_t* rax_14
                int512_t zmm1_1
                rax_14, zmm1_1 = sub_14285a290(*result, result[3], &result[1], &result[2], 
                    "ALL:!COMPLEMENTOFDEFAULT:!eNULL", result[0x26])
                int32_t rax_15
                
                if (rax_14 != 0)
                    rax_15 = sub_142898c70(result[1])
                
                if (rax_14 == 0 || rax_15 s<= 0)
                    sub_1428a5670(0x14, 0xa9, 0xa1, "ssl\ssl_lib.c", 0xb76)
                    sub_14284e030(result)
                else
                    void* rax_16 = sub_1428ab620()
                    result[0x32] = rax_16
                    
                    if (rax_16 == 0)
                        goto label_14284e304
                    
                    int64_t rax_17 = sub_14289b970("ssl3-md5")
                    result[0x1d] = rax_17
                    
                    if (rax_17 != 0)
                        int64_t rax_18 = sub_14289b970("ssl3-sha1")
                        result[0x1e] = rax_18
                        
                        if (rax_18 != 0)
                            void* rax_19 = sub_142898ba0()
                            result[0x22] = rax_19
                            
                            if (rax_19 != 0 && sub_1428a62f0(1, result, &result[0x1c]) != 0)
                                int64_t rax_21 = sub_1428a71d0(0x40)
                                result[0x42] = rax_21
                                
                                if (rax_21 != 0)
                                    if ((*(*(arg1 + 0xc0) + 0x60) & 8) == 0)
                                        result[0x20] = sub_142858ce0()
                                    
                                    result[0x38] = 0x4000
                                    result[0x37] = 0x4000
                                    
                                    if (sub_142897af0(&result[0x40], 0x10) s<= 0)
                                        result[0x23].d |= 0x4000
                                    else if (sub_142897c20(result[0x42], 0x20) s<= 0)
                                        result[0x23].d |= 0x4000
                                    else if (sub_142897c20(result[0x42] + 0x20, 0x20) s<= 0)
                                        result[0x23].d |= 0x4000
                                    
                                    if (sub_142897c20(&result[0x53], 0x20) s> 0
                                            && sub_142854e40(result) != 0)
                                        result[0x23].d |= 0x120004
                                        result[0x46].d = 0xffffffff
                                        result[0x71].d = 0
                                        *(result + 0x38c) = 0x4000
                                        result[0x78] = 2
                                        sub_14286db20(result, zmm1_1)
                                        return result
                            
                            goto label_14284e304
                        
                        sub_1428a5670(0x14, 0xa9, 0xf3, "ssl\ssl_lib.c", 0xb83)
                        sub_14284e030(result)
                    else
                        sub_1428a5670(0x14, 0xa9, 0xf2, "ssl\ssl_lib.c", 0xb7f)
                        sub_14284e030(result)
            else
                sub_1428a5670((&rax_7->OwningThread + 4).d, 0xa9, (rax_7 + 0x41).d, 
                    "ssl\ssl_lib.c", 0xb59)
                sub_1428a6780(result)
        else
            sub_1428a5670(0x14, 0xa9, 0x10d, "ssl\ssl_lib.c", 0xb47)
        label_14284e304:
            sub_1428a5670(0x14, 0xa9, 0x41, "ssl\ssl_lib.c", 0xbee)
            sub_14284e030(result)
        
        return nullptr
else
    sub_1428a5670(0x14, 0xa9, 0xc4, "ssl\ssl_lib.c", 0xb3f)

return 0
