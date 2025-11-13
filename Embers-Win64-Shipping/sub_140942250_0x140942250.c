// 函数: sub_140942250
// 地址: 0x140942250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t rbx = *arg3
int32_t rax = *(arg1 + 0x1b0)
int16_t* rsi = nullptr
int64_t* r15 = arg4
int64_t* r14 = arg3
int64_t arg_8 = rbx
int64_t* var_78 = arg1 + 0x1a8
void* const rcx_3

if (rax == *(arg1 + 0x1dc))
label_1409422f0:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = arg1 + 0x1e0
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1409422f0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x1a8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x20)
            
            if (rax_4 == 0xffffffff)
                goto label_1409422f0_2
        
        if (rax_4 == 0xffffffff)
        label_1409422f0_2:
            rcx_3 = nullptr

void* rbx_1 = rcx_3 + 8

if (rcx_3 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    int64_t* r12_1 = arg5
    *r15 = *(arg1 + 8)
    int16_t* const r13_1 = &data_142d40450
    *r12_1 = data_143cecf70
    int16_t* var_68
    int16_t* var_58
    int32_t var_50
    
    if (*r14 != 0)
        sub_140b63b70(r14, &var_58)
        int16_t* rdi_1 = var_58
        int32_t rcx_6 = var_50
        int16_t* rbx_2 = rdi_1
        void* rdx_5 = &rdi_1[sx.q(rcx_6)]
        int32_t rbx_4
        
        if (rdi_1 != rdx_5)
            while (*rbx_2 != 0x3a)
                rbx_2 = &rbx_2[1]
                
                if (rbx_2 == rdx_5)
                    goto label_140942374
            
            rbx_4 = ((rbx_2 - rdi_1) s>> 1).d
        
        if (rdi_1 == rdx_5 || rbx_4 == 0xffffffff)
        label_140942374:
            int16_t* const rdx_6 = &data_142d40450
            
            if (rcx_6 != 0)
                rdx_6 = rdi_1
            
            *r15 = *sub_140b58260(&arg_8, rdx_6, 1)
            rdi_1 = var_58
        else
            if (rbx_4 s> 0)
                int32_t r14_1
                
                if (rcx_6 == 0)
                    rdi_1 = &data_142d40450
                    r14_1 = 0
                else
                    r14_1 = rcx_6 - 1
                
                var_68 = nullptr
                int32_t rdx_12 = 0
                int32_t rax_13 = 0
                
                if (rbx_4 s< r14_1)
                    r14_1 = rbx_4
                
                int32_t var_60_1 = 0
                int32_t var_5c_1 = 0
                int16_t* r15_1 = nullptr
                int16_t* const rdx_15
                int32_t r12_3
                
                if (rdi_1 != 0 && *rdi_1 != 0 && r14_1 s> 0)
                    if (r14_1 + 1 s> 0)
                        sub_1405947f0(&var_68, r14_1 + 1)
                        rax_13 = var_5c_1
                        rdx_12 = var_60_1
                        r15_1 = var_68
                    
                    r12_3 = r14_1 + 1 + rdx_12
                    
                    if (r12_3 s> rax_13)
                        sub_140594770(&var_68)
                        r15_1 = var_68
                    
                    UnDecorator::getReferenceType(r15_1, rdi_1, r14_1 * 2)
                    rdx_15 = r15_1
                    r15_1[sx.q(r12_3) - 1] = 0
                
                if (rdi_1 == 0 || *rdi_1 == 0 || r14_1 s<= 0 || r12_3 == 0)
                    rdx_15 = &data_142d40450
                
                *arg4 = *sub_140b58260(&arg_8, rdx_15, 1)
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
                
                r12_1 = arg5
                r15 = arg4
                rdi_1 = var_58
                rcx_6 = var_50
            
            int32_t rax_17 = rcx_6 - 1
            
            if (rcx_6 == 0)
                rax_17 = 0
            
            if (rbx_4 + 1 s< rax_17)
                int32_t rdx_17
                
                if (rcx_6 == 0)
                    rdx_17 = 0
                    rdi_1 = &data_142d40450
                else
                    rdx_17 = rcx_6 - 1
                
                int32_t rax_19 = rdx_17 - (rbx_4 + 1)
                int32_t rcx_17
                
                if (rdx_17 - (rbx_4 + 1) s>= 0)
                    rcx_17 = rdx_17
                    
                    if (rax_19 s< rdx_17)
                        rcx_17 = rax_19
                else
                    rcx_17 = 0
                
                int32_t rdx_18 = 0
                var_68 = nullptr
                int32_t rax_21 = 0
                int32_t var_60_3 = 0
                int32_t var_5c_2 = 0
                void* rdi_3 = &rdi_1[sx.q(rdx_17) - sx.q(rcx_17)]
                int16_t* rdx_21
                int32_t r14_2
                
                if (rdi_3 != 0 && *rdi_3 != 0)
                    int64_t rbx_5 = -1
                    
                    do
                        rbx_5 += 1
                    while (*(rdi_3 + (rbx_5 << 1)) != 0)
                    
                    if (rbx_5.d + 1 s> 0)
                        sub_1405947f0(&var_68, rbx_5.d + 1)
                        rax_21 = var_5c_2
                        rdx_18 = var_60_3
                        rsi = var_68
                    
                    r14_2 = rdx_18 + rbx_5.d + 1
                    
                    if (r14_2 s> rax_21)
                        sub_140594770(&var_68)
                        rsi = var_68
                    
                    UnDecorator::getReferenceType(rsi, rdi_3, (rbx_5.d + 1) * 2)
                    rdx_21 = rsi
                
                if (rdi_3 == 0 || *rdi_3 == 0 || r14_2 == 0)
                    rdx_21 = &data_142d40450
                
                *r12_1 = *sub_140b58260(&arg_8, rdx_21, 1)
                
                if (rsi != 0)
                    sub_140a74f90(rsi)
                
                rdi_1 = var_58
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        r14 = arg_18
    
    void* rax_11 = sub_14093b5e0(var_78, r14)
    rbx_1 = rax_11
    *rax_11 = *r15
    *(rax_11 + 8) = *r12_1
    int64_t* rax_12 = sub_140b63b70(r12_1, &var_78)
    
    if (rax_12[1].d != 0)
        *rax_12
    
    int64_t* rax_23 = sub_140b63b70(r15, &var_68)
    int16_t* const r8_7
    
    if (rax_23[1].d == 0)
        r8_7 = &data_142d40450
    else
        r8_7 = *rax_23
    
    sub_140a2e390(&var_58, u"%s:%s", r8_7)
    
    if (var_50 != 0)
        r13_1 = var_58
    
    *(rbx_1 + 0x10) = *sub_140b58260(&arg_18, r13_1, 1)
    int16_t* rcx_29 = var_58
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    int16_t* rcx_30 = var_68
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int64_t* rcx_31 = var_78
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
else
    *r15 = *rbx_1
    *arg5 = *(rbx_1 + 8)

*arg2 = *(rbx_1 + 0x10)
return arg2
