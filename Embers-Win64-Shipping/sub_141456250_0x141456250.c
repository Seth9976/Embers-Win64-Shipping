// 函数: sub_141456250
// 地址: 0x141456250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30 = arg8
sub_141455d90(arg1, arg2, arg3, arg4, arg5)
sub_14108daf0(arg8, arg1 + 0x138, *(arg6 + 0x30))
int64_t rdi = sx.q(*(arg1 + 0xe0))
int16_t* r15 = &data_143ce8560
int64_t rsi = *(arg6 + 0x18)
int32_t rbx_1 = 0
int32_t r8_1 = 0
uint64_t r12 = zx.q(data_14401b1a0)

if (rdi s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_2 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_2 + (rdx_1 << 3)) == data_143f55740)
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rdi)
            goto label_14145632a

int16_t* rdx_2
TEB* gsbase

if (rdi s<= 0 || r8_1 == 0xffffffff)
label_14145632a:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_17 = *(arg1 + 0xe8)
    
    if ((rcx_17.b & 1) != 0)
        rcx_17 = (rcx_17 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_17 + (sx.q(r8_1) << 1)

sub_14108daf0(arg8, rdx_2, rsi)
int64_t rdi_1 = sx.q(*(arg1 + 0xe0))
int32_t r8_3 = 0

if (rdi_1 s> 0)
    int64_t rdx_3 = 0
    
    while (true)
        void* rcx_6 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_6 = (rcx_6 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_6 + (rdx_3 << 3)) == data_143eca0c0)
            break
        
        r8_3 += 1
        rdx_3 += 1
        
        if (rdx_3 s>= rdi_1)
            goto label_1414563d4

int16_t* rdx_4

if (rdi_1 s<= 0 || r8_3 == 0xffffffff)
label_1414563d4:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_4 = &data_143ce8560
else
    void* rcx_19 = *(arg1 + 0xe8)
    
    if ((rcx_19.b & 1) != 0)
        rcx_19 = (rcx_19 s>> 1) + arg1 + 0xe8
    
    rdx_4 = rcx_19 + (sx.q(r8_3) << 1)

sub_14108daf0(arg8, rdx_4, *arg7)
int64_t rdi_2 = sx.q(*(arg1 + 0xe0))
int32_t r8_5 = 0

if (rdi_2 s> 0)
    int64_t rdx_5 = 0
    
    while (true)
        void* rcx_10 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_10 + (rdx_5 << 3)) == data_143eca160)
            break
        
        r8_5 += 1
        rdx_5 += 1
        
        if (rdx_5 s>= rdi_2)
            goto label_141456484

int16_t* rdx_6

if (rdi_2 s<= 0 || r8_5 == 0xffffffff)
label_141456484:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_6 = &data_143ce8560
else
    void* rcx_21 = *(arg1 + 0xe8)
    
    if ((rcx_21.b & 1) != 0)
        rcx_21 = (rcx_21 s>> 1) + arg1 + 0xe8
    
    rdx_6 = rcx_21 + (sx.q(r8_5) << 1)

sub_14108daf0(arg8, rdx_6, arg7[1])
int64_t rdi_3 = *(arg6 + 0x20)

if (rdi_3 == 0)
    rdi_3 = *(arg6 + 0x18)

int64_t r11_4 = sx.q(*(arg1 + 0xe0))

if (r11_4 s> 0)
    int64_t rdx_7 = 0
    
    while (true)
        void* rcx_14 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_14 = (rcx_14 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_14 + (rdx_7 << 3)) == data_143f557f0)
            break
        
        rbx_1 += 1
        rdx_7 += 1
        
        if (rdx_7 s>= r11_4)
            goto label_141456543

if (r11_4 s<= 0 || rbx_1 == 0xffffffff)
label_141456543:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_23 = *(arg1 + 0xe8)
    
    if ((rcx_23.b & 1) != 0)
        rcx_23 = (rcx_23 s>> 1) + arg1 + 0xe8
    
    r15 = rcx_23 + (sx.q(rbx_1) << 1)

return sub_14108daf0(arg8, r15, rdi_3) __tailcall
