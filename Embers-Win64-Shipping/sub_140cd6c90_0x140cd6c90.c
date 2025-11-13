// 函数: sub_140cd6c90
// 地址: 0x140cd6c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int32_t* result = sub_140865c40(*arg1, &arg_8, arg2)

if (*result == 0xffffffff)
    arg_8 = arg2[3]
    int16_t* var_38
    sub_140b63b70(&arg_8, &var_38)
    void* rbx_1 = arg2[2]
    int16_t* const r15_1 = &data_142d40450
    void* rcx_2 = *(rbx_1 + 0xe0)
    int32_t var_48
    int64_t** var_40
    
    if (rcx_2 != 0)
        int64_t rdi_1 = *arg1[1]
        
        if (sub_140d21d80(rcx_2) == rdi_1)
            int16_t* var_68
            sub_140d21e10(rbx_1, &var_68, rdi_1)
            arg_8 = *(*arg1[2] + 0x18)
            sub_140b63b70(&arg_8, &var_48)
            int16_t* const r8_2 = &data_142d40450
            
            if (var_40.d != 0)
                r8_2 = var_48.q
            
            int16_t* var_58
            sub_140a2e390(&var_58, u"%s.%s", r8_2)
            int16_t* rcx_7 = var_68
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int16_t* rdx_4 = var_58
            int32_t var_50
            int32_t r8_3 = var_50
            int64_t rcx_8 = var_48.q
            var_68 = rdx_4
            var_58 = nullptr
            int32_t var_4c
            int32_t var_5c_1 = var_4c
            var_50.q = 0
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
                rdx_4 = var_68
            
            int16_t* rdi_2 = &data_142d40450
            
            if (r8_3 != 0)
                rdi_2 = rdx_4
            
            void* rax_8 = sub_140d2f6f0(sub_140bdf2e0(), *arg1[2], rdi_2, 0, 0, 0, 1, 0)
            int16_t* rcx_10 = var_68
            rbx_1 = rax_8
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
    
    int32_t var_30
    
    if (var_30 != 0)
        r15_1 = var_38
    
    uint64_t* rax_9 = sub_140b58260(&arg_8, r15_1, 1)
    int32_t var_78_1 = 0
    char var_88_1 = 0
    int64_t rax_10 = sub_140d2f0c0(rbx_1, *arg1[3], *rax_9, 0, 0, 0)
    int64_t* rbx_4 = *arg1
    sub_140598750(rbx_4, &var_48)
    uint32_t rdx_11 = (arg2 u>> 4).d
    int32_t r10_2 = (0x9e3779b9 - rdx_11) ^ rdx_11 << 8
    *var_40 = arg2
    var_40[1] = rax_10
    var_40[2].d = 0xffffffff
    int32_t r8_8 = neg.d(rdx_11 + r10_2) ^ r10_2 u>> 0xd
    int32_t rdx_14 = (rdx_11 - r8_8 - r10_2) ^ r8_8 u>> 0xc
    int32_t r10_5 = (r10_2 - rdx_14 - r8_8) ^ rdx_14 << 0x10
    int32_t r8_11 = (r8_8 - rdx_14 - r10_5) ^ r10_5 u>> 5
    int32_t rdx_17 = (rdx_14 - r8_11 - r10_5) ^ r8_11 u>> 3
    int32_t r10_8 = (r10_5 - rdx_17 - r8_11) ^ rdx_17 << 0xa
    var_88_1.d = var_48
    result = sub_140864e40(rbx_4, &arg_8, (r8_11 - rdx_17 - r10_8) ^ r10_8 u>> 0xf, var_40, 
        var_88_1, nullptr)
    
    if (rax_10 != 0)
        result = (*(*arg2 + 0x1f8))(arg2, rax_10, *arg1)
    
    int16_t* rcx_16 = var_38
    
    if (rcx_16 != 0)
        return sub_140a74f90(rcx_16)

return result
