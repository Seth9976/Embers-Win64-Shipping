// 函数: sub_142bc0190
// 地址: 0x142bc0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint64_t rdi = zx.q(arg2)

if (arg1 != 0)
    int32_t i = arg1[2].d
    
    if (i u> rdi.d)
        int32_t rbx = 0
        int64_t* r15 = *arg1
        int64_t rcx = arg1[4]
        int32_t rax_3
        int32_t rbp_1
        
        if (rcx != 0)
            rbp_1 = *(rcx + (rdi << 2))
            
            if (rbp_1 != 0)
                do
                    rdi = zx.q(rdi.d + 1)
                    rbx = *(rcx + (rdi << 2))
                    
                    if (rbx != 0)
                        break
                while (rdi.d u< i)
            
        label_142bc02b1:
            int32_t rcx_6 = r15[1].d
            
            if (rbx u> rcx_6 + 1 || arg1[3].d u> rcx_6 - rbx + 1)
                rbx = rcx_6 - arg1[3].d + 1
            
            if (rbp_1 == 0 || rbx u<= rbp_1)
                *arg3 = 0
                *arg4 = 0
            else
                int32_t rbx_4 = rbx - rbp_1
                *arg4 = rbx_4
                int64_t rcx_7 = arg1[5]
                
                if (rcx_7 == 0)
                    rax_3 = sub_142b97060(r15, arg1[3].d - 1 + rbp_1, arg6)
                    
                    if (rax_3 == 0)
                        return sub_142b96670(r15, rbx_4, arg3)
                    
                    return rax_3
                
                *arg3 = rcx_7 - 1 + zx.q(rbp_1)
        else
            rax_3 =
                sub_142b97060(r15, *(arg1 + 0xc) + arg1[1].d + zx.d(*(arg1 + 0x14)) * rdi.d, arg6)
            
            if (rax_3 != 0)
                return rax_3
            
            rbp_1 = 0
            char arg_8[0x8]
            int32_t rax_4
            int512_t zmm0
            rax_4, zmm0 = sub_142b96990(*arg1, &arg_8, zx.d(*(arg1 + 0x14)), arg5)
            r10 = rax_4
            
            if (rax_4 == 0)
                uint64_t rdx_4 = zx.q(*(arg1 + 0x14))
                int64_t rcx_3 = 0
                
                if (rdx_4 != 0)
                    do
                        uint32_t rax_5 = zx.d(arg_8[rcx_3])
                        rcx_3 += 1
                        rbp_1 = rbp_1 << 8 | rax_5
                    while (rcx_3 s< rdx_4)
            
            if (r10 == 0)
                if (rbp_1 != 0)
                    do
                        rdi = zx.q(rdi.d + 1)
                        rbx = 0
                        int32_t rax_6
                        rax_6, zmm0 = sub_142b96990(*arg1, &arg_8, zx.d(*(arg1 + 0x14)), zmm0)
                        r10 = rax_6
                        
                        if (rax_6 == 0)
                            uint64_t rdx_6 = zx.q(*(arg1 + 0x14))
                            int64_t rcx_5 = 0
                            
                            if (rdx_6 != 0)
                                do
                                    uint32_t rax_7 = zx.d(arg_8[rcx_5])
                                    rcx_5 += 1
                                    rbx = rbx << 8 | rax_7
                                while (rcx_5 s< rdx_6)
                        
                        if (rbx != 0)
                            break
                    while (rdi.d u< arg1[2].d)
                
                goto label_142bc02b1
        return r10

return 6
