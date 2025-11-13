// 函数: sub_1410102f0
// 地址: 0x1410102f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = -1
void* r13 = **(**arg1 + 0x6d8)
void* rsi = *arg1[1]
int32_t var_48

if (*(rsi + 0xfc) != 0)
    sub_141037220(r13 + 0x1c0, rsi, 0x800, 0)
else
    rbp = *(rsi + 0xf0)
    
    if (rbp != 0x800)
        var_48 = 0
        r12.b = 1
        sub_1410129f0(r13 + 0x1c0, rsi, rbp, 0x800, 0)

int64_t rax_4 = *(*arg1[2] + 0xc0)
*(r13 + 0x3b90) += 1
void* r14 = *(r13 + 0x1c8)
int32_t rdx_3 = *(r14 + 0x128)
int64_t* rcx_3 = *(r14 + 0x30)

if (rdx_3 != 0)
    (*(*rcx_3 + 0xd0))(rcx_3, rdx_3, *(r14 + 0x120))
    *(r14 + 0x128) = 0
    r14 = *(r13 + 0x1c8)

int64_t* rcx_4 = *(r14 + 0x30)
var_48.q = zx.q(*arg1[4]) + rax_4
(*(*rcx_4 + 0x78))(rcx_4, *(*arg1[3] + 0x20), 0, *(*arg1[1] + 0x20), var_48, zx.q(*arg1[5]))
sub_14105c1a0(*arg1[3], r13 + 0x1c0)
sub_14105c1a0(*arg1[1], r13 + 0x1c0)
void** var_38
sub_141022330(r13, &var_38, 1)
int64_t* result_1
int64_t* result = result_1

if (result != 0)
    int32_t rbx_1 = *(result + 0x14)
    *(result + 0x14) -= 1
    
    if (rbx_1 == 1)
        result = sub_141011360(result_1, rbx_1.b)

if (r12.b == 0)
    return result

return sub_1410129f0(r13 + 0x1c0, rsi, 0x800, rbp, 0)
