// 函数: sub_14088e340
// 地址: 0x14088e340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* arg_38
void* r13 = arg_38
int16_t* r14 = &data_143ce8560
int64_t rdi = sx.q(*(arg4 + 0xe0))
int32_t rbx = 0
int32_t r8 = 0
int64_t r15 = *(r13 + 0x168)

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143ce90c0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_14088e3de

int16_t* rdx_1
TEB* gsbase

if (rdi s<= 0 || r8 == 0xffffffff)
label_14088e3de:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_16 = *(arg4 + 0xe8)
    
    if ((rcx_16.b & 1) != 0)
        rcx_16 = (rcx_16 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_16 + (sx.q(r8) << 1)

int16_t rax_3 = *rdx_1

if (rax_3 != 0xffff)
    sub_140891ab0(arg5, r15, zx.d(rax_3))

int64_t r11_2 = sx.q(*(arg4 + 0xe0))
int64_t r15_1 = *(r13 + 0x158)

if (r11_2 s> 0)
    int64_t rdx_3 = 0
    
    while (true)
        void* rcx_6 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_6 = (rcx_6 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_6 + (rdx_3 << 3)) == data_143ce9160)
            break
        
        rbx += 1
        rdx_3 += 1
        
        if (rdx_3 s>= r11_2)
            goto label_14088e47d

if (r11_2 s<= 0 || rbx == 0xffffffff)
label_14088e47d:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_18 = *(arg4 + 0xe8)
    
    if ((rcx_18.b & 1) != 0)
        rcx_18 = (rcx_18 s>> 1) + arg4 + 0xe8
    
    r14 = rcx_18 + (sx.q(rbx) << 1)

int16_t rax_7 = *r14

if (rax_7 != 0xffff)
    sub_140891ab0(arg5, r15_1, zx.d(rax_7))

void* rbx_1 = arg_8
arg_38.d = *(r13 + 0x170)
arg_8.d = *(rbx_1 + 4)
arg_8:4.w = *(rbx_1 + 8)
sub_14088bf20(arg5, &arg_8, &arg_38)
int64_t rax_11 = *(r13 + 0x178)
int64_t r8_5 = data_14397f978

if (rax_11 != 0)
    r8_5 = rax_11

sub_14088d770(arg5, *(rbx_1 + 0x16), r8_5)
arg_8.d = *(r13 + 0x180)
arg_38.d = *(rbx_1 + 0xa)
arg_38:4.w = *(rbx_1 + 0xe)
sub_14088bf20(arg5, &arg_38, &arg_8)
arg_8.d = *(r13 + 0x184)
arg_38.d = *(rbx_1 + 0x10)
arg_38:4.w = *(rbx_1 + 0x14)
sub_14088bf20(arg5, &arg_38, &arg_8)
sub_14088d770(arg5, *(rbx_1 + 0x1a), *(r13 + 0x188))
arg_8.d = *(r13 + 0x190)
arg_38.d = *(rbx_1 + 0x1e)
arg_38:4.w = *(rbx_1 + 0x22)
sub_14088bf20(arg5, &arg_38, &arg_8)
int64_t rax_21 = *(r13 + 0x198)
int64_t r8_10 = data_14397f9a8

if (rax_21 != 0)
    r8_10 = rax_21

sub_14088d770(arg5, *(rbx_1 + 0x24), r8_10)
arg_8.d = *(r13 + 0x1a0)
arg_38.d = *(rbx_1 + 0x28)
arg_38:4.w = *(rbx_1 + 0x2c)
return sub_14088bf20(arg5, &arg_38, &arg_8)
