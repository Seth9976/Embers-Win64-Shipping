// 函数: sub_141ba8370
// 地址: 0x141ba8370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t result_1
sub_140d3a3a0(&result_1, arg2)
int32_t* r15 = arg1[0x39]
int32_t* rbx = r15
void* rsi = &r15[sx.q(arg1[0x3a].d) * 2]
int64_t result

if (r15 != rsi)
    while (true)
        result = sub_14077a170(rbx, &result_1)
        
        if (result.b != 0)
            break
        
        rbx = &rbx[2]
        
        if (rbx == rsi)
            goto label_141ba83e8

if (r15 == rsi || ((rbx - r15) s>> 3).d == 0xffffffff)
label_141ba83e8:
    int64_t rbx_3 = sx.q(arg1[0x3a].d)
    int32_t rax_3 = (rbx_3 + 1).d
    arg1[0x3a].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x1d4))
        sub_1405a4d70(&arg1[0x39])
    
    result = result_1
    *(arg1[0x39] + (rbx_3 << 3)) = result

if (arg1[0x38] == 0)
    result = (*(*arg1 + 0x150))(arg1)
    
    if (result != 0)
        void* rcx_5 = *(result + 0x188)
        void* rdi_1
        
        if (rcx_5 == 0)
            rdi_1 = *(result + 0x300)
        else
            rdi_1 = *(rcx_5 + 0xc0)
        
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_5 != 0)
            *rax_5 = &data_142d57800
            sub_140d3a3a0(&rax_5[1], arg1)
            rax_5[2] = sub_141bb29f0
            rax_5[4] = sub_140a387b0()
            *rax_5 = &data_142d57858
        
        int64_t var_88 = 0
        int32_t var_80_1 = 0
        
        if (rax_5 != 0)
            (*rax_5)[8](rax_5, &var_88)
        
        void var_78
        sub_140d3a3a0(&var_78, nullptr)
        int64_t var_70_1 = 0
        int64_t var_68_1 = 0
        void* var_58_1 = nullptr
        sub_1423e6520(rdi_1, &result_1, &var_88)
        
        if (var_68_1 != 0)
            void var_48
            void* rcx_10 = &var_48
            
            if (var_58_1 != 0)
                rcx_10 = var_58_1
            
            (*(*rcx_10 + 0x10))(rcx_10)
        
        result = sub_140745b20(&var_88)
        
        if (rax_5 != 0)
            (*rax_5)[7](rax_5, 0)
            result = sub_140a84c80(rax_5, 0, 0)
            
            if (result != 0)
                result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
