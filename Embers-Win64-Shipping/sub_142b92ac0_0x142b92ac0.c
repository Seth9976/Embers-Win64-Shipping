// 函数: sub_142b92ac0
// 地址: 0x142b92ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t rdi = 0
int32_t rbp = arg1[1].d
int32_t rbx = 0
uint64_t rbp_1 = zx.q(rbp * 2)

if (rbp * 2 s< 0)
    rbx = 6
else if (rbp_1.d != 0)
    if (rbp_1.d s<= 0xfffffff)
        uint32_t r14_1 = (rbp_1 << 3).d
        int64_t rax_1 = (*(rax + 8))(rax, zx.q(r14_1))
        rdi = rax_1
        
        if (rax_1 == 0)
            rbx = (rax_1 + 0x40).d
        else if (rbp_1.d s> 0)
            memset(rax_1, 0, sx.q(r14_1))
    else
        rbx = 0xa

arg1[8] = rdi

if (rbx == 0)
    uint64_t rcx_2 = zx.q(arg1[1].d)
    *(arg1 + 0x14) = 1
    arg1[9] = rdi + (rcx_2 << 3)
    sub_142b92620(arg1)

return zx.q(rbx)
