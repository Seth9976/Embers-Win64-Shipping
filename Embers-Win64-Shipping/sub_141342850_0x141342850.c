// 函数: sub_141342850
// 地址: 0x141342850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = arg4
int64_t r12 = arg3
sub_141359bb0(arg1.b)
int64_t* rax = *arg2
void* rcx = *rax

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + rax

void* i = rcx + (sx.q(rax[1].d) << 3)

if (rcx != i)
    void* rbp_1 = rcx + 6
    
    do
        uint32_t rax_2 = zx.d(*(rbp_1 - 6))
        uint32_t count = zx.d(*rbp_1)
        int64_t rdi_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        int64_t r12_2 = zx.q(*(rbp_1 - 2)) + r13
        int64_t count_1 = sx.q(count)
        uint32_t r13_1 = zx.d(*(rbp_1 - 4))
        int64_t rax_3 = count_1 + rdi_3
        
        if (rax_3 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, count + 0x10)
            rdi_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_3 = count_1 + rdi_3
        
        *(arg1 + 0x30) = rax_3
        memcpy(rdi_3, r12_2, count)
        void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rcx_6[6]
        
        if (rax_4 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rcx_6[6]
        
        *(arg1 + 0x30) = rax_4
        rbp_1 += 8
        void** rax_5 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        r12 = arg3
        *rax_5 = rcx_6
        *(arg1 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142d549d8
        rcx_6[4].d = rax_2
        *(rcx_6 + 0x24) = r13_1
        r13 = arg4
        rcx_6[2] = r12
        rcx_6[3] = rdi_3
        rcx_6[5].d = count
    while (rbp_1 - 6 != i)

void* rdi_6 = rax[2]

if ((rdi_6.b & 1) != 0)
    rdi_6 = (rdi_6 s>> 1) + &rax[2]

void* r15_1 = rdi_6 + (sx.q(rax[3].d) << 2)

while (rdi_6 != r15_1)
    uint32_t r14_1 = zx.d(*rdi_6)
    void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbp_2 = *(zx.q(*(rdi_6 + 2)) + r13)
    void* rax_13 = &rcx_12[5]
    
    if (rax_13 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_12[5]
    
    *(arg1 + 0x30) = rax_13
    rdi_6 += 4
    void**** rax_14 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_14 = rcx_12
    *(arg1 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142d5a070
    rcx_12[2] = r12
    rcx_12[3].d = r14_1
    rcx_12[4] = rbp_2

void* rdi_8 = rax[4]

if ((rdi_8.b & 1) != 0)
    rdi_8 = (rdi_8 s>> 1) + &rax[4]

void* r15_2 = rdi_8 + (sx.q(rax[5].d) << 2)

while (rdi_8 != r15_2)
    uint32_t r14_2 = zx.d(*rdi_8)
    void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbp_3 = *(zx.q(*(rdi_8 + 2)) + r13)
    void* rax_20 = &rcx_18[5]
    
    if (rax_20 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_18[5]
    
    *(arg1 + 0x30) = rax_20
    rdi_8 += 4
    void**** rax_21 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_21 = rcx_18
    *(arg1 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d5ebf8
    rcx_18[2] = r12
    rcx_18[3].d = r14_2
    rcx_18[4] = rbp_3

void* i_1 = rax[8]

if ((i_1.b & 1) != 0)
    i_1 = (i_1 s>> 1) + &rax[8]

for (void* rbp_4 = i_1 + (sx.q(rax[9].d) << 2); i_1 != rbp_4; i_1 += 4)
    uint32_t r15_3 = zx.d(*i_1)
    int64_t* r14_3 = *(zx.q(*(i_1 + 2)) + r13)
    
    if ((*(*r14_3 + 8))(r14_3) == 0)
        void*** rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_25[5]
        
        if (rax_29 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_25[5]
        
        *(arg1 + 0x30) = rax_29
        void**** rax_30 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_30 = rcx_25
        *(arg1 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142d5a080
        rcx_25[2] = r12
        rcx_25[3].d = r15_3
        rcx_25[4] = r14_3

void* rdi_11 = rax[0xa]

if ((rdi_11.b & 1) != 0)
    rdi_11 = (rdi_11 s>> 1) + &rax[0xa]

void* r15_4 = rdi_11 + (sx.q(rax[0xb].d) << 2)

while (rdi_11 != r15_4)
    uint32_t r14_4 = zx.d(*rdi_11)
    int64_t rbp_5 = *(*(zx.q(*(rdi_11 + 2)) + r13) + 0x10)
    void*** rcx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_36 = &rcx_32[5]
    
    if (rax_36 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_36 = &rcx_32[5]
    
    *(arg1 + 0x30) = rax_36
    rdi_11 += 4
    void**** rax_37 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_37 = rcx_32
    *(arg1 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    *rcx_32 = &data_142d5a070
    rcx_32[2] = r12
    rcx_32[3].d = r14_4
    rcx_32[4] = rbp_5

sub_141083080(arg1, arg2, r12, r13)
void* rdi_13 = rax[0xc]

if ((rdi_13.b & 1) != 0)
    rdi_13 = (rdi_13 s>> 1) + &rax[0xc]

void* r15_5 = rdi_13 + (sx.q(rax[0xd].d) << 2)

while (rdi_13 != r15_5)
    uint32_t r14_5 = zx.d(*rdi_13)
    int64_t rbp_6 = *(*(zx.q(*(rdi_13 + 2)) + r13) + 0x10)
    void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_40[5]
    
    if (rax_43 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_40[5]
    
    *(arg1 + 0x30) = rax_43
    rdi_13 += 4
    void**** rax_44 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_44 = rcx_40
    *(arg1 + 8) = &rcx_40[1]
    rcx_40[1] = 0
    *rcx_40 = &data_142d5ebf8
    rcx_40[2] = r12
    rcx_40[3].d = r14_5
    rcx_40[4] = rbp_6

void* rdi_15 = *(rax + 0x80)

if ((rdi_15.b & 1) != 0)
    rdi_15 = (rdi_15 s>> 1) + rax + 0x80

int64_t result = sx.q(rax[0x11].d)
void* r15_6 = rdi_15 + (result << 2)

while (rdi_15 != r15_6)
    uint32_t r14_6 = zx.d(*rdi_15)
    void*** rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbp_7 = *(zx.q(*(rdi_15 + 2)) + r13)
    void* rax_49 = &rcx_46[5]
    
    if (rax_49 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_49 = &rcx_46[5]
    
    *(arg1 + 0x30) = rax_49
    rdi_15 += 4
    void**** rax_50 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_50 = rcx_46
    *(arg1 + 8) = &rcx_46[1]
    rcx_46[1] = 0
    result = &data_142f11618
    *rcx_46 = &data_142f11618
    rcx_46[2] = r12
    rcx_46[3].d = r14_6
    rcx_46[4] = rbp_7

return result
