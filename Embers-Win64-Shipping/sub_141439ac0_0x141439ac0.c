// 函数: sub_141439ac0
// 地址: 0x141439ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rdi = sx.q(*(arg1 + 0xe0))
int16_t* r15 = &data_143ce8560
int64_t rax = data_143f55740
int32_t rbx = 0
int64_t arg_8 = arg3
int32_t r10 = 0

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == rax)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_141439b5e

int16_t* r8_1
TEB* gsbase

if (rdi s<= 0 || r10 == 0xffffffff)
label_141439b5e:
    
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

sub_1410e9550(arg2, &arg_8, r8_1, arg6)
int64_t* arg_30
int64_t* rdi_1 = arg_30

if (*(rdi_1 + 0xd7e) != 0 && *(*rdi_1 + 8) s> 0)
    char rax_4
    int32_t rdx_2
    rax_4, rdx_2 = sub_142391f10(rdi_1)
    void* rax_5 = sub_1422e5d90(*rdi_1, sbb.d(rdx_2, rdx_2, rax_4 != 0) & 2)
    int64_t r11_2 = sx.q(*(arg1 + 0xe0))
    
    if (r11_2 s> 0)
        int64_t rdx_5 = 0
        
        while (true)
            void* rax_7 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rax_7 = (rax_7 s>> 1) + arg1 + 0xd8
            
            if (*(rax_7 + (rdx_5 << 3)) == data_143f557f0)
                break
            
            rbx += 1
            rdx_5 += 1
            
            if (rdx_5 s>= r11_2)
                goto label_141439c21
    
    if (r11_2 s<= 0 || rbx == 0xffffffff)
    label_141439c21:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
    else
        void* rcx_13 = *(arg1 + 0xe8)
        
        if ((rcx_13.b & 1) != 0)
            rcx_13 = (rcx_13 s>> 1) + arg1 + 0xe8
        
        r15 = rcx_13 + (sx.q(rbx) << 1)
    
    sub_141083500(arg2, &arg_8, r15, *(rax_5 + 0x10))

int64_t result = sub_14143a820(arg1, arg2, arg3, arg4, arg5, rdi_1)
int32_t r8_5 = rdi_1[0x2a9].d

if (*(arg1 + 0x12e) == 0xffff)
    return result

int64_t** rcx_10 = &arg_30

if (r8_5 s< 3)
    sub_14137b7f0(rcx_10, arg2)
else
    sub_14137baa0(rcx_10, arg2, arg7, r8_5)

sub_141083500(arg2, &arg_18, arg1 + 0x12e, arg_30)
return sub_1405d1550(&arg_30)
