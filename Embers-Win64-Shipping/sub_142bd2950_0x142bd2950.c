// 函数: sub_142bd2950
// 地址: 0x142bd2950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0xf0)
uint32_t r15 = *(arg1 + 0xa4)
int64_t rsi
rsi.b = 0
int32_t r13 = *(arg1 + 0xa8)
int32_t arg_8 = 0
int64_t arg_18 = 0
*(arg1 + 8) = 0
void* rdi = *(rbp + 0x328)

if (*(arg1 + 0xf8) != rdi)
    *(arg1 + 0xf8) = rdi
    rsi.b = 1

int32_t result

if (*(arg1 + 0xc) != 0)
label_142bd2a98:
    uint32_t rax_10 = zx.d(*(*(*(rbp + 8) + 0x80) + 0x1a)) << 0x10
    
    if (*(arg1 + 0x5c) != rax_10)
        *(arg1 + 0x5c) = rax_10
        rsi.b = 1
    
    *(arg1 + 0x100) = *(arg1 + 0x10) & 1
    
    if (*arg2 != *(arg1 + 0x14) || arg2[1] != *(arg1 + 0x1c))
        rsi.b = 1
        *(arg1 + 0x14) = *arg2
        *(arg1 + 0x24) = 0
        *(arg1 + 0x2c) = *arg2
        *(arg1 + 0x3c) = arg2[2]
        *(arg1 + 0x50) = 0x10000
        *(arg1 + 0x44) = 0x10000
        *(arg1 + 0x4c) = 0
    
    int32_t rcx_4 = *(arg1 + 0x10)
    result = rcx_4 & 2
    
    if (*(arg1 + 0x102) != result.b)
        *(arg1 + 0x102) = (rcx_4 u>> 1).b & 1
    label_142bd2b24:
        int32_t rsi_1 = *(arg1 + 0xa0)
        int32_t r14_1 = *(arg1 + 0x5c)
        
        if (rsi_1 == 0)
            rsi_1 = 0x3e8
        
        if (r14_1 s< 0x40000)
            r14_1 = 0x40000
        
        int32_t temp0_1 = divs.dp.d(0:0x3e80000, rsi_1)
        int32_t rcx_7 = *(*(rbp + 0x328) + 0x194) << 0x10
        *(arg1 + 0x124) = rcx_7
        
        if (rcx_7 s<= 0)
            *(arg1 + 0x124) = sub_142b91790(0x4b0000, temp0_1)
        
        void* rsi_3
        
        if (r15 s<= 0)
            rsi_3 = arg1 + 0x12c
            sub_142bd1f50(temp0_1, r14_1, *(arg1 + 0x124), rsi_3, 0, *(arg1 + 0x102), arg1 + 0x104)
        else
            int32_t rsi_2 = rsi_1 << 0x10
            
            if (r15 s<= sub_142b91790(rsi_2, r14_1))
                r15 = sub_142b91790(rsi_2, r14_1)
            
            rsi_3 = arg1 + 0x12c
            *rsi_3 = 0
            
            if (r15 != 0 && temp0_1 s>= 0x28f)
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r15)
                *rsi_3 = (temp9_1 - temp8_1) s>> 1
        
        int32_t rax_28 = *(*(rbp + 0x328) + 0x190) << 0x10
        int32_t rcx_11
        
        if (rax_28 s> 0)
            rcx_11 = 0x4b0000
        
        if (rax_28 s<= 0 || *(arg1 + 0x124) s<= rax_28 * 2)
            rcx_11 = 0x6e0000
        
        *(arg1 + 0x128) = sub_142b91790(rcx_11, temp0_1)
        sub_142bd1f50(temp0_1, r14_1, *(arg1 + 0x128), arg1 + 0x130, r13, *(arg1 + 0x102), 
            arg1 + 0x104)
        
        if (*rsi_3 != 0 || *(arg1 + 0x130) != 0)
            *(arg1 + 0x101) = 1
        else
            *(arg1 + 0x101) = 0
        
        *(arg1 + 0x134) = 0
        return sub_142bd17d0(arg1 + 0x138, arg1)
    
    if (rsi.b != 0)
        goto label_142bd2b24
else
    int64_t r12_1 = *(arg1 + 0x288)
    
    if (*(*(rbp + 0x320) + 0x1118) == 0)
        goto label_142bd2a98
    
    void* rcx = *(rbp + 8)
    result = (*(*(rcx + 0x2e0) + 0x50))(rcx, &arg_8, 0, &arg_18, 0)
    *(arg1 + 8) = result
    
    if (result == 0)
        if ((*(r12_1 + 0x18))(rdi + 0x238, zx.q(*(rdi + 0x228)), zx.q(arg_8), arg_18) != 0)
            (*(r12_1 + 8))(*(rbp + 0x320), rdi, zx.q(arg_8), arg_18)
            rsi.b = 1
        
        *(arg1 + 0x68) = *(rdi + 0x240)
        *(arg1 + 0x61) = 0
        *(arg1 + 0x90) = *(rdi + 0x228)
        *(arg1 + 0x94) = arg_8
        *(arg1 + 0x98) = arg_18
        goto label_142bd2a98

return result
