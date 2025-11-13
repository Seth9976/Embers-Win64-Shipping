// 函数: sub_142b69fe0
// 地址: 0x142b69fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x10ffff)
    return 0xffffffff

int32_t r11 = sx.d(*(arg1 + 0x1f))
int32_t var_84 = r11

if (arg2 s>= arg1[3].d)
    if (arg5 != 0)
        int64_t rax_2 = arg1[1]
        int32_t rdx_1 = *(arg1 + 0x14) - 2
        uint32_t rax_3
        
        if (r11 == 0)
            rax_3 = zx.d(*(rax_2 + (sx.q(rdx_1) << 1)))
        else if (r11 == 1)
            rax_3 = *(rax_2 + (sx.q(rdx_1) << 2))
        else if (r11 == 2)
            rax_3 = zx.d(*(sx.q(rdx_1) + rax_2))
        else
            rax_3 = -1
        
        if (arg3 != 0)
            rax_3 = arg3(arg4, zx.q(rax_3))
        
        *arg5 = rax_3
    
    return 0x10ffff

uint32_t r10 = *(arg1 + 0x2c)
uint32_t var_78 = r10

if (arg3 != 0)
    uint32_t rax_5 = arg3(arg4, zx.q(r10))
    r11 = var_84
    r10 = rax_5
    var_78 = rax_5

int64_t rax_6 = *arg1
uint32_t r13 = -1
uint32_t r12 = arg2
uint64_t rdi
rdi.b = 0
uint32_t rbp = arg2
uint32_t rsi = arg2
int32_t* r9 = arg5
uint32_t rbx_2 = -1
uint32_t var_74 = 0xffffffff
uint32_t var_6c = 0xffffffff
char var_88 = 0

while (true)
    char rax_7
    
    if (rsi s<= 0xffff)
        rax_7 = *(arg1 + 0x1e)
    
    uint32_t var_70_1
    int64_t var_48_1
    int32_t rcx_6
    uint32_t r9_1
    int32_t r13_1
    
    if (rsi s<= 0xffff && (rax_7 == 0 || rsi s<= 0xfff))
        r9_1 = 0
        rcx_6 = rsi s>> 6
        r13_1 = 0x40
        var_70_1 = 0
        int64_t r8 = 0x40
        
        if (rax_7 == 0)
            r8 = 0x400
        
        var_48_1 = r8
        goto label_142b6a218
    
    int32_t rax_8 = 0x40
    
    if (*(arg1 + 0x1e) == 0)
        rax_8 = 0x3fc
    
    int64_t r8_1 = *arg1
    uint32_t rcx_10 = zx.d(*(r8_1
        + (zx.q(zx.d(*(r8_1 + (sx.q(rax_8 + (rsi s>> 0xe)) << 1))) + (rsi s>> 9 & 0x1f)) << 1)))
    var_70_1 = rcx_10
    
    if (rcx_10 != r13 || rsi - arg2 s< 0x200)
        r13 = rcx_10
        var_6c = rcx_10
        
        if (rcx_10 != zx.d(*(arg1 + 0x26)))
            r9_1 = var_70_1
            r13_1 = 0x10
            rcx_6 = rsi s>> 4 & 0x1f
            var_48_1 = 0x20
        label_142b6a218:
            int32_t r8_3 = r9_1 & 0x8000
            int64_t rdx_6 = sx.q(rcx_6)
            int32_t var_80_1 = r13_1
            int32_t var_7c_1 = rcx_6
            int64_t var_68_1 = rdx_6
            int32_t var_60_1 = r8_3
            int16_t* rax_19 = rax_6 + ((zx.q(r9_1) + rdx_6) << 1)
            r11 = var_84
            int16_t* var_50_1 = rax_19
            
            while (true)
                uint32_t r9_2
                
                if (r8_3 != 0)
                    uint64_t rdx_8 = zx.q(rcx_6) & 7
                    int32_t r8_7 = (rcx_6 & 0xfffffff8) + (rcx_6 s>> 3) + (r9_1 & 0x7fff)
                    rdx_6 = var_68_1
                    rcx_6 = var_7c_1
                    r9_2 = (zx.d(*(rax_6 + (sx.q(r8_7) << 1))) << ((rdx_8 << 1) + 2).b & 0x30000)
                        | zx.d(*(rax_6 + (sx.q((rdx_8 + 1).d + r8_7) << 1)))
                else
                    r9_2 = zx.d(*rax_19)
                
                if (r9_2 != var_74 || rsi - arg2 s< r13_1)
                    var_74 = r9_2
                    
                    if (r9_2 != arg1[5].d)
                        int64_t rax_32 = arg1[1]
                        int32_t rdi_3 = ((r13_1 - 1) & rsi) + r9_2
                        
                        if (r11 == 0)
                            rbx_2 = zx.d(*(rax_32 + (sx.q(rdi_3) << 1)))
                        else if (r11 == 1)
                            rbx_2 = *(rax_32 + (sx.q(rdi_3) << 2))
                        else if (r11 == 2)
                            rbx_2 = zx.d(*(sx.q(rdi_3) + rax_32))
                        
                        if (var_88 == 0)
                            rbp = rbx_2
                            r12 = rbx_2
                            
                            if (rbx_2 == *(arg1 + 0x2c))
                                r12 = r10
                            else if (arg3 != 0)
                                r11 = var_84
                                r12 = arg3(arg4, zx.q(rbx_2))
                            
                            if (arg5 != 0)
                                *arg5 = r12
                            
                            var_88 = 1
                        else if (rbx_2 != rbp)
                            if (arg3 == 0)
                                return zx.q(rsi - 1)
                            
                            uint32_t rax_34
                            
                            if (rbx_2 != *(arg1 + 0x2c))
                                rax_34 = arg3(arg4, zx.q(rbx_2))
                                r11 = var_84
                            else
                                rax_34 = r10
                            
                            if (rax_34 != r12)
                                return zx.q(rsi - 1)
                            
                            rbp = rbx_2
                        
                        rsi += 1
                        
                        if ((rsi & (r13_1 - 1)) != 0)
                            int64_t rdi_4 = sx.q(rdi_3)
                            
                            do
                                int64_t rax_37 = arg1[1]
                                rdi_4 += 1
                                uint32_t rbx_3
                                
                                if (r11 == 0)
                                    rbx_3 = zx.d(*(rax_37 + (rdi_4 << 1)))
                                else if (r11 == 1)
                                    rbx_3 = *(rax_37 + (rdi_4 << 2))
                                else if (r11 == 2)
                                    rbx_3 = zx.d(*(rdi_4 + rax_37))
                                else
                                    rbx_3 = -1
                                
                                if (rbx_3 != rbp)
                                    if (arg3 == 0)
                                        return zx.q(rsi - 1)
                                    
                                    uint32_t rax_38
                                    
                                    if (rbx_3 != *(arg1 + 0x2c))
                                        rax_38 = arg3(arg4, zx.q(rbx_3))
                                        r11 = var_84
                                    else
                                        rax_38 = var_78
                                    
                                    if (rax_38 != r12)
                                        return zx.q(rsi - 1)
                                    
                                    rbp = rbx_3
                                
                                rsi += 1
                            while ((rsi & (r13_1 - 1)) != 0)
                        
                        rdx_6 = var_68_1
                        rbx_2 = -1
                        rcx_6 = var_7c_1
                    else if (rdi.b == 0)
                        r12 = r10
                        rbp = *(arg1 + 0x2c)
                        
                        if (arg5 != 0)
                            *arg5 = r10
                        
                        rsi = (rsi + var_80_1) & not.d(r13_1 - 1)
                        var_88 = 1
                    else
                        if (r10 != r12)
                            return zx.q(rsi - 1)
                        
                        rsi = (rsi + var_80_1) & not.d(r13_1 - 1)
                    
                    r13_1 = var_80_1
                else
                    rsi += r13_1
                
                rcx_6 += 1
                rdi = zx.q(var_88)
                rax_19 = &var_50_1[1]
                r9_1 = var_70_1
                rdx_6 += 1
                r8_3 = var_60_1
                var_7c_1 = rcx_6
                var_68_1 = rdx_6
                var_50_1 = rax_19
                
                if (rdx_6 s>= var_48_1)
                    break
                
                r10 = var_78
            
            r9 = arg5
            r13 = var_6c
        else
            if (rdi.b == 0)
                rbp = *(arg1 + 0x2c)
                r12 = r10
                
                if (r9 != 0)
                    *r9 = r10
                
                var_88 = 1
            else if (r10 != r12)
                return zx.q(rsi - 1)
            
            rsi = (rsi + 0x200) & 0xfffffe00
            var_74 = arg1[5].d
    else
        rsi += 0x200
    
    if (rsi s>= arg1[3].d)
        break
    
    r10 = var_78
    rdi = zx.q(var_88)

int64_t rax_40 = arg1[1]
int32_t rdx_17 = *(arg1 + 0x14) - 2
uint32_t rax_41

if (r11 == 0)
    rax_41 = zx.d(*(rax_40 + (sx.q(rdx_17) << 1)))
else if (r11 == 1)
    rax_41 = *(rax_40 + (sx.q(rdx_17) << 2))
else if (r11 == 2)
    rax_41 = zx.d(*(sx.q(rdx_17) + rax_40))
else
    rax_41 = -1

if (rax_41 == *(arg1 + 0x2c))
    rax_41 = var_78
else if (arg3 != 0)
    rax_41 = arg3(arg4, zx.q(rax_41))

if (rax_41 != r12)
    return zx.q(rsi - 1)

return 0x10ffff
