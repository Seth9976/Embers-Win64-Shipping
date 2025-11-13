// 函数: sub_140a31300
// 地址: 0x140a31300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg2 != 0.0))
    arg2 = (zx.o(0)).q

int16_t* var_28
sub_140a2e390(&var_28, u"%f", arg2)
int32_t var_20
int32_t rbx = var_20
int16_t* rdi = var_28
int32_t var_1c

if (rbx s> 1)
    wint_t _C = *rdi
    int16_t* rsi_1 = rdi
    
    if (_C == 0x2d || _C == 0x2b)
        _C = rdi[1]
        rsi_1 = &rdi[1]
    
    int64_t rbp
    rbp.b = 0
    
    while (_C != 0)
        if (_C != 0x2e)
            if (iswdigit(_C) == 0)
                goto label_140a3152e
        else
            if (rbp.b != 0)
                goto label_140a3152e
            
            rbp.b = 1
        
        _C = rsi_1[1]
        rsi_1 = &rsi_1[1]
    
    int32_t rax_2 = rbx - 1
    int32_t rsi_2 = -1
    int32_t rbp_1 = -1
    
    if (rbx == 0)
        rax_2 = 0
    
    int32_t rax_3 = rax_2 - 1
    int64_t rcx_2 = sx.q(rax_3)
    
    if (rax_2 - 1 s>= 0)
        int64_t temp1_1
        
        do
            int16_t rdx_1 = rdi[rcx_2]
            
            if (rdx_1 == 0x2e)
                rbp_1 = rax_3
                
                if (rsi_2 s>= rax_3)
                    rax_3 = rsi_2
                
                rsi_2 = rax_3
                break
            
            if (rsi_2 == 0xffffffff && rdx_1 != 0x30)
                rsi_2 = rax_3 + 1
            
            rax_3 -= 1
            temp1_1 = rcx_2
            rcx_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    int32_t rcx_3 = rbx - 1
    
    if (rbx == 0)
        rcx_3 = 0
    
    int32_t rcx_4 = rcx_3 - rsi_2
    int32_t rax_4 = rbx - 1
    
    if (rbx == 0)
        rax_4 = 0
    
    int32_t rax_5 = rax_4 - rsi_2
    
    if (rcx_4 s>= 0)
        if (rcx_4 s< rax_5)
            rax_5 = rcx_4
        
        if (rax_5 != 0)
            rbx -= rax_5
            
            if (rbx != rsi_2)
                memmove(&rdi[sx.q(rsi_2)], &rdi[sx.q(rax_5 + rsi_2)], (rbx - rsi_2) * 2)
            
            var_20 = rbx
    
    if (arg3 s> 0)
        if (rsi_2 == rbp_1)
            int32_t rsi_3 = rbx - 1
            
            if (rbx s<= 0)
                rsi_3 = 0
            
            int32_t rbx_1
            rbx_1.b = rbx s<= 0
            rbx += rbx_1 + 1
            var_20 = rbx
            
            if (rbx s> var_1c)
                sub_140594770(&var_28)
                rbx = var_20
                rdi = var_28
            
            *(rdi + (sx.q(rsi_3) << 1)) = 0x2e
        
        int32_t rax_9 = rbx - 1
        
        if (rbx == 0)
            rax_9 = 0
        
        int32_t i_2 = arg3 + 1 + rbp_1 - rax_9
        
        if (i_2 s> 0)
            int32_t rax_10 = rbx - 1
            
            if (rbx == 0)
                rax_10 = 0
            
            int32_t rdx_5 = i_2 + 1 + rax_10
            
            if (rdx_5 s> var_1c)
                sub_1405947f0(&var_28, rdx_5)
                rbx = var_20
                rdi = var_28
            
            if (i_2 s> 0)
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    int32_t rsi_5 = rbx - 1
                    
                    if (rbx s<= 0)
                        rsi_5 = 0
                    
                    int32_t rbx_3
                    rbx_3.b = rbx s<= 0
                    rbx += rbx_3 + 1
                    
                    if (rbx s> var_1c)
                        sub_140594770(&var_28)
                        rdi = var_28
                    
                    *(rdi + (sx.q(rsi_5) << 1)) = 0x30
                    i = i_1
                    i_1 -= 1
                while (i != 1)

label_140a3152e:
*arg1 = rdi
*(arg1 + 0xc) = var_1c
arg1[1].d = rbx
return arg1
