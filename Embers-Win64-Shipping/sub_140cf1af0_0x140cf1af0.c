// 函数: sub_140cf1af0
// 地址: 0x140cf1af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x24)
int32_t rsi

if (r9 == 0)
    rsi = arg1[1].d
    arg1[1].d = rsi + 1
    
    if (rsi + 1 s> *(arg1 + 0xc))
        sub_140ce4c40(arg1, rsi, *(arg2 + 4))
    
    int32_t rbp_1 = arg1[3].d
    arg1[3].d = rbp_1 + 1
    
    if (rbp_1 + 1 s> *(arg1 + 0x1c))
        sub_140d0bd30(&arg1[2], rbp_1)
    
    void* r8_3 = arg1[2]
    
    if ((1 & r8_3.b) != 0)
        r8_3 = (r8_3 s>> 1) + &arg1[2]
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r8_3 + (rdx_7 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rsi = arg1[4].d
    void* rcx = *arg1
    
    if ((1 & rcx.b) != 0)
        rcx = (rcx s>> 1) + arg1
    
    int32_t rdx = *(sx.q(rsi * *(arg2 + 4)) + rcx + 4)
    arg1[4].d = rdx
    *(arg1 + 0x24) = r9 - 1
    
    if (r9 != 1)
        void* rcx_2 = *arg1
        
        if ((1 & rcx_2.b) != 0)
            rcx_2 = (rcx_2 s>> 1) + arg1
        
        *(sx.q(rdx * *(arg2 + 4)) + rcx_2) = 0xffffffff

void* r8_5 = arg1[2]

if ((1 & r8_5.b) != 0)
    r8_5 = (r8_5 s>> 1) + &arg1[2]

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rsi)
void* rdx_10 = r8_5 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_10 |= 1 << (rsi.b & 0x1f)
return zx.q(rsi)
