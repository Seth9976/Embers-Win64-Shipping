// 函数: sub_1419c5250
// 地址: 0x1419c5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t rsi = zx.w(*(arg3 + 0xd))
int64_t rdx = *arg3
int32_t r8 = arg3[1].d
char rdi = *(arg3 + 0xf)
char r13 = *(arg3 + 0xe)
char var_2a = rdi
char var_29 = 0
int64_t var_38 = rdx
uint16_t var_2c = rsi
int32_t var_30 = r8
uint16_t rax_2
char rcx_1

if (arg5 == 1)
    char rax_1 = sub_1419bdff0(arg1 + 0xa8, &var_38)
    rcx_1 = *(arg3 + 0xc)
    *arg2 = rax_1
    rax_2 = zx.w(rdi) & 1
else if (arg5 != 2)
    void* rbp_1 = arg1 + 0x10
    void* rax_4 = *(rbp_1 + 0x80)
    int64_t r15_1 = sx.q(*(rbp_1 + 0x88))
    void* r9 = rbp_1
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int128_t* rcx_4 = r15_1 << 4
    void* rax_5 = r9
    void* rcx_5 = rcx_4 + r9
    int32_t rax_7
    
    if (r9 != rcx_5)
        while (*rax_5 != rdx || *(rax_5 + 0xc) != rsi || *(rax_5 + 8) != r8
                || *(rax_5 + 0xe) != rdi)
            rax_5 += 0x10
            
            if (rax_5 == rcx_5)
                goto label_1419c536f
        
        rax_7 = ((rax_5 - r9) s>> 4).d
    
    if (r9 == rcx_5 || rax_7 == 0xffffffff)
    label_1419c536f:
        int32_t rax_8 = (r15_1 + 1).d
        *(rbp_1 + 0x88) = rax_8
        
        if (rax_8 s> *(rbp_1 + 0x8c))
            sub_14088f800(rbp_1, r15_1.d)
        
        void* rax_9 = *(rbp_1 + 0x80)
        
        if (rax_9 != 0)
            rbp_1 = rax_9
        
        *(rcx_4 + rbp_1) = var_38.o
        rax_7 = r15_1.d
    
    rcx_1 = *(arg3 + 0xc)
    *arg2 = rax_7.b
    rax_2 = zx.w(rdi) & 1
else
    char rax_3 = sub_1419be0b0(arg1 + 0xd8, &var_38)
    rcx_1 = *(arg3 + 0xc)
    *arg2 = rax_3
    rax_2 = zx.w(rdi) & 1

arg2[1] = rcx_1
arg2[2] = r13
*(arg2 + 6) = rax_2
arg2[3] = arg4
*(arg2 + 4) = rsi
return arg2
