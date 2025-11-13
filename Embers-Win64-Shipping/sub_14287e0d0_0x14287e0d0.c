// 函数: sub_14287e0d0
// 地址: 0x14287e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_10 = *arg2
void* result = nullptr
int32_t* rax_1 = sub_1428c41c0(nullptr, &arg_10, arg3, &data_1434e7b20)

if (rax_1 != 0)
    if (arg1 != 0)
        result = *arg1
    
    if (arg1 != 0 && result != 0)
    label_14287e138:
        
        if (*rax_1 == 1)
            int32_t rcx_2 = rax_1[1]
            int32_t rax_4 = rcx_2 s>> 8
            
            if (rax_4 == 3 || rax_4 == 0xfe || rcx_2 == 0x100)
                *result = rcx_2
                int32_t* rax_5 = *(rax_1 + 8)
                
                if (*rax_5 == 2)
                    char* rax_6 = *(rax_5 + 8)
                    *(result + 0x130) = (zx.d(*rax_6) | 0x30000) << 8 | zx.d(rax_6[1])
                    int64_t rax_8 = sub_142871ef0()
                    *(result + 0x128) = rax_8
                    
                    if (rax_8 != 0
                            && sub_14287e8b0(result + 0x98, result + 0x90, *(rax_1 + 0x20), 0x20)
                            != 0)
                        uint32_t* r14_1 = *(rax_1 + 0x18)
                        int64_t rax_10
                        
                        if (r14_1 != 0)
                            uint32_t count = *r14_1
                            
                            if (count u<= 0x40)
                                memcpy(result + 0x50, *(r14_1 + 8), count)
                                rax_10 = sx.q(*r14_1)
                                goto label_14287e284
                        else
                            rax_10 = 0
                        label_14287e284:
                            *(result + 8) = rax_10
                            __time64_t rax_11 = *(rax_1 + 0x30)
                            
                            if (rax_11 == 0)
                                rax_11 = _time64(nullptr)
                            
                            *(result + 0x11c) = rax_11.d
                            int32_t rcx_9 = 3
                            int64_t rax_12 = *(rax_1 + 0x38)
                            
                            if (rax_12 != 0)
                                rcx_9 = rax_12.d
                            
                            *(result + 0x118) = rcx_9
                            sub_1428a2c50(*(result + 0xf8))
                            *(result + 0xf8) = *(rax_1 + 0x40)
                            int32_t* r8_3 = *(rax_1 + 0x48)
                            *(rax_1 + 0x40) = 0
                            
                            if (sub_14287e8b0(result + 0xc0, result + 0xb8, r8_3, 0x20) != 0)
                                *(result + 0x110) = rax_1[0x14]
                                
                                if (sub_14287e920(result + 0x158, *(rax_1 + 0x58)) != 0
                                        && sub_14287e920(result + 0xe0, *(rax_1 + 0x78)) != 0
                                        && sub_14287e920(result + 0xe8, *(rax_1 + 0x80)) != 0)
                                    int64_t rcx_15 = *(result + 0x180)
                                    *(result + 0x190) = rax_1[0x18]
                                    *(result + 0x194) = rax_1[0x1a]
                                    sub_1428a6780(rcx_15)
                                    void* rax_21 = *(rax_1 + 0x70)
                                    
                                    if (rax_21 == 0)
                                        *(result + 0x180) = 0
                                    else
                                        *(result + 0x180) = *(rax_21 + 8)
                                        *(result + 0x188) = sx.q(**(rax_1 + 0x70))
                                        *(*(rax_1 + 0x70) + 8) = 0
                                    
                                    int32_t* rax_25 = *(rax_1 + 0x10)
                                    uint32_t rcx_17
                                    
                                    if (rax_25 == 0)
                                        rcx_17 = 0
                                    label_14287e3e1:
                                        *(result + 0x120) = rcx_17
                                        
                                        if (sub_14287e920(result + 0x1b8, *(rax_1 + 0x88)) != 0)
                                            int64_t rcx_19 = *(result + 0x1a0)
                                            *(result + 0x1d0) = rax_1[0x24]
                                            *(result + 0x19c) = rax_1[0x26]
                                            sub_1428a6780(rcx_19)
                                            void* rax_30 = *(rax_1 + 0xa0)
                                            
                                            if (rax_30 == 0)
                                                *(result + 0x1a0) = 0
                                                *(result + 0x1a8) = 0
                                            else
                                                *(result + 0x1a0) = *(rax_30 + 8)
                                                *(result + 0x1a8) = sx.q(**(rax_1 + 0xa0))
                                                *(*(rax_1 + 0xa0) + 8) = 0
                                            
                                            int64_t rcx_21 = *(result + 0x1c0)
                                            *(result + 0x1b0) = rax_1[0x2a].b
                                            sub_1428a6780(rcx_21)
                                            void* rax_35 = *(rax_1 + 0xb0)
                                            
                                            if (rax_35 == 0)
                                                *(result + 0x1c0) = 0
                                                *(result + 0x1c8) = 0
                                            else
                                                *(result + 0x1c0) = *(rax_35 + 8)
                                                *(result + 0x1c8) = sx.q(**(rax_1 + 0xb0))
                                                *(*(rax_1 + 0xb0) + 8) = 0
                                            
                                            sub_1428c3d60(rax_1, &data_1434e7b20)
                                            
                                            if (arg1 != 0 && *arg1 == 0)
                                                *arg1 = result
                                            
                                            *arg2 = arg_10
                                            return result
                                    else
                                        if (*rax_25 == 1)
                                            rcx_17 = zx.d(**(rax_25 + 8))
                                            goto label_14287e3e1
                                        
                                        sub_1428a5670(0x14, 0x67, 0x10f, "ssl\ssl_asn1.c", 0x156)
                else
                    sub_1428a5670(0x14, 0x67, 0x89, "ssl\ssl_asn1.c", 0x114)
            else
                sub_1428a5670(0x14, 0x67, 0x103, "ssl\ssl_asn1.c", 0x10d)
        else
            sub_1428a5670(0x14, 0x67, 0xfe, "ssl\ssl_asn1.c", 0x106)
    else
        void* result_1 = sub_1428577b0()
        result = result_1
        
        if (result_1 != 0)
            goto label_14287e138

sub_1428c3d60(rax_1, &data_1434e7b20)

if (arg1 == 0 || *arg1 != result)
    sub_1428574d0(result)

return nullptr
