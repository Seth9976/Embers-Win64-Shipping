// 函数: sub_14284fdd0
// 地址: 0x14284fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x14, 0xba, 0xc3, "ssl\ssl_lib.c", 0x2a2)
    return 0

if (*arg1 == 0)
    sub_1428a5670(0x14, 0xba, 0xe4, "ssl\ssl_lib.c", 0x2a6)
    return 0

void* result_1 = sub_1428a6a70(0x1740)
void* result = result_1

if (result_1 != 0)
    *(result_1 + 0x5c0) = 1
    CRITICAL_SECTION* rax_2 = sub_1428a5be0()
    *(result + 0x1708) = rax_2
    
    if (rax_2 != 0)
        sub_14285b770(result + 0x800, result)
        *(result + 0x5c4) = arg1[0x23].d
        *(result + 0x10c) = *(arg1 + 0x364)
        *(result + 0x5cc) = arg1[0x24].d
        *(result + 0x5d0) = *(arg1 + 0x124)
        *(result + 0x5c8) = *(arg1 + 0x11c)
        *(result + 0x5d8) = arg1[0x25]
        *(result + 0x16e0) = arg1[0x71].d
        *(result + 0x16e4) = *(arg1 + 0x38c)
        *(result + 0x1718) = arg1[0x78]
        *(result + 0x75c) = arg1[0x7b].d
        int128_t* rax_14 = sub_142898900(arg1[3])
        *(result + 0x120) = rax_14
        
        if (rax_14 != 0)
            int64_t* rax_15 = sub_142853b10(arg1[0x26])
            *(result + 0x488) = rax_15
            
            if (rax_15 != 0)
                *(result + 0x808) = arg1[0x27].d
                *(result + 0xb8) = arg1[0x28]
                *(result + 0xc0) = arg1[0x29]
                *(result + 0x558) = arg1[0x2a].d
                *(result + 0x7f8) = arg1[0x6e]
                *(result + 0x16f0) = arg1[0x72]
                *(result + 0x16f8) = arg1[0x73]
                *(result + 0x1700) = arg1[0x74]
                int64_t rax_24 = arg1[0x2b]
                *(result + 0x4e0) = rax_24
                
                if (rax_24 u<= 0x20)
                    *(result + 0x4e8) = *(arg1 + 0x160)
                    *(result + 0x4f8) = *(arg1 + 0x170)
                    *(result + 0x560) = arg1[0x30]
                    *(result + 0x528) = arg1[0x31]
                    void* rax_27 = sub_1428ab620()
                    *(result + 0xd0) = rax_27
                    
                    if (rax_27 != 0)
                        sub_1428ab2a0(rax_27, arg1[0x32])
                        *(result + 0x40) = arg1[0x33].d
                        *(result + 0x704) = *(arg1 + 0x234)
                        *(result + 0x5f0) = arg1[0x38]
                        *(result + 0x5e8) = arg1[0x37]
                        int64_t rax_32 = arg1[0x39]
                        *(result + 0x5f8) = rax_32
                        
                        if (rax_32 u> 1)
                            *(result + 0x808) = 1
                        
                        int64_t rdx_4 = arg1[0x3a]
                        
                        if (rdx_4 != 0)
                            sub_14285b880(result, rdx_4)
                        
                        *(arg1 + 0x94) += 1
                        *(result + 0x598) = arg1
                        *(result + 0x620) = 0
                        *(result + 0x628) = 0
                        *(result + 0x670) = 0
                        *(result + 0x638) = arg1[0x46].d
                        __builtin_memset(result + 0x64c, 0, 0x24)
                        *(arg1 + 0x94)
                        *(arg1 + 0x94) += 1
                        *(result + 0x738) = arg1
                        int64_t rcx_7 = arg1[0x48]
                        
                        if (rcx_7 == 0)
                            goto label_142850189
                        
                        int64_t rax_34 = sub_1428a6af0(rcx_7, arg1[0x47], "ssl\ssl_lib.c", 0x304)
                        *(result + 0x680) = rax_34
                        
                        if (rax_34 != 0)
                            *(result + 0x678) = arg1[0x47]
                        label_142850189:
                            int64_t rcx_8 = arg1[0x4a]
                            
                            if (rcx_8 == 0)
                                goto label_1428501cf
                            
                            int64_t rax_36 =
                                sub_1428a6af0(rcx_8, arg1[0x49] * 2, "ssl\ssl_lib.c", 0x30e)
                            *(result + 0x690) = rax_36
                            
                            if (rax_36 != 0)
                                *(result + 0x688) = arg1[0x49]
                            label_1428501cf:
                                void* rcx_9 = *(result + 0x598)
                                *(result + 0x6d0) = 0
                                
                                if (*(rcx_9 + 0x268) == 0)
                                    goto label_142850241
                                
                                int64_t rax_38 = sub_1428a6730(*(rcx_9 + 0x270))
                                *(result + 0x6c0) = rax_38
                                
                                if (rax_38 != 0)
                                    void* rdx_9 = *(result + 0x598)
                                    memcpy(rax_38, *(rdx_9 + 0x268), (*(rdx_9 + 0x270)).d)
                                    *(result + 0x6c8) = *(*(result + 0x598) + 0x270)
                                label_142850241:
                                    *(result + 0x5a0) = 0
                                    *(result + 0x5a8) = 0
                                    *(result + 0x16b8) = arg1[0x15]
                                    *(result + 0x16c0) = arg1[0x16]
                                    int64_t rdx_11 = *arg1
                                    *(result + 8) = rdx_11
                                    *(result + 0x754) = 0xffffffff
                                    *(result + 0x1730) = arg1[0x79]
                                    *(result + 0x1738) = arg1[0x7a]
                                    
                                    if ((*(rdx_11 + 0x10))(result) != 0)
                                        int32_t rcx_14
                                        rcx_14.b = *(*arg1 + 0x28) != sub_14284db00
                                        *(result + 0x38) = rcx_14
                                        
                                        if (sub_14284e8b0(result) != 0
                                                && sub_1428a62f0(0, result, result + 0x5b0) != 0)
                                            *(result + 0x578) = arg1[0x57]
                                            *(result + 0x580) = arg1[0x58]
                                            *(result + 0x588) = arg1[0x59]
                                            *(result + 0x590) = arg1[0x5a]
                                            *(result + 0x16c8) = 0
                                            
                                            if (sub_142850810(result, arg1[0x35], arg1[0x36]) != 0)
                                                return result
    else
        sub_1428a6780(result)
        result = nullptr

sub_14284f4d0(result)
sub_1428a5670(0x14, 0xba, 0x41, "ssl\ssl_lib.c", 0x34a)
return nullptr
