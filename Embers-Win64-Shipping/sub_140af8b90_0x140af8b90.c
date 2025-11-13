// 函数: sub_140af8b90
// 地址: 0x140af8b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_58
int64_t* rcx = &var_58
int16_t* r13 = arg2
int16_t* var_68

if (arg6 != 0)
    sub_140af3690(rcx, arg2, arg7, arg10)
    sub_140ae9cf0(arg1, r13, arg7, arg3, arg5, arg4)
    int64_t* rbx_3 = arg1[0x1b]
    
    if (rbx_3 != 0)
        sub_140ae7280(rbx_3)
        j_sub_140a74f90(rbx_3)
    
    int64_t* rax_4 = j_sub_140a82f30(0x140)
    int64_t* rax_5
    
    if (rax_4 == 0)
        rax_5 = nullptr
    else
        rax_5 = sub_140ae6a10(rax_4)
    
    arg1[0x1b] = rax_5
    int16_t* var_78_1
    var_78_1.b = 1
    char rax_6 = sub_140af0ff0(arg1, &var_58, &arg1[0xc], arg9, var_78_1.b)
    sub_140b58260(&var_68, r13, 1)
    *(arg1 + 0x54) = var_68
    
    if (data_14399fa4c == 0 && arg8 != 0 && arg9 != 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"Multiprocess") == 0 && rax_6 != 0)
            var_68 = nullptr
            int32_t var_60
            var_60.q = 0
            sub_140b030b0(arg1, &var_58, 1, &var_68)
            int16_t* rcx_17 = var_68
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
else
    sub_140a2e390(rcx, u"%s/%s.ini", arg4)
    int16_t* const r12_1 = &data_142d40450
    int16_t* const r14_1 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        r14_1 = var_58
    
    int16_t* rdi_1 = nullptr
    var_68 = nullptr
    int32_t rax = 0
    int32_t var_5c_1 = 0
    int32_t rsi_1 = 0
    int32_t var_60_1 = 0
    int16_t* const rcx_4
    
    if (r14_1 != 0 && *r14_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (r14_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1.d + 1)
            rax = var_5c_1
            rsi_1 = var_60_1
            rdi_1 = var_68
        
        rsi_1 += rbx_1.d + 1
        
        if (rsi_1 s> rax)
            sub_140594770(&var_68)
            rdi_1 = var_68
        
        UnDecorator::getReferenceType(rdi_1, r14_1, (rbx_1.d + 1) * 2)
        rcx_4 = rdi_1
    
    if (r14_1 == 0 || *r14_1 == 0 || rsi_1 == 0)
        rcx_4 = &data_142d40450
    
    char rax_1 = sub_140b40760(rcx_4, nullptr)
    char rax_2
    
    if (rax_1 != 0)
        int16_t* rcx_5 = &data_142d40450
        
        if (rsi_1 != 0)
            rcx_5 = rdi_1
        
        rax_2 = sub_140aed720(rcx_5)
    
    if (rax_1 == 0 || rax_2 != 0)
        if (rsi_1 != 0)
            r12_1 = rdi_1
        
        sub_140b43590(r12_1, r12_1, arg1, 0, 0)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    sub_140b58260(&var_68, r13, 1)
    *(arg1 + 0x54) = var_68
int16_t* rcx_18 = var_58

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t result
result.b = arg1[1].d - *(arg1 + 0x34) s> 0
return result
