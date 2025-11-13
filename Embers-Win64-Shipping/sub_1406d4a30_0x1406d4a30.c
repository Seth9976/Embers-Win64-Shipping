// 函数: sub_1406d4a30
// 地址: 0x1406d4a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg1
int32_t var_58 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_58_1 = 1

if (arg3 s> 0)
    int64_t var_50_1 = 0
    int64_t var_48_1 = 0
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int64_t rbx_1 = sx.q(arg1[1].d)
        int32_t rax_1 = (rbx_1 + 1).d
        arg1[1].d = rax_1
        
        if (rax_1 s> *(arg1 + 0xc))
            sub_1405a4f90(arg1)
        
        int64_t* rax_4 = (rbx_1 << 4) + *arg1
        int64_t* arg_20 = rax_4
        *rax_4 = 0
        rax_4[1] = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r14 = 0

while (true)
    int32_t r8 = arg2[1].d
    int32_t rcx_1 = r8 - 1
    int32_t rax_5 = rcx_1
    
    if (r8 == 0)
        rax_5 = 0
    
    if (r14 s>= rax_5)
        break
    
    int64_t r15_2 = sx.q(mods.dp.d(sx.q(r14), arg3)) << 4
    int64_t* rbx_3 = *arg1 + r15_2
    
    if (r8 == 0)
        rcx_1 = 0
    
    int16_t rbp_1 = *(*arg2 + (sx.q(rcx_1 - r14) << 1) - 2)
    
    if (rbp_1 != 0)
        int32_t rdx_3 = rbx_3[1].d
        int32_t rsi_1 = rdx_3 - 1
        
        if (rdx_3 s<= 0)
            rsi_1 = 0
        
        int32_t rax_10
        rax_10.b = rdx_3 s<= 0
        int32_t rax_12 = rax_10 + 1 + rdx_3
        rbx_3[1].d = rax_12
        
        if (rax_12 s> *(rbx_3 + 0xc))
            sub_140594770(rbx_3)
        
        int64_t rcx_5 = sx.q(rsi_1)
        *(*rbx_3 + (rcx_5 << 1)) = rbp_1
        *(*rbx_3 + (rcx_5 << 1) + 2) = 0
    
    int64_t* rsi_3 = *arg1 + r15_2
    
    if (rsi_3 != rbx_3)
        int32_t r8_1 = *(rsi_3 + 0xc)
        int32_t rbp_2 = rbx_3[1].d
        int64_t rbx_4 = *rbx_3
        rsi_3[1].d = rbp_2
        
        if (rbp_2 == 0 && r8_1 == 0)
            *(rsi_3 + 0xc) = 0
            r14 += 1
            continue
        
        sub_1405a4c70(rsi_3, rbp_2, r8_1)
        memcpy(*rsi_3, rbx_4, rbp_2 * 2)
    
    r14 += 1

int64_t rcx_8 = *arg2

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
