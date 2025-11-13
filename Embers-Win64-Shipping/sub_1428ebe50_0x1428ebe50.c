// 函数: sub_1428ebe50
// 地址: 0x1428ebe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = arg2
int32_t r12 = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_18
    
    do
        int64_t* rax_1 = sub_142898ea0(rdi, r12)
        uint32_t rbp_3
        
        if (rax_1 == 0)
            rbp_3 = 0
        else
            int32_t* rcx_2 = *rax_1
            
            if (rcx_2 == 0)
                rbp_3 = 0
            else
                char* rdx_1 = *(rcx_2 + 8)
                
                if (rdx_1 == 0 || *rcx_2 s< 2)
                    rbp_3 = 0
                else
                    rbp_3 = zx.d(*rdx_1) << 8 | zx.d(rdx_1[1])
        
        uint64_t r8 = zx.q(arg4)
        
        if (rbp_3 == 1)
            sub_1428b6f70(arg3, "%*sIPv4", r8)
        else if (rbp_3 == 2)
            sub_1428b6f70(arg3, "%*sIPv6", r8)
        else
            uint32_t var_38_1 = rbp_3
            sub_1428b6f70(arg3, "%*sUnknown AFI %u", r8)
        
        int32_t* rax_5 = *rax_1
        
        if (*rax_5 s> 2)
            uint64_t r8_1 = zx.q(*(*(rax_5 + 8) + 2))
            
            switch ((r8_1 - 1).d)
                case 0
                    sub_14289a750(arg3, " (Unicast)")
                case 1
                    sub_14289a750(arg3, " (Multicast)")
                case 2
                    sub_14289a750(arg3, " (Unicast/Multicast)")
                case 3
                    sub_14289a750(arg3, " (MPLS)")
                case 0x3f
                    sub_14289a750(arg3, " (Tunnel)")
                case 0x40
                    sub_14289a750(arg3, " (VPLS)")
                case 0x41
                    sub_14289a750(arg3, " (BGP MDT)")
                case 0x7f
                    sub_14289a750(arg3, " (MPLS-labeled VPN)")
                default
                    sub_1428b6f70(arg3, " (Unknown SAFI %u)", r8_1)
        
        int32_t rdx_3 = *rax_1[1]
        
        if (rdx_3 == 0)
            sub_14289a750(arg3, ": inherit\n")
        else if (rdx_3 == 1)
            sub_14289a750(arg3, &data_1435151dc)
            int32_t rsi_1 = 0
            int32_t* r14_1 = *(rax_1[1] + 8)
            
            if (sub_142898c70(r14_1) s> 0)
                int32_t rax_17
                
                do
                    int32_t* rax_12 = sub_142898ea0(r14_1, rsi_1)
                    sub_1428b6f70(arg3, "%*s", zx.q(arg4 + 2))
                    int32_t rdx_5 = *rax_12
                    
                    if (rdx_5 == 0)
                        if (sub_1428edbf0(arg3, rbp_3, 0, *(rax_12 + 8)) == 0)
                            return 0
                        
                        int32_t* rax_16 = *(rax_12 + 8)
                        sub_1428b6f70(arg3, "/%d\n", zx.q((*rax_16 << 3) - (rax_16[4] & 7)))
                    else if (rdx_5 == 1)
                        if (sub_1428edbf0(arg3, rbp_3, 0, **(rax_12 + 8)) == 0)
                            return 0
                        
                        sub_14289a750(arg3, &data_142d8bc68)
                        
                        if (sub_1428edbf0(arg3, rbp_3, 0xff, *(*(rax_12 + 8) + 8)) == 0)
                            return 0
                        
                        sub_14289a750(arg3, &data_14370209c)
                    
                    rsi_1 += 1
                    rax_17 = sub_142898c70(r14_1)
                while (rsi_1 s< rax_17)
        
        rdi = arg2
        r12 += 1
        rax_18 = sub_142898c70(rdi)
    while (r12 s< rax_18)

return 1
