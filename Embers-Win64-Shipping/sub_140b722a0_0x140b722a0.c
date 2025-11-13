// 函数: sub_140b722a0
// 地址: 0x140b722a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4
int64_t* r15 = arg2
int64_t* var_70 = nullptr
int32_t i_4 = 0
PWSTR rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

uint64_t result = sub_140b71db0(rcx, &var_70)
uint64_t i_3 = zx.q(i_4)
int64_t* r14 = var_70

if (result.b != 0 && i_3.d s> 0)
    int64_t* rbx_1 = r14
    int64_t* var_b0_1 = rbx_1
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        void arg_8
        result = sub_140960120(rsi, &arg_8, rbx_1)
        
        if (*result == 0xffffffff)
            void var_b8
            sub_1406b3860(rsi, &var_b8, rbx_1, nullptr)
            PWSTR lpModuleName
            
            if (rbx_1[1].d == 0)
                lpModuleName = &data_142d40450
            else
                lpModuleName = *rbx_1
            
            result = GetModuleHandleW(lpModuleName)
            
            if (result == 0)
                int64_t var_a0 = 0
                int32_t var_98_1 = 0
                int16_t* rdi
                
                if (rbx_1[1].d == 0)
                    rdi = &data_142d40450
                else
                    rdi = *rbx_1
                
                int16_t* var_90 = nullptr
                result = 0
                int32_t result_1 = 0
                int16_t* r12_1 = nullptr
                int32_t var_88_1 = 0
                int32_t r13_1 = 0
                
                if (rdi != 0 && *rdi != 0)
                    int64_t rbx_2 = -1
                    
                    do
                        rbx_2 += 1
                    while (rdi[rbx_2] != 0)
                    
                    rbx_1 = zx.q(rbx_2.d + 1)
                    
                    if (rbx_1.d s> 0)
                        sub_1405947f0(&var_90, rbx_1.d)
                        result = zx.q(result_1)
                        r13_1 = var_88_1
                        r12_1 = var_90
                    
                    r13_1 += rbx_1.d
                    
                    if (r13_1 s> result.d)
                        sub_140594770(&var_90)
                        r12_1 = var_90
                    
                    result = UnDecorator::getReferenceType(r12_1, rdi, rbx_1.d * 2)
                
                int32_t r14_1 = 0
                
                if (r15[1].d s<= 0)
                label_140b724e1:
                    rbx_1.b = 0
                else
                    int64_t rsi_1 = 0
                    
                    while (true)
                        int64_t* rcx_6 = *r15
                        rbx_1 = zx.q(r13_1 - 1)
                        
                        if (r13_1 == 0)
                            rbx_1 = nullptr
                        
                        int32_t rax_1
                        
                        if (*(rcx_6 + rsi_1 + 8) == 0)
                            rax_1 = 2
                        
                        if (*(rcx_6 + rsi_1 + 8) != 0 || (rbx_1 + 1).d == 0)
                            rax_1 = 1
                        
                        int64_t var_80 = 0
                        int32_t rdx_6 = rax_1 + rbx_1.d
                        int32_t rdi_1 = *(rcx_6 + rsi_1 + 8)
                        int64_t r15_1 = *(rcx_6 + rsi_1)
                        int32_t var_78_1 = rdi_1
                        
                        if (rdi_1 != 0 || rdx_6 != 0)
                            sub_1405a4c70(&var_80, rdx_6 + rdi_1, 0)
                            memcpy(var_80, r15_1, rdi_1 * 2)
                        else
                            int32_t var_74_1 = 0
                        
                        sub_140a2cf70(&var_80, r12_1, rbx_1.d)
                        result = sub_140b16090(&var_80)
                        
                        if (result.b != 0)
                            int64_t var_60
                            int64_t* rax_2 = sub_140b11c80(&var_60, &var_80)
                            result = &var_a0
                            
                            if (&var_a0 != rax_2)
                                int64_t rcx_16 = var_a0
                                
                                if (rcx_16 != 0)
                                    sub_140a74f90(rcx_16)
                                
                                var_a0 = *rax_2
                                *rax_2 = 0
                                var_98_1 = rax_2[1].d
                                result = zx.q(*(rax_2 + 0xc))
                                var_98_1 = result.d
                                rax_2[1] = 0
                            
                            int64_t rcx_18 = var_60
                            
                            if (rcx_18 != 0)
                                result = sub_140a74f90(rcx_18)
                            
                            int64_t rcx_19 = var_80
                            
                            if (rcx_19 != 0)
                                result = sub_140a74f90(rcx_19)
                            
                            rbx_1.b = 1
                            break
                        
                        int64_t rcx_11 = var_80
                        
                        if (rcx_11 != 0)
                            result = sub_140a74f90(rcx_11)
                        
                        r15 = arg2
                        r14_1 += 1
                        rsi_1 += 0x10
                        
                        if (r14_1 s>= r15[1].d)
                            goto label_140b724e1
                
                if (r12_1 != 0)
                    result = sub_140a74f90(r12_1)
                
                r15 = arg2
                
                if (rbx_1.b != 0)
                    sub_140b722a0(&var_a0, r15, arg3, arg4)
                    int64_t rbx_3 = sx.q(arg3[1].d)
                    result = zx.q((rbx_3 + 1).d)
                    arg3[1].d = result.d
                    
                    if (result.d s> *(arg3 + 0xc))
                        result = sub_1405a4f90(arg3)
                    
                    int64_t* rbx_5 = (rbx_3 << 4) + *arg3
                    *rbx_5 = 0
                    int64_t rsi_2 = var_a0
                    rbx_5[1].d = var_98_1
                    
                    if (var_98_1 != 0)
                        sub_1405a4c70(rbx_5, var_98_1, 0)
                        result = memcpy(*rbx_5, rsi_2, var_98_1 * 2)
                    else
                        *(rbx_5 + 0xc) = 0
                
                int64_t rcx_22 = var_a0
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
                
                rsi = arg4
                rbx_1 = var_b0_1
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
        var_b0_1 = rbx_1
    while (i != 1)
    i_3 = zx.q(i_4)
    r14 = var_70

int64_t* rbx_6 = r14

if (i_3.d != 0)
    int32_t i_1
    
    do
        int64_t rcx_23 = *rbx_6
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        rbx_6 = &rbx_6[2]
        i_1 = i_3.d
        i_3 = zx.q(i_3.d - 1)
    while (i_1 != 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
