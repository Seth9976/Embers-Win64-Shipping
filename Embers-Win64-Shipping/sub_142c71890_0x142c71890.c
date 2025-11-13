// 函数: sub_142c71890
// 地址: 0x142c71890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r15 = 0
int32_t i = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x20)
char* r10 = arg1

do
    uint32_t rdx = zx.d(*r10)
    r10 = &r10[1]
    void* r8 = &var_90 + (zx.q(i) u>> 1 << 2)
    char rax_4 = 8 - ((i & 1) << 3).b
    i += 1
    *r8 |= rdx << rax_4
while (i s< 0x10)

int64_t r12 = -1
int64_t* r8_1 = &var_90
int32_t i_4 = -1
int32_t rcx_4 = 0
int32_t i_3 = 0xffffffff
int32_t rdi = -1
int32_t r14 = 0
int32_t var_b4 = 0

for (int32_t i_1 = 0; i_1 s< 8; )
    if (*r8_1 != 0)
        if (i_4 != 0xffffffff)
            if (rdi == 0xffffffff || rcx_4 s> r14)
                int64_t rax_5 = i_3.q
                rdi = rax_5.d
                r14 = rax_5:4.d
            
            i_4 = -1
            i_3 = 0xffffffff
    else if (i_4 != 0xffffffff)
        rcx_4 += 1
        int32_t var_b4_2 = rcx_4
    else
        rcx_4 = 1
        i_3 = i_1
        int32_t var_b4_1 = 1
        i_4 = i_1
    
    i_1 += 1
    r8_1 += 4

if (i_4 != 0xffffffff && (rdi == 0xffffffff || rcx_4 s> r14))
    int64_t rax_6 = i_3.q
    rdi = rax_6.d
    r14 = rax_6:4.d

if (rdi != 0xffffffff && r14 s< 2)
    rdi = -1

void var_70
void* rbx = &var_70
int64_t rsi = 0
int64_t result

while (true)
    if (rdi != 0xffffffff && r15 s>= rdi && r15 s< r14 + rdi)
        if (r15 == rdi)
            *rbx = 0x3a
            rbx += 1
        
        goto label_142c71a28
    
    if (rsi != 0)
        *rbx = 0x3a
        rbx += 1
    
    int64_t var_80
    void var_42
    
    if (rsi != 6 || rdi != 0 || (r14 != rsi.d && (r14 != 5 || var_80:4.d != 0xffff)))
        int32_t rax_8
        rax_8, arg4 = sub_142c564b0(rbx, 5, "%lx", zx.q(*(&var_90 + (rsi << 2))), arg4)
        rbx += sx.q(rax_8)
    label_142c71a28:
        r15 += 1
        rsi += 1
        
        if (rsi s< 8)
            continue
        else
            if (rdi == 0xffffffff || r14 + rdi != 8)
                goto label_142c71a48
            
        label_142c71a42:
            *rbx = 0x3a
            rbx += 1
        label_142c71a48:
            *rbx = 0
            
            if (rbx - &var_70 + 1 u<= arg3)
                result = arg2
                void* rdx_2 = &var_70
                char i_2
                
                do
                    i_2 = *rdx_2
                    *(result - &var_70 + rdx_2) = i_2
                    rdx_2 += 1
                while (i_2 != 0)
                break
    else if (sub_142c717c0(&arg1[0xc], rbx, &var_42 - rbx, arg4) != 0)
        do
            r12 += 1
        while (*(rbx + r12) != 0)
        
        rbx += r12
        
        if (r14 + rdi != 8)
            goto label_142c71a48
        
        goto label_142c71a42
    *_errno() = 0x1c
    result = 0
    break

__security_check_cookie(rax_1 ^ &var_d8)
return result
