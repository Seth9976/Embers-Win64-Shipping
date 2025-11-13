// 函数: sub_1413e8260
// 地址: 0x1413e8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_140865c40(arg1 + 0x1078, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x1078) + rax * 0x18
    
    if (rax_2 != 0 && rax_2 != -8)
        return zx.q(*(rax_2 + 8))

void* rsi = arg1 + 0x10c8
void* rax_5 = *(rsi + 0x10)
void* rcx_1 = rsi
int32_t r10 = *(rsi + 0x18)

if (rax_5 != 0)
    rcx_1 = rax_5

int32_t rdi = 0
int64_t rax_6 = 0
uint64_t rdx_2 = zx.q((r10 + 0x1f) u>> 5)

if (rdx_2 != 0)
    while (*(rcx_1 + (rax_6 << 2)) == 0xffffffff)
        rdi += 1
        rax_6 += 1
        
        if (rax_6 s>= rdx_2)
            break

int32_t rdi_2

if (rdi s>= rdx_2.d)
label_1413e8325:
    rdi_2 = *(arg1 + 0x10e0)
    int32_t rbx_1 = *(rsi + 0x18)
    sub_1405a4980(rsi, rbx_1 + 1)
    *(rsi + 0x18) += 1
    void* rax_10 = *(rsi + 0x10)
    
    if (rax_10 != 0)
        rsi = rax_10
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_1)
    int64_t rdx_8 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    *(rsi + (rdx_8 << 2)) |= 1 << (rbx_1.b & 0x1f)
else
    int64_t r9_1 = sx.q(rdi)
    int32_t rdx_3 = *(rcx_1 + (r9_1 << 2))
    int32_t rax_8 = not.d(rdx_3)
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_forward(rax_8)
    rdi_2 = (rdi << 5) + temp0_2
    
    if (rdi_2 s>= r10)
        goto label_1413e8325
    
    *(rcx_1 + (r9_1 << 2)) = rdx_3 | (neg.d(rax_8) & rax_8)
    
    if (rdi_2 == 0xffffffff)
        goto label_1413e8325

int32_t arg_18 = rdi_2
int64_t* var_38 = &arg_10
int32_t* var_30 = &arg_18
int32_t arg_1c = (zx.o(0)).d
sub_140bbe6a0(arg1 + 0x1078, &arg_8, &var_38, nullptr)
*(arg1 + 0x1031) = 1
return zx.q(rdi_2)
