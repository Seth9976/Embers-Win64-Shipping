// 函数: sub_140bc4ed0
// 地址: 0x140bc4ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg2 + 0x14))
    *(arg2 + 0x14) = 1
    z = true
else
    int64_t rax
    rax.b = *(arg2 + 0x14)
    z = false

if (not(z))
    bool z_1
    
    do
        if (0 == *(arg2 + 0x14))
            *(arg2 + 0x14) = 1
            z_1 = true
        else
            int64_t rax_1
            rax_1.b = *(arg2 + 0x14)
            z_1 = false
    while (not(z_1))

int64_t rax_2 = 0
bool z_2

if (0 == *(arg2 + 0x15))
    *(arg2 + 0x15) = 0
    z_2 = true
else
    rax_2.b = *(arg2 + 0x15)
    z_2 = false

int64_t rbp

if (z_2)
    *(arg1 + 0x10) += 1
    int32_t rax_3 = arg2[1].d
    
    if (rax_3 == 0)
        *arg2 = arg1
        arg2[1].d = 1
        char temp0_1 = *(arg2 + 0x14)
        *(arg2 + 0x14) = 0
        rbp.b = temp0_1
        return rax_3
    
    if (rax_3 != 1)
        int32_t r14_1 = *(arg2 + 0xc)
        
        if (rax_3 == r14_1)
            int64_t rdi_2 = *arg2
            uint64_t rcx = zx.q(r14_1 * 2)
            *(arg2 + 0xc) = rcx.d
            void* r9_1 = *(*(arg1 + 0x20) + 0xd8)
            uint64_t rcx_1 = rcx << 3
            *(r9_1 + 8) += zx.q(rcx.d)
            *(r9_1 + 0x10)
            *(r9_1 + 0x10) += rcx_1
            int64_t rax_11 = sub_140a82f30(rcx_1, 0)
            *arg2 = rax_11
            memcpy(rax_11, rdi_2, r14_1 << 3)
            sub_140bc79a0(*(*(arg1 + 0x20) + 0xd8), rdi_2, r14_1)
    else
        int64_t rdi_1 = *arg2
        *(arg2 + 0xc) = 4
        void* rdx = *(*(arg1 + 0x20) + 0xd8)
        *(rdx + 8) += 4
        *(rdx + 0x10)
        *(rdx + 0x10) += 0x20
        int64_t* rax_6 = sub_140a82f30(0x20, 0)
        *arg2 = rax_6
        *rax_6 = rdi_1
    
    rax_2 = *arg2
    *(rax_2 + (zx.q(arg2[1].d) << 3)) = arg1
    arg2[1].d += 1

char temp0_6 = *(arg2 + 0x14)
*(arg2 + 0x14) = 0
rbp.b = temp0_6
return rax_2
