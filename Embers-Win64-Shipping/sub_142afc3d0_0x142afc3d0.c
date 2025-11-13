// 函数: sub_142afc3d0
// 地址: 0x142afc3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x58)
int32_t r10 = arg4
char rax_1 = *(arg1 + 0xfc)
int32_t r9 = 0
uint16_t i_1 = (zx.w(*(arg1 + 0xfd)) & 1) << 0xa | 0x40
int64_t var_48 = r11
uint16_t i_2 = i_1
int32_t rbx = 0
int32_t var_60 = 0

if (rax_1 != 0)
    int64_t rdx_2 = *(arg1 + 0xe8)
    uint32_t rcx_3 = zx.d(rax_1)
    int64_t var_58_1 = rdx_2
    int32_t rbp_2
    
    if (rcx_3 == 2)
        rbp_2 = 3
    else if (rcx_3 == 3)
        rbp_2 = 4
    else if (rcx_3 == 9)
        rbp_2 = 3
    else
        rbp_2 = 2
    
    int16_t rax_8 = 0
    i_1 u>>= 1
    int16_t var_68_1 = 0
    uint16_t i_3 = i_1
    int32_t var_60_1 = rbp_2
    
    do
        int16_t rcx_7 = *(r11 + (zx.q(rax_8) << 1))
        
        if (rcx_7 u<= i_1)
            rbx += 0x400
        else
            int16_t i = 0
            int64_t r12_2 = r11 + (zx.q(rcx_7) << 2)
            int64_t var_50_1 = r12_2
            
            do
                int32_t rsi_2 = *(r12_2 + (zx.q(i) << 2))
                
                if (rsi_2 == 0)
                    rbx += 0x10
                else
                    uint32_t rsi_3 = rsi_2 u>> 0x10
                    char* rdi_5 = zx.q((zx.d(rsi_2.w) * rbp_2) << 4) + rdx_2
                    
                    if (r10 u> 5)
                        *arg5 = 5
                        return arg5
                    
                    switch (r10)
                        case 0
                            do
                                if ((rsi_3.b & 1) != 0)
                                    arg2[1](*arg2, zx.q(rbx))
                                    rdi_5 = &rdi_5[zx.q(rbp_2)]
                                else if (arg3 == 1)
                                    void* rcx_9
                                    rcx_9.b = 0
                                    
                                    if (rbp_2 == 2)
                                        goto label_142afc60e
                                    
                                    if (rbp_2 - 2 == arg3)
                                        goto label_142afc605
                                    
                                    if (rbp_2 - 2 - arg3 == arg3)
                                        rcx_9 = zx.q(*rdi_5)
                                        rdi_5 = &rdi_5[1]
                                    label_142afc605:
                                        rcx_9.b |= *rdi_5
                                        rdi_5 = &rdi_5[1]
                                    label_142afc60e:
                                        char rax_18 = rdi_5[1] | *rdi_5
                                        rdi_5 = &rdi_5[2]
                                        rcx_9.b |= rax_18
                                        
                                        if (rcx_9.b != 0)
                                            arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            rdx_2 = var_58_1
                            r10 = arg4
                        case 1
                            do
                                if (((rsi_3.b & 1) != 0 || arg3 == 1) && *rdi_5 u>= 0x100)
                                    arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rdi_5 = &rdi_5[2]
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            r12_2 = var_50_1
                            rdx_2 = var_58_1
                            r10 = arg4
                        case 2
                            do
                                if (((rsi_3.b & 1) != 0 || arg3 == 1) && zx.d(*rdi_5) - 0x81 u<= 1)
                                    arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rdi_5 = &rdi_5[3]
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            rdx_2 = var_58_1
                            r10 = arg4
                        case 3
                            do
                                if (((rsi_3.b & 1) != 0 || arg3 == 1)
                                        && zx.d(*rdi_5) - 0x8140 u<= 0x6ebc)
                                    arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rdi_5 = &rdi_5[2]
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            rdx_2 = var_58_1
                            r10 = arg4
                        case 4
                            do
                                if ((rsi_3.b & 1) != 0 || arg3 == 1)
                                    int16_t rcx_15 = *rdi_5
                                    
                                    if (0x5e5f + rcx_15 u<= 0x5d5d)
                                        rcx_15.b += 0x5f
                                        
                                        if (rcx_15.b u<= 0x5d)
                                            arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rdi_5 = &rdi_5[2]
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            rbp_2 = var_60_1
                            r12_2 = var_50_1
                            rdx_2 = var_58_1
                            r10 = arg4
                        case 5
                            do
                                if ((rsi_3.b & 1) != 0 || arg3 == 1)
                                    int16_t rcx_17 = *rdi_5
                                    
                                    if (0x5e5f + rcx_17 u<= 0x5c5d)
                                        rcx_17.b += 0x5f
                                        
                                        if (rcx_17.b u<= 0x5d)
                                            arg2[1](*arg2, zx.q(rbx))
                                
                                rsi_3 u>>= 1
                                rdi_5 = &rdi_5[2]
                                rbx += 1
                            while ((rbx.b & 0xf) != 0)
                            
                            rbp_2 = var_60_1
                            r12_2 = var_50_1
                            rdx_2 = var_58_1
                            r10 = arg4
                
                i += 1
            while (i u< 0x40)
            
            i_1 = i_3
            r11 = var_48
        
        rax_8 = var_68_1 + 1
        var_68_1 = rax_8
    while (rax_8 u< i_2)
else
    int64_t r12_1 = *(arg1 + 0xe8)
    int16_t rsi_1 = 0xf00
    
    if (arg3 != 0)
        rsi_1 = 0x800
    
    do
        int16_t rcx = *(r11 + (zx.q(r9.w) << 1))
        
        if (rcx u<= i_1)
            rbx += 0x400
        else
            int64_t j_1 = 0x40
            int16_t* rbp_1 = r11 + (zx.q(rcx) << 1)
            int64_t j
            
            do
                uint64_t rax_4 = zx.q(*rbp_1)
                
                if (rax_4.d == 0)
                    rbx += 0x10
                else
                    int16_t* rdi_1 = r12_1 + (rax_4 << 1)
                    
                    do
                        int16_t rax_5 = *rdi_1
                        rdi_1 = &rdi_1[1]
                        
                        if (rax_5 u>= rsi_1)
                            arg2[1](*arg2, zx.q(rbx))
                        
                        rbx += 1
                    while ((rbx.b & 0xf) != 0)
                
                rbp_1 = &rbp_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            r9 = var_60
            i_1 = i_2
            r11 = var_48
        
        r9.w += 1
        var_60 = r9
    while (r9.w u< i_1)

return sub_142b6c560(arg1, arg2, arg3, arg4, arg5)
