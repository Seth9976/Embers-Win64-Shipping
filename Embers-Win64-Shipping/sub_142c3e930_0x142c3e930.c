// 函数: sub_142c3e930
// 地址: 0x142c3e930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 1
void** rax = sub_140dc0ea0(1, 0xa0)
int64_t* r14 = rax

if (rax == 0)
    return rax

*rax = &data_1436a4de0
char const* const rcx = "aveD"
uint64_t rax_1 = 1

do
    if (*(arg1 + 4) == *rcx)
        *r14 = rax_1 * 0x1c + &data_1436a4de0
        break
    
    rax_1 = zx.q(rax_1.d + 1)
    rcx = &rcx[0x1c]
while (rax_1.d u< 0xb)

if (*(*r14 + 4) == 0 || *(arg1 + 0x28) == 0x32)
    rbx = 0

r14[1].b = rbx
int32_t rax_3 = data_144019be8

if (rax_3 == 0)
    sub_142bf7370()
    rax_3 = data_144019be8

rax_3.b u>>= 2
rax_3.b &= 1
*(r14 + 0xc) = 0xffffffff
bool cond:0 = r14[1].b != 0
*(r14 + 9) = rax_3.b

if (cond:0 || *(arg1 + 4) == 0x4d6c796d)
    rbx = 0
else
    rbx = 1

*(r14 + 0x1c) = rbx
int32_t r8 = 0
int32_t rdx_1 = *(arg1 + 0x38)
int32_t rdi = -1
int32_t rdx_2 = rdx_1 - 1
int64_t r10 = *(arg1 + 0x40)
void* rax_13

if (rdx_1 - 1 s>= 0)
    uint64_t rcx_3
    
    while (true)
        uint64_t rax_5 = zx.q((rdx_2 + r8) u>> 1)
        rcx_3 = zx.q(rax_5.d)
        int32_t r9_1 = *(r10 + rax_5 * 0x24)
        int32_t rax_7
        
        if (r9_1 u<= 0x72706866)
            rax_7.b = r9_1 u< 0x72706866
        
        if (r9_1 u> 0x72706866 || rax_7 s< 0)
            rdx_2 = (rcx_3 - 1).d
        else
            if (rax_7 s<= 0)
                break
            
            r8 = (rcx_3 + 1).d
        
        if (r8 s> rdx_2)
            goto label_142c3ea59
    
    rax_13 = r10 + rcx_3 * 0x24

int32_t r8_1

if (rdx_1 - 1 s< 0 || rax_13 == 0)
label_142c3ea59:
    r8_1 = -1
else
    r8_1 = *(rax_13 + 0xc)

sub_142c40370(arg1 + 0x28, 0, r8_1, &r14[2], &r14[3])
*(r14 + 0x2c) = rbx
int32_t rdx_3 = 0
int32_t r8_2 = *(arg1 + 0x38)
int32_t r8_3 = r8_2 - 1
int64_t r10_1 = *(arg1 + 0x40)
void* rax_19

if (r8_2 - 1 s>= 0)
    uint64_t rcx_5
    
    while (true)
        uint64_t rax_10 = zx.q((r8_3 + rdx_3) u>> 1)
        rcx_5 = zx.q(rax_10.d)
        int32_t r9_3 = *(r10_1 + rax_10 * 0x24)
        int32_t rax_12
        
        if (r9_3 u<= 0x70726566)
            rax_12.b = r9_3 u< 0x70726566
        
        if (r9_3 u> 0x70726566 || rax_12 s< 0)
            r8_3 = (rcx_5 - 1).d
        else
            if (rax_12 s<= 0)
                break
            
            rdx_3 = (rcx_5 + 1).d
        
        if (rdx_3 s> r8_3)
            goto label_142c3eae0
    
    rax_19 = r10_1 + rcx_5 * 0x24

int32_t r8_4

if (r8_2 - 1 s< 0 || rax_19 == 0)
label_142c3eae0:
    r8_4 = -1
else
    r8_4 = *(rax_19 + 0xc)

sub_142c40370(arg1 + 0x28, 0, r8_4, &r14[4], &r14[5])
*(r14 + 0x3c) = rbx
int32_t rdx_4 = 0
int32_t r8_5 = *(arg1 + 0x38)
int32_t r8_6 = r8_5 - 1
int64_t r10_2 = *(arg1 + 0x40)
void* rax_25

if (r8_5 - 1 s>= 0)
    uint64_t rcx_8
    
    while (true)
        uint64_t rax_16 = zx.q((r8_6 + rdx_4) u>> 1)
        rcx_8 = zx.q(rax_16.d)
        int32_t r9_5 = *(r10_2 + rax_16 * 0x24)
        int32_t rax_18
        
        if (r9_5 u<= 0x626c7766)
            rax_18.b = r9_5 u< 0x626c7766
        
        if (r9_5 u> 0x626c7766 || rax_18 s< 0)
            r8_6 = (rcx_8 - 1).d
        else
            if (rax_18 s<= 0)
                break
            
            rdx_4 = (rcx_8 + 1).d
        
        if (rdx_4 s> r8_6)
            goto label_142c3eb60
    
    rax_25 = r10_2 + rcx_8 * 0x24

int32_t r8_7

if (r8_5 - 1 s< 0 || rax_25 == 0)
label_142c3eb60:
    r8_7 = -1
else
    r8_7 = *(rax_25 + 0xc)

sub_142c40370(arg1 + 0x28, 0, r8_7, &r14[6], &r14[7])
*(r14 + 0x4c) = rbx
int32_t rdx_5 = 0
int32_t r8_8 = *(arg1 + 0x38)
int32_t r8_9 = r8_8 - 1
int64_t r10_3 = *(arg1 + 0x40)

if (r8_8 - 1 s>= 0)
    do
        uint64_t rax_22 = zx.q((r8_9 + rdx_5) u>> 1)
        uint64_t rcx_11 = zx.q(rax_22.d)
        int32_t r9_7 = *(r10_3 + rax_22 * 0x24)
        int32_t rax_24
        
        if (r9_7 u<= 0x70737466)
            rax_24.b = r9_7 u< 0x70737466
        
        if (r9_7 u> 0x70737466 || rax_24 s< 0)
            r8_9 = (rcx_11 - 1).d
        else
            if (rax_24 s<= 0)
                void* rax_26 = r10_3 + rcx_11 * 0x24
                
                if (rax_26 != 0)
                    rdi = *(rax_26 + 0xc)
                
                break
            
            rdx_5 = (rcx_11 + 1).d
    while (rdx_5 s<= r8_9)

sub_142c40370(arg1 + 0x28, 0, rdi, &r14[8], &r14[9])
char const* const rbx_1 = "tkun\r"
int64_t i_1 = 0x14
void* rdi_1 = &r14[0xa]
int64_t i

do
    int32_t rax_32
    
    if ((rbx_1[4] & 1) != 0)
    label_142c3ec71:
        rax_32 = 0
    else
        int32_t rdx_6 = *(arg1 + 0x38)
        int32_t r8_11 = 0
        int32_t rdx_7 = rdx_6 - 1
        int32_t r10_4 = *rbx_1
        int64_t r11_1 = *(arg1 + 0x40)
        
        if (rdx_6 - 1 s< 0)
        label_142c3ec71_1:
            rax_32 = 0
        else
            uint64_t rcx_15
            
            while (true)
                uint64_t rax_29 = zx.q((rdx_7 + r8_11) u>> 1)
                rcx_15 = zx.q(rax_29.d)
                int32_t r9_9 = *(r11_1 + rax_29 * 0x24)
                int32_t rax_31
                
                if (r10_4 u>= r9_9)
                    rax_31.b = r10_4 u> r9_9
                
                if (r10_4 u< r9_9 || rax_31 s< 0)
                    rdx_7 = (rcx_15 - 1).d
                else
                    if (rax_31 s<= 0)
                        break
                    
                    r8_11 = (rcx_15 + 1).d
                
                if (r8_11 s> rdx_7)
                    goto label_142c3ec71_2
            
            void* rax_34 = r11_1 + rcx_15 * 0x24
            
            if (rax_34 == 0)
            label_142c3ec71_2:
                rax_32 = 0
            else
                rax_32 = *(rax_34 + 0x1c)
    
    *rdi_1 = rax_32
    rbx_1 = &rbx_1[8]
    rdi_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return r14
