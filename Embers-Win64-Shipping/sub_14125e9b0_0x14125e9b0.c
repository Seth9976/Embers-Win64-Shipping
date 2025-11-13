// 函数: sub_14125e9b0
// 地址: 0x14125e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
uint64_t r15 = zx.q(arg2)
int64_t rsi = sx.q(arg3)

if (rbx == 0 || *(rbx + 0xa008) == 0x400)
    void* rax_3 = (arg1[2] + 7) & 0xfffffffffffffff8
    void* rcx = rax_3 + 0xa010
    
    if (rcx u> arg1[3])
        sub_140b0e3d0(&arg1[2], 0xa018)
        rax_3 = (arg1[2] + 7) & 0xfffffffffffffff8
        rcx = rax_3 + 0xa010
    
    arg1[2] = rcx
    arg1[1] = rax_3
    *(rax_3 + 0xa000) = 0
    *(arg1[1] + 0xa008) = 0
    
    if (*arg1 == 0)
        *arg1 = arg1[1]
    
    if (rbx != 0)
        *(rbx + 0xa000) = arg1[1]

void* rdx = arg1[1]
uint64_t rcx_2 = zx.q(*(rdx + 0xa008))
*(rdx + 0xa008) = (rcx_2 + 1).d
uint64_t rcx_3 = rcx_2 * 5
*(rdx + (rcx_3 << 3)) = 0
void* result = rdx + (rcx_3 << 3)
__builtin_memset(result + 8, 0, 0x20)

if (r15.d != 0)
    uint32_t rbp_1 = (r15 << 3).d
    int64_t rcx_6 = (arg1[2] + 7) & 0xfffffffffffffff8
    int64_t r12_1 = sx.q(rbp_1)
    int64_t rax_10 = r12_1 + rcx_6
    
    if (rax_10 u> arg1[3])
        sub_140b0e3d0(&arg1[2], rbp_1 + 8)
        rcx_6 = (arg1[2] + 7) & 0xfffffffffffffff8
        rax_10 = r12_1 + rcx_6
    
    arg1[2] = rax_10
    *(result + 0x18) = rcx_6
    memset(rcx_6, 0, zx.q(rbp_1))

*(result + 0x14) = r15.w

if (rsi.d != 0)
    int64_t rax_13 = (arg1[2] + 7) & 0xfffffffffffffff8
    int64_t rcx_10 = rsi + rax_13
    
    if (rcx_10 u> arg1[3])
        sub_140b0e3d0(&arg1[2], (rsi + 8).d)
        rax_13 = (arg1[2] + 7) & 0xfffffffffffffff8
        rcx_10 = rsi + rax_13
    
    arg1[2] = rcx_10
    *(result + 0x20) = rax_13

*(result + 0x16) = rsi.w
return result
