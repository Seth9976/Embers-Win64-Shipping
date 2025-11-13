// 函数: sub_1420db6e0
// 地址: 0x1420db6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rsi = *arg1
int32_t rbx = 0
int32_t arg_8 = 0
int32_t arg_18
sub_140865c40(rsi, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *rsi + rax * 0x18

int32_t* rax_2 = rdx_1 + 8

if (rdx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return zx.q(*rax_2)

int64_t i = sub_141dc5a00(arg2)
int64_t* var_48

if (i != 0)
    int64_t* r14_1 = arg1[1]
    int64_t* rsi_1 = r14_1
    int64_t* rcx_3 = r14_1[0xa]
    int64_t rdx_2 = sx.q(r14_1[0xb].d)
    
    if (rcx_3 != 0)
        rsi_1 = rcx_3
    
    int64_t* rcx_4 = rsi_1
    void* rax_4 = &rsi_1[rdx_2]
    
    if (rsi_1 == rax_4)
    label_1420db7b2:
        int32_t rax_5 = (rdx_2 + 1).d
        r14_1[0xb].d = rax_5
        
        if (rax_5 s> *(r14_1 + 0x5c))
            sub_14119ab90(r14_1, rdx_2.d)
        
        int64_t* rax_6 = r14_1[0xa]
        arg_18.q = i
        
        if (rax_6 != 0)
            r14_1 = rax_6
        
        r14_1[rdx_2] = arg_10
        void* rbx_1 = arg1[2]
        void* rax_8 = *(rbx_1 + 0x10)
        void* rcx_6 = rbx_1 + 0x20
        
        if (rax_8 != 0)
            rcx_6 = rax_8
        
        arg_8 = (*rbx_1)((*(*rcx_6 + 8))(rcx_6), &arg_18) + 1
    else
        while (*rcx_4 != i)
            rcx_4 = &rcx_4[1]
            
            if (rcx_4 == rax_4)
                goto label_1420db7b2
        
        uint64_t r15_2 = rdx_2 << 3 u>> 3
        int64_t rdi_2 = 0
        var_48 = nullptr
        int64_t var_40_2 = 0
        
        if (rsi_1 u> rax_4)
            r15_2 = 0
        
        int64_t var_58
        int32_t var_50
        
        if (r15_2 != 0)
            do
                arg_18.q = *(*rsi_1 + 0x18)
                int32_t rcx_11 = sub_140b63b70(&arg_18, &var_58)
                int32_t var_60_1 = var_50
                int64_t var_68 = var_58
                int32_t rdx_7 = var_50 + sbb.d(rcx_11, rcx_11, var_50 != 0) + 5
                var_58 = 0
                int32_t var_4c
                int32_t var_5c_1 = var_4c
                var_50.q = 0
                
                if (rdx_7 s> var_4c)
                    sub_1405947f0(&var_68, rdx_7)
                
                sub_140a20ba0(&var_68, u" -> ", 4)
                int32_t rax_18 = var_60_1
                int64_t r14_2 = var_68
                var_68 = 0
                var_60_1.q = 0
                int32_t r8_2 = rax_18 - 1
                
                if (rax_18 == 0)
                    r8_2 = 0
                
                sub_140a20ba0(&var_48, r14_2, r8_2)
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
                
                int64_t rcx_18 = var_58
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                rsi_1 = &rsi_1[1]
                rdi_2 += 1
            while (rdi_2 != r15_2)
        
        arg_18.q = *(arg_10 + 0x18)
        sub_140b63b70(&arg_18, &var_58)
        
        if (var_50 != 0)
            rbx = var_50 - 1
        
        sub_140a20ba0(&var_48, var_58, rbx)
        int64_t rcx_22 = var_58
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t* rcx_23 = var_48
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)

int64_t* rcx_8 = *arg1
var_48 = &arg_10
int32_t* var_40_1 = &arg_8
sub_140b2c6c0(rcx_8, &arg_18, &var_48, nullptr)
return zx.q(arg_8)
