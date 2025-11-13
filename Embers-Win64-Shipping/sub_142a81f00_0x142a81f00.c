// 函数: sub_142a81f00
// 地址: 0x142a81f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x70)
char rdi = arg4
int64_t rbp = sx.q(arg2)
int64_t r13 = sx.q(arg3)
char arg_10 = 1
int32_t var_70 = 0xffffffff
char arg_18

if (rbp.d s>= *(arg1 + 0xc0))
    arg_18 = 0
else
    char rax_2
    
    if (*(arg1 + 0x8e) == 0 || rbp.d s< **(arg1 + 0xd0))
        rax_2 = *(arg1 + 0x8d)
    else
        rax_2 = sub_142a82b80(arg1, rbp.d)
    
    if ((rax_2 & 1) == 0)
        arg_18 = 0
    else
        arg_18 = 1
        
        if (*(arg1 + 0x84) - 5 u> 1)
            arg_18 = 0

int64_t r14 = rbp
int64_t var_54 = -1
int32_t var_48 = rbp.d
uint32_t rcx = zx.d(*(rbp + *(arg1 + 0x78)))
char var_44 = rcx.b
int64_t rcx_1 = *(arg1 + 0xb0)
uint64_t rdx_2 = zx.q(rcx) & 1
int64_t var_68 = *(rcx_1 + (rdx_2 << 3))
int64_t var_60 = *(rcx_1 + (rdx_2 << 3) + 0x10)

if (rbp.d == 0 && *(arg1 + 0x98) s> rbp.d)
    char rax_8 = sub_142a81060(arg1)
    
    if (rax_8 != 4)
        rdi = rax_8

char rax_9 = *(rbp + rsi)
int64_t r8

if (rax_9 == 0x16)
    r8 = sx.q(*(arg1 + 0x144))

int32_t var_78
int32_t result
int32_t var_4c
uint32_t arg_8
int32_t r9
uint32_t r11

if (rax_9 != 0x16 || r8.d s< 0)
    result = 0xffffffff
    var_78 = rbp.d
    uint32_t rdx_6
    
    if (rax_9 != 0x11)
        rdx_6 = 0
    else
        rdx_6.w = zx.w(rdi) + 1
    
    arg_8 = rdx_6
    var_4c = 0
    sub_142a81150(arg1, &var_68, rdi, rbp.d, rbp.d)
    r11 = arg_8
    r9 = rbp.d
else
    int32_t* rdx_4 = *(arg1 + 0x148) + (r8 << 4)
    r11 = zx.d(rdx_4[3].w)
    r9 = rdx_4[1]
    result = *rdx_4
    var_4c = rdx_4[2]
    *(arg1 + 0x144) = (r8 - 1).d
    var_78 = r9
    arg_8 = r11

uint32_t r10 = zx.d(arg5)
int32_t rdi_1 = rbp.d
uint32_t var_74 = r10

if (rbp.d s<= r13.d)
    char* r12_1 = rbp + 1
    
    while (true)
        char rax_14
        
        if (rdi_1 s< r13.d)
            char r8_2 = r12_1[rsi - 1]
            
            if (r8_2 == 7)
                *(arg1 + 0x144) = 0xffffffff
            
            if (arg_18 != 0)
                if (r8_2 == 0xd)
                    r8_2 = 1
                else if (r8_2 == 2)
                    char rcx_9
                    
                    if (var_70 s> rdi_1)
                        rcx_9 = arg_10
                    label_142a82178:
                        
                        if (rcx_9 == 0xd)
                            r8_2 = 5
                    else
                        var_70 = r13.d
                        arg_10 = 1
                        int32_t rdx_9 = rdi_1 + 1
                        char* rax_15 = r12_1
                        
                        if (r12_1 s< r13)
                            while (true)
                                rcx_9 = rax_15[rsi]
                                
                                if (rcx_9 u<= 1 || rcx_9 == 0xd)
                                    arg_10 = rcx_9
                                    var_70 = rdx_9
                                    break
                                
                                rdx_9 += 1
                                rax_15 = &rax_15[1]
                                
                                if (rax_15 s>= r13)
                                    goto label_142a8218e
                                
                                continue
                            
                            goto label_142a82178
            
        label_142a8218e:
            rax_14 = *(zx.q(r8_2) + 0x143641198)
        else
            char* rax_13 = r13 - 1
            
            if (rax_13 s> r14)
                while ((1 << rax_13[rsi] & 0x5d800) != 0)
                    rax_13 -= 1
                    
                    if (rax_13 s<= r14)
                        break
            
            if (rax_13[rsi] - 0x14 u<= 1)
                break
            
            rax_14 = r10.b
        
        uint64_t rdx_10 = zx.q(r11.w)
        int64_t rcx_5 = zx.q(*((zx.q(rdx_10.d) << 4) + zx.q(rax_14) + 0x1436411c0))
        char rax_18 = rcx_5.b
        rcx_5.b u>>= 5
        r11 = zx.d(rax_18) & 0x1f
        arg_8 = r11
        uint16_t rax_19 = zx.w(rcx_5.b)
        
        if (rdi_1 == r13.d)
            if (rax_19 == 0)
                rax_19 = 1
            
            goto label_142a821e4
        
        if (rax_19 != 0)
        label_142a821e4:
            uint32_t rcx_13 = zx.d(rax_19)
            char r8_3 = *(rdx_10 * 0x10 + 0x1436411cf)
            
            if (rcx_13 == 1)
                goto label_142a8224b
            
            rcx_5 = zx.q(rcx_13 - 2)
            
            if (rcx_13 == 2)
                rbp = zx.q(rdi_1)
            else if (rcx_5.d == 1)
                sub_142a81150(arg1, &var_68, r8_3, r9, rbp.d)
                r9 = rbp.d
                r8_3 = 4
            label_142a8224b:
                sub_142a81150(arg1, &var_68, r8_3, r9, rdi_1)
                r9 = rdi_1
                var_78 = rdi_1
                r10 = var_74
                r11 = arg_8
            else
                if (rcx_5.d != 2)
                    abort()
                    noreturn
                
                sub_142a81150(arg1, &var_68, r8_3, r9, rbp.d)
                r9 = rbp.d
                var_78 = rbp.d
                rbp = zx.q(rdi_1)
                r10 = var_74
                r11 = arg_8
        
        rdi_1 += 1
        r12_1 = &r12_1[1]
        
        if (rdi_1 s> r13.d)
            break

if (r13.d == *(arg1 + 0x14) && *(arg1 + 0xa8) s> 0)
    char rax_20 = sub_142a808b0(arg1)
    r10 = zx.d(var_74.b)
    
    if (rax_20 != 4)
        r10 = zx.d(rax_20)

int32_t r8_4 = (r13 - 1).d
int64_t rdx_15 = sx.q(r8_4)

if (rdx_15 s> r14)
    while ((1 << *(rdx_15 + rsi) & 0x5d800) != 0)
        r8_4 -= 1
        rdx_15 -= 1
        
        if (rdx_15 s<= r14)
            break

if (*(sx.q(r8_4) + rsi) - 0x14 u> 1 || r13.d s>= *(arg1 + 0x14))
    return sub_142a81150(arg1, &var_68, r10.b, r13.d, r13.d)

*(arg1 + 0x144) += 1
*(*(arg1 + 0x148) + sx.q(*(arg1 + 0x144)) * 0x10 + 0xc) = arg_8.w
*(*(arg1 + 0x148) + sx.q(*(arg1 + 0x144)) * 0x10 + 8) = var_4c
*(*(arg1 + 0x148) + sx.q(*(arg1 + 0x144)) * 0x10 + 4) = var_78
*(*(arg1 + 0x148) + sx.q(*(arg1 + 0x144)) * 0x10) = result
return result
