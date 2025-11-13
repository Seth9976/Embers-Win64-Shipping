// 函数: sub_142ba5e60
// 地址: 0x142ba5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(*(arg1 + 8) + 0x2d8)
uint32_t rdi_1 = zx.d(*(*(arg2 + 0x80) + 0x18)) << 0x10

if (rdi_1 s< 0x40000)
    rdi_1 = 0x40000

uint32_t rax_2 = sub_142b91790(0x3e80000, zx.d(*(arg2 + 0x68)) << 0x10)

if (rax_2 s< 0x28f)
    return 0

int32_t rax_4 = *(rbx + 0x24)
int32_t rbp = *(rbx + 0x40)
int32_t rsi = *(rbx + 0x28)
int32_t r13 = *(rbx + 0x30)
int32_t rax_5 = *(rbx + 0x2c)
int32_t r14 = *(rbx + 0x3c)
int32_t rax_6 = *(rbx + 0x38)
int32_t r15 = *(rbx + 0x34)
int32_t rbx_1

if (arg3 s> 0)
    rbx_1 = sub_142b93e80(arg3 << 0x10, rax_2)
else
    rbx_1 = 0x4b0000

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rbx_1)
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rdi_1)
int32_t rcx_4

if (temp0_1 + temp0 s< 0x2e)
    rcx_4 = sub_142b93e80(rbx_1, rdi_1)
else
    rcx_4 = r14 << 0x10

int32_t rax_12 = rax_4 << 0x10
uint32_t rbx_4

if (rcx_4 s>= rax_12)
    int32_t rdx_4 = rax_5
    int32_t r12_3 = rdx_4 << 0x10
    
    if (rcx_4 s>= r12_3)
        if (rcx_4 s< r15 << 0x10)
            goto label_142ba5fee
        
        if (rcx_4 s>= r14 << 0x10)
            rbx_4 = sub_142b91790(rbp << 0x10, rdi_1)
        else
        label_142ba5fa8:
            int32_t r14_1 = r14 - r15
            int32_t rbx_2 = rbx_1 - sub_142b91790(r15 << 0x10, rdi_1)
            
            if (r14_1 == 0)
                rbx_4 = sub_142b91790(rbp << 0x10, rdi_1)
            else
                rbx_4 =
                    sub_142b93dd0(rbx_2, rbp - rax_6, r14_1) + sub_142b91790(rax_6 << 0x10, rdi_1)
    else
        int32_t r8_1 = rdx_4 - rax_4
        int32_t rcx_11 = rbx_1 - sub_142b91790(rax_12, rdi_1)
        
        if (r8_1 == 0)
            rdx_4 = rax_5
        label_142ba5fee:
            int32_t rsi_4 = r15 - rdx_4
            int32_t rcx_16 = rbx_1 - sub_142b91790(r12_3, rdi_1)
            
            if (rsi_4 == 0)
                goto label_142ba5fa8
            
            rbx_4 = sub_142b93dd0(rcx_16, rax_6 - r13, rsi_4) + sub_142b91790(r13 << 0x10, rdi_1)
        else
            rbx_4 = sub_142b93dd0(rcx_11, r13 - rsi, r8_1) + sub_142b91790(rsi << 0x10, rdi_1)
else
    rbx_4 = sub_142b91790(rsi << 0x10, rdi_1)

return zx.q(sx.d(((sub_142b91790(rbx_4, rax_2) + 0x8000) u>> 0x10).w))
