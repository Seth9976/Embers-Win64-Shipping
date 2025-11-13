// 函数: sub_141d9e760
// 地址: 0x141d9e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t** result = arg2
int32_t rax = sub_141d15780()
int32_t arg_18 = rax
int64_t r13
r13.b = rax s<= 0
char rax_1 = sub_141d158c0()
int16_t* var_80
sub_141d15730(&var_80)
sub_140a464c0()
char const (** arg_20)[0x4] = &data_14399ea08
int32_t r12 = 1
uint64_t var_b8
uint64_t var_b0
uint64_t var_a0
uint64_t* var_90
int32_t var_88
int32_t var_78
int16_t* var_70
int32_t var_68

if (rax_1 == 0)
    var_a0 = 0
    int32_t rdi_5 = 0
    int64_t var_98_3 = 0
    uint64_t rbx_7 = 0x2bca2875f4373fff
    
    while (r13.b != 0 || r12 s<= arg_18)
        int16_t* const r8_11 = &data_142d40450
        
        if (var_78 != 0)
            r8_11 = var_80
        
        sub_140a2e390(&var_90, u"%s%i", r8_11)
        sub_141d9ef80(arg1, &var_70, &var_90)
        int16_t* r8_13 = &data_142d40450
        int16_t* r14_5 = var_70
        
        if (var_68 != 0)
            r8_13 = r14_5
        
        (*(*arg_20 + 0xd0))(arg_20, &var_b8, r8_13)
        uint64_t rax_24 = var_b8
        
        if (rax_24 == 0)
            uint64_t* rbx_9 = var_90
            var_98_3.d = var_88
            
            if (var_88 != 0 || rdi_5 != 0)
                sub_1405a4c70(&var_a0, var_88, rdi_5)
                memcpy(var_a0, rbx_9, var_88 * 2)
                rdi_5 = var_98_3:4.d
                rbx_9 = var_90
            else
                rdi_5 = 0
            
            if (r14_5 != 0)
                sub_140a74f90(r14_5)
                rbx_9 = var_90
            
            if (rbx_9 != 0)
                sub_140a74f90(rbx_9)
            
            break
        
        if (r13.b == 0 && rax_24 s< rbx_7)
            var_b0 = var_90
            var_98_3.d = var_88
            
            if (var_88 != 0 || rdi_5 != 0)
                sub_1405a4c70(&var_a0, var_88, rdi_5)
                memcpy(var_a0, var_b0, var_88 * 2)
                rax_24 = var_b8
                rdi_5 = var_98_3:4.d
            else
                rdi_5 = 0
                var_98_3:4.d = 0
            
            rbx_7 = rax_24
        
        r12 += 1
        
        if (r14_5 != 0)
            sub_140a74f90(r14_5)
        
        uint64_t* rcx_43 = var_90
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
    
    *result = var_a0
    result[1].d = var_98_3.d
    *(result + 0xc) = rdi_5
else
    int16_t* rcx_24
    int16_t* var_60
    
    if (r13.b != 0)
    label_141d9eae4:
        uint64_t** rax_17 = sub_140b29020(sub_140b21590(&arg_18), &var_60)
        
        if (var_78 s> 1)
            int32_t rax_18 = rax_17[1].d
            int32_t r14_4 = rax_18 - 1
            
            if (rax_18 == 0)
                r14_4 = 0
            
            if (var_78 != 0 || r14_4 == 0)
                r12 = 0
            
            var_90 = nullptr
            int32_t rax_19 = r12 + r14_4
            int16_t* r12_1 = var_80
            int32_t var_84
            
            if (var_78 != 0 || rax_19 != 0)
                sub_1405a4c70(&var_90, rax_19 + var_78, 0)
                memcpy(var_90, r12_1, var_78 * 2)
            else
                var_84 = 0
            
            sub_140a20ba0(&var_90, *rax_17, r14_4)
            rcx_24 = var_60
            *result = var_90
            result[1].d = var_78
            *(result + 0xc) = var_84
        else
            *result = nullptr
            *result = *rax_17
            *rax_17 = nullptr
            result[1].d = rax_17[1].d
            *(result + 0xc) = *(rax_17 + 0xc)
            rax_17[1] = 0
            rcx_24 = var_60
    else
        var_a0 = 0
        int64_t var_98_1 = 0
        sub_1405947f0(&var_a0, 2)
        int32_t r13_1 = var_98_1:4.d
        int32_t rbx_1 = var_98_1.d + 2
        var_98_1.d = rbx_1
        
        if (rbx_1 s> r13_1)
            sub_140594770(&var_a0)
            r13_1 = var_98_1:4.d
            rbx_1 = var_98_1.d
        
        uint64_t rdi_1 = var_a0
        UnDecorator::getReferenceType(rdi_1, &data_142d6bbe8, 4)
        
        if (var_78 s> 1)
            int32_t rbx_2
            
            if (rbx_1 == 0)
                rbx_2 = 0
            else
                rbx_2 = rbx_1 - 1
            
            int32_t rax_2
            
            if (var_78 == 0)
                rax_2 = 1
            
            if (var_78 != 0 || rbx_2 == 0)
                rax_2 = 0
            
            int16_t* r13_2 = var_80
            int32_t rcx_4 = rax_2 + rbx_2
            var_a0 = 0
            var_98_1.d = var_78
            
            if (var_78 != 0 || rcx_4 != 0)
                sub_1405a4c70(&var_a0, var_78 + rcx_4, 0)
                memcpy(var_a0, r13_2, var_78 * 2)
            else
                var_98_1:4.d = 0
            
            sub_140a20ba0(&var_a0, rdi_1, rbx_2)
            var_b0 = var_a0
            int32_t var_a8_2 = var_98_1.d
            int32_t var_a4_2 = var_98_1:4.d
            int64_t var_98_2 = 0
            var_a0 = 0
        else
            var_b0 = rdi_1
            rdi_1 = 0
            int32_t var_a8_1 = rbx_1
            int32_t var_a4_1 = r13_1
        
        sub_141d9ef80(arg1, &var_70, &var_b0)
        uint64_t rcx_9 = var_b0
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        char const (** r14_2)[0x4] = arg_20
        int16_t* r13_3 = var_70
        int16_t* const r8_5 = &data_142d40450
        var_b8 = &data_142d40450
        
        if (var_68 != 0)
            r8_5 = r13_3
        
        char const (* rax_6)[0x4] = *r14_2
        var_90 = nullptr
        var_88.q = 0
        (*(rax_6 + 0x78))(r14_2, &var_90, r8_5, 1, 0)
        int64_t rdi_2 = sx.q(var_88)
        
        if (rdi_2.d s< arg_18)
            goto label_141d9ea92
        
        uint64_t* rcx_12 = nullptr
        uint64_t* rdi_3 = var_90
        uint64_t rbx_3 = 0x2bca2875f4373fff
        void* r13_6 = &rdi_3[rdi_2 * 2]
        arg_18.q = 0
        
        if (rdi_3 != r13_6)
            do
                int64_t* rax_7 = sub_141d9ef80(arg1, &var_a0, rdi_3)
                
                if (rdi_3 != rax_7)
                    uint64_t rcx_14 = *rdi_3
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    *rdi_3 = *rax_7
                    *rax_7 = 0
                    rdi_3[1].d = rax_7[1].d
                    *(rdi_3 + 0xc) = *(rax_7 + 0xc)
                    rax_7[1] = 0
                
                uint64_t rcx_16 = var_a0
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                sub_140a2f8e0(rdi_3, sub_141d157d0(&var_60), 1)
                int16_t* rcx_19 = var_60
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                uint64_t r8_7
                
                if (rdi_3[1].d == 0)
                    r8_7 = &data_142d40450
                else
                    r8_7 = *rdi_3
                
                (*(*r14_2 + 0xd0))(r14_2, &var_b0, r8_7)
                uint64_t rax_12 = var_b0
                
                if (rax_12 s>= rbx_3)
                    rcx_12 = arg_18.q
                else
                    rcx_12 = rdi_3
                    rbx_3 = rax_12
                    arg_18.q = rcx_12
                
                rdi_3 = &rdi_3[2]
            while (rdi_3 != r13_6)
            
            result = arg2
            r14_2 = arg_20
        
        if (rcx_12[1].d != 0)
            var_b8 = *rcx_12
        
        rdi_2 = zx.q(var_88)
        
        if ((*(*r14_2 + 0x30))(r14_2, var_b8, 1, 1, 0) != 0)
            r13_3 = var_70
        label_141d9ea92:
            uint64_t* rbx_5 = var_90
            
            if (rdi_2.d != 0)
                int32_t i
                
                do
                    uint64_t rcx_25 = *rbx_5
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    rbx_5 = &rbx_5[2]
                    i = rdi_2.d
                    rdi_2 = zx.q(rdi_2.d - 1)
                while (i != 1)
                rbx_5 = var_90
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            if (r13_3 != 0)
                sub_140a74f90(r13_3)
            
            goto label_141d9eae4
        
        uint64_t* rbx_4 = var_90
        *result = nullptr
        result[1] = 0
        
        if (rdi_2.d != 0)
            int32_t i_1
            
            do
                uint64_t rcx_22 = *rbx_4
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                rbx_4 = &rbx_4[2]
                i_1 = rdi_2.d
                rdi_2 = zx.q(rdi_2.d - 1)
            while (i_1 != 1)
            rbx_4 = var_90
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        rcx_24 = var_70
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
int16_t* rcx_48 = var_80

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

return result
