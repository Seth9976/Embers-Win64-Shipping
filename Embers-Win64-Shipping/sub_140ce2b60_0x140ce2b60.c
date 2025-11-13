// 函数: sub_140ce2b60
// 地址: 0x140ce2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int16_t* r12_1 = nullptr
void* rax_1 = *(arg1 + 0x10)
void* var_48 = rax_1
int64_t* i_2

if (rax_1 == 0)
    i_2 = nullptr
else
    i_2 = *(rax_1 + 0x50)

int32_t var_38_1 = 0xffffffff
int16_t var_34_1 = 0x101
char var_32_1 = 0
sub_1406328d0(&var_48)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    int64_t rbx_1
    
    if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
        rbx_1 = 0
    else
        rbx_1 = i[2]
    
    if (rbx_1 != sub_140d41340())
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        int16_t* var_78
        int32_t var_70
        
        if (i == 0)
            var_78 = nullptr
            var_70 = 0
            sub_1405947f0(&var_78, 5)
            int32_t rax_5 = var_70 + 5
            var_70 = rax_5
            
            if (rax_5 s> 0)
                sub_140594770(&var_78)
            
            UnDecorator::getReferenceType(var_78, u"None", 0xa)
        else
            sub_140b63b70(&i[5], &var_78)
        
        int16_t* const rdi_1 = &data_142d40450
        int16_t* var_88 = nullptr
        
        if (var_70 != 0)
            rdi_1 = var_78
        
        int32_t rsi_1 = 0
        int32_t r15_1 = 0
        int64_t var_80_1 = 0
        int32_t rax_6
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_2.d + 1)
                r15_1 = var_80_1:4.d
                rsi_1 = var_80_1.d
                r12_1 = var_88
            
            rsi_1 += rbx_2.d + 1
            var_80_1.d = rsi_1
            
            if (rsi_1 s> r15_1)
                sub_140594770(&var_88)
                r15_1 = var_80_1:4.d
                rsi_1 = var_80_1.d
                r12_1 = var_88
            
            UnDecorator::getReferenceType(r12_1, rdi_1, (rbx_2.d + 1) * 2)
            rax_6 = 1
        
        if (rdi_1 == 0 || *rdi_1 == 0 || rsi_1 == 0)
            rax_6 = 2
        
        int16_t* var_68 = r12_1
        int32_t rdx_6 = rsi_1 + rax_6
        r12_1 = nullptr
        var_88 = nullptr
        int32_t var_5c_1 = r15_1
        int64_t var_80_2 = 0
        
        if (rdx_6 s> r15_1)
            sub_1405947f0(&var_68, rdx_6)
        
        sub_140a20ba0(&var_68, &data_142e1462c, 1)
        int16_t* const rdx_7 = &data_142d40450
        int16_t* rbx_4 = var_68
        var_68 = nullptr
        
        if (rsi_1 != 0)
            rdx_7 = rbx_4
        
        int32_t var_60_1
        var_60_1.q = 0
        char rax_8 = sub_140b2acc0(arg2, rdx_7, &var_58, 1)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        int16_t* rcx_13 = var_78
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (rax_8 != 0)
            int16_t* const rdx_8 = &data_142d40450
            
            if (var_50_1 != 0)
                rdx_8 = var_58
            
            sub_140941070(i, rdx_8, sx.q(*(i + 0x4c)) + arg1, 0, arg1, data_143ddb418)
        
        int16_t* rcx_15 = var_58
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    i_1 = i[4]
    sub_1406328d0(&var_48)
