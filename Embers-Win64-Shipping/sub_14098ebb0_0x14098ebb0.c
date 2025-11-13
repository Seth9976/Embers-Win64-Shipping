// 函数: sub_14098ebb0
// 地址: 0x14098ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t rbx = data_143cedbf0
j_sub_140b3db50()
int64_t* rax = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax
int64_t* rax_1
int64_t r9
rax_1, r9 = (*(rdx_1 + 0x48))(rax, rdx_1)
r9.b = 1
int32_t var_88
(*(*rax_1 + 0x50))(rax_1, &var_88, arg3, r9)
int32_t rcx_2
rcx_2.b = sub_140b5b8a0(var_88, 0) == 0
int32_t var_84

if ((var_84 != 0 | rcx_2.b) != 0)
    int64_t r14_1 = -1
    
    do
        r14_1 += 1
    while (*(&data_142e3c520 + (r14_1 << 1)) != 0)
    
    void var_60
    int32_t* i = *sub_14098ef70(&var_60)
    int64_t* rax_4 = sub_14098ef70(&var_60)
    int64_t rbx_1 = *rax_4 + sx.q(rax_4[1].d) * 0x18
    arg4.q = rbx_1
    
    for (; i != rbx_1; i = &i[6])
        int16_t* var_98
        sub_140b63b70(i, &var_98)
        
        if (sub_140a32ae0(&var_98, &data_142e3c520, 1) != 0)
            int32_t var_90
            int32_t rbx_2 = var_90 - 1
            
            if (var_90 == 0)
                rbx_2 = 0
            
            int32_t rcx_8
            
            if (r14_1.d s>= 0)
                rcx_8 = rbx_2
                
                if (r14_1.d s< rbx_2)
                    rcx_8 = r14_1.d
            else
                rcx_8 = 0
            
            int64_t r9_1 = sx.q(rcx_8)
            
            if (sx.q(r14_1.d) + 0x7fffffff s< r9_1)
                rbx_2 = rcx_8
            else if (sx.q(r14_1.d) + 0x7fffffff s< sx.q(rbx_2))
                rbx_2 = r14_1.d + 0x7fffffff
            
            int16_t* var_a8 = nullptr
            int16_t* const rax_8 = &data_142d40450
            int32_t var_a0_1 = 0
            
            if (var_90 != 0)
                rax_8 = var_98
            
            int16_t* rsi_1 = nullptr
            int32_t rbx_3 = rbx_2 - rcx_8
            int32_t rdi_1 = 0
            void* r13_1 = &rax_8[r9_1]
            int32_t rax_9 = 0
            int32_t var_9c_1 = 0
            
            if (r13_1 != 0 && *r13_1 != 0 && rbx_3 s> 0)
                if (rbx_3 + 1 s> 0)
                    sub_1405947f0(&var_a8, rbx_3 + 1)
                    rax_9 = var_9c_1
                    rdi_1 = var_a0_1
                    rsi_1 = var_a8
                
                rdi_1 = rdi_1 + 1 + rbx_3
                
                if (rdi_1 s> rax_9)
                    sub_140594770(&var_a8)
                    rsi_1 = var_a8
                
                UnDecorator::getReferenceType(rsi_1, r13_1, rbx_3 * 2)
                rsi_1[sx.q(rdi_1) - 1] = 0
            
            var_a8 = nullptr
            int16_t* const rdx_10 = &data_142d40450
            var_a0_1.q = 0
            
            if (rdi_1 != 0)
                rdx_10 = rsi_1
            
            int64_t arg_20
            sub_140b58260(&arg_20, rdx_10, 1)
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_11 = (rbx_4 + 1).d
            arg2[1].d = rax_11
            
            if (rax_11 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbx_4 << 3)) = arg_20
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            rbx_1 = arg4.q
        
        int16_t* rcx_15 = var_98
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t temp1_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_58 + 8))(var_58, 1)

sub_14098daa0(*arg2, arg2[1].d, arg4)
return arg2
