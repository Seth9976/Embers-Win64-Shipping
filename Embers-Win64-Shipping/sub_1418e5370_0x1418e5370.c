// 函数: sub_1418e5370
// 地址: 0x1418e5370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rbx = data_143efb568
int64_t* rsi = arg5
int64_t rdi = rbx
int64_t rcx

if (rax == 0)
    rcx = 0
else
    uint32_t rax_1 = GetCurrentThreadId()
    rbx = data_143efb568
    rax = data_143de5480
    rcx.b = rax_1 != data_143de5470

int64_t rcx_1

if (*(rdi + (rcx << 2)) != 1)
    if (rax == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470

int64_t r12

if (*(rdi + (rcx << 2)) == 1 || *(rbx + (rcx_1 << 2)) == 2)
    r12.b = 1
else
    r12.b = 0

int32_t* rbx_1 = *arg4
void* r13 = &rbx_1[sx.q(arg4[1].d) * 0xa]
int64_t result

if (rbx_1 == r13)
    result = sx.q(arg3)
    rsi[result + 0x14] = arg4
else
    do
        if (r12.b == 0)
        label_1418e54f8:
            arg5.d = arg2
        label_1418e550e:
            sub_140d42420(rsi, rbx_1, &arg5)
        else
            int64_t r9 = sx.q(*rbx_1)
            int32_t* rcx_6
            
            if (rsi[0xb].d == *(rsi + 0x84))
            label_1418e548e:
                rcx_6 = nullptr
            else
                void* r8 = &rsi[0x11]
                void* rcx_3 = *(r8 + 8)
                
                if (rcx_3 != 0)
                    r8 = rcx_3
                
                int32_t rax_5 = *(r8 + (((sx.q(rsi[0x13].d) - 1) & r9) << 2))
                
                if (rax_5 == 0xffffffff)
                label_1418e548e_1:
                    rcx_6 = nullptr
                else
                    while (true)
                        rcx_6 = (sx.q(rax_5) << 4) + rsi[0xa]
                        
                        if (*rcx_6 == r9.d)
                            break
                        
                        rax_5 = rcx_6[2]
                        
                        if (rax_5 == 0xffffffff)
                            goto label_1418e548e_2
                    
                    if (rax_5 == 0xffffffff)
                    label_1418e548e_2:
                        rcx_6 = nullptr
            
            void* rax_6 = &rcx_6[1]
            
            if (rcx_6 == 0)
                rax_6 = nullptr
            
            if (rax_6 == 0)
                if (rbx_1[1].w == 0xffff || rsi[1].d == *(rsi + 0x34))
                    goto label_1418e54f8
                
                void* rcx_7 = rsi[8]
                void* r8_1 = &rsi[7]
                
                if (rcx_7 != 0)
                    r8_1 = rcx_7
                
                int32_t rdx_7 = *(r8_1 + (((sx.q(rsi[9].d) - 1) & r9) << 2))
                int32_t rax_8 = rdx_7
                
                if (rdx_7 == 0xffffffff)
                    goto label_1418e54f8
                
                int64_t r10_1 = *rsi
                int32_t* r8_4
                
                while (true)
                    r8_4 = (sx.q(rax_8) << 4) + r10_1
                    
                    if (*r8_4 == r9.d)
                        break
                    
                    rax_8 = r8_4[2]
                    
                    if (rax_8 == 0xffffffff)
                        goto label_1418e54f8
                
                if (rax_8 == 0xffffffff || r8_4 == 0 || r8_4 == -4)
                    goto label_1418e54f8
                
                int32_t rdi_1 = 0
                void* rcx_8
                
                if (rdx_7 != 0xffffffff)
                    while (true)
                        int64_t rcx_10 = sx.q(rdx_7)
                        int64_t rax_11 = rcx_10 * 2
                        
                        if (*(r10_1 + (rax_11 << 3)) == r9.d)
                            if (rdx_7 != 0xffffffff)
                                rdi_1 = *(r10_1 + rcx_10 * 0x10 + 4)
                                sub_1418ebff0(rsi, rdx_7)
                            
                            break
                        
                        rdx_7 = *(r10_1 + (rax_11 << 3) + 8)
                        
                        if (rdx_7 == 0xffffffff)
                            rcx_8 = &rsi[0xa]
                            arg5.d = arg2
                            goto label_1418e550e_1
                
                rcx_8 = &rsi[0xa]
                arg5.d = rdi_1 | arg2
            label_1418e550e_1:
                sub_140d42420(rcx_8, rbx_1, &arg5)
            else
                *rax_6 |= arg2
        
        rbx_1 = &rbx_1[0xa]
    while (rbx_1 != r13)
    
    result = sx.q(arg3)
    rsi[result + 0x14] = arg4

return result
