// 函数: sub_142b6be20
// 地址: 0x142b6be20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg4)

if (arg1 == 0 || *(arg1 + 8) s<= 0)
    return 0

void* rdx_1 = sx.q(*(arg1 + 4)) + arg1
int32_t r9 = 0
int32_t r12 = 0
int32_t r13 = 0
void* var_58 = rdx_1
int32_t rdi = 0
int32_t rsi = 0
char arg_8
int32_t rax_1

if (arg2 != 0)
    arg_8 = arg8
    rax_1 = arg6
else
    if (r10.d s> 1)
        return 0
    
    if (r10.d != 1)
        rax_1 = arg6
        arg_8 = 1
        
        if (rax_1 s> 1)
            rax_1 = 1
    else
        rax_1 = 0
        arg_8 = 1

int64_t r8 = r10
int64_t r11_1 = sx.q(rax_1)
char* r14_1 = nullptr
char* r15_1 = nullptr
int64_t var_48_1 = r11_1

while (true)
    int64_t rax_3 = sx.q(r9)
    int32_t rdx_2 = *(rdx_1 + (rax_3 << 2))
    int32_t rdx_3 = rdx_2 & 0xffffff
    
    if (rdx_3 != 0)
        int32_t rax_5
        int32_t rcx
        
        if (arg2 s>= 0)
            rcx.b = rdi + rsi == 1
            rax_5.b = arg2 == 0
        
        if (arg2 s< 0 || rax_5 == rcx)
            r12 = rdx_3
            r13 = rdi + rsi
    
    char r8_1
    
    if (r15_1 s>= r8)
        if (r14_1 s>= r11_1)
            if (arg_8 == 0)
                int32_t rax_10 = rdi + rsi
                
                if (rax_10 s<= 0x1f)
                    return zx.q(neg.d(rax_10))
            
            break
        
        rdi += 1
        r8_1 = r14_1[arg5]
        r14_1 = &r14_1[1]
    else
        rsi += 1
        r8_1 = r15_1[arg3]
        r15_1 = &r15_1[1]
    
    int32_t rax_8 = sub_142b6b8c0(rdx_1 + (rax_3 << 2) + 4, rdx_2 u>> 0x18, r8_1)
    r9 = rax_8
    
    if (rax_8 == 0)
        break
    
    if (rax_8 u>= 0x1f0000)
        int32_t rcx_2
        int32_t rbx
        
        if (arg2 s>= 0)
            rcx_2.b = rdi + rsi == 1
            rbx.b = arg2 == 0
        
        if (arg2 s< 0 || rbx == rcx_2)
            r12 = r9
            r13 = rdi + rsi
        
        break
    
    rdx_1 = var_58
    r8 = r10
    r11_1 = var_48_1

if (r13 == 0)
    return 0

*arg7 = r12 & 0xff7fffff
return zx.q(r13)
