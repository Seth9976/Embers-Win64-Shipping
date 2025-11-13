// 函数: sub_142a261e0
// 地址: 0x142a261e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rax_2 = *(arg2 + 8)
void* r11 = arg1
uint64_t r13 = 0
int32_t r15 = arg4
void* r9 = arg2
int64_t* var_128 = arg3
int32_t rdx = *(arg2 + 0xc)
uint64_t r12 = zx.q(1 << rdx.b)
int32_t rax_4 = *(r11 + 0x368) * r12.d
int32_t rdx_1 = 1 << rax_2.b
int64_t rax_5 = *(r9 + 0x10)
int64_t r14 = 0
int32_t var_108
__builtin_memset(&var_108, 0, 0x80)
int32_t var_13c = r12.d
int64_t rax_7 = sx.q(r12.d) << 2
int32_t i_2 = 0
int32_t var_e8
int32_t var_c8
int32_t var_a8
char var_88[0x40]
int32_t i

do
    int32_t rax_8 = *(r11 + 0x35c)
    int32_t rcx_2 = r15 + r13.d
    
    if (rcx_2 s>= rax_8)
        break
    
    int32_t rbx_1 = *(r11 + 0x364)
    int32_t r12_1 = 0
    int32_t var_178_1 = 0
    int64_t* rax_9 = arg3
    int32_t var_170_1 = 0
    int32_t j = 0
    int64_t* var_130_1 = rax_9
    int32_t var_144_1 = rbx_1
    
    do
        int32_t r11_2 = arg5 + j
        
        if (r11_2 s>= rbx_1)
            break
        
        char* r8 = *rax_9
        char rdx_3 = *r8
        int32_t rsi_1
        
        if (r8[3] == 0 || r8[8] s<= 0)
            rsi_1 = 0
        else
            rsi_1 = 1
        
        uint64_t rcx_3 = zx.q(rdx_3)
        int32_t rax_12
        
        if (*(rcx_3 + 0x143604560) u<= 1)
            rax_12 = 1
        else
            rax_12.b = (j & (zx.d(*(rcx_3 + 0x143604530)) - 1)) == 0
        
        int32_t r10_1
        
        if (rsi_1 == 0 || rax_12 != 0)
            r10_1 = 0
        else
            r10_1 = rax_12 + 1
        
        int32_t rax_15
        
        if (*(rcx_3 + 0x143604550) u<= 1)
            rax_15 = 1
        else
            rax_15.b = (r13.d & (zx.d(*(rcx_3 + 0x143604540)) - 1)) == 0
        
        int32_t rdi_1
        
        if (rsi_1 == 0 || rax_15 != 0)
            rdi_1 = 0
        else
            rdi_1 = rax_15 + 1
        
        char r9_1 = *(sx.q(*(r9 + 0xc))
            + ((sx.q(*(r9 + 8)) + ((zx.q(r8[2]) + (zx.q(rdx_3) << 2)) << 1)) << 1) + 0x143604720)
        int32_t rbx_2
        
        if (rax_2 == 0 || r11_2 != rbx_1 - 1)
            rbx_2 = 0
        else
            rbx_2 = 1
        
        int32_t r11_3
        
        if (rdx == 0 || rcx_2 != rax_8 - 1)
            r11_3 = 0
        else
            r11_3 = 1
        
        char r8_1 = *(arg1 + sx.q(*((zx.q(r8[1]) << 2) + 0x143603578))
            + ((sx.q(r8[8]) + (sx.q(r8[4]) << 2)) << 1) + 0x1060)
        int32_t rax_26 = j s>> rax_2.b
        var_88[sx.q(i_2 + rax_26)] = r8_1
        
        if (r8_1 != 0)
            bool cond:6_1
            
            if (r9_1 == 3)
                if (r10_1 == 0 && (r9_1 & rax_26.b) == 0)
                    int32_t rdx_8 = 1 << rax_26.b
                    
                    if (rbx_2 != 0)
                        r12_1 |= rdx_8
                    else
                        var_178_1 |= rdx_8
                
                if (rdi_1 == 0)
                    cond:6_1 = ((r13.d s>> rdx.b).b & 3) != 0
                label_142a264af:
                    
                    if (not(cond:6_1))
                        int32_t rax_27 = 1 << rax_26.b
                        
                        if (r11_3 != 0)
                            *(&var_108 + r14) |= rax_27
                        else
                            *(&var_e8 + r14) |= rax_27
            else if (r9_1 != 2)
                if (r10_1 == 0)
                    if (r9_1 == 1 || (rax_26.b & 3) == 0)
                        r12_1 |= 1 << rax_26.b
                    else
                        var_170_1 |= 1 << rax_26.b
                
                if (rdi_1 == 0)
                    if (r9_1 == 1 || ((r13.d s>> rdx.b).b & 3) == 0)
                        *(&var_108 + r14) |= 1 << rax_26.b
                    else
                        *(&var_a8 + r14) |= 1 << rax_26.b
                
                if (rsi_1 == 0 && r9_1 u< 1 && rbx_2 == 0)
                    *(&var_c8 + r14) |= 1 << rax_26.b
            else
                if (r10_1 == 0 && (rax_26.b & 1) == 0)
                    int32_t rdx_11 = 1 << rax_26.b
                    
                    if (rbx_2 != 0)
                        r12_1 |= rdx_11
                    else
                        var_178_1 |= rdx_11
                
                if (rdi_1 == 0)
                    cond:6_1 = ((r13.d s>> rdx.b).b & 1) != 0
                    goto label_142a264af
        
        j += rdx_1
        r9 = arg2
        rbx_1 = var_144_1
        rax_9 = &var_130_1[sx.q(rdx_1)]
        var_130_1 = rax_9
    while (j s< 8)
    
    int32_t r8_2
    r8_2.b = arg5 == 0
    int32_t r8_3 = not.d(r8_2)
    sub_142a25560(*(arg2 + 0x10), zx.q(*(arg2 + 0x18)), r8_3 & var_178_1, r8_3 & r12_1, 
        r8_3 & var_170_1, *(&var_c8 + r14), arg1 + 0x460, &var_88[sx.q((r13 << 3).d)])
    r9 = arg2
    r12 = zx.q(var_13c)
    r13 = zx.q(r13.d + r12.d)
    r14 += rax_7
    r15 = arg4
    r11 = arg1
    *(arg2 + 0x10) += sx.q(*(arg2 + 0x18) << 3)
    arg3 = &var_128[sx.q(rax_4)]
    var_128 = arg3
    i = i_2 + (r12 << 3).d
    i_2 = i
while (i s< 0x40)
int64_t rbx_3 = 0
*(r9 + 0x10) = rax_5
int32_t rdi_3 = neg.d(r15)
int32_t i_1

do
    i_1 = *(r11 + 0x35c)
    
    if (r15 s>= i_1)
        break
    
    uint32_t rdx_26
    
    if (rdx == 0 || r15 != i_1 - 1)
        rdx_26 = *(&var_c8 + rbx_3)
    else
        rdx_26 = 0
    
    uint32_t r8_6
    uint32_t r9_4
    uint32_t r10_2
    
    if (r15 != 0)
        r8_6 = *(&var_e8 + rbx_3)
        r9_4 = *(&var_108 + rbx_3)
        r10_2 = *(&var_a8 + rbx_3)
    else
        r8_6 = 0
        r9_4 = 0
        r10_2 = 0
    
    sub_142a25250(*(arg2 + 0x10), *(arg2 + 0x18), r8_6, r9_4, r10_2, rdx_26, r11 + 0x460, 
        &var_88[sx.q((rdi_3 + r15) << 3)])
    r15 += r12.d
    rbx_3 += rax_7
    r11 = arg1
    *(arg2 + 0x10) += sx.q(*(arg2 + 0x18) << 3)
    i_1 = rdi_3 + r15
while (i_1 s< 8)

__security_check_cookie(rax_1 ^ &var_1b8)
return i_1
