// 函数: sub_142a80a90
// 地址: 0x142a80a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int64_t rax_2 = *(arg1 + 8)
int32_t rdi = 0
char rsi = *(arg1 + 0x8d)
int64_t rax_3 = *(arg1 + 0x38)
int32_t rbp = 0
int32_t rax_4 = *(arg1 + 0x10)
int32_t var_458 = 0
char var_477_1

if (rsi u>= 0xfe)
    var_477_1 = 1

if (rsi u< 0xfe || *(arg1 + 0x84) - 5 u> 1)
    var_477_1 = 0

int32_t r15 = -1
char rax_7 = *(arg1 + 0x88) & 2
int32_t var_454 = 0xffffffff
int32_t r13 = -1
int32_t var_468 = 0
int32_t r14 = 0
uint64_t r12
r12.b = 0xa

if ((*(arg1 + 0x88) & 4) != 0)
    *(arg1 + 0x14) = 0

void* rax_8 = *(arg1 + 0xd0)
char rdx = rsi & 1

if (rsi u< 0xfe)
    *(rax_8 + 4) = zx.d(rsi)
else
    r12 = zx.q(rdx)
    *(rax_8 + 4) = zx.d(rdx)
    char rax_9
    
    if (*(arg1 + 0x98) s> 0)
        rax_9 = sub_142a807c0(arg1)
    
    if (*(arg1 + 0x98) s<= 0 || rax_9 == 0xa)
        rdi = 1
    else
        void* rax_10 = *(arg1 + 0xd0)
        
        if (rax_9 != 0)
            *(rax_10 + 4) = 1
        else
            *(rax_10 + 4) = 0

uint64_t rdx_6 = zx.q(rax_4)
void* result
int32_t var_438[0x80]

if (rdx_6.d s<= 0)
label_142a80d4c:
    int64_t rax_31 = sx.q(r13)
    
    if (r13 s>= 0)
        int64_t temp0_1
        
        do
            if (rdi == 2)
                rbp |= 0x100000
                break
            
            rdi = var_438[rax_31]
            temp0_1 = rax_31
            rax_31 -= 1
        while (temp0_1 - 1 s>= 0)
    
    if ((*(arg1 + 0x88) & 4) == 0)
        *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3)) = rdx_6.d
        *(arg1 + 0x1b8) = r14
    else if (*(arg1 + 0x14) s< rdx_6.d)
        *(arg1 + 0xc8) -= 1
    
    if (var_477_1 != 0 && r12.b == 1)
        *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3) + 4) = 1
    
    if (rsi u>= 0xfe)
        *(arg1 + 0x8d) = *(*(arg1 + 0xd0) + 4)
    
    result = zx.q(*(arg1 + 0xc8))
    
    if (result.d s> 0)
        int32_t* rcx_19 = *(arg1 + 0xd0) + 4
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            int32_t rax_55 = *rcx_19
            rcx_19 = &rcx_19[2]
            rbp |= *(&data_143641180 + ((zx.q(rax_55) & 1) << 2))
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (*(arg1 + 0x8c) != 0 && rbp.b s< 0)
        rbp |= 1
    
    *(arg1 + 0xbc) = rbp
    result.b = 1
    *(arg1 + 0xc0) = r15
else
    int64_t r14_1 = -1
    int64_t rcx_3 = rax_2
    int32_t rdx_1 = -1
    char* r15_1 = nullptr
    
    while (true)
        uint32_t rsi_3 = zx.d(*(rcx_3 + (r15_1 << 1)))
        int32_t r8_2 = var_458 + 1
        int32_t var_474_1 = rdx_1 + 1
        var_458 = r8_2
        r15_1 = &r15_1[1]
        
        if ((rsi_3 & 0xfffffc00) == 0xd800 && r15_1 != sx.q(rax_4))
            uint32_t rcx_4 = zx.d(*(rcx_3 + (r15_1 << 1)))
            
            if ((rcx_4 & 0xfffffc00) == 0xdc00)
                r8_2 += 1
                r15_1 = &r15_1[1]
                var_458 = r8_2
                rsi_3 = ((rsi_3 - 0xd7f7) << 0xa) + rcx_4
                var_474_1 = rdx_1 + 2
        
        int64_t rax_17 = *(arg1 + 0x1c0)
        int32_t rax_18
        int32_t rdx_5
        
        if (rax_17 != 0)
            rax_18 = rax_17(*(arg1 + 0x1c8), zx.q(rsi_3), r8_2)
            rdx_5 = rax_18
        
        if (rax_17 == 0 || rax_18 == 0x17)
            rdx_5 = sub_142af5c70(rsi_3)
        
        if (rdx_5 s>= 0x17)
            rdx_5 = 0xa
        
        rbp |= 1 << (zx.d(rdx_5.b) u% 0x20)
        r15_1[rax_3 - 1] = rdx_5.b
        
        if (rsi_3 s> 0xffff)
            rbp |= 0x40000
            r15_1[rax_3 - 2] = 0x12
        
        int32_t r8_4
        
        if (rax_7 == 0 ||
                ((rsi_3 & 0xfffffffc) != 0x200c && rsi_3 - 0x202a u>= 5 && rsi_3 - 0x2066 u>= 4))
            r8_4 = var_468
        else
            r8_4 = var_468 + 1
            var_468 = r8_4
        
        if (rdx_5.b == 0)
            if (rdi == 1)
                rdi = 0
                *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3) + 4) = 0
            else if (rdi == 2)
                rdi = 3
                int32_t rax_29 = rbp | 0x100000
                
                if (r14_1 s> 0x7d)
                    rax_29 = rbp
                
                rbp = rax_29
            
            r12.b = 0
            goto label_142a80d0e
        
        int32_t var_238[0x80]
        
        if (rdx_5.b == 1 || rdx_5.b == 0xd)
            if (rdi == 1)
                *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3) + 4) = rdi
                rdi = 0
            else if (rdi == 2)
                if (r14_1 s<= 0x7d)
                    rbp |= 0x200000
                    *(sx.q(var_238[r14_1]) + rax_3) = 0x15
                
                rdi = 3
            
            int32_t rax_47 = var_454
            rdx_1 = var_474_1
            r12.b = 1
            rcx_3 = rax_2
            
            if (rdx_5.b == 0xd)
                rax_47 = rdx_1
            
            var_454 = rax_47
            goto label_142a80d1f
        
        if (rdx_5.b - 0x13 u<= 2)
            r13 += 1
            r14_1 += 1
            
            if (r14_1 s<= 0x7d)
                var_238[r14_1] = var_474_1
                var_438[r14_1] = rdi
            
            rcx_3 = rax_2
            rdx_1 = var_474_1
            
            if (rdx_5.b != 0x13)
                rdi = 3
            else
                r15_1[rax_3 - 1] = 0x14
                rdi = 2
            
            goto label_142a80d1f
        
        if (rdx_5.b == 0x16)
            if (rdi == 2 && r14_1 s<= 0x7d)
                rbp |= 0x100000
            
            if (r14_1 s>= 0)
                if (r14_1 s<= 0x7d)
                    rdi = var_438[r14_1]
                
                r13 -= 1
                r14_1 -= 1
            
            goto label_142a80d0e
        
        if (rdx_5.b != 7)
        label_142a80d0e:
            rcx_3 = rax_2
        label_142a80d13:
            rdx_1 = var_474_1
        label_142a80d1f:
            
            if (r15_1 s< sx.q(rax_4))
                continue
            else
                rdx_6 = zx.q(rax_4)
        else
            if (r15_1 s< sx.q(rax_4) && rsi_3 == 0xd)
                rcx_3 = rax_2
            
            if (r15_1 s< sx.q(rax_4) && rsi_3 == 0xd && *(rcx_3 + (r15_1 << 1)) == 0xa)
                goto label_142a80d13
            
            *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3)) = var_458
            
            if (var_477_1 != 0 && r12.b == 1)
                *(*(arg1 + 0xd0) + (sx.q(*(arg1 + 0xc8) - 1) << 3) + 4) = 1
            
            if ((*(arg1 + 0x88) & 4) != 0)
                *(arg1 + 0x14) = var_458
                *(arg1 + 0x1b8) = r8_4
            
            rdx_6 = sx.q(rax_4)
            
            if (r15_1 s< rdx_6)
                *(arg1 + 0xc8) += 1
                
                if (sub_142a806a0(arg1).b == 0)
                    result.b = 0
                    break
                
                int64_t rcx_13 = sx.q(*(arg1 + 0xc8) - 1)
                int64_t rax_42 = *(arg1 + 0xd0)
                
                if (rsi u< 0xfe)
                    rdi = 0
                    r13 = -1
                    *(rax_42 + (rcx_13 << 3) + 4) = zx.d(*(arg1 + 0x8d))
                    r14_1 = -1
                else
                    uint32_t r8_5 = zx.d(rdx)
                    r13 = -1
                    *(rax_42 + (rcx_13 << 3) + 4) = r8_5
                    r12 = zx.q(r8_5.b)
                    r14_1 = -1
                    rdi = 1
                
                goto label_142a80d0e
        
        r14 = var_468
        r15 = var_454
        
        if (r13 s> 0x7d)
            rdi = 2
            r13 = 0x7d
        
        goto label_142a80d4c
__security_check_cookie(rax_1 ^ &var_498)
return result
