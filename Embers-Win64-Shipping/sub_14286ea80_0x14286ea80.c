// 函数: sub_14286ea80
// 地址: 0x14286ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_140687ad0(*(*(arg1 + 0x16b0) + 0x28)) == 0)
label_14286ec09:
    int16_t* rcx_16 = *(arg1 + 0x16b0)
    rcx_16[0x18] = *rcx_16
    int16_t* rcx_17 = *(arg1 + 0x16b0)
    rcx_17[0x10] = *rcx_17 + 1
else
    int16_t* rcx_2 = *(arg1 + 0x16b0)
    
    if (rcx_2[0x10] == *rcx_2 && *(arg1 + 0x840) u<= 0)
        if (sub_140687ad0(*(rcx_2 + 0x28)) != 0)
            while (true)
                void* rax_3 = sub_142885870(*(*(arg1 + 0x16b0) + 0x28))
                
                if (rax_3 != 0)
                    sub_14286e950(arg1, rax_3)
                    sub_1428a6780(*(rax_3 + 8))
                    sub_142885600(rax_3)
                
                int16_t* rdx_3 = *(arg1 + 0x16b0)
                int32_t r8_2 = *(arg1 + 0xd84)
                uint32_t rcx_9 = zx.d(*rdx_3)
                int64_t rax_4
                
                if (r8_2 != rcx_9)
                    if (r8_2 == rcx_9 + 1 && rdx_3[0x10] != rcx_9.w && *(arg1 + 0xd4c) - 0x15 u<= 1)
                        rax_4 = 0x10
                        goto label_14286eb87
                    
                    sub_142856580(arg1, 0x50, 0x1a8, 0x44, "ssl\record\rec_layer_d1.c", 0x10b)
                else
                    rax_4 = 4
                label_14286eb87:
                    void* rdi_2 = rdx_3 + rax_4
                    
                    if (rdi_2 == 0)
                        sub_142856580(arg1, 0x50, 0x1a8, 0x44, "ssl\record\rec_layer_d1.c", 0x10b)
                    else
                        int32_t rax_8 = sub_142885910(arg1, rdi_2)
                        int32_t rax_9
                        
                        if (rax_8 != 0)
                            rax_9 = sub_14287f270(arg1, rdi_2)
                        
                        if (rax_8 == 0 || rax_9 == 0)
                            if (sub_142856600(arg1) != 0)
                                return 0xffffffff
                            
                            *(arg1 + 0xd50) = 0
                            *(arg1 + 0x1650) = 0
                            goto label_14286ebfb
                        
                        if (sub_14286e730(arg1, *(arg1 + 0x16b0) + 0x30, arg1 + 0xd88) s>= 0)
                        label_14286ebfb:
                            
                            if (sub_140687ad0(*(*(arg1 + 0x16b0) + 0x28)) == 0)
                                break
                            
                            continue
                return 0
        
        goto label_14286ec09

return 1
