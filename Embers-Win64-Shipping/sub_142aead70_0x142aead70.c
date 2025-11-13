// 函数: sub_142aead70
// 地址: 0x142aead70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int128_t* rbx = arg1

if (*arg3 s> 0)
    return arg1

if (rbx == 0)
    int32_t rbp_1 = (rsi + 0x90).d
    
    if (arg2 s<= 0)
        rbp_1 = 0x90
    
    int128_t* rax_2 = sub_142a7dd00(sx.q(rbp_1))
    rbx = rax_2
    
    if (rax_2 == 0)
        *arg3 = 7
        return rax_2
    
    *rax_2 = data_14365b790
    __builtin_memset(&rax_2[1], 0, 0x80)
    *(rax_2 + 4) |= 1
    
    if (rbp_1 s> 0)
        *(rax_2 + 0x18) = rsi.d
        rbx[4].q = &rax_2[9]
    
    goto label_142aeaec6

if (*arg1 == 0x345ad82c)
    if ((arg1[1].b & 4) != 0)
        int64_t rdx = *(*(arg1 + 0x38) + 0x50)
        
        if (rdx != 0)
            rdx()
    
    int32_t rax_6 = *(rbx + 4) & 0xfffffffb
    *(rbx + 4) = rax_6
    
    if (rsi.d s<= *(rbx + 0x18))
        goto label_142aeaec6
    
    if ((rax_6.b & 2) != 0)
        sub_142a7dcd0(rbx[4].q)
        *(rbx + 0x18) = 0
    
    int64_t rax_7 = sub_142a7dd00(rsi)
    rbx[4].q = rax_7
    
    if (rax_7 != 0)
        *(rbx + 4) |= 2
        *(rbx + 0x18) = rsi.d
    label_142aeaec6:
        
        if (*arg3 s<= 0)
            *(rbx + 4) |= 4
            int64_t rcx_3 = rbx[4].q
            __builtin_memset(rbx + 0x48, 0, 0x48)
            rbx[1].q = 0
            __builtin_memset(rbx + 0x1c, 0, 0x1c)
            *(rbx + 8) = 0
            
            if (rcx_3 != 0)
                int64_t count = sx.q(*(rbx + 0x18))
                
                if (count.d s> 0)
                    memset(rcx_3, 0, count)
    else
        *arg3 = 7
else
    *arg3 = 1

return rbx
