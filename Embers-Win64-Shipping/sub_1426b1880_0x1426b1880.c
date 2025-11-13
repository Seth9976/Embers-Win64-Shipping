// 函数: sub_1426b1880
// 地址: 0x1426b1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
*arg2 = 0
arg2[1] = 0
int32_t i_1 = 0

if (*(arg1 + 0x118) s> 0)
    int64_t rcx = 0
    int64_t arg_18 = 0
    int32_t i
    
    do
        void* r15_2 = *(arg1 + 0x110) + rcx
        void* rax_3 = *(zx.q(*(r15_2 + 0x40)) * 0x38 + *(arg1 + 0x120))
        uint64_t var_a8
        void* var_a0
        
        if (rax_3 != 0)
            int64_t arg_20 = *(rax_3 + 0x18)
            sub_140b63b70(&arg_20, &var_a8)
        else
            var_a8 = 0
            sub_1405947f0(&var_a8, (rax_3 + 5).d)
            var_a0.d = rax_3.d + 5
            
            if (rax_3.d + 5 s> var_a0:4.d)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, u"None", 0xa)
        
        uint64_t r8_1 = &data_142d40450
        
        if (var_a0.d != 0)
            r8_1 = var_a8
        
        int64_t var_68
        sub_140a2e390(&var_68, u"Behavior tree: %s\n", r8_1)
        int32_t var_60
        int32_t r8_3
        
        if (var_60 == 0)
            r8_3 = 0
        else
            r8_3 = var_60 - 1
        
        sub_140a20ba0(result, var_68, r8_3)
        int64_t rcx_8 = var_68
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        uint64_t rcx_9 = var_a8
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t* j = *(r15_2 + 8)
        uint64_t rsi_1 = 0
        int32_t rdi_1 = 0
        int32_t r8_9
        
        if (j == 0)
            r8_9 = 0
        else
            do
                int64_t var_58
                int64_t* rax_6 =
                    sub_1426b3140(j, &var_58, arg1, zx.q(*(j + 0x52)) + *(r15_2 + 0x30), 0)
                int16_t* const r8_5
                
                if (rax_6[1].d == 0)
                    r8_5 = &data_142d40450
                else
                    r8_5 = *rax_6
                
                uint64_t var_78
                sub_140a2e390(&var_78, u"  %s\n", r8_5)
                uint64_t var_88
                int32_t var_70
                uint64_t rbx_1
                
                if (var_70 s> 1)
                    int32_t rbx_2 = rdi_1 - 1
                    
                    if (rdi_1 == 0)
                        rbx_2 = 0
                    
                    int32_t rcx_14
                    
                    if (var_70 == 0)
                        rcx_14 = var_70 + 1
                    
                    if (var_70 != 0 || rbx_2 == 0)
                        rcx_14 = 0
                    
                    int32_t var_90_1 = var_70
                    int32_t rdx_9 = var_70 + rcx_14 + rbx_2
                    uint64_t var_98 = var_78
                    var_78 = 0
                    int32_t var_6c
                    int32_t var_8c_1 = var_6c
                    var_70.q = 0
                    
                    if (rdx_9 s> var_6c)
                        sub_1405947f0(&var_98, rdx_9)
                    
                    sub_140a20ba0(&var_98, rsi_1, rbx_2)
                    rbx_1 = var_98
                    rdi_1 = var_90_1
                    var_98 = 0
                    var_90_1.q = 0
                else
                    rbx_1 = 0
                    var_88 = 0
                    
                    if (rdi_1 != 0)
                        sub_1405a4c70(&var_88, rdi_1, 0)
                        rbx_1 = var_88
                        memcpy(rbx_1, rsi_1, rdi_1 * 2)
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
                
                uint64_t rcx_18 = var_78
                rsi_1 = rbx_1
                var_88 = 0
                int32_t var_80
                var_80.q = 0
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                int64_t rcx_19 = var_58
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                j = j[9]
            while (j != 0)
            
            result = arg2
            
            if (rdi_1 == 0)
                r8_9 = 0
            else
                r8_9 = rdi_1 - 1
        
        sub_140a20ba0(result, rsi_1, r8_9)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        i = i_1 + 1
        rcx = arg_18 + 0x58
        i_1 = i
        arg_18 = rcx
    while (i s< *(arg1 + 0x118))

return result
