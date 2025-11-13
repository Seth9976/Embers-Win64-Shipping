// 函数: sub_140cf1c20
// 地址: 0x140cf1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int32_t rsi

if (rcx == 0)
    rsi = arg1[1].d
    arg1[1].d = rsi + 1
    
    if (rsi + 1 s> *(arg1 + 0xc))
        sub_140ce4cd0(arg1, zx.q(rsi), *(arg2 + 4))
    
    int32_t rbp_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    *(rdi_1 + 0x18) = rbp_1 + 1
    
    if (rbp_1 + 1 s> *(rdi_1 + 0x1c))
        sub_140d0be00(rdi_1, rbp_1)
    
    void* rax_8 = *(rdi_1 + 0x10)
    
    if (rax_8 != 0)
        rdi_1 = rax_8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbp_1)
    int64_t rdx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rsi = arg1[6].d
    int64_t r8 = *arg1
    int32_t r9_1 = *(sx.q(rsi * *(arg2 + 4)) + r8 + 4)
    arg1[6].d = r9_1
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(sx.q(*(arg2 + 4) * r9_1) + r8) = 0xffffffff

void* rax_15 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_15 != 0)
    r8_2 = rax_15

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi)
void* rdx_8 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rsi.b & 0x1f)
return zx.q(rsi)
