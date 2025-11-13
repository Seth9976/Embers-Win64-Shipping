// 函数: sub_14205ce40
// 地址: 0x14205ce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg8
void* r15 = arg5
int64_t rdi = sx.q(*(rbx + 0x38))
int64_t* r14 = *(arg6 + 0x28)
int64_t rdx = *(*r14 + 0x10)
int32_t rax_3 = *(r15 + 0x148) & 0xf
int32_t rax_4 = (rdi + 1).d
*(rbx + 0x38) = rax_4

if (rax_4 s> *(rbx + 0x3c))
    sub_1419d6df0(rbx, rdi.d)

void* rax_5 = *(rbx + 0x30)
int64_t rcx_1 = rdi * 3
void* rdx_2 = rbx

if (rax_5 != 0)
    rdx_2 = rax_5

*(rdx_2 + (rcx_1 << 2)) = rax_3.q
*(rdx_2 + (rcx_1 << 2) + 8) = rdx:4.d
int64_t rdi_1 = sx.q(*(rbx + 0x38))
int64_t rcx_2 = *(r14[1] + 0x10)
int32_t rax_9 = *(r15 + 0x14c) & 0xf
int32_t rax_10 = (rdi_1 + 1).d
*(rbx + 0x38) = rax_10

if (rax_10 s> *(rbx + 0x3c))
    sub_1419d6df0(rbx, rdi_1.d)

void* rax_11 = *(rbx + 0x30)
int64_t rcx_4 = rdi_1 * 3

if (rax_11 != 0)
    rbx = rax_11

*(rbx + (rcx_4 << 2)) = rax_9.q
*(rbx + (rcx_4 << 2) + 8) = rcx_2:4.d
arg5.d = *(arg1 + 4)
arg5:4.w = *(arg1 + 8)
sub_141211d90(arg7, &arg5, &r14[2])
arg5.d = *(arg1 + 0xa)
arg5:4.w = *(arg1 + 0xe)
sub_141211d90(arg7, &arg5, r14 + 0x1c)
arg5.d = *(arg1 + 0x10)
arg5:4.w = *(arg1 + 0x14)
sub_141211d90(arg7, &arg5, &r14[5])
arg5.d = *(arg1 + 0x16)
arg5:4.w = *(arg1 + 0x1a)
sub_141211d90(arg7, &arg5, r14 + 0x34)
arg5.d = *(arg1 + 0x1c)
arg5:4.w = *(arg1 + 0x20)
sub_14088bf20(arg7, &arg5, &r14[8])
int64_t rdi_2 = sx.q(*(arg4 + 0xe0))
int16_t* r15_1 = &data_143ce8560
int32_t rbx_1 = 0
uint64_t r13_1 = zx.q(data_14401b1a0)
int32_t r8_5 = 0

if (rdi_2 s> 0)
    int64_t rdx_9 = 0
    
    while (true)
        void* rcx_11 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_11 = (rcx_11 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_11 + (rdx_9 << 3)) == data_143f40e40)
            break
        
        r8_5 += 1
        rdx_9 += 1
        
        if (rdx_9 s>= rdi_2)
            goto label_14205d038

int16_t* rdx_10
TEB* gsbase

if (rdi_2 s<= 0 || r8_5 == 0xffffffff)
label_14205d038:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r13_1 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_10 = &data_143ce8560
else
    void* rcx_17 = *(arg4 + 0xe8)
    
    if ((rcx_17.b & 1) != 0)
        rcx_17 = (rcx_17 s>> 1) + arg4 + 0xe8
    
    rdx_10 = rcx_17 + (sx.q(r8_5) << 1)

int16_t rax_26 = *rdx_10

if (rax_26 != 0xffff)
    sub_140891ab0(arg7, r14[9], zx.d(rax_26))

int64_t r11_2 = sx.q(*(arg4 + 0xe0))
int64_t rdi_3 = r14[0x10]

if (r11_2 s> 0)
    int64_t rdx_12 = 0
    
    while (true)
        void* rcx_15 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_15 = (rcx_15 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_15 + (rdx_12 << 3)) == data_143f40ee0)
            break
        
        rbx_1 += 1
        rdx_12 += 1
        
        if (rdx_12 s>= r11_2)
            goto label_14205d0ca

if (r11_2 s<= 0 || rbx_1 == 0xffffffff)
label_14205d0ca:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r13_1 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_19 = *(arg4 + 0xe8)
    
    if ((rcx_19.b & 1) != 0)
        rcx_19 = (rcx_19 s>> 1) + arg4 + 0xe8
    
    r15_1 = rcx_19 + (sx.q(rbx_1) << 1)

int16_t result = *r15_1

if (result == 0xffff)
    return result

return sub_140891ab0(arg7, rdi_3, zx.d(result))
