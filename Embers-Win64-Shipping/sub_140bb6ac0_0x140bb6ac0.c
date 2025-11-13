// 函数: sub_140bb6ac0
// 地址: 0x140bb6ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
int64_t* r14 = arg1
uint128_t* var_68 = nullptr
uint128_t var_50 = zmm0
uint128_t* rbx = var_50.q
uint128_t* r13 = nullptr
int32_t r8 = 0
int64_t rax = _mm_bsrli_si128(zmm0, 8).q
void* r15 = &rbx[0x50]
int32_t temp0_1 = rax.d
uint128_t* rax_3

if (temp0_1 != 0)
    int32_t rcx_4
    
    if (temp0_1 s>= 0)
        rcx_4 = (rax u>> 0x20).d + (rax * 3).d + *(r15 + 0x64) - 3
    else
        rcx_4 = (rax u>> 0x20).d - ((rax << 1) + 2).d + *(r15 + 0x60)
    
    rax_3 = *(r15 + 0x48) + sx.q(rcx_4) * 0x18
else
    rax_3 = r15 + sx.q((rax u>> 0x20).d) * 0x18

if (&var_68 != rax_3)
    var_68.o = *rax_3
    r8 = 0.d
    r13 = var_68
    *rax_3 = var_68.o

uint128_t* rdi = r13
uint128_t* r8_1 = r13
void* r12_2 = &r13[sx.q(r8)]

if (r13 != r12_2)
    do
        void* rdx_1 = *rdi + 0x500
        int64_t rax_10 = _mm_bsrli_si128(*rdi, 8).q
        int32_t temp2_1 = rax_10.d
        void* rax_13
        
        if (temp2_1 != 0)
            int32_t rcx_12
            
            if (temp2_1 s>= 0)
                rcx_12 = (rax_10 u>> 0x20).d - 3 + (rax_10 * 3).d + *(rdx_1 + 0x64)
            else
                rcx_12 = (rax_10 u>> 0x20).d - ((rax_10 << 1) + 2).d + *(rdx_1 + 0x60)
            
            rax_13 = *(rdx_1 + 0x48) + sx.q(rcx_12) * 0x18
        else
            rax_13 = rdx_1 + sx.q((rax_10 u>> 0x20).d) * 0x18
        
        int32_t temp4_1 = *(rax_13 + 0x10)
        *(rax_13 + 0x10) -= 1
        
        if (temp4_1 == 1)
            *(rax_13 + 0x14) = 1
            int64_t r14_1 = sx.q(r14[0xb].d)
            int32_t rbp_3 = ((rdi - r8_1) s>> 4).d
            int32_t rax_18 = (r14_1 + 1).d
            r14[0xb].d = rax_18
            
            if (rax_18 s> *(r14 + 0x5c))
                sub_1405a4cf0(&r14[0xa])
                r8_1 = r13
            
            *(r14[0xa] + (r14_1 << 2)) = rbp_3
        
        rdi = &rdi[1]
    while (rdi != r12_2)
    
    rbx = var_50.q
    r14 = arg1

int64_t rdi_1 = var_50:8.q
int32_t temp1 = rdi_1.d
void* rax_23

if (temp1 != 0)
    int32_t rcx_22
    
    if (temp1 s>= 0)
        rcx_22 = (rdi_1 u>> 0x20).d + (rdi_1 * 3).d + *(r15 + 0x64) - 3
    else
        rcx_22 = (rdi_1 u>> 0x20).d - ((rdi_1 << 1) + 2).d + *(r15 + 0x60)
    
    rax_23 = *(r15 + 0x48) + sx.q(rcx_22) * 0x18
else
    rax_23 = r15 + sx.q((rdi_1 u>> 0x20).d) * 0x18

*(rax_23 + 0x15) = 0
int32_t temp3 = *(r15 + 0x54)
*(r15 + 0x54) -= 1

if (temp3 == 1)
    sub_140bb6570(r14, &var_50)
    sub_140bbb400(r15)

if (rdi_1.d != 0)
    int32_t rax_30 = var_50:0xc.d
    int64_t var_60
    var_60.d = 0
    var_68 = rbx
    void* rax_31
    
    if (rax_30 != 1)
        var_60.d = rdi_1.d
        
        if (rax_30 != 0)
            var_60:4.d = 1
        else
            int32_t rax_32
            rax_32.b = rdi_1.d s>= 0
            var_60:4.d = rax_32 + 1
        
        uint32_t rcx_29 = (var_60 u>> 0x20).d
        int32_t rcx_31
        
        if (rdi_1.d s>= 0)
            rcx_31 = rcx_29 - 3 + (rdi_1 * 3).d + *(r15 + 0x64)
        else
            rcx_31 = rcx_29 - ((rdi_1 << 1) + 2).d + *(r15 + 0x60)
        
        rax_31 = *(r15 + 0x48) + sx.q(rcx_31) * 0x18
    else
        rax_31 = &rbx[0x53]
    
    int32_t temp5_1 = *(rax_31 + 0x10)
    *(rax_31 + 0x10) -= 1
    
    if (temp5_1 == 1)
        *(rax_31 + 0x14) = 1
        sub_140ba89e0(rbx, &var_68)

int64_t rdi_2 = 0
int32_t* rbx_2 = r14[0xa]
uint64_t result = &rbx_2[r14[0xb]]
uint64_t rsi_1 = sx.q(r14[0xb].d) << 2 u>> 2

if (rbx_2 u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        void* rcx_38 = &r13[sx.q(*rbx_2)]
        result = sub_140ba89e0(*rcx_38, rcx_38)
        rdi_2 += 1
        rbx_2 = &rbx_2[1]
    while (rdi_2 != rsi_1)

r14[0xb].d = 0

if (*(r14 + 0x5c) s<= 0xffffffff)
    result = sub_1405dadb0(&r14[0xa], 0)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
