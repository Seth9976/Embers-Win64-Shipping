// 函数: sub_141cc3e90
// 地址: 0x141cc3e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141cc79c0()
void* rsi = rax[0x23]

if (rsi == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rsi = rax[0x23]

*(arg1 + 0x1b8) = 0

if (*(arg1 + 0x1bc) != 0)
    sub_1405c5570(arg1 + 0x1b0, 0)

char rax_1

if (arg2 != 0)
    rax_1 = sub_140d23db0()

uint64_t result
int64_t var_58
int64_t var_48
int64_t var_40

if (arg2 == 0 || rax_1 != 0 || *(rsi + 0x78) s<= 0)
    int64_t* i = *(rsi + 0x70)
    result = sx.q(*(rsi + 0x78))
    
    for (void* r15_2 = &i[result * 3]; i != r15_2; i = &i[3])
        var_48 = *i
        sub_140596d10(&var_40, &i[1])
        int64_t* rax_6 = sub_140d30800(&var_48, &var_58)
        int16_t* rsi_2
        
        if (rax_6[1].d == 0)
            rsi_2 = &data_142d40450
        else
            rsi_2 = *rax_6
        
        uint64_t rax_8 = sub_140d2f6f0(sub_142498910(), 0, rsi_2, 0, 0, 0, 1, 0)
        int64_t rcx_22 = var_58
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (rax_8 != 0 && sub_140d3cb50(rax_8) != 0)
            sub_140cc45a0(sub_140d3cb50(rax_8) + 0x200, rax_8)
        
        int64_t r14_2 = sx.q(*(arg1 + 0x1b8))
        int32_t rax_11 = (r14_2 + 1).d
        *(arg1 + 0x1b8) = rax_11
        
        if (rax_11 s> *(arg1 + 0x1bc))
            sub_1405a4d70(arg1 + 0x1b0)
        
        result = *(arg1 + 0x1b0)
        *(result + (r14_2 << 3)) = rax_8
        int64_t rcx_27 = var_40
        
        if (rcx_27 != 0)
            result = sub_140a74f90(rcx_27)
else
    int64_t* i_1 = *(rsi + 0x70)
    result = sx.q(*(rsi + 0x78))
    void* rdi_1 = &i_1[result * 3]
    void* arg_8 = rdi_1
    
    for (; i_1 != rdi_1; i_1 = &i_1[3])
        var_48 = *i_1
        sub_140596d10(&var_40, &i_1[1])
        var_58 = 0
        int32_t var_50_1 = 0
        int64_t var_78 = 0
        int64_t var_70_1 = 0
        int16_t* var_88 = nullptr
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 2)
        int32_t rbx_2 = var_80_1 + 2
        
        if (rbx_2 s> 0)
            sub_140594770(&var_88)
        
        int16_t* r13_1 = var_88
        UnDecorator::getReferenceType(r13_1, &data_142d404c4, 4)
        int16_t* var_68
        int32_t var_60
        
        if (var_48 != 0)
            sub_140b63b70(&var_48, &var_68)
        else
            var_68 = nullptr
            var_60 = 0
        
        int16_t* const rdx_3 = &data_142d40450
        
        if (rbx_2 != 0)
            rdx_3 = r13_1
        
        int32_t rax_3 = sub_140a23cf0(&var_68, rdx_3, 0, 0, 0xffffffff)
        
        if (rax_3 s>= 0)
            int32_t rbx_4
            int16_t* r14_1
            
            if (var_60 == 0)
                r14_1 = &data_142d40450
                rbx_4 = 0
            else
                r14_1 = var_68
                rbx_4 = var_60 - 1
            
            if (rax_3 s< rbx_4)
                rbx_4 = rax_3
            
            int64_t rsi_1 = 0
            int32_t rdi_2 = 0
            int64_t var_98 = 0
            int32_t r15_1 = 0
            int64_t var_90_1 = 0
            
            if (r14_1 != 0 && *r14_1 != 0 && rbx_4 s> 0)
                if (rbx_4 + 1 s> 0)
                    sub_1405947f0(&var_98, rbx_4 + 1)
                    r15_1 = var_90_1:4.d
                    rdi_2 = var_90_1.d
                    rsi_1 = var_98
                
                rdi_2 = rdi_2 + 1 + rbx_4
                var_90_1.d = rdi_2
                
                if (rdi_2 s> r15_1)
                    sub_140594770(&var_98)
                    r15_1 = var_90_1:4.d
                    rdi_2 = var_90_1.d
                    rsi_1 = var_98
                
                UnDecorator::getReferenceType(rsi_1, r14_1, rbx_4 * 2)
                *(rsi_1 + (sx.q(rdi_2) << 1) - 2) = 0
            
            int64_t rcx_12 = var_78
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            var_70_1.d = rdi_2
            rdi_1 = arg_8
            var_78 = rsi_1
            var_98 = 0
            var_70_1:4.d = r15_1
            int64_t var_90_2 = 0
        
        int16_t* rcx_13 = var_68
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        char var_a8
        var_a8.d = 0
        int64_t var_b0
        var_b0.d = 0xffffffff
        result = sub_140bcb500(&var_78, 0, 0, &var_58, 0, 0xffffffff, 0)
        int64_t rcx_16 = var_78
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        int64_t rcx_17 = var_40
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
return result
