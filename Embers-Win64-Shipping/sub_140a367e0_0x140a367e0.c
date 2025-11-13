// 函数: sub_140a367e0
// 地址: 0x140a367e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((&arg1[-1]).d)

char* rdx = arg1
int128_t* rbx = arg2
void* r14_1 = &arg1[sx.q(arg3)]
void* rbp_1 = sx.q(arg4) + arg2
void* rax_1 = rbp_1 - 0x20

if (arg4 != 0)
    if (arg3 != 0)
        while (true)
            uint32_t r8 = zx.d(*rdx)
            rdx = &rdx[1]
            uint64_t rdi_2 = zx.q(r8) u>> 4
            
            if (rdi_2 == 0xf)
                int32_t r10_2 = 0
                int32_t rax_7 = 0
                
                if (rdx u< r14_1 - 0xf)
                    uint32_t i
                    
                    do
                        i = zx.d(*rdx)
                        rdx = &rdx[1]
                        rax_7 += i
                        
                        if (rdx u>= r14_1 - 0xf)
                            r10_2 = -2
                            break
                    while (i == 0xff)
                else
                    r10_2 = -1
                
                rdi_2 = zx.q(rax_7) + 0xf
                
                if (r10_2 == 0xffffffff)
                    break
                
                if (rdi_2 + rbx u< rbx)
                    break
                
                if (&rdx[rdi_2] u< rdx)
                    break
                
                goto label_140a3695a
            
            int32_t rcx
            rcx.b = rbx u<= rax_1
            int32_t rax_3
            rax_3.b = rdx u< r14_1 - 0x10
            void* rcx_2
            void* rbx_1
            uint64_t r8_1
            uint64_t r10_1
            
            if ((rax_3 & rcx) == 0)
            label_140a3695a:
                void* rcx_3 = rdi_2 + rbx
                void* r9_1
                
                if (rcx_3 u<= rbp_1 - 0xc)
                    r9_1 = &rdx[rdi_2]
                
                if (rcx_3 u> rbp_1 - 0xc || r9_1 u> r14_1 - 8)
                    if (&rdx[rdi_2] != r14_1)
                        break
                    
                    if (rcx_3 u> rbp_1)
                        break
                    
                    memmove(rbx, rdx, rdi_2.d)
                    return zx.q(rbx.d + rdi_2.d - arg2.d)
                
                int64_t rdx_2 = rdx - rbx
                
                do
                    *rbx = *(rbx + rdx_2)
                    rbx += 8
                while (rbx u< rcx_3)
                
                r10_1 = zx.q(*r9_1)
                rdx = r9_1 + 2
                rbx_1 = rcx_3
                rcx_2 = rcx_3 - r10_1
                r8_1 = zx.q(r8) & 0xf
            label_140a369a2:
                
                if (r8_1 == 0xf)
                    goto label_140a369ac
            else
                void* rdx_1 = &rdx[rdi_2]
                r8_1 = zx.q(r8) & 0xf
                *rbx = *rdx
                rbx_1 = rbx + rdi_2
                r10_1 = zx.q(*rdx_1)
                rcx_2 = rbx_1 - r10_1
                rdx = rdx_1 + 2
                
                if (r8_1 != 0xf)
                    if (r10_1 u< 8 || rcx_2 u< arg2)
                        goto label_140a369a2
                    
                    *rbx_1 = *rcx_2
                    *(rbx_1 + 8) = *(rcx_2 + 8)
                    *(rbx_1 + 0x10) = *(rcx_2 + 0x10)
                    rbx = rbx_1 + 4 + r8_1
                    rax_1 = rbp_1 - 0x20
                    continue
                
            label_140a369ac:
                uint64_t r8_2 = 0
                uint32_t i_1
                
                do
                    i_1 = zx.d(*rdx)
                    rdx = &rdx[1]
                    r8_2 = zx.q(r8_2.d + i_1)
                    
                    if (rdx u>= r14_1 - 4)
                        break
                while (i_1 == 0xff)
                r8_1 = r8_2 + 0xf
                
                if (rdx u>= r14_1 - 4)
                    break
                
                if (r8_1 + rbx_1 u< rbx_1)
                    break
            
            if (rcx_2 u< arg2)
                break
            
            void* r9_3 = r8_1 + 4 + rbx_1
            void* rcx_5
            
            if (r10_1 u>= 8)
                rcx_5 = rcx_2 + 8
                *rbx_1 = *rcx_2
            else
                *rbx_1 = 0
                *rbx_1 = *rcx_2
                *(rbx_1 + 1) = *(rcx_2 + 1)
                *(rbx_1 + 2) = *(rcx_2 + 2)
                *(rbx_1 + 3) = *(rcx_2 + 3)
                void* rcx_4 = rcx_2 + zx.q(*((r10_1 << 2) + 0x142e51b30))
                *(rbx_1 + 4) = *rcx_4
                rcx_5 = rcx_4 - sx.q(*((r10_1 << 2) + 0x142e51b50))
            
            void* i_3 = rbx_1 + 8
            
            if (r9_3 u<= rbp_1 - 0xc)
                *i_3 = *rcx_5
                
                if (r8_1 + 4 u> 0x10)
                    void* rbx_3 = i_3 + 8
                    void* rcx_6 = rcx_5 - rbx_3
                    
                    do
                        *rbx_3 = *(rbx_3 + rcx_6 + 8)
                        rbx_3 += 8
                    while (rbx_3 u< r9_3)
            else
                if (r9_3 u> rbp_1 - 5)
                    break
                
                if (i_3 u< rbp_1 - 7)
                    int64_t* i_2 = i_3
                    
                    do
                        *i_2 = *(i_2 + rcx_5 - i_3)
                        i_2 = &i_2[1]
                    while (i_2 u< rbp_1 - 7)
                    
                    void* rax_26 = rbp_1 - 7 - i_3
                    i_3 = rbp_1 - 7
                    rcx_5 += rax_26
                
                if (i_3 u< r9_3)
                    do
                        char rax_27 = *rcx_5
                        rcx_5 += 1
                        *i_3 = rax_27
                        i_3 += 1
                    while (i_3 u< r9_3)
                    
                    rbx = r9_3
                    rax_1 = rbp_1 - 0x20
                    continue
            
            rbx = r9_3
            rax_1 = rbp_1 - 0x20
        
        return zx.q(arg1.d - rdx.d - 1)
else if (arg3 == 1 && *arg1 == arg4.b)
    return 0

return 0xffffffff
