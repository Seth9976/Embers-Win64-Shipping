// 函数: sub_1421b75a0
// 地址: 0x1421b75a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_14395fa10
int16_t* r12 = &data_143ce8560
int64_t rbx = sx.q(*(arg4 + 0xe0))
int32_t r8 = 0
int64_t rax_1 = data_14395f4d0

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f4dfe0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_1421b764b

void* rdx_1
TEB* gsbase

if (rbx s<= 0 || r8 == 0xffffffff)
label_1421b764b:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_9 = *(arg4 + 0xe8)
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_9 + (sx.q(r8) << 1)

void* arg_38
void* rsi = arg_38
sub_14108daf0(arg6, rdx_1, *(rsi + 0x150))
int64_t rbx_1 = sx.q(*(arg4 + 0xe0))
int32_t r8_2 = 0
int64_t r15 = *(rsi + 0x158)

if (rbx_1 s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_6 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_6 = (rcx_6 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_6 + (rdx_2 << 3)) == data_143f4e090)
            break
        
        r8_2 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rbx_1)
            goto label_1421b76ee

if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
label_1421b76ee:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_11 = *(arg4 + 0xe8)
    
    if ((rcx_11.b & 1) != 0)
        rcx_11 = (rcx_11 s>> 1) + arg4 + 0xe8
    
    r12 = rcx_11 + (sx.q(r8_2) << 1)

sub_14108daf0(arg6, r12, r15)
int32_t rdx_6 = *(arg1 + 4)
void* rbx_2 = *(arg5 + 0x20)
int16_t* rdx_7
void** r8_5

if (rbx_2 == 0)
    int64_t rax_15 = *(rsi + 0x160)
    int64_t r8_6 = data_1439c9138
    
    if (rax_15 != 0)
        r8_6 = rax_15
    
    sub_14088d770(arg6, rdx_6, r8_6)
    r8_5 = &arg_38
    int32_t arg_8 = *(arg1 + 8)
    rdx_7 = &arg_8
    int16_t arg_c = *(arg1 + 0xc)
    arg_38.d = 0
else
    sub_14088d770(arg6, rdx_6, *(rbx_2 + 0x10))
    r8_5 = rbx_2 + 8
    arg_38.d = *(arg1 + 8)
    rdx_7 = &arg_38
    arg_38:4.w = *(arg1 + 0xc)

sub_14088bf20(arg6, rdx_7, r8_5)
sub_1421ad5f0(arg6, *(arg1 + 0xe), *(arg1 + 0x12), rax, *(rsi + 0x168))
sub_1421ad5f0(arg6, *(arg1 + 0x16), *(arg1 + 0x1a), rax, *(rsi + 0x170))
sub_1421ad5f0(arg6, *(arg1 + 0x1e), *(arg1 + 0x22), rax, *(rsi + 0x178))
return sub_1421ad5f0(arg6, *(arg1 + 0x26), *(arg1 + 0x2a), rax_1, data_143a2ee58) __tailcall
