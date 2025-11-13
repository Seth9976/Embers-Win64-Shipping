// 函数: sub_140f77300
// 地址: 0x140f77300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char rax_1
int32_t r9
rax_1, r9 = (**rcx)(rcx)

if (rax_1 != 0)
    return 0

int32_t rsi = arg1[0xf2].d
int32_t r15 = 0
bool cond:0 = arg1[0xf3].b == 1
int32_t rbx = 0
int32_t arg_8 = rsi
int32_t rax_2
rax_2.b = cond:0

if (rax_2 + *(arg1 + 0x794) s>= 0)
    rbx = rax_2 + *(arg1 + 0x794)

void* rax_4 = &arg1[0xf0]
int32_t arg_c = rbx

if (arg1[0xf1].b == 0)
    rax_4 = &arg_8

int64_t rax_5 = *rax_4

if (rax_5.d != rsi || (rax_5 u>> 0x20).d != rbx)
    sub_140f74180(arg1)
else
    arg_8 = rsi
    arg_c = rbx
    int32_t var_48
    
    if (rbx != 0)
        int32_t arg_10 = rsi
        int32_t rcx_2 = 0
        
        if (rbx - 1 s>= 0)
            rcx_2 = rbx - 1
        
        int32_t arg_14 = rcx_2
        sub_140f012d0(arg1[9], &var_48, &arg_10)
        int32_t r8_2 = var_48
        int32_t var_3c
        int32_t r14_2 = var_3c
        int64_t var_44
        int32_t rcx_4 = var_44.d
        int32_t var_40
        bool cond:2_1 = r8_2 s> var_40
        
        if (r8_2 == var_40)
            cond:2_1 = rcx_4 s> var_3c
        
        if (cond:2_1)
            r14_2 = rcx_4
        
        int32_t rdx_5 = var_3c
        bool cond:3_1 = r8_2 s< var_40
        
        if (r8_2 == var_40)
            cond:3_1 = rcx_4 s< var_3c
        
        if (cond:3_1)
            rdx_5 = rcx_4
        
        int32_t r14_3 = r14_2 - rdx_5
        int32_t* rdx_6 = &var_48
        
        if (r8_2 != var_40)
            if (r8_2 s>= var_40)
                rdx_6 = &var_44:4
        else if (rcx_4 s>= var_3c)
            rdx_6 = &var_44:4
        
        char rax_12
        rax_12, r9, arg2 = sub_140f143a0(arg1[9], rdx_6, r14_3)
        
        if (rax_12 != 0)
            int32_t rbx_1 = rbx - r14_3
            bool cond:9_1 = rbx - r14_3 s>= 0
            rbx = 0
            
            if (cond:9_1)
                rbx = rbx_1
            
            arg_c = rbx
    else if (rsi s> 0)
        void* rcx_1 = arg1[9]
        int32_t r14_1 = *(*(sx.q(rsi - 1) * 0x70 + *(rcx_1 + 0x18)) + 8)
        char rax_9
        float entry_zmm2
        rax_9, r9, arg2 = sub_140f07c30(rcx_1, rsi - 1, entry_zmm2, r9)
        
        if (rax_9 != 0)
            arg_8 = rsi - 1
            rbx = r14_1 - 1
            rsi -= 1
            
            if (r14_1 == 0)
                rbx = 0
            
            arg_c = rbx
    
    int64_t rax_14 = arg_8.q
    r9.b = 0
    void* r10_1 = arg1[9]
    arg_8.q = rax_14
    
    if (rbx s> 0)
        int32_t rcx_8 = *(*(sx.q(rsi) * 0x70 + *(r10_1 + 0x18)) + 8)
        int32_t rdx_9 = rcx_8 - 1
        
        if (rcx_8 == 0)
            rdx_9 = 0
        
        if (rdx_9 == rbx)
            uint32_t rax_15 = (rax_14 u>> 0x20).d
            r9.b = 1
            arg_8 = rsi
            
            if (rax_15 - 1 s>= 0)
                r15 = rax_15 - 1
            
            arg_c = r15
            arg_8.q = arg_8.q
    
    char rdx_11
    uint32_t r8_5
    rdx_11, r8_5 = sub_140f8af60(&arg1[0xf2], r10_1, &arg_8, r9.b, arg2, var_48)
    
    if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
        arg1[0xf1].b = 0
    
    sub_140f8fc70(arg1, rdx_11, r8_5)

int64_t* result
result.b = 1
return result
