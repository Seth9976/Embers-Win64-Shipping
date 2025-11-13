// 函数: sub_141b21260
// 地址: 0x141b21260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

do
    i = *arg1
    *arg1 = 1
while (i != 0)
int32_t* r8 = *(arg1 + 0x18)
int64_t r9 = sx.q(arg1[8])
int32_t* rcx = r8
void* rax_2 = &r8[r9]
int32_t rcx_7

if (r8 != rax_2)
    while (*rcx != *arg3)
        rcx = &rcx[1]
        
        if (rcx == rax_2)
            goto label_141b212c1
    
    rcx_7 = ((rcx - r8) s>> 2).d

if (r8 == rax_2 || rcx_7 == 0xffffffff)
label_141b212c1:
    int32_t rax_3 = (r9 + 1).d
    arg1[8] = rax_3
    
    if (rax_3 s> arg1[9])
        sub_1405a4cf0(&arg1[6])
    
    *((r9 << 2) + *(arg1 + 0x18)) = *arg3
    int64_t rax_5 = sub_141a4fae0(arg1, arg1[4])
    int64_t rbp_1 = sx.q(arg1[4])
    int32_t rax_6 = (rbp_1 + 1).d
    arg1[4] = rax_6
    
    if (rax_6 s> arg1[5])
        sub_1405a4d70(&arg1[2])
    
    *(*(arg1 + 8) + (rbp_1 << 3)) = rax_5
    *arg1
    *arg1 = 0
    *arg2 = rax_5
else
    int64_t rax_10 = *(*(arg1 + 8) + (sx.q(rcx_7) << 3))
    *arg1
    *arg1 = 0
    *arg2 = rax_10

return arg2
