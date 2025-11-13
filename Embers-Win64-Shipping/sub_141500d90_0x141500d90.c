// 函数: sub_141500d90
// 地址: 0x141500d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1 + 0x88
sub_1414f01a0(*r12, r12[1].d)
int64_t* rbp = arg1 + 0x98
int32_t rdx_1 = rbp[1].d
int64_t rcx_1 = *rbp
void* var_38 = arg1
char var_58
sub_1414f0740(rcx_1, rdx_1, var_58, &var_38)
int128_t* r14 = arg1 + 0x60
int128_t zmm1_1

if (r14 != arg1 + 0x40)
    zmm1_1 = *r14
    *r14 = *(arg1 + 0x40)
    *(arg1 + 0x40) = zmm1_1

int128_t* rsi = arg1 + 0x70

if (rsi != arg1 + 0x50)
    zmm1_1 = *rsi
    *rsi = *(arg1 + 0x50)
    *(arg1 + 0x50) = zmm1_1

uint32_t r15 = *(arg1 + 0x48)
int64_t rdi = sx.q(*(r14 + 8))
int32_t rax_4 = *(arg1 + 0xa0) - *(arg1 + 0x90) + r15
uint32_t var_40 = r15

if (rax_4 s> rdi.d)
    *(r14 + 8) = rax_4
    
    if (rax_4 s> *(r14 + 0xc))
        sub_1405a4cf0(r14)
    
    memset(*r14 + (rdi << 2), 0, sx.q(rax_4 - rdi.d) << 2)
else if (rax_4 s< rdi.d && rax_4 != rdi.d)
    *(r14 + 8) = rax_4

int64_t rdi_1 = sx.q(*(rsi + 8))
int32_t rax_8 = *(arg1 + 0xa0) - *(arg1 + 0x90) + r15

if (rax_8 s> rdi_1.d)
    *(rsi + 8) = rax_8
    int32_t r15_2 = rax_8 - rdi_1.d
    
    if (rax_8 s> *(rsi + 0xc))
        sub_1405a4cf0(rsi)
    
    if (r15_2 != 0)
        __builtin_memset(*rsi + (rdi_1 << 2), 0xffffffff, zx.q(r15_2) << 2)
    
    r15 = var_40
else if (rax_8 s< rdi_1.d && rax_8 != rdi_1.d)
    *(rsi + 8) = rax_8

int32_t rcx_6 = *(arg1 + 0x68)
int32_t rdx_4 = 0
int32_t r11 = 0
int32_t var_44 = 0
int32_t r9_1 = 0
int32_t var_50 = 0
uint32_t r8_4 = 0
int32_t var_48 = 0

if (rcx_6 s> 0)
    void* r10_1 = nullptr
    int32_t* rdi_3 = nullptr
    var_38 = nullptr
    int32_t* var_30_1 = nullptr
    
    do
        uint32_t r12_1
        
        if (rdx_4 s>= *(arg1 + 0x90))
            r12_1 = r15
        else
            r12_1 = *(rdi_3 + *r12)
        
        if (r11 s< *(arg1 + 0xa0))
            r15 = (*(r10_1 + *rbp) u>> 0x20).d
        
        uint32_t r13_3 = r15
        
        if (r12_1 u<= r15)
            r13_3 = r12_1
        
        if (r13_3 u> r8_4)
            uint32_t r14_2 = r13_3 - r8_4
            uint32_t count = r14_2 << 2
            int64_t rdi_4 = sx.q(r8_4) << 2
            int64_t rsi_1 = sx.q(r9_1) << 2
            memcpy(*(arg1 + 0x60) + rsi_1, *(arg1 + 0x40) + rdi_4, count)
            memcpy(*(arg1 + 0x70) + rsi_1, *(arg1 + 0x50) + rdi_4, count)
            r8_4 = r13_3
            rcx_6 = *(arg1 + 0x68)
            r9_1 = var_48 + r14_2
            var_48 = r9_1
            
            if (r9_1 s>= rcx_6)
                break
            
            rdx_4 = var_44
            rsi = arg1 + 0x70
            rdi_3 = var_30_1
            r14 = arg1 + 0x60
            r10_1 = var_38
            rbp = arg1 + 0x98
            r11 = var_50
        
        if (r12_1 u>= r15)
            r11 += 1
            var_50 = r11
            int32_t* rdx_11 = (sx.q(*(*rbp + r10_1)) << 4) + *(arg1 + 8)
            int64_t rax_15 = sx.q(r9_1)
            r9_1 += 1
            var_48 = r9_1
            int64_t rdi_5 = rax_15 << 2
            *(rdi_5 + *r14) = zx.d(*(rdx_11 + 3)) << 0x18 | (*rdx_11 & 0xffffff)
            int32_t rcx_14 = rdx_11[3]
            int16_t var_3a_1 = rcx_14.w
            r10_1 += 8
            rdx_4 = var_44
            *(rdi_5 + *rsi) = ((rcx_14 u>> 0x10).w & 0xfff).d
            rcx_6 = *(arg1 + 0x68)
            rdi_3 = var_30_1
            var_38 = r10_1
        else
            rdx_4 += 1
            r8_4 += 1
            rdi_3 = &rdi_3[1]
            var_44 = rdx_4
            var_30_1 = rdi_3
        
        r15 = var_40
        r12 = arg1 + 0x88
    while (r9_1 s< rcx_6)
    
    rbp = arg1 + 0x98
    r12 = arg1 + 0x88

int32_t rax_22 = *(r12 + 0xc)
r12[1].d = 0

if (rax_22 s< 0 && rax_22 != 0)
    sub_1405dadb0(r12, 0)

int32_t result = *(rbp + 0xc)
rbp[1].d = 0

if (result s< 0 && result != 0)
    result = sub_1405c5570(rbp, 0)

*(arg1 + 0x80) = 0
return result
