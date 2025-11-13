// 函数: sub_140bbd500
// 地址: 0x140bbd500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
uint64_t var_48 = 0
int64_t var_40 = 0
uint64_t rdi = 0
uint64_t rsi = 0
int32_t rax = sub_140a23cf0(arg1, &data_142d404c4, 0, 0, 0xffffffff)
int64_t r12 = sx.q(rax)
int16_t* const rbx = &data_142d40450
uint64_t var_38

if (r12.d != 0xffffffff)
    int64_t var_30
    
    if (rax s>= 0)
        int32_t rdx = arg1[1].d
        int32_t rbx_1 = rdx - 1
        
        if (rdx == 0)
            rbx_1 = 0
        
        int32_t rcx = rbx_1
        
        if (rbx_1 s> 0)
            rcx = 0
        
        int64_t r9_1 = sx.q(rcx)
        
        if (r12 s< r9_1)
            rbx_1 = rcx
        else if (r12 s< sx.q(rbx_1))
            rbx_1 = r12.d
        
        int16_t* const rax_2
        
        if (rdx == 0)
            rax_2 = &data_142d40450
        else
            rax_2 = *arg1
        
        int16_t* r12_1 = &rax_2[r9_1]
        var_38 = 0
        int32_t rbx_2 = rbx_1 - rcx
        var_30 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_2 s> 0)
            if (rbx_2 + 1 s> 0)
                sub_1405947f0(&var_38, rbx_2 + 1)
                r15 = var_30:4.d
                rdi = zx.q(var_30.d)
                rsi = var_38
            
            rdi = zx.q(rdi.d + 1 + rbx_2)
            var_30.d = rdi.d
            
            if (rdi.d s> r15)
                sub_140594770(&var_38)
                r15 = var_30:4.d
                rdi = zx.q(var_30.d)
                rsi = var_38
            
            UnDecorator::getReferenceType(rsi, r12_1, rbx_2 * 2)
            *(rsi + (sx.q(rdi.d) << 1) - 2) = 0
        
        r12 = zx.q(r12.d)
    
    uint64_t rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int32_t r8_3 = arg1[1].d
    int32_t rax_4 = (r12 + 1).d
    var_40:4.d = r15
    var_48 = rsi
    var_40.d = rdi.d
    int32_t rbx_3 = r8_3 - 1
    
    if (r8_3 == 0)
        rbx_3 = 0
    
    int32_t rcx_5
    
    if (rax_4 s>= 0)
        rcx_5 = rbx_3
        
        if (rax_4 s< rbx_3)
            rcx_5 = rax_4
    else
        rcx_5 = 0
    
    int64_t r9_2 = sx.q(rcx_5)
    
    if (sx.q(rax_4) + 0x7fffffff s< r9_2)
        rbx_3 = rcx_5
    else if (sx.q(rax_4) + 0x7fffffff s< sx.q(rbx_3))
        rbx_3 = rax_4 + 0x7fffffff
    
    int16_t* const rax_6
    
    if (r8_3 == 0)
        rax_6 = &data_142d40450
    else
        rax_6 = *arg1
    
    int16_t* r14_1 = &rax_6[r9_2]
    var_38 = 0
    int32_t rbx_4 = rbx_3 - rcx_5
    var_30.d = 0
    int32_t rax_7 = 0
    rdi = 0
    var_30:4.d = 0
    rsi = 0
    
    if (r14_1 != 0 && *r14_1 != 0 && rbx_4 s> 0)
        if (rbx_4 + 1 s> 0)
            sub_1405947f0(&var_38, rbx_4 + 1)
            rax_7 = var_30:4.d
            rsi = zx.q(var_30.d)
            rdi = var_38
        
        rsi = zx.q(rsi.d + 1 + rbx_4)
        var_30.d = rsi.d
        
        if (rsi.d s> rax_7)
            sub_140594770(&var_38)
            rsi = zx.q(var_30.d)
            rdi = var_38
        
        UnDecorator::getReferenceType(rdi, r14_1, rbx_4 * 2)
        *(rdi + (sx.q(rsi.d) << 1) - 2) = 0
    
    rbx = &data_142d40450
else if (&var_48 != arg1)
    int32_t rbx_5 = arg1[1].d
    int64_t r14_2 = *arg1
    int32_t r8_6 = var_40:4.d
    var_40.d = rbx_5
    
    if (rbx_5 != 0 || r8_6 != 0)
        sub_1405a4c70(&var_48, rbx_5, r8_6)
        memcpy(var_48, r14_2, rbx_5 * 2)
    
    rbx = &data_142d40450

var_38 = 0
int64_t var_30_1 = 0
char rax_9 = sub_140bb93b0(&var_48, &var_38, nullptr)
uint64_t r14_3 = var_38

if (rax_9 != 0)
    if (var_30_1.d != 0)
        rbx = r14_3
    
    sub_140a2e390(&var_38, u"%s.%s", rbx)
    
    if (arg2 == &var_38)
        uint64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    else
        uint64_t rcx_13 = *arg2
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *arg2 = var_38
        arg2[1].d = var_30_1.d
        *(arg2 + 0xc) = var_30_1:4.d
    
    rbx.b = 1
else
    rbx.b = 0

if (r14_3 != 0)
    sub_140a74f90(r14_3)

if (rdi != 0)
    sub_140a74f90(rdi)

uint64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return zx.q(rbx.b)
