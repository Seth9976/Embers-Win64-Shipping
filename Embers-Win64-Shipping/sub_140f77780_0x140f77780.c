// 函数: sub_140f77780
// 地址: 0x140f77780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if ((**rcx)(rcx) != 0)
    return 0

int64_t rdx = sx.q(arg1[0xf2].d)
int32_t rsi = 0
int32_t r8 = 0
int32_t rax_2
rax_2.b = arg1[0xf3].b == 1
int32_t arg_8 = rdx.d

if (rax_2 + *(arg1 + 0x794) s>= 0)
    r8 = rax_2 + *(arg1 + 0x794)

void* rax_4 = &arg1[0xf0]
int32_t arg_c = r8

if (arg1[0xf1].b == 0)
    rax_4 = &arg_8

int64_t rax_5 = *rax_4

if (rax_5.d != rdx.d || (rax_5 u>> 0x20).d != r8)
    sub_140f74180(arg1)
else
    void* r9_1 = arg1[9]
    arg_8 = rdx.d
    arg_c = r8
    int64_t rbx_1 = arg_8.q
    int32_t r10_1 = *(*(rdx * 0x70 + *(r9_1 + 0x18)) + 8)
    int32_t rax_8 = r10_1 - 1
    
    if (r10_1 == 0)
        rax_8 = -1
    
    int32_t rcx_3 = r10_1 - 1
    
    if (r10_1 == 0)
        rax_8 = 0
    
    if (r10_1 == 0)
        rcx_3 = -1
    
    int32_t var_38
    float entry_zmm2
    
    if (rax_8 != 0)
        if (r10_1 == 0)
            rcx_3 = 0
        
        if (r8 s< rcx_3)
            sub_140f012d0(r9_1, &var_38, &arg_8)
            int32_t r9_2 = var_38
            int32_t var_2c
            int32_t r8_2 = var_2c
            int64_t var_34
            int32_t rcx_7 = var_34.d
            int32_t var_30
            bool cond:4_1 = r9_2 s> var_30
            
            if (r9_2 == var_30)
                cond:4_1 = rcx_7 s> var_2c
            
            if (cond:4_1)
                r8_2 = rcx_7
            
            int32_t rdx_2 = var_2c
            bool cond:6_1 = r9_2 s< var_30
            
            if (r9_2 == var_30)
                cond:6_1 = rcx_7 s< var_2c
            
            if (cond:6_1)
                rdx_2 = rcx_7
            
            int32_t* rdx_3 = &var_38
            
            if (r9_2 != var_30)
                if (r9_2 s>= var_30)
                    rdx_3 = &var_34:4
            else if (rcx_7 s>= var_2c)
                rdx_3 = &var_34:4
            
            r9_1, arg2 = sub_140f143a0(arg1[9], rdx_3, r8_2 - rdx_2)
        else
            int32_t rax_10 = (rdx + 1).d
            
            if (rax_10 s>= 0 && rax_10 s< *(r9_1 + 0x20))
                r9_1, arg2 = sub_140f07c30(r9_1, rdx.d, entry_zmm2, r9_1.d)
    else
        int32_t rax_9 = (rdx + 1).d
        
        if (rax_9 s>= 0 && rax_9 s< *(r9_1 + 0x20))
            r9_1, arg2 = sub_140f14980(r9_1, rdx.d, entry_zmm2)
    int32_t rdx_4 = rbx_1:4.d
    r9_1.b = 0
    void* r10_3 = arg1[9]
    int64_t arg_10 = rbx_1
    
    if (rdx_4 s> 0)
        int32_t rax_14 = *(*(sx.q(rbx_1.d) * 0x70 + *(r10_3 + 0x18)) + 8)
        int32_t rcx_11 = rax_14 - 1
        
        if (rax_14 == 0)
            rcx_11 = 0
        
        if (rcx_11 == rdx_4)
            arg_10.d = rbx_1.d
            r9_1.b = 1
            uint32_t rbx_2 = (rbx_1 u>> 0x20).d
            
            if (rbx_2 - 1 s>= 0)
                rsi = rbx_2 - 1
            
            arg_10:4.d = rsi
            arg_10 = arg_10
    
    char rdx_6
    uint32_t r8_5
    rdx_6, r8_5 = sub_140f8af60(&arg1[0xf2], r10_3, &arg_10, r9_1.b, arg2, var_38)
    
    if (&var_38 != &arg1[0xf0] && arg1[0xf1].b != 0)
        arg1[0xf1].b = 0
    
    sub_140f8fc70(arg1, rdx_6, r8_5)

int64_t* result
result.b = 1
return result
