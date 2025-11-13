// 函数: sub_141107360
// 地址: 0x141107360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t rdi = *(arg2 + 0x1b0)
int64_t arg_8 = rdi
int64_t rax = *arg5
uint64_t rdx = zx.q(arg3[0x2a9].d)
int64_t arg_10 = 0
int32_t var_80 = 0
sub_1414397d0(arg1, arg2, rdi, arg5, (*(rax + 0x40))(arg5, rdx, &arg_10), arg3, arg3.d + 0x10)
int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
int32_t r8_2 = 0

if (rbx_1 s> 0)
    int64_t rdx_3 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_3 << 3)) == data_143f55690)
            break
        
        r8_2 += 1
        rdx_3 += 1
        
        if (rdx_3 s>= rbx_1)
            goto label_141107440

void* r8_3

if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
label_141107440:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_3 = &data_143ce8560
else
    void* rcx_22 = *(arg1 + 0xe8)
    
    if ((rcx_22.b & 1) != 0)
        rcx_22 = (rcx_22 s>> 1) + arg1 + 0xe8
    
    r8_3 = rcx_22 + (sx.q(r8_2) << 1)

sub_14077caf0(arg2, &arg_8, r8_3, arg6)
int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* r15 = *(*arg3 + 0x20)
void* rcx_7 = &rbx_4[1]
int64_t* rax_7 = *(*(r15 + 0x18f8) + 0x30)

if (rcx_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_7 = &rbx_4[1]

*(arg2 + 0x30) = rcx_7
*rbx_4 = rax_7
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_11[6]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_11[6]

*(arg2 + 0x30) = rax_8
void**** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_9 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142da7798
rcx_11[2].d = 1
rcx_11[3] = rbx_4
rcx_11[4].d = 2
*(rcx_11 + 0x24) = 3
rcx_11[5] = 0
void* rbx_7 = *(r15 + 0x18f8)
void* rsi_1 = *(r15 + 0x1968)
sub_14077c370(arg1 + 0x130, arg2, &arg_8, rbx_7 + 8)
sub_14077c370(arg1 + 0x138, arg2, &arg_8, rbx_7 + 0x28)
sub_14077c370(arg1 + 0x140, arg2, &arg_8, rsi_1 + 8)
sub_140741e30(arg2, &arg_8, arg1 + 0x148, &arg_20, 0)
void arg_28
sub_140741e30(arg2, &arg_8, arg1 + 0x14e, &arg_28, 0)
uint32_t var_78[0x4][0x4]
return sub_14077c730(arg2, &arg_8, arg1 + 0x154, sub_140631b10(arg7, &var_78), 0)
