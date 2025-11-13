// 函数: sub_1406bb910
// 地址: 0x1406bb910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t* rsi = nullptr
int32_t* var_48 = nullptr
int32_t rdi = 0
int32_t r13 = 0
int32_t var_3c = 0
int32_t r15 = 0
void* i = avcodec_get_hw_config(arg1, 0)

if (i == 0)
    *arg2 = 0xffffffff
else
    do
        int32_t r12_1 = *(i + 8)
        
        if ((*(i + 4) & 1) != 0)
            int64_t rbx_1 = sx.q(rdi)
            rdi = (rbx_1 + 1).d
            
            if (rdi s> r13)
                sub_1406105e0(&var_48)
                r13 = var_3c
                rsi = var_48
            
            rsi[rbx_1] = r12_1
        
        r15 += 1
        i = avcodec_get_hw_config(arg1, zx.q(r15))
    while (i != 0)
    
    if (rdi == 0)
        *arg2 = 0xffffffff
    else
        int32_t* rcx_2 = rsi
        void* rdx_2 = &rsi[sx.q(rdi)]
        
        if (rsi != rdx_2)
            while (*rcx_2 != 2)
                rcx_2 = &rcx_2[1]
                
                if (rcx_2 == rdx_2)
                    goto label_1406bb9d4
        
        if (rsi == rdx_2 || *arg2 s>= 1)
        label_1406bb9d4:
            int32_t* rax_1 = rsi
            
            if (rsi != rdx_2)
                while (*rax_1 != 6)
                    rax_1 = &rax_1[1]
                    
                    if (rax_1 == rdx_2)
                        goto label_1406bb9ee
            
            if (rsi == rdx_2 || *arg2 s>= 2)
            label_1406bb9ee:
                int32_t* rax_2 = rsi
                int32_t rcx_3
                
                if (rsi == rdx_2)
                label_1406bba04:
                    rcx_3 = *arg2
                label_1406bba0a:
                    int32_t rcx_4
                    
                    if (rcx_3 s>= 4)
                        rcx_4 = rcx_3 + 1
                    else
                        rcx_4 = 4
                    
                    *arg2 = rcx_4
                    
                    if (rcx_4 - 4 s>= rdi)
                        *arg2 = 0xffffffff
                    else
                        rbp = rsi[sx.q(rcx_4) - 4]
                else
                    while (*rax_2 != 9)
                        rax_2 = &rax_2[1]
                        
                        if (rax_2 == rdx_2)
                            goto label_1406bba04
                    
                    rcx_3 = *arg2
                    
                    if (rcx_3 s>= 3)
                        goto label_1406bba0a
                    
                    *arg2 = 3
                    rbp = *rax_2
            else
                *arg2 = 2
                rbp = *rax_1
        else
            *arg2 = 1
            rbp = *rcx_2

if (rsi != 0)
    sub_140a74f90(rsi)

return zx.q(rbp)
