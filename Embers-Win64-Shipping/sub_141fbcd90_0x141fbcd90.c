// 函数: sub_141fbcd90
// 地址: 0x141fbcd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x28)

if (r14 == 0)
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        sub_140d21d80(arg1)
        sub_140cde0b0()
    
    int64_t* rax_3
    rax_3, arg3 = sub_142499390()
    r14 = rax_3

int64_t* r9 = *(*arg2 + 8)
int64_t* rdx = r9[1]
int32_t* rax_4 = *rdx
int32_t arg_8

if (&rax_4[1] u> rdx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_1, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_1, 4)
else
    arg_8 = *rax_4
    int64_t* rcx_3 = r9[1]
    *rcx_3 += 4

void* var_58
sub_141fa4f40(&var_58, arg1)
int32_t rdi = arg_8

if (rdi s> *(arg1 + 0x38) - *(arg1 + 0x64))
    sub_1409d93a0(arg1 + 0x30, rdi)
    int32_t rax_10
    
    if (rdi u< 4)
        rax_10 = 1
    else
        uint32_t rdi_1 = rdi u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi_1 + 8)
        int32_t rcx_7
        
        if (rdi_1 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_1 + 7)
        
        if (rcx_9 == 0)
            rax_10 = 1
        else
            rax_10 = 1 << ((not.d(rcx_9)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_12 = *(arg1 + 0x78)
    
    if (rcx_12 == 0 || rcx_12 s< rax_10)
        *(arg1 + 0x78) = rax_10
        sub_1405c1850(arg1 + 0x30)
    
    rdi = arg_8

void* rbp = nullptr
int32_t r15 = 0
int32_t arg_10

if (rdi s> 0)
    int64_t arg_18
    int64_t* var_50 = &arg_18
    int64_t arg_20
    int64_t* var_48_1 = &arg_20
    
    do
        void* rax_11 = *arg2
        arg_18 = 0
        int64_t* rcx_14 = *(rax_11 + 8)
        (*(*rcx_14 + 0x140))(rcx_14, &arg_18)
        int32_t rcx_15 = *(r14 + 0x5c)
        int64_t rax_13 = sub_140a82f30(sx.q((r14[0xb].d - 1 + rcx_15) & neg.d(rcx_15)), 0)
        int64_t r9_2 = *r14
        arg_20 = rax_13
        (*(r9_2 + 0x2a0))(r14, rax_13, 1, r9_2)
        sub_140ca6840(r14, arg2, arg_20, 0)
        sub_140b92a80(arg1 + 0x30, &arg_10, &var_50, nullptr)
        r15 += 1
    while (r15 s< arg_8)

EnterCriticalSection(&data_143f3d1e8)
void* rbx_1 = var_58
sub_140865c40(&data_143a2dbd0, &arg_10, rbx_1)
int64_t rax_14 = sx.q(arg_10)

if (rax_14.d != 0xffffffff)
    rbp = data_143a2dbd0 + rax_14 * 0x18

int32_t temp1 = *(rbp + 8)
*(rbp + 8) -= 1

if (temp1 == 1)
    sub_140599090(rbx_1 + 0x98)
    sub_140868c90(&data_143a2dbd0, rbx_1)

return LeaveCriticalSection(&data_143f3d1e8)
