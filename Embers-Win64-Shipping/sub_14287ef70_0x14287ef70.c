// 函数: sub_14287ef70
// 地址: 0x14287ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (sub_14286ea80(arg1) != 0)
    while (true)
        if (sub_14286f4c0(arg1, *(arg1 + 0x16b0) + 0x30) == 0)
            void* rsi_1 = &arg1[0x594]
            int64_t arg_10
            
            if (arg1[0x203] != 0xf1 || *rsi_1 u< 0xd)
                void* r14_1 = rsi_1
                int32_t result = sub_14285cec0(arg1, 0xd, *(arg1 + 0x830), 0, 1, &arg_10)
                
                if (result s<= 0)
                    return result
                
                if (*rsi_1 != 0xd)
                    *rsi_1 = 0
                label_14287f24e:
                    
                    if (sub_14286ea80(arg1) == 0)
                        break
                    
                    continue
                
                int64_t r10_1 = *(arg1 + 0xb8)
                char* rsi_2 = *(arg1 + 0x1648)
                arg1[0x203] = 0xf1
                
                if (r10_1 != 0)
                    r10_1(0, 0, 0x100, rsi_2, 0xd, arg1, *(arg1 + 0xc0))
                
                arg1[0x353] = zx.d(*rsi_2)
                uint16_t rdx_3 = zx.w(rsi_2[1]) << 8 | zx.w(rsi_2[2])
                arg1[0x361] = zx.d(rsi_2[3]) << 8 | zx.d(rsi_2[4])
                *(arg1 + 0x169a) = *(rsi_2 + 5)
                *(arg1 + 0x169e) = *(rsi_2 + 9)
                uint64_t r8_4 = zx.q(rsi_2[0xb]) << 8 | zx.q(rsi_2[0xc])
                arg1[0x360] = 0
                *(arg1 + 0xd50) = r8_4
                
                if (arg1[0x178] != 0 || arg1[0x353] == 0x15)
                    if (((zx.d(rdx_3) ^ *arg1) & 0xff00) == 0 && r8_4 u<= 0x4540)
                    label_14287f0f8:
                        void* rax_12 = *(arg1 + 0x508)
                        rsi_1 = r14_1
                        
                        if (rax_12 == 0)
                            goto label_14287f12d
                        
                        char rcx_5 = *(rax_12 + 0x1b0)
                        
                        if (rcx_5 - 1 u> 3 || r8_4 u<= zx.q(0x200 << (rcx_5 - 1)))
                            goto label_14287f12d
                else if (zx.d(rdx_3) == *arg1 && ((zx.d(rdx_3) ^ *arg1) & 0xff00) == 0
                        && r8_4 u<= 0x4540)
                    goto label_14287f0f8
                
                *(arg1 + 0xd50) = 0
                arg1[0x360] = 1
                *r14_1 = 0
                goto label_14287f24e
            else
            label_14287f12d:
                int64_t rbp_1 = *(arg1 + 0xd50)
                int32_t rax_17
                
                if (rbp_1 u> *rsi_1 - 0xd)
                    rax_17 = sub_14285cec0(arg1, rbp_1, rbp_1, 1, 1, &arg_10)
                
                if (rbp_1 u> *rsi_1 - 0xd && (rax_17 s<= 0 || arg_10 != rbp_1))
                label_14287f224:
                    
                    if (sub_142856600(arg1) != 0)
                        break
                    
                    goto label_14287f22d
                
                arg1[0x203] = 0xf0
                int32_t arg_8
                int32_t* rax_18 = sub_14286ea20(arg1, &arg1[0x352], &arg_8)
                
                if (rax_18 == 0)
                    *(arg1 + 0xd50) = 0
                    *rsi_1 = 0
                    goto label_14287f24e
                
                if (sub_142885910(arg1, rax_18) == 0)
                label_14287f22d:
                    *(arg1 + 0xd50) = 0
                    arg1[0x360] = 1
                    *rsi_1 = 0
                    goto label_14287f24e
                
                if (*(arg1 + 0xd50) == 0)
                    arg1[0x360] = 1
                    goto label_14287f24e
                
                if (arg_8 != 0)
                    int32_t rax_20 = sub_142856410(arg1)
                    int32_t rax_21
                    
                    if (rax_20 == 0)
                        rax_21 = sub_1428565f0(arg1)
                    
                    if ((rax_20 != 0 || rax_21 != 0)
                            && sub_14286e730(arg1, *(arg1 + 0x16b0) + 0x20, &arg1[0x362]) s< 0)
                        break
                    
                    goto label_14287f22d
                
                if (sub_14287f270(arg1, rax_18) == 0)
                    goto label_14287f224
        
        return 1

return -1
