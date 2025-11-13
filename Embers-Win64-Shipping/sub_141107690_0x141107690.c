// 函数: sub_141107690
// 地址: 0x141107690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int64_t rbx = sx.q(*(arg1 + 0xe0))
int64_t r12 = *(arg4[8] + 0x1a0)
int64_t rax_1 = data_143e510b0
int64_t arg_8 = r12

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == rax_1)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_141107730

int16_t* r8_1

if (rbx s<= 0 || r10 == 0xffffffff)
label_141107730:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_11 = *(arg1 + 0xe8)
    
    if ((rcx_11.b & 1) != 0)
        rcx_11 = (rcx_11 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_11 + (sx.q(r10) << 1)

sub_1410e9550(arg4[8], &arg_8, r8_1, arg3)

if (*(arg1 + 0x216) u> 0)
    void* rdi_1 = arg4[8]
    uint32_t rsi_1 = zx.d(*(arg1 + 0x214))
    void*** rcx_7 = (*(rdi_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_7[5]
    
    if (rax_4 u> *(rdi_1 + 0x38))
        sub_140b0e3d0(rdi_1 + 0x30, 0x30)
        rcx_7 = (*(rdi_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_7[5]
    
    *(rdi_1 + 0x30) = rax_4
    void**** rax_5 = *(rdi_1 + 8)
    *(rdi_1 + 0x14) += 1
    *rax_5 = rcx_7
    *(rdi_1 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d5a070
    rcx_7[2] = r12
    rcx_7[3].d = rsi_1
    rcx_7[4] = arg2

int64_t* rsi_2 = data_14395f4d0
uint32_t r14_1 = zx.d(*(arg1 + 0x210))
void* rdi_2 = arg4[8]

if ((*(*rsi_2 + 8))(rsi_2) == 0)
    void*** rcx_16 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_16[5]
    
    if (rax_11 u> *(rdi_2 + 0x38))
        sub_140b0e3d0(rdi_2 + 0x30, 0x30)
        rcx_16 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_16[5]
    
    *(rdi_2 + 0x30) = rax_11
    void**** rax_12 = *(rdi_2 + 8)
    *(rdi_2 + 0x14) += 1
    *rax_12 = rcx_16
    *(rdi_2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142d5a080
    rcx_16[2] = r12
    rcx_16[3].d = r14_1
    rcx_16[4] = rsi_2

sub_141080ac0(arg1, arg4[8], r12, *(*arg4 + 0x10))
j_sub_14137eb70(arg1 + 0x118, arg4[8], r12, arg4, data_14395f4d0, 0, nullptr)
void* rbx_1 = arg4[8]
int32_t r8_4 = *(*arg4 + 0x1548)

if (*(arg1 + 0x218) != 0xffff)
    int64_t arg_20
    int64_t* rcx_22 = &arg_20
    
    if (r8_4 s< 3)
        sub_14137b650(rcx_22)
    else
        sub_14137b9a0(rcx_22, rbx_1, 0xf, r8_4)
    
    sub_141083500(rbx_1, &arg_8, arg1 + 0x218, arg_20)
    sub_1405d1550(&arg_20)

return sub_1405d1550(arg3) __tailcall
