// 函数: sub_140ae8f40
// 地址: 0x140ae8f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]
int32_t result_1
sub_14062d6e0(rsi, &result_1, arg2)
int64_t result = sx.q(result_1)
int32_t rbx = 0
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t r9_1 = result * 5
    result = *rsi
    rcx_1 = result + (r9_1 << 3)

int64_t* rsi_1 = rcx_1 + 0x10

if (rcx_1 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    result = sub_140afe860(arg1[2], arg2)
    
    if (result.d != 0)
        int64_t var_28
        sub_140a1dfc0(rsi_1, &var_28)
        int64_t* rsi_2 = *arg1
        int32_t var_20
        int64_t r14_1 = sx.q(var_20)
        int64_t rbp_1 = var_28
        int64_t rcx_4 = rsi_2[1]
        int64_t r15_1 = r14_1 * 2
        
        if (r15_1 + rcx_4 u>= rsi_2[2])
            sub_140b38e20(rsi_2, r14_1)
            rcx_4 = rsi_2[1]
        
        rsi_2[1] = rcx_4 + (r14_1 << 1)
        memcpy(rcx_4, rbp_1, r15_1.d)
        int64_t* r8_2 = *arg1
        int16_t* rax_2 = r8_2[1]
        
        if (*rax_2 != 0)
            *rax_2 = 0
        
        int64_t r8_3 = *r8_2
        int64_t rcx_6
        
        if (r8_3 == 0)
            rcx_6 = 0
        else
            rcx_6 = -1
            
            do
                rcx_6 += 1
            while (*(r8_3 + (rcx_6 << 1)) != 0)
        
        int64_t* r10_1 = arg1[3]
        int32_t r9_2 = r10_1[1].d
        
        if (r9_2 s>= 0)
            rbx = rcx_6.d
            
            if (r9_2 s< rcx_6.d)
                rbx = r9_2
        
        int32_t var_20_1 = rbx
        var_28 = r8_3 + ((sx.q(rcx_6.d) - sx.q(rbx)) << 1)
        
        if (r9_2 == rbx)
            result = sub_140a22710(r10_1, &var_28, 1)
        
        if (r9_2 != rbx || result.d != 0)
            int64_t* rbx_1 = *arg1
            int32_t* rcx_8 = rbx_1[1]
            
            if (&rcx_8[1] u>= rbx_1[2])
                sub_140b38e20(rbx_1, 2)
                rcx_8 = rbx_1[1]
            
            rbx_1[1] = &rcx_8[1]
            result = 0xa000d
            *rcx_8 = 0xa000d

return result
