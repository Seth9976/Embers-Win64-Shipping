// 函数: sub_141d02340
// 地址: 0x141d02340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_10 = rbx
int32_t r10 = 0
int32_t rdx = 0
int16_t* var_58 = nullptr
int64_t var_50 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_58, rbx.d)
        r10 = var_50:4.d
        rdx = var_50.d
    
    int32_t rax_1 = rdx + rbx.d
    var_50.d = rax_1
    
    if (rax_1 s> r10)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, rbx.d * 2)

sub_140b20c40(&var_58)
int32_t r13 = 0
int32_t rsi = -1

if (arg1[1].d s<= 0)
label_141d024d1:
    rbx.b = 0
else
    int32_t* r14_1 = nullptr
    
    while (true)
        int32_t r15_1 = *(r14_1 + *arg1)
        
        if (rsi != 0xffffffff && rsi s> r15_1)
            goto label_141d024d1
        
        int16_t* const rdi_1 = &data_142d40450
        int64_t var_48 = 0
        
        if (var_50.d != 0)
            rdi_1 = var_58
        
        int32_t rdx_3 = 0
        int32_t rcx_4 = 0
        int64_t var_40_1 = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_2.d + 1)
                rcx_4 = var_40_1:4.d
                rdx_3 = var_40_1.d
            
            int32_t rax_3 = rbx_2.d + 1 + rdx_3
            var_40_1.d = rax_3
            
            if (rax_3 s> rcx_4)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, rdi_1, (rbx_2.d + 1) * 2)
        
        char rax_4 = sub_141d01810(*(r14_1 + *arg1 + 8), &var_48, arg4)
        int64_t rcx_10 = var_48
        rbx = zx.q(rax_4)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        if (rbx.b == 1)
            if (arg3 != 0)
                *arg3 = *(*arg1 + sx.q(r13) * 0x10 + 8)
            
            rbx.b = 1
            break
        
        if (rbx.b == 2)
            rsi = r15_1
        
        r13 += 1
        r14_1 = &r14_1[4]
        
        if (r13 s>= arg1[1].d)
            goto label_141d024d1

int16_t* rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rbx.b)
