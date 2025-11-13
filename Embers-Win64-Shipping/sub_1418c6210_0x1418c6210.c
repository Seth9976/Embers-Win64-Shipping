// 函数: sub_1418c6210
// 地址: 0x1418c6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
int64_t r12 = sx.q(arg4)
uint64_t r15 = zx.q(arg2)
arg1.b = *(arg5 + 0xa4) != 0
char result = sub_1418c9180(arg1.b)
void* rdx = *(r14 + 0x450)
void* rcx = *(rdx + 0x48)
int64_t* rdi = *(arg5 + 0x20) + r12 * 0x28
void* r13 = *(rcx + 0xc8)

if (result == 0)
    uint64_t rax_5 = zx.q(r15.b)
    result =
        sub_1418c6000(rcx + 0xd0 + rax_5 * 0x30, r12.d, arg3 + 0x38, rcx + ((rax_5 + 0x3d) << 3))
else if (*(rdi + 6) == 0)
    int64_t rcx_1 = r12 * 3
    int64_t r12_1 = data_143efb550
    int64_t rax_1 = *(r13 + (sx.q(r15.d) << 3))
    uint32_t r10_1 = zx.d(*(rax_1 + (rcx_1 << 1) + 2))
    char rbx_1 = *(rax_1 + (rcx_1 << 1))
    uint32_t arg_20 = r10_1
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        uint32_t rax_2 = GetCurrentThreadId()
        rdx = *(r14 + 0x450)
        r10_1 = arg_20
        rcx_2.b = rax_2 != data_143de5470
    
    void* rbx_2 = *(rdx + 0x48)
    int64_t r11_1 = zx.q(rbx_1) * 0x58
    void* rax_4 = *(arg3 + 0x40)
    void* rcx_3 = *(rbx_2 + 0x98)
    void* r8 = *(rax_4 + 0x20)
    
    if (*(r12_1 + (rcx_2 << 2)) s<= 1)
        result =
            sub_1418c94d0(rcx_3 + r11_1, r10_1, r8, zx.q(*(rax_4 + 0x14)), zx.q(*(arg3 + 0x20)))
        *(rbx_2 + 0x90) |= result
        *(rbx_2 + 0xc0) |= result
    else
        result = sub_1418c93e0(rcx_3 + r11_1, arg_20, r8, 0, zx.q(*(arg3 + 0x20)), *(rax_4 + 0x14))
        *(rbx_2 + 0x90) |= result
        *(rbx_2 + 0xc0) |= result

if (rdi[2].d == 0)
    return result

int64_t var_30_1 = *(r13 + 0x80) + r15 * 0x38 + 0x10
void* var_38_1 = arg3
return sub_1418b8310(r14, *(r14 + 0x450), arg5, arg5 + 0x30, arg5 + 0x40, rdi)
