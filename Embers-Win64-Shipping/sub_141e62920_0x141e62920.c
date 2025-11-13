// 函数: sub_141e62920
// 地址: 0x141e62920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140cebfd0(arg3, &var_28)
int32_t arg_8
sub_14062d6e0(arg1 + 0x330, &arg_8, &var_28)
int64_t rax = sx.q(arg_8)
void* const r8_1

if (rax.d == 0xffffffff)
    r8_1 = nullptr
else
    r8_1 = *(arg1 + 0x330) + rax * 0x28

int64_t* rcx_2 = r8_1 + 0x10

if (r8_1 == 0)
    rcx_2 = nullptr

if (rcx_2 == 0)
    int64_t rbx_1 = *arg3
    arg_8.q = rbx_1
    void* const rcx_8
    
    if (*(arg1 + 0x2e8) == *(arg1 + 0x314))
    label_141e62a40:
        rcx_8 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(rbx_1.d) + arg4
        void* r8_3 = arg1 + 0x318
        void* rcx_6 = *(r8_3 + 8)
        
        if (rcx_6 != 0)
            r8_3 = rcx_6
        
        int32_t rax_7 = *(r8_3 + (((sx.q(*(arg1 + 0x328)) - 1) & sx.q(rax_5)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_141e62a40_1:
            rcx_8 = nullptr
        else
            int64_t r8_4 = *(arg1 + 0x2e0)
            
            while (true)
                int64_t rdx_7 = sx.q(rax_7) * 3
                rcx_8 = r8_4 + (rdx_7 << 3)
                
                if (*(r8_4 + (rdx_7 << 3)) == rbx_1)
                    break
                
                rax_7 = *(rcx_8 + 0x10)
                
                if (rax_7 == 0xffffffff)
                    goto label_141e62a40_2
            
            if (rax_7 == 0xffffffff)
            label_141e62a40_2:
                rcx_8 = nullptr
    
    void* rax_8 = rcx_8 + 8
    
    if (rcx_8 == 0)
        rax_8 = nullptr
    
    if (rax_8 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int64_t rcx_9 = arg3[1]
        *arg2 = *rax_8
        arg2[1] = rcx_9
else
    int32_t rax_2 = rcx_2[1].d
    int32_t r8_2 = rax_2 - 1
    
    if (rax_2 == 0)
        r8_2 = 0
    
    if (rax_2 == 0)
        sub_140ce2e40(arg2, &data_142d40450, r8_2)
    else
        sub_140ce2e40(arg2, *rcx_2, r8_2)

int64_t rcx_10 = var_28

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg2
