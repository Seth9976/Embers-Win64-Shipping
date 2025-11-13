// 函数: sub_140906040
// 地址: 0x140906040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
int32_t i = arg2[1].d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t r11 = 0
void* rbx_2 = &arg1[7]
int32_t r8_2 = (rax_1 + (rbx u>> 0x20).d - i) ^ i u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - i) ^ r8_2 << 8
int32_t rcx_4 = (i - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rcx_4) ^ rcx_4 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rcx_4) ^ r8_5 << 0x10
int32_t rcx_7 = (rcx_4 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rcx_7) ^ rcx_7 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rcx_7) ^ r8_8 << 0xa
void* rax_18 = arg1[8]

if (rax_18 != 0)
    rbx_2 = rax_18

int32_t rcx_13 = *(rbx_2 + (((sx.q(rcx_7 - rdx_8 - r8_8) ^ zx.q(rdx_8) u>> 0xf) & rbp_1) << 2))

if (rcx_13 != 0xffffffff)
    int64_t* r9_1 = *arg1
    
    while (r9_1[sx.q(rcx_13) * 4] != *arg2 || r9_1[sx.q(rcx_13) * 4 + 1].d != i)
        rcx_13 = r9_1[sx.q(rcx_13) * 4 + 3].d
        
        if (rcx_13 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_25 = sx.q(*(&r9_1[sx.q(rcx_13) * 4] + 0x1c)) & rbp_1
        void* rdx_9 = rbx_2 + (rax_25 << 2)
        
        for (int32_t i_1 = *(rbx_2 + (rax_25 << 2)); i_1 != 0xffffffff; i_1 = *rdx_9)
            if (i_1 == rcx_13)
                *rdx_9 = r9_1[sx.q(rcx_13) * 4 + 3].d
                break
            
            rdx_9 = &r9_1[3 + sx.q(i_1) * 4]
    
    r11 = 1
    void* r10 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_13
    
    int32_t* rdx_13 = *arg1
    int32_t rax_30 = -1
    rdx_13[sx.q(rcx_13) * 8] = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_30 = arg1[6].d
    
    rdx_13[sx.q(rcx_13) * 8 + 1] = rax_30
    *(arg1 + 0x34) += 1
    arg1[6].d = rcx_13
    void* rax_31 = *(r10 + 0x10)
    
    if (rax_31 != 0)
        r10 = rax_31
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx_13)
    int64_t rcx_14 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r10 + (rcx_14 << 2)) &= not.d(rol.d(1, rcx_13.b))

return zx.q(r11)
