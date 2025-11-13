// 函数: sub_1426c12e0
// 地址: 0x1426c12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (*(arg1 + 0x300) == 0)
    return 

int64_t* rdi_1

if (arg2 == 0)
    rdi_1 = nullptr
else
    void* rax_1 = sub_14263d1a0()
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rbx[7].d || *(rbx[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rdi_1 = nullptr
        else
            rdi_1 = rbx

void* rax_5 = rdi_1[0x23]

if (rax_5 == 0)
    (*(*rdi_1 + 0x390))(rdi_1)
    rax_5 = rdi_1[0x23]

char rcx_2

if ((*(rax_5 + 0x30) & 1) != 0 || *(rax_5 + 0x28) != 0xffffffff)
    rcx_2 = *(rax_5 + 0x28)
else
    rcx_2 = *(rax_5 + 0x2c)

uint64_t rax = zx.q(*(arg1 + 0x2b8))
uint32_t rdx_1 = zx.d(rcx_2)

if (not(test_bit(rax.d, rdx_1)))
    return 

*(arg1 + 0x2b8) = rax.w & (not.d(1 << (rdx_1 u% 0x20))).w

if (rbx == 0)
    rbx = nullptr
else
    void* rax_7 = sub_14263d1a0()
    
    if (rax_7 == 0)
        rbx = nullptr
    else
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s> rbx[7].d || *(rbx[6] + (rax_8 << 3)) != rax_7 + 0x30)
            rbx = nullptr

rax = sub_14263a330(*(arg1 + 0x300), rbx[3])

if (rax != 0)
    sub_14263a2c0(rax)
