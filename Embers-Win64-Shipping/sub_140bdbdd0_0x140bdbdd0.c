// 函数: sub_140bdbdd0
// 地址: 0x140bdbdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t rsi = 0
int32_t var_70 = 0

if (arg8 == 0 || (*(arg1 + 0xb0) & 0x10000) == 0)
    goto label_140bdbe47

int64_t* rcx = *(arg1 + 0xb8)
int64_t var_b8_1 = arg7
int32_t var_c0_1 = arg6
int64_t var_c8_1 = arg5

if ((*(*rcx + 0xc8))(rcx, arg2) != 0)
    return 

arg3 = arg_18
label_140bdbe47:

if (test_bit(arg6, 0x1c))
    return 

int64_t rax_2 = arg3
int32_t r13_1 = 0
void* var_98 = arg1
int32_t var_88_1 = 0xffffffff

if ((*(arg1 + 0xb0) & 0x10) == 0)
    rax_2 = arg4

int16_t var_84_1 = 0x101
var_70.q = rax_2
int64_t* i_1 = *(arg1 + 0x50)
char var_82_1 = 0
sub_1406328d0(&var_98)
int64_t* i = i_1
int16_t* const rdx_15
int32_t r8_11

if (i == 0)
    r8_11 = 2
    rdx_15 = &data_142e89958
else
    int32_t rbx_1 = arg6
    
    do
        if (sub_140cea010(i, rbx_1) != 0)
            int32_t j = 0
            
            if (i[7].d s> 0)
                int32_t r10_2 = rbx_1 | 2
                arg8.d = r10_2
                
                do
                    int64_t rdx_4 = var_70.q
                    int64_t var_80 = 0
                    int32_t var_78_1 = 0
                    int32_t rax_5 = j * *(i + 0x3c)
                    int64_t rcx_3 = sx.q(*(i + 0x4c))
                    int64_t r9_2
                    
                    if (rdx_4 == 0)
                        r9_2 = 0
                    else
                        r9_2 = sx.q(rax_5) + rdx_4 + rcx_3
                    
                    if (sub_140cdb3d0(i, &var_80, sx.q(rax_5) + rcx_3 + arg_18, r9_2, arg5, r10_2, 
                            arg7) != 0)
                        r13_1 += 1
                        void* const rdx_6 = &data_142dc30a4
                        
                        if (r13_1 != 1)
                            rdx_6 = &data_142d7fa60
                        
                        sub_140a20ba0(arg2, rdx_6, 1)
                        int64_t var_a8
                        int64_t var_48
                        void* var_38
                        int64_t* rax_11
                        
                        if (rbx_1.b s>= 0)
                            rsi |= 4
                            sub_140b63b70(&i[5], &var_48)
                            rax_11 = &var_48
                        else
                            rsi |= 3
                            void** rax_9 = sub_140cbb210(i, &var_38)
                            void* rdi_1
                            
                            if (rax_9[1].d == 0)
                                rdi_1 = &data_142d40450
                            else
                                rdi_1 = *rax_9
                            
                            int32_t rdx_8 = 0
                            var_a8 = 0
                            int32_t rcx_7 = 0
                            int64_t var_a0_1 = 0
                            
                            if (rdi_1 != 0 && *rdi_1 != 0)
                                int64_t rbx_2 = -1
                                
                                do
                                    rbx_2 += 1
                                while (*(rdi_1 + (rbx_2 << 1)) != 0)
                                
                                if (rbx_2.d + 1 s> 0)
                                    sub_1405947f0(&var_a8, rbx_2.d + 1)
                                    rcx_7 = var_a0_1:4.d
                                    rdx_8 = var_a0_1.d
                                
                                int32_t rax_10 = rbx_2.d + 1 + rdx_8
                                var_a0_1.d = rax_10
                                
                                if (rax_10 s> rcx_7)
                                    sub_140594770(&var_a8)
                                
                                UnDecorator::getReferenceType(var_a8, rdi_1, (rbx_2.d + 1) * 2)
                            
                            rax_11 = &var_a8
                        
                        int16_t* rdi_2 = *rax_11
                        *rax_11 = 0
                        int32_t rbx_4 = rax_11[1].d
                        rax_11[1] = 0
                        
                        if ((rsi.b & 4) != 0)
                            int64_t rcx_12 = var_48
                            rsi &= 0xfffffffb
                            
                            if (rcx_12 != 0)
                                sub_140a74f90(rcx_12)
                        
                        if ((rsi.b & 2) != 0)
                            int64_t rcx_13 = var_a8
                            rsi &= 0xfffffffd
                            
                            if (rcx_13 != 0)
                                sub_140a74f90(rcx_13)
                        
                        if ((rsi.b & 1) != 0)
                            void* rcx_14 = var_38
                            rsi &= 0xfffffffe
                            
                            if (rcx_14 != 0)
                                sub_140a74f90(rcx_14)
                        
                        int16_t* const r8_5 = &data_142d40450
                        int64_t rcx_17
                        
                        if (i[7].d != 1)
                            if (rbx_4 != 0)
                                r8_5 = rdi_2
                            
                            int64_t var_58
                            sub_140a2e390(&var_58, u"%s[%i]=", r8_5)
                            int32_t var_50
                            int32_t r8_9
                            
                            if (var_50 == 0)
                                r8_9 = 0
                            else
                                r8_9 = var_50 - 1
                            
                            sub_140a20ba0(arg2, var_58, r8_9)
                            rcx_17 = var_58
                        else
                            if (rbx_4 != 0)
                                r8_5 = rdi_2
                            
                            int64_t var_68
                            sub_140a2e390(&var_68, u"%s=", r8_5)
                            int32_t var_60
                            int32_t r8_7
                            
                            if (var_60 == 0)
                                r8_7 = 0
                            else
                                r8_7 = var_60 - 1
                            
                            sub_140a20ba0(arg2, var_68, r8_7)
                            rcx_17 = var_68
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                        
                        int32_t r8_10
                        
                        if (var_78_1 == 0)
                            r8_10 = 0
                        else
                            r8_10 = var_78_1 - 1
                        
                        sub_140a20ba0(arg2, var_80, r8_10)
                        
                        if (rdi_2 != 0)
                            sub_140a74f90(rdi_2)
                        
                        rbx_1 = arg6
                    
                    int64_t rcx_22 = var_80
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    r10_2 = arg8.d
                    j += 1
                while (j s< i[7].d)
        
        int64_t* i_2 = i[4]
        sub_1406328d0(&var_98)
        i = i_2
    while (i != 0)
    
    if (r13_1 s<= 0)
        r8_11 = 2
        rdx_15 = &data_142e89958
    else
        r8_11 = (i + 1).d
        rdx_15 = &data_142da76f4

sub_140a20ba0(arg2, rdx_15, r8_11)
