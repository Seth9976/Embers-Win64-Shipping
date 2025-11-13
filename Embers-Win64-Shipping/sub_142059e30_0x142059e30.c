// 函数: sub_142059e30
// 地址: 0x142059e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(*(arg1 + 0x18) + 0x30)
void* r10 = *(arg1 + 0x10)
void* rdx = r10
void* rax_1 = *(r10 + 0x20)

if (rax_1 != 0)
    rdx = rax_1

int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_3 = *(*(rdx + (sx.q(*(r10 + 0x28)) << 3) - 8) + 0x20)
void* rax_4 = &rbx_2[1]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rbx_2[1]

*(arg2 + 0x30) = rax_4
*rbx_2 = rcx
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_4[6]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_4[6]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[3] = rbx_2
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[4].d = 2
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
rcx_4[1] = 0
int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_8 = &rbx_7[1]

if (rcx_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_8 = &rbx_7[1]

*(arg2 + 0x30) = rcx_8
*rbx_7 = rax_3
void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_12[6]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_12[6]

*(arg2 + 0x30) = rax_9
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_12
*(arg2 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142da7798
rcx_12[2].d = 1
rcx_12[3] = rbx_7
rcx_12[4] = 2
rcx_12[5] = 0
int64_t* i = *arg3

for (void* r14_3 = &i[sx.q(arg3[1].d) * 4]; i != r14_3; i = &i[4])
    int32_t rcx_16 = i[2].d
    
    if ((rcx_16.b & arg4.b & 0xc) != 0)
        void* rdx_2 = *(arg1 + 0x10)
        void* rcx_18 = rdx_2
        void* rax_14 = *(rdx_2 + 0x20)
        int64_t* rdx_4
        
        if (((rcx_16 u>> 7).b & 1) == 0)
            if (rax_14 != 0)
                rcx_18 = rax_14
            
            rdx_4 = *(rcx_18 + (sx.q(*(rdx_2 + 0x28)) << 3) - 8) + 0x40
        else
            if (rax_14 != 0)
                rcx_18 = rax_14
            
            rdx_4 = *(rcx_18 + (sx.q(*(rdx_2 + 0x28)) << 3) - 8) + 0x30
        
        int64_t* r11_1
        
        if (i[1].d == 0)
            r11_1 = nullptr
        else
            r11_1 = *i
        
        (*(*r11_1 + 0x48))(r11_1, arg2, zx.q(*arg1), zx.q(arg1[1]), (arg1[2] & 3) | arg4, rcx, 
            *rdx_4)

int64_t* rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rbx_12[2]

if (rax_19 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rbx_12[2]

*(arg2 + 0x30) = rax_19
*rbx_12 = rcx
rbx_12[1] = rax_3
void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_26[6]

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_26[6]

*(arg2 + 0x30) = rax_22
void**** rax_23 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_23 = rcx_26
*(arg2 + 8) = &rcx_26[1]
rcx_26[3] = rbx_12
rcx_26[1] = 0
*rcx_26 = &data_142da7798
rcx_26[2].d = 2
rcx_26[4].d = 2
*(rcx_26 + 0x24) = 3
rcx_26[5] = 0
return &rcx_26[1]
