// 函数: sub_141107ff0
// 地址: 0x141107ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1405948b0(arg4[1])
void* rdx = &data_143e51f68

if (arg5 != 5)
    rdx = &data_143e51e48

void* rax_1 = sub_1419cec70(*(rax + 0x28), rdx, 0)
int64_t* rcx_2 = arg3[0xa2a]
void* var_58 = rax_1
int128_t zmm0 = var_58.o
sub_1419a2ec0(rcx_2, &var_58, &data_143e51d00, 0)
void* r13 = var_58
int64_t rax_2 = 0
*arg2 = data_1439c9410

if (r13 != 0)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_2 = *(rax + 0x10)
    int64_t rax_3 = rbx_2[3]
    
    if (*(rax_3 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_2.d)
        rax_3 = rbx_2[3]
    
    rax_2 = *(rax_3 + (rdx_2 << 3))

void* r15 = zmm0.q
void* rcx_5 = zmm0:8.q
arg2[1] = rax_2
int64_t rax_4 = 0

if (r15 != 0)
    int64_t rdx_3 = sx.q(*(r15 + 0x10c))
    int64_t* rbx_3 = *(rcx_5 + 0x10)
    int64_t rax_5 = rbx_3[3]
    
    if (*(rax_5 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_3.d)
        rax_5 = rbx_3[3]
    
    rax_4 = *(rax_5 + (rdx_3 << 3))

arg2[4] = rax_4
arg2[0xb].d = 0
sub_1419870b0(arg1, arg2, 2)
int32_t var_60 = arg4[3].d
sub_141106710(r15, arg1, arg3, *arg4, (arg4[2]).d)
int64_t rbx_4 = sx.q(*(r13 + 0xe0))
void* r12_1 = &data_143ce8560
int32_t r8_1 = 0
uint64_t rsi_1 = zx.q(data_14401b1a0)

if (rbx_4 s> 0)
    int64_t rdx_6 = 0
    
    while (true)
        void* rcx_10 = *(r13 + 0xd8)
        
        if ((*(r13 + 0xd8) & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + r13 + 0xd8
        
        if (*(rcx_10 + (rdx_6 << 3)) == data_143f55690)
            break
        
        r8_1 += 1
        rdx_6 += 1
        
        if (rdx_6 s>= rbx_4)
            goto label_1411081bb

int16_t* r14_1
TEB* gsbase

if (rbx_4 s<= 0 || r8_1 == 0xffffffff)
label_1411081bb:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rsi_1 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r14_1 = &data_143ce8560
else
    void* rcx_35 = *(r13 + 0xe8)
    
    if ((rcx_35.b & 1) != 0)
        rcx_35 = (rcx_35 s>> 1) + r13 + 0xe8
    
    r14_1 = rcx_35 + (sx.q(r8_1) << 1)

int64_t r11_2 = sx.q(*(r15 + 0xe0))
int32_t r8_2 = 0

if (r11_2 s> 0)
    int64_t rdx_7 = 0
    
    while (true)
        void* rcx_13 = *(r15 + 0xd8)
        
        if ((*(r15 + 0xd8) & 1) != 0)
            rcx_13 = (rcx_13 s>> 1) + r15 + 0xd8
        
        if (*(rcx_13 + (rdx_7 << 3)) == data_143f55690)
            break
        
        r8_2 += 1
        rdx_7 += 1
        
        if (rdx_7 s>= r11_2)
            goto label_14110822c

if (r11_2 s<= 0 || r8_2 == 0xffffffff)
label_14110822c:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rsi_1 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_37 = *(r15 + 0xe8)
    
    if ((rcx_37.b & 1) != 0)
        rcx_37 = (rcx_37 s>> 1) + r15 + 0xe8
    
    r12_1 = rcx_37 + (sx.q(r8_2) << 1)

int64_t rdx_9 = sx.q(*(r13 + 0x10c))
int64_t* rbx_6 = *(rax + 0x10)
int64_t rax_14 = rbx_6[3]

if (*(rax_14 + (rdx_9 << 3)) == 0)
    sub_1419ccf30(rbx_6, rdx_9.d)
    rax_14 = rbx_6[3]

int64_t rsi_3 = *(rax_14 + (rdx_9 << 3))
int16_t rax_15 = *r14_1

if (rax_15 != 0xffff)
    int64_t rbp_3 = data_143f55b28
    void*** rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_17[5]
    
    if (rax_16 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_17[5]
    
    *(arg1 + 0x30) = rax_16
    void**** rax_17 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_17 = rcx_17
    *(arg1 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    rcx_17[4] = rbp_3
    *rcx_17 = &data_142f11618
    rcx_17[2] = rsi_3
    rcx_17[3].d = zx.d(rax_15)

int64_t rsi_4 = 0

if (r15 != 0)
    int64_t rdx_10 = sx.q(*(r15 + 0x10c))
    int64_t* rbx_8 = *(rcx_5 + 0x10)
    int64_t rax_19 = rbx_8[3]
    
    if (*(rax_19 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_8, rdx_10.d)
        rax_19 = rbx_8[3]
    
    rsi_4 = *(rax_19 + (rdx_10 << 3))

int16_t rax_20 = *r12_1

if (rax_20 != 0xffff)
    int64_t rbp_4 = data_143f55b28
    void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_21 = &rcx_24[5]
    
    if (rax_21 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_24[5]
    
    *(arg1 + 0x30) = rax_21
    void**** rax_22 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_22 = rcx_24
    *(arg1 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142f11618
    rcx_24[2] = rsi_4
    rcx_24[3].d = zx.d(rax_20)
    rcx_24[4] = rbp_4

sub_141106f60(r13, arg1, arg3[2], arg6)
void*** rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi_6 = data_1439c9458
void* rax_24 = &rcx_31[5]

if (rax_24 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_31[5]

*(arg1 + 0x30) = rax_24
int64_t* rax_25 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_25 = rcx_31
*(arg1 + 8) = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142d56618
rcx_31[2].d = 0
rcx_31[3] = rsi_6
rcx_31[4].d = 0
return &data_142d56618
