// 函数: sub_14261adf0
// 地址: 0x14261adf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rdi_1 = 0
int64_t var_58[0x2]

if (arg3 s> 0)
    int64_t i = 0
    
    do
        void* rsi_1 = *(arg2 + (i << 3))
        
        if (*(rsi_1 + 0x327) == 1)
            void* const* rax = zx.q(*(rsi_1 + 0x325))
            
            if (rax.b != 0 && rax.b != 6 && (*(rsi_1 + 0x2ac) & 0x10) != 0)
                float j = arg4.d f+ *(rsi_1 + 0x1f0)
                *(rsi_1 + 0x1f0) = j
                
                if (not(j < 0.5f))
                    int32_t rbx_1
                    
                    if (rdi_1 != 0)
                        int64_t rdx = sx.q(rdi_1)
                        void var_60
                        
                        if (j f> (*(&var_60 + (rdx << 3)))[0x3e].d)
                            rbx_1 = 0
                            int64_t rcx = 0
                            
                            if (rdi_1 s> 0)
                                while (not(j f>= *(var_58[rcx] + 0x1f0)))
                                    rbx_1 += 1
                                    rcx += 1
                                    
                                    if (rcx s>= rdx)
                                        break
                            
                            int32_t rcx_1 = 0 - rbx_1
                            int32_t rax_3 = rdi_1 - rbx_1
                            
                            if (rax_3 s< rcx_1)
                                rcx_1 = rax_3
                            
                            if (rcx_1 s> 0)
                                memmove(&var_58[sx.q(rbx_1 + 1)], &var_58[sx.q(rbx_1)], rcx_1 << 3)
                            
                            goto label_14261af28
                        
                        if (rdi_1 s< 1)
                            rbx_1 = rdi_1
                            goto label_14261af28
                    else
                        rbx_1 = 0
                    label_14261af28:
                        var_58[sx.q(rbx_1)] = rsi_1
                        rax = zx.q(rdi_1 + 1)
                        rdi_1 = 1
                        
                        if (rax.d s< 1)
                            rdi_1 = rax.d
        
        i += 1
    while (i s< sx.q(arg3))

if (rdi_1 s<= 0)
    return 

int64_t i_1 = 0

do
    int32_t* rbx_2 = var_58[i_1]
    int64_t* rcx_3 = *(rbx_2 + 0x270)
    *(*(arg1 + 0x2b18) + 8) = rcx_3
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))()
    
    sub_14262d880(rbx_2, *(arg1 + 0x2b18), arg1 + 0x6e0 + zx.q(*(rbx_2 + 0x2af)) * 0x220)
    i_1 += 1
    rbx_2[0x7c] = 0
while (i_1 s< sx.q(rdi_1))
