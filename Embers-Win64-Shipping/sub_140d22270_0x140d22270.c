// 函数: sub_140d22270
// 地址: 0x140d22270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1
int32_t r14 = 0
*arg2 = 0
int32_t rcx = 0
int32_t var_2c = 0
uint64_t r15 = 0
arg2[1] = 0
int32_t rbx = 0
uint64_t var_38 = 0

if (i == 0)
label_140d223ef:
    var_38 = 0
    int32_t var_30_2 = 0
    sub_1405947f0(&var_38, 0x4d)
    int32_t rbx_2 = var_30_2 + 0x4d
    
    if (rbx_2 s> var_2c)
        sub_140594770(&var_38)
    
    uint64_t rdi_1 = var_38
    UnDecorator::getReferenceType(rdi_1, 
        Script call stack: [Empty] (FFrame::GetStackTrace() called from native code)", 0x9a)
    
    if (rbx_2 != 0)
        r14 = rbx_2 - 1
    
    sub_140a20ba0(arg2, rdi_1, r14)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
else
    do
        int64_t rsi_1 = sx.q(rbx)
        rbx = (rsi_1 + 1).d
        
        if (rbx s> rcx)
            sub_1405a4d70(&var_38)
            rcx = var_2c
            r15 = var_38
        
        *(r15 + (rsi_1 << 3)) = i
        i = *(i + 0x70)
    while (i != 0)
    
    if (rbx s<= 0)
        goto label_140d223ef
    
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, (i + 0x14).d)
    int32_t rdi = var_30_1 + 0x14
    var_30_1 = rdi
    
    if (rdi s> var_2c)
        sub_140594770(&var_38)
        rdi = var_30_1
    
    uint64_t rsi_2 = var_38
    UnDecorator::getReferenceType(rsi_2, u"Script call stack:\n", 0x28)
    int32_t r8 = rdi - 1
    
    if (rdi == 0)
        r8 = 0
    
    sub_140a20ba0(arg2, rsi_2, r8)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    int64_t rbx_1 = sx.q(rbx - 1)
    
    if (rbx - 1 s>= 0)
        int64_t temp0_1
        
        do
            int64_t var_28
            int64_t* rax_2 = sub_140d21830(*(*(r15 + (rbx_1 << 3)) + 0x10), &var_28, 0, 0)
            int16_t* const r8_1
            
            if (rax_2[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *rax_2
            
            sub_140a2e390(&var_38, u"\t%s\n", r8_1)
            int32_t r8_3
            
            if (var_30_1 == 0)
                r8_3 = 0
            else
                r8_3 = var_30_1 - 1
            
            sub_140a20ba0(arg2, var_38, r8_3)
            uint64_t rcx_11 = var_38
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int64_t rcx_12 = var_28
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            temp0_1 = rbx_1
            rbx_1 -= 1
        while (temp0_1 - 1 s>= 0)

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
