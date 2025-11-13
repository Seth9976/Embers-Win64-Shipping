// 函数: sub_14201fda0
// 地址: 0x14201fda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int32_t result

if (*(rax_1 + 0x11a) == 3 && (arg1[0x55].b & 1) != 0)
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"MultiprocessOSS")

if (
        (*(rax_1 + 0x11a) != 3 || (arg1[0x55].b & 1) == 0 || result.b != 0)
            && sub_140a23cf0(arg2, &data_142e6c320, 1, 0, 0xffffffff) == 0xffffffff
            && sub_140a23cf0(arg2, &data_142d84ee0, 1, 0, 0xffffffff) == 0xffffffff
            && sub_140a23cf0(arg2, &(*{}[\nt")[3], 
        1, 0, 0xffffffff) == 0xffffffff)
    uint64_t rsi
    uint64_t arg_8 = rsi
    uint64_t var_58 = 0
    int64_t var_50 = 0
    int32_t rax_2 = sub_140a23cf0(arg2, &data_142e5f8f8, 1, 0, 0xffffffff)
    
    if (rax_2 != 0xffffffff)
        int32_t rcx_5 = arg2[1].d
        int16_t* r12_1
        
        if (rcx_5 == 0)
            r12_1 = &data_142d40450
        else
            r12_1 = *arg2
        
        int32_t rbx_1 = rcx_5 - 1
        
        if (rcx_5 == 0)
            rbx_1 = 0
        
        if (rax_2 s< 0)
            rbx_1 = 0
        else if (rax_2 s< rbx_1)
            rbx_1 = rax_2
        
        uint64_t var_68 = 0
        uint64_t r14_1 = 0
        int64_t var_60_1 = 0
        rsi = 0
        int32_t r15_1 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_1 s> 0)
            if (rbx_1 + 1 s> 0)
                sub_1405947f0(&var_68, rbx_1 + 1)
                r15_1 = var_60_1:4.d
                rsi = zx.q(var_60_1.d)
                r14_1 = var_68
            
            rsi = zx.q(rbx_1 + 1 + rsi.d)
            var_60_1.d = rsi.d
            
            if (rsi.d s> r15_1)
                sub_140594770(&var_68)
                r15_1 = var_60_1:4.d
                rsi = zx.q(var_60_1.d)
                r14_1 = var_68
            
            UnDecorator::getReferenceType(r14_1, r12_1, rbx_1 * 2)
            *(r14_1 + (sx.q(rsi.d) << 1) - 2) = 0
        
        uint64_t rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        var_58 = r14_1
        var_50:4.d = r15_1
        var_50.d = rsi.d
    else
        sub_140597df0(&var_58, arg2)
    
    void var_48
    sub_140a96170(&var_48)
    char rax_4 = sub_140a32ae0(&var_58, &data_142d5a024, 1)
    char rax_5
    
    if (rax_4 != 0)
        rax_5 = sub_140bacf70(&var_58, 1, &var_48)
    
    if (rax_4 == 0 || rax_5 != 0)
        rsi.b = 1
    else
        rsi.b = 0
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_4 = *var_40
                (*(r8_4 + 8))(var_40, zx.q(rdi_1), r8_4)
    
    uint64_t rcx_15 = var_58
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    return zx.q(rsi.b)

result.b = 0
return result
