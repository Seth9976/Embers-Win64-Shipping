// 函数: sub_14063d510
// 地址: 0x14063d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int16_t* var_90 = nullptr
char r14 = arg4
int32_t var_88 = 0
int64_t* rdi = arg2
int32_t* r15 = arg1

if (rax s> 1)
    int64_t* rax_1 = *arg3
    
    if (&var_90 == rax_1)
    label_14063d5a1:
        int64_t rsi_1 = 0x10
        int32_t i_2 = 1
        int64_t var_a0_1 = 0x10
        int32_t i
        
        do
            uint64_t var_80 = 0
            int64_t var_78_1 = 0
            sub_1405947f0(&var_80, 2)
            int32_t r14_1 = var_78_1:4.d
            int32_t rdi_2 = var_78_1.d + 2
            var_78_1.d = rdi_2
            
            if (rdi_2 s> r14_1)
                sub_140594770(&var_80)
                r14_1 = var_78_1:4.d
                rdi_2 = var_78_1.d
            
            uint64_t r15_1 = var_80
            sub_1405a7220(r15_1, 2, &(*U""\tv 0")[3], 2, 0x3f)
            int64_t* r12_2 = *arg3 + rsi_1
            int32_t rbx_2 = r12_2[1].d
            uint64_t rdi_3
            
            if (rdi_2 s> 1)
                int32_t rsi_3 = rbx_2 - 1
                
                if (rbx_2 == 0)
                    rsi_3 = 0
                
                int32_t rax_2
                
                if (rdi_2 == 0)
                    rax_2 = 1
                
                if (rdi_2 != 0 || rsi_3 == 0)
                    rax_2 = 0
                
                uint64_t var_70 = r15_1
                int32_t rdx_6 = rax_2 + rdi_2 + rsi_3
                r15_1 = 0
                int64_t var_78_2 = 0
                
                if (rdx_6 s> r14_1)
                    sub_1405947f0(&var_70, rdx_6)
                
                sub_140a20ba0(&var_70, *r12_2, rsi_3)
                rdi_3 = var_70
                rbx_2 = rdi_2
                var_70 = 0
                int32_t var_68_1
                var_68_1.q = 0
                int32_t var_54_2 = r14_1
            else
                int64_t rsi_2 = *r12_2
                uint64_t var_60 = 0
                rdi_3 = 0
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_60, rbx_2, 0)
                    rdi_3 = var_60
                    memcpy(rdi_3, rsi_2, rbx_2 * 2)
                else
                    int32_t var_54_1 = 0
            
            int32_t r8_5 = rbx_2 - 1
            
            if (rbx_2 == 0)
                r8_5 = 0
            
            sub_140a20ba0(&var_90, rdi_3, r8_5)
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            i = i_2 + 1
            rsi_1 = var_a0_1 + 0x10
            i_2 = i
            var_a0_1 = rsi_1
        while (i s< arg3[1].d)
        r14 = arg4
        r15 = arg1
    else
        int32_t rbx_1 = rax_1[1].d
        int64_t rdi_1 = *rax_1
        var_88 = rbx_1
        
        if (rbx_1 == 0)
            goto label_14063d5a1
        
        sub_1405a4c70(&var_90, rbx_1, 0)
        memcpy(var_90, rdi_1, rbx_1 * 2)
        
        if (arg3[1].d s> 1)
            goto label_14063d5a1
    
    rdi = arg2
else if (rax s> 0)
    int64_t* rax_4 = *arg3
    
    if (&var_90 != rax_4)
        int32_t rbx_4 = rax_4[1].d
        int64_t rdi_4 = *rax_4
        var_88 = rbx_4
        
        if (rbx_4 != 0)
            sub_1405a4c70(&var_90, rbx_4, 0)
            memcpy(var_90, rdi_4, rbx_4 * 2)
        
        rdi = arg2

int16_t* const rbx_5 = &data_142d40450
int32_t result_1 = 0
int16_t* rcx_14

if (arg7[1].d == 0)
    rcx_14 = &data_142d40450
else
    rcx_14 = *arg7

PWSTR rax_6

if (sub_140a54570(rcx_14, &data_1437020ab) == 0)
    rax_6 = nullptr
else if (arg7[1].d == 0)
    rax_6 = &data_142d40450
else
    rax_6 = *arg7

int16_t* const r8_8 = &data_142d40450

if (var_88 != 0)
    r8_8 = var_90

if (rdi[1].d != 0)
    rbx_5 = *rdi

void var_98
sub_140b65ff0(&var_98, rbx_5, r8_8, r14, 0, arg5, &result_1, arg6, rax_6, 0, 0)
int16_t* rcx_16 = var_90
int32_t result = result_1
*r15 = result

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = *rdi

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int32_t i_3 = arg3[1].d
int64_t* rbx_6 = *arg3

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_18 = *rbx_6
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        rbx_6 = &rbx_6[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_6 = *arg3

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

int64_t rcx_20 = *arg7

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
