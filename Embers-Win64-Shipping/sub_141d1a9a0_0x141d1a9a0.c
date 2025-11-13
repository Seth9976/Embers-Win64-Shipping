// 函数: sub_141d1a9a0
// 地址: 0x141d1a9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
uint64_t rdi = 0
int32_t rdx = 0
int128_t* rbp = nullptr
int32_t i = 0
int32_t r10 = 0
uint64_t var_68
__builtin_memset(&var_68, 0, 0x18)
void* r8 = arg1
int32_t var_4c = 0
int32_t r13 = 0
int32_t var_70 = 0
int32_t arg_18 = 0
int32_t rax = arg3[1].d
int32_t var_78 = 0

if (rax s> 0)
    int64_t r12_1 = 0
    
    do
        int32_t rax_3 = *(*(r8 + 0x268) + (sx.q(*(*arg4 + r12_1)) << 2))
        
        if (rax_3 + 1 s> i)
            do
                int64_t i_4 = sx.q(i)
                i = (i_4 + 1).d
                
                if (i s> r10)
                    int128_t* var_58
                    sub_1405c4e40(&var_58)
                    r10 = var_4c
                    rbp = var_58
                
                *(&rbp[i_4 * 2] + 0x14) = 0
                *(&rbp[i_4 * 2] + 0x1c) = 0
                rbp[i_4 * 2].d = i_4.d
                *(&rbp[i_4 * 2] + 4) = 0xffffffff
                *(&rbp[i_4 * 2] + 8) = 0
                rbp[i_4 * 2 + 1].d = 0
            while (rax_3 + 1 s> i)
            
            rdx = var_78
            r8 = arg1
            arg4 = arg_20
        
        rdx += 1
        r12_1 += 4
        var_78 = rdx
        *(&rbp[sx.q(rax_3) * 2] + 8) += 1
        rax = arg3[1].d
    while (rdx s< rax)

if (i s> 0)
    int64_t r14_2 = 0
    uint64_t i_5 = zx.q(i)
    uint64_t i_1
    
    do
        if (r14_2 != 0)
            *(&rbp[r14_2 * 2] + 4) = *(&rbp[r14_2 * 2] - 0x18) * 3 + *(&rbp[r14_2 * 2] - 0x1c)
        else
            *(&rbp[r14_2 * 2] + 4) = 0
        
        int32_t rax_9 = sub_141d1f690(r8, data_143f36fd0)
        r8 = arg1
        r14_2 += 1
        rbp[r14_2 * 2 + 1].d = rax_9 - 1
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rax = arg3[1].d

int32_t rax_11 = rax + arg5[1].d
arg5[1].d = rax_11

if (rax_11 s> *(arg5 + 0xc))
    sub_14083a7e0(arg5)

int32_t r11 = 0

if (i s> 0)
    int64_t r14_3 = 0
    
    do
        int32_t i_2 = 0
        
        if (arg3[1].d s> 0)
            int64_t r10_1 = 0
            int64_t r9 = 0
            int64_t rbx_4 = r14_3 * 0xc
            
            do
                if (r11 == *(*(arg1 + 0x268) + (sx.q(*(*arg_20 + r9)) << 2)))
                    int32_t* rcx_7 = *arg3
                    r14_3 += 1
                    int32_t* rdx_5 = *arg5 + rbx_4
                    rbx_4 += 0xc
                    *rdx_5 = *(rcx_7 + r10_1)
                    rdx_5[1] = *(rcx_7 + r10_1 + 4)
                    rdx_5[2] = *(rcx_7 + r10_1 + 8)
                
                i_2 += 1
                r9 += 4
                r10_1 += 0xc
            while (i_2 s< arg3[1].d)
            
            rdi = 0
        
        r11 += 1
    while (r11 s< i)
    
    r13 = 0
    
    if (i s> 0)
        sub_1405a51b0(&var_68, i)
        int32_t var_5c
        int32_t rcx_9 = var_5c
        int128_t* rbx_5 = rbp
        int32_t var_60
        r13 = var_60
        rdi = var_68
        arg_18 = rcx_9
        uint64_t i_6 = zx.q(i)
        uint64_t i_3
        
        do
            if (*(rbx_5 + 8) s> 0)
                int64_t rsi = sx.q(r13)
                r13 = (rsi + 1).d
                
                if (r13 s> rcx_9)
                    sub_1405c4e40(&var_68)
                    rcx_9 = var_5c
                    rdi = var_68
                
                int64_t rax_18 = rsi << 5
                *(rax_18 + rdi) = *rbx_5
                *(rax_18 + rdi + 0x10) = rbx_5[1]
            
            rbx_5 = &rbx_5[2]
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        arg_18 = rcx_9

*arg2 = rdi
arg2[1].d = r13
*(arg2 + 0xc) = arg_18

if (rbp != 0)
    sub_140a74f90(rbp)

int64_t rcx_12 = *arg_20

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return arg2
