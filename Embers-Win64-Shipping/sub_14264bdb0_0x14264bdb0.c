// 函数: sub_14264bdb0
// 地址: 0x14264bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x39a) & 8) != 0)
    return 

sub_1405a46b0(&data_1439aa970, arg1)
sub_1405a46b0(&data_143b51520, arg1)
sub_1405a46b0(&data_143a30710, arg1)
sub_1405a46b0(&data_143a30728, arg1)
(*(*arg1 + 0x3c8))(arg1)

if (sub_140d3c6e0(&arg1[0x1f]) != 0)
    if (sub_140d3e110(&arg1[0x1f]) != 0)
        int32_t rax_5 = *(sub_140d3c6e0(&arg1[0x1f]) + 0xc)
        void* const rax_12
        
        if (rax_5 s>= data_143e1d9b4)
            rax_12 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_5)
            uint32_t rdx_5 = zx.d(temp0_1)
            int32_t rax_7 = temp1_1 + rdx_5
            rax_12 =
                *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_5) * 0x18
        
        *(rax_12 + 8) &= 0xbfffffff
    
    sub_140d3a3a0(&arg1[0x1f], nullptr)

int32_t rcx_10 = arg1[0x13].d
int64_t rdi_1 = sx.q(rcx_10 - 1)

if (rcx_10 - 1 s>= 0)
    int64_t temp2_1
    
    do
        int64_t rdx_7 = *(arg1[0x12] + (rdi_1 << 3))
        
        if (rdx_7 != 0)
            (*(*arg1 + 0x300))(arg1, rdx_7)
        
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_10 = arg1[0x13].d

if (rcx_10 != 0)
    arg1[0x13].d = 0
    
    if (*(arg1 + 0x9c) s<= 0xffffffff)
        sub_1405c5570(&arg1[0x12], 0)

if (arg1[0x40].d != *(arg1 + 0x22c))
    sub_142666fa0(&arg1[0x3f])

arg1[5] = 0

if (arg2 == 0)
    uint64_t rax = (*(*arg1 + 0x150))(arg1)
    
    if (rax != 0)
        sub_1405a46b0(rax + 0x3e8, arg1)
        int32_t rcx_15 = data_143b51508
        rax.b = *(rax + 0x11a) - 1
        
        if (rax.b u<= 1)
            rcx_15 = 1
        
        data_143b51508 = rcx_15

*(arg1 + 0x39a) |= 8
