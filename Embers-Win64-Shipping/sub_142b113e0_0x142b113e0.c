// 函数: sub_142b113e0
// 地址: 0x142b113e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg1 + 0x50)
int64_t rbx = sx.q(*(r10 + (sx.q(arg2) << 3)))
int16_t rdx = *(arg1 + 0x18)
int32_t rax_3

if (rdx s< 0)
    rax_3 = *(arg1 + 0x1c)
else
    rax_3 = sx.d(rdx) s>> 5

int16_t rdx_2

if (rbx.d u>= rax_3)
    rdx_2 = -1
else
    void* rdx_1 = arg1 + 0x1a
    
    if ((rdx.b & 2) == 0)
        rdx_1 = *(arg1 + 0x28)
    
    rdx_2 = *(rdx_1 + (rbx << 1))

int16_t rdx_7
int16_t r8_2

do
    arg4 += 1
    
    if (arg4 s>= zx.d(rdx_2))
        break
    
    int16_t rdx_3 = *(arg1 + 0x18)
    int32_t r8_1 = (rbx + 1).d + arg4
    int32_t rax_5
    
    if (rdx_3 s< 0)
        rax_5 = *(arg1 + 0x1c)
    else
        rax_5 = sx.d(rdx_3) s>> 5
    
    if (r8_1 u>= rax_5)
        r8_2 = -1
    else
        void* rdx_4 = arg1 + 0x1a
        
        if ((rdx_3.b & 2) == 0)
            rdx_4 = *(arg1 + 0x28)
        
        r8_2 = *(rdx_4 + (sx.q(r8_1) << 1))
    
    int16_t rdx_5 = *(arg1 + 0x18)
    int32_t r10_3 = *(r10 + (sx.q(arg3) << 3)) + 1 + arg4
    int32_t rax_8
    
    if (rdx_5 s< 0)
        rax_8 = *(arg1 + 0x1c)
    else
        rax_8 = sx.d(rdx_5) s>> 5
    
    if (r10_3 u>= rax_8)
        rdx_7 = -1
    else
        void* rdx_6 = arg1 + 0x1a
        
        if ((rdx_5.b & 2) == 0)
            rdx_6 = *(arg1 + 0x28)
        
        rdx_7 = *(rdx_6 + (sx.q(r10_3) << 1))
while (r8_2 == rdx_7)
return zx.q(arg4)
