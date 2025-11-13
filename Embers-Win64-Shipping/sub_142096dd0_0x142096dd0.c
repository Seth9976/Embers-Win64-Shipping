// 函数: sub_142096dd0
// 地址: 0x142096dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14208b650()
EnterCriticalSection(&data_143f479b8)
int32_t rcx = data_143f479b4
int64_t rbp

if (rcx == 0)
    rbp = zx.q(data_143f47988.d)
    int32_t rax_1 = (rbp + 1).d
    data_143f47988.d = rax_1
    
    if (rax_1 s> data_143f47988:4.d)
        sub_1405a4d70(&data_143f47980)
    
    int32_t rsi_1 = data_143f479a8
    int64_t* rdi_1 = &data_143f47990
    sub_1405a4980(&data_143f47990, rsi_1 + 1)
    data_143f479a8 += 1
    int64_t* rax_2 = data_143f479a0
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi_1)
    int64_t rdx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_6 << 2)) &= not.d(1 << (rsi_1.b & 0x1f))
else
    rbp = sx.q(data_143f479b0)
    int64_t r8_1 = data_143f47980
    int64_t rdx_1 = sx.q(*(r8_1 + (rbp << 3) + 4))
    data_143f479b0 = rdx_1.d
    data_143f479b4 = rcx - 1
    
    if (rcx != 1)
        *(r8_1 + (rdx_1 << 3)) = 0xffffffff

int64_t* rax_9 = data_143f479a0
int64_t* r8_2 = &data_143f47990

if (rax_9 != 0)
    r8_2 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_9 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rbp.b & 0x1f)
*(data_143f47980 + (sx.q(rbp.d) << 3)) = arg1
int64_t result = LeaveCriticalSection(&data_143f479b8)
*(arg1 + 0x18) = rbp.d
return result
