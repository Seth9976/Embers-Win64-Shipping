// 函数: sub_140808860
// 地址: 0x140808860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x34) = data_143dbb1f8.q
uint64_t result = zx.q(data_143dbb200)
*(arg1 + 0x3c) = result.d
*(arg1 + 0x28) = *(arg1 + 0x34)
*(arg1 + 0x30) = result.d
*(arg1 + 0x40) = 0

if (*(arg1 + 0x928) s> 0x64 && data_143ce2aac != 0)
    uint64_t result_1 = *(sub_140852300(*(arg1 + 0x780)) + 0x18)
    int64_t var_58
    sub_140b63b70(&result_1, &var_58)
    uint64_t result_3 = 0
    int64_t var_70_1 = 0
    sub_1405947f0(&result_3, 3)
    int32_t r13_1 = var_70_1:4.d
    int32_t r14_1 = var_70_1.d + 3
    var_70_1.d = r14_1
    
    if (r14_1 s> r13_1)
        sub_140594770(&result_3)
        r13_1 = var_70_1:4.d
        r14_1 = var_70_1.d
    
    uint64_t result_2 = result_3
    result_1 = result_2
    sub_1405a7220(result_2, 3, "::", 3, 0x3f)
    int64_t arg_18 =
        *(*sub_140851dc0(sub_140852300(*(arg1 + 0x780))) + sx.q(*(arg1 + 0xc)) * 0x30 + 0x1c)
    int32_t var_50
    uint64_t result_4
    
    if (var_50 s> 1)
        int32_t r14_2
        
        if (r14_1 == 0)
            r14_2 = 0
        else
            r14_2 = r14_1 - 1
        
        int32_t rax_4
        
        if (var_50 == 0)
            rax_4 = var_50 + 1
        
        if (var_50 != 0 || r14_2 == 0)
            rax_4 = 0
        
        int64_t r12_1 = var_58
        int32_t rcx_11 = rax_4 + r14_2
        result_3 = 0
        var_70_1.d = var_50
        
        if (var_50 != 0 || rcx_11 != 0)
            sub_1405a4c70(&result_3, rcx_11 + var_50, 0)
            memcpy(result_3, r12_1, var_50 * 2)
        else
            var_70_1:4.d = 0
        
        sub_140a20ba0(&result_3, result_2, r14_2)
        result_4 = result_3
        r14_1 = var_70_1.d
        r13_1 = var_70_1:4.d
        result_3 = 0
        int64_t var_70_2 = 0
    else
        result_4 = result_2
        result_1 = 0
    
    int64_t var_48
    int64_t* rax_5 = sub_140b63b70(&arg_18, &var_48)
    uint64_t result_6
    
    if (r14_1 s> 1)
        int32_t rax_6 = rax_5[1].d
        int32_t r15_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r15_1 = 0
        
        int32_t rax_7
        
        if (r14_1 == 0)
            rax_7 = r14_1 + 1
        
        if (r14_1 != 0 || r15_1 == 0)
            rax_7 = 0
        
        uint64_t result_5 = result_4
        int32_t rdx_7 = r14_1 + rax_7 + r15_1
        int32_t var_60_1 = r14_1
        int32_t var_5c_1 = r13_1
        
        if (rdx_7 s> r13_1)
            sub_1405947f0(&result_5, rdx_7)
        
        sub_140a20ba0(&result_5, *rax_5, r15_1)
        result_6 = result_5
    else
        result_6 = *rax_5
        *rax_5 = 0
        rax_5[1] = 0
        
        if (result_4 != 0)
            sub_140a74f90(result_4)
    
    int64_t rcx_19 = var_48
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)
    
    if (result_6 != 0)
        result = sub_140a74f90(result_6)
    
    int64_t rcx_22 = var_58
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)

if (*(arg1 + 0x24) != 4)
    *(arg1 + 0x24) = 0
    
    if (arg2 != 0)
        void* rcx_23 = *(arg1 + 0x778)
        *(arg1 + 0x1c) |= 1
        *(arg1 + 0x18) = 0
        sub_140808700(rcx_23)
        int64_t r14_3 = 0
        int64_t* rbx_4 = *(arg1 + 0x7a8)
        uint64_t r15_3 = sx.q(*(arg1 + 0x7b0)) << 3 u>> 3
        
        if (rbx_4 u> &rbx_4[sx.q(*(arg1 + 0x7b0))])
            r15_3 = 0
        
        if (r15_3 != 0)
            do
                sub_140808700(*rbx_4)
                r14_3 += 1
                rbx_4 = &rbx_4[1]
            while (r14_3 != r15_3)
        
        int64_t* rbx_5 = *(arg1 + 0x798)
        uint64_t r14_5 = sx.q(*(arg1 + 0x7a0)) << 3 u>> 3
        
        if (rbx_5 u> &rbx_5[sx.q(*(arg1 + 0x7a0))])
            r14_5 = 0
        
        if (r14_5 != 0)
            do
                sub_140808700(*rbx_5)
                rdi += 1
                rbx_5 = &rbx_5[1]
            while (rdi != r14_5)
        
        result = *(arg1 + 0x788)
        
        if (*(result + 0xd8) == 1)
            int32_t* rcx_26 = *(arg1 + 0x728)
            
            if (rcx_26 != 0)
                return sub_140859310(rcx_26, *(arg1 + 0x908))

return result
