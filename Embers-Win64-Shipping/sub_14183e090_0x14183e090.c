// 函数: sub_14183e090
// 地址: 0x14183e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
sub_140b18720(&var_38, arg1, 1)
int32_t r14 = 0
int16_t* var_58 = nullptr
int64_t var_50 = 0
uint32_t rbx
uint32_t var_30

if (sub_140a23cf0(&var_38, &data_142d99650, 1, 0, 0xffffffff) == 0xffffffff)
    int16_t* rdi_3 = var_38
    int32_t r8_4 = var_50:4.d
    var_50.d = var_30
    
    if (var_30 != 0 || r8_4 != 0)
        sub_1405a4c70(&var_58, var_30, r8_4)
        memcpy(var_58, rdi_3, var_30 * 2)
else
    int16_t* var_48 = nullptr
    uint32_t var_40_1 = 0
    sub_1405947f0(&var_48, 2)
    rbx = var_40_1 + 2
    
    if (rbx s> 0)
        sub_140594770(&var_48)
    
    int16_t* r12_1 = var_48
    UnDecorator::getReferenceType(r12_1, &data_142d99650, 4)
    int16_t* const rdi = &data_142d40450
    int16_t* rdx_2 = &data_142d40450
    
    if (rbx != 0)
        rdx_2 = r12_1
    
    int32_t rax_1 = sub_140a23cf0(&var_38, rdx_2, 1, 0, 0xffffffff)
    
    if (rax_1 s>= 0)
        int32_t rbx_1
        
        if (rbx == 0)
            rbx_1 = 0
        else
            rbx_1 = rbx - 1
        
        int32_t rax_2 = rax_1 + rbx_1
        int32_t rbx_2 = var_30 - 1
        
        if (var_30 == 0)
            rbx_2 = 0
        
        int32_t rcx_6
        
        if (rax_2 s>= 0)
            rcx_6 = rbx_2
            
            if (rax_2 s< rbx_2)
                rcx_6 = rax_2
        else
            rcx_6 = 0
        
        int64_t r9_1 = sx.q(rcx_6)
        
        if (sx.q(rax_2) + 0x7fffffff s< r9_1)
            rbx_2 = rcx_6
        else if (sx.q(rax_2) + 0x7fffffff s< sx.q(rbx_2))
            rbx_2 = rax_2 + 0x7fffffff
        
        var_48 = nullptr
        int16_t* rsi_1 = nullptr
        int64_t var_40_2 = 0
        
        if (var_30 != 0)
            rdi = var_38
        
        rbx = rbx_2 - rcx_6
        void* r15_1 = &rdi[r9_1]
        int32_t rdi_1 = 0
        
        if (r15_1 != 0 && *r15_1 != 0 && rbx s> 0)
            if (rbx + 1 s> 0)
                sub_1405947f0(&var_48, rbx + 1)
                r14 = var_40_2:4.d
                rdi_1 = var_40_2.d
                rsi_1 = var_48
            
            rdi_1 += rbx + 1
            var_40_2.d = rdi_1
            
            if (rdi_1 s> r14)
                sub_140594770(&var_48)
                r14 = var_40_2:4.d
                rdi_1 = var_40_2.d
                rsi_1 = var_48
            
            UnDecorator::getReferenceType(rsi_1, r15_1, rbx * 2)
            rsi_1[sx.q(rdi_1) - 1] = 0
        
        int16_t* rcx_10 = var_58
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        var_58 = rsi_1
        var_50.d = rdi_1
        var_50:4.d = r14
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
int32_t rax_5 = var_50.d

if (rax_5 == 0 || rax_5 != 0x21)
    rbx.b = 0
else
    rbx = zx.d(sub_140b21e10(&var_58, arg2))

int16_t* rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_38

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return zx.q(rbx.b)
