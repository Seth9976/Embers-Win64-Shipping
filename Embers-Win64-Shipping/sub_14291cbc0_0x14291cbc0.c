// 函数: sub_14291cbc0
// 地址: 0x14291cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = sx.q(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r14 = sx.q((temp1 - temp0) s>> 1)

if (rdi.d == 4)
    return sub_14291fc50(arg1, arg2) __tailcall

if (rdi.d == 8)
    return sub_142920110(arg1, arg2) __tailcall

if (rdi.d s< 0x10)
    return sub_14291cab0(arg1, arg2, rdi.d, arg4) __tailcall

int64_t rax_7 = r14 << 3
void* rbp = &arg2[r14]
int32_t rax_8 = sub_142890c90(arg2, rbp, r14.d)
int32_t r12 = 0

if (rax_8 s> 0)
    sub_142921500(arg4, arg2, rbp, r14.d)
else if (rax_8 s>= 0)
    r12 = 1
else
    sub_142921500(arg4, rbp, arg2, r14.d)

void* r13 = &arg4[sx.q((rdi * 2).d)]
void* rcx_7 = &arg4[rdi]

if (r12 != 0)
    memset(rcx_7, 0, rdi << 3)
else
    sub_14291cbc0(rcx_7, arg4, zx.q(r14.d), r13, rax_7)

sub_14291cbc0(arg1, arg2, zx.q(r14.d), r13, rax_7)
int64_t* rbx_1 = &arg1[rdi]
sub_14291cbc0(rbx_1, rbp, zx.q(r14.d), r13)
int64_t* rbx_2 = &arg4[rdi]
int64_t* rcx_13 = &arg1[r14]
int32_t rbp_2 = sub_14291cd80(arg4, arg1, rbx_1, rdi.d) - sub_142921500(rbx_2, arg4, rbx_2, rdi.d)
void* result = sub_14291cd80(rcx_13, rcx_13, rbx_2, rdi.d)

if (rbp_2 != neg.d(result.d))
    int64_t r8_14 = sx.q(rbp_2 + result.d)
    int64_t rcx_14 = sx.q((r14 + rdi).d)
    result = &arg1[rcx_14]
    int64_t rdx_17 = arg1[rcx_14] + r8_14
    *result = rdx_17
    
    if (rdx_17 u< r8_14)
        int64_t i
        
        do
            i = *(result + 8)
            *(result + 8) += 1
            result += 8
        while (i == -1)

return result
