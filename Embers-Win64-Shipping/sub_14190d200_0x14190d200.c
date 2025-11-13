// 函数: sub_14190d200
// 地址: 0x14190d200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(data_143efed98)
int64_t* rcx = data_143efed90
int32_t rbp_1 = arg2 * arg3
int64_t rsi = 0

if (rdx.d s> 0)
    int64_t* rax_1 = rcx
    
    while (*rax_1 != arg1)
        rsi = zx.q(rsi.d + 1)
        rax_1 = &rax_1[2]
        
        if (rsi.d s>= rdx.d)
            goto label_14190d245

if (rdx.d s<= 0 || rsi.d == 0xffffffff)
label_14190d245:
    int32_t rax_2 = (rdx + 1).d
    void* var_38_1 = arg1
    bool cond:0_1 = rax_2 s<= data_143efed9c
    rsi = rdx
    int64_t var_30 = 0
    data_143efed98 = rax_2
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143efed90)
        rcx = data_143efed90
    
    int64_t rax_4 = rsi * 2
    rcx[rax_4] = arg1
    rcx[rax_4 + 1] = 0
    sub_14081c9d0(&var_30)
else
    void* rax_9 = rcx[sx.q(rsi.d) * 2 + 1]
    
    if (rbp_1 u<= *(rax_9 + 0x18))
        return rax_9

uint64_t rax_6 = zx.q(*arg4 - 0x1400)
int32_t rdx_1 = 0

if (rax_6.d u<= 0xb)
    switch (rax_6)
        case 0, 1
            rdx_1 = 1
        case 2, 3, 0xb
            rdx_1 = 2
        case 4, 5, 6
            rdx_1 = 4
        case 0xa
            rdx_1 = 8

int32_t r14 = arg4[3]
int64_t* r15 = *(arg1 + 0x20)

if (r14 == 0x80e1)
    r14 = 4

int32_t r14_1 = r14 * rdx_1
void*** rax_10 = j_sub_140a82f30(0x68)
void*** rbx_1

if (rax_10 == 0)
    rbx_1 = nullptr
else
    void*** rax_11 = sub_141905b60(rax_10, 0, rbp_1, 1, 0, 0, 0, 0)
    rbx_1 = rax_11
    
    if (rax_11 != 0)
        rax_11[1].d += 1

int64_t* rdi_1 = sub_141910580(rbx_1, 0, rbp_1, 0, 1)

if (r14_1 == 4)
    uint32_t rbp_3 = rbp_1 u>> 2
    int64_t rcx_10
    int64_t rdi_3
    
    if (rbp_3 != 0)
        rdi_3, rcx_10 = __memfill_u32(rdi_1, *r15, zx.q(rbp_3))
else if (r14_1 == 8)
    uint32_t rbp_2 = rbp_1 u>> 3
    int64_t rcx_8
    int64_t rdi_2
    
    if (rbp_2 != 0)
        rdi_2, rcx_8 = __memfill_u64(rdi_1, *r15, zx.q(rbp_2))
else if (r14_1 == 0x10)
    int64_t rcx_6 = *r15
    int64_t rdx_2 = r15[1]
    uint32_t i_2 = rbp_1 u>> 4
    
    if (i_2 != 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            *rdi_1 = rcx_6
            rdi_1[1] = rdx_2
            rdi_1 = &rdi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)

if ((rbx_1[7].b & 1) != 0)
    sub_141909e60(rbx_1)
    
    if (data_143eff5d0 != 0 || (rbx_1[7].b & 2) != 0)
        data_143effd20(0x8892)
    else
        sub_1419104e0(rbx_1, rbx_1[8].d, *(rbx_1 + 0x3c), rbx_1[9])
        
        if ((*(rbx_1 + 0x1c) & 4) == 0)
            sub_140a74f90(rbx_1[9])
            rbx_1[7].d &= 0xfffffff7
            *(rbx_1 + 0x3c) = 0
        else
            int64_t rcx_13 = rbx_1[0xa]
            int32_t rcx_14
            
            if (rcx_13 == 0)
                rcx_14 = rbx_1[0xb].d
            else
                sub_140a74f90(rcx_13)
                rcx_14 = 0
            
            rbx_1[0xa] = rbx_1[9]
            int32_t rax_16 = *(rbx_1 + 0x3c)
            *(rbx_1 + 0x3c) = 0
            
            if (rcx_14 u>= rax_16)
                rax_16 = rcx_14
            
            rbx_1[7].d &= 0xfffffff7
            rbx_1[0xb].d = rax_16
    
    rbx_1[9] = 0
    int32_t rdx_4 = rbx_1[7].d
    rbx_1[6] += zx.q(not.d(rdx_4 u>> 1)) & 1
    rbx_1[7].d = rdx_4 & 0xfffffffe

sub_14081d930((sx.q(rsi.d) << 4) + data_143efed90 + 8, rbx_1)
rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    char rax_20
    
    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
        rax_20 = sub_1405949a0()
    
    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
        (**rbx_1)(rbx_1, 1)
    else
        bool z_1
        
        if (0 == *(rbx_1 + 0xc))
            *(rbx_1 + 0xc) = 1
            z_1 = true
        else
            *(rbx_1 + 0xc)
            z_1 = false
        
        if (z_1)
            sub_1405dcc10(&data_143f02390, rbx_1)

return rbx_1
