// 函数: sub_1410659f0
// 地址: 0x1410659f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_1439c7a34
void* rbx = arg4
void* rdi = arg2

if (arg4 != 0 && rcx u> 1)
    while (*(rbx + 0x28) != *(arg1 + 0x138))
        rbx = *(rbx + 0xd8)
        
        if (rbx == 0)
            break

if (arg2 != 0 && rcx u> 1)
    while (*(rdi + 0x28) != *(arg1 + 0x138))
        rdi = *(rdi + 0xd8)
        
        if (rdi == 0)
            break

void* r14 = *(rbx + 0x78)
void* rax_3 = *(rbx + 0x28)
int32_t r12 = -1
void* r15 = *(rdi + 0x78)
int32_t r13 = -1
*(arg1 + 0x3b90) += 1
char arg_10 = 0
int32_t var_68

if (*(r14 + 0xfc) != 0)
    sub_141037220(arg1 + 0x1c0, r14, 0x800, 0)
else
    r13 = *(r14 + 0xf0)
    
    if (r13 != 0x800)
        arg_10 = 1
        var_68 = 0
        sub_1410129f0(arg1 + 0x1c0, r14, r13, 0x800, 0)

char arg_8

if (*(r15 + 0xfc) != 0)
    sub_141037220(arg1 + 0x1c0, r15, 0x400, 0)
    arg_8 = 0
else
    r12 = *(r15 + 0xf0)
    arg_8 = 0
    
    if (r12 != 0x400)
        var_68 = 0
        sub_1410129f0(arg1 + 0x1c0, r15, r12, 0x400, 0)
        arg_8 = 1

void* rcx_7 = *(arg1 + 0x1c8)
int32_t rdx_4 = *(rcx_7 + 0x128)
int64_t* r9 = *(rcx_7 + 0x30)

if (rdx_4 != 0)
    (*(*r9 + 0xd0))(r9, rdx_4, *(rcx_7 + 0x120))
    *(rcx_7 + 0x128) = 0
    rcx_7 = *(arg1 + 0x1c8)

int64_t* rcx_8 = *(rcx_7 + 0x30)
var_68.q = arg5 + *(rbx + 0xb8)
(*(*rcx_8 + 0x78))(rcx_8, *(r15 + 0x20), arg3 + *(rdi + 0xb8), *(r14 + 0x20), var_68, arg6, rax_3)
sub_14105c1a0(r15, arg1 + 0x1c0)
sub_14105c1a0(r14, arg1 + 0x1c0)
int64_t result = sub_141031e00(rax_3, 1, 0)

if (arg_8 != 0)
    result = sub_1410129f0(arg1 + 0x1c0, r15, 0x400, r12, 0)

if (arg_10 == 0)
    return result

return sub_1410129f0(arg1 + 0x1c0, r14, 0x800, r13, 0)
