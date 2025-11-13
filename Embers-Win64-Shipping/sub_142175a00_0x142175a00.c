// 函数: sub_142175a00
// 地址: 0x142175a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
int32_t arg_8 = 0
int32_t r13 = 0

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r11_1 = sx.q(*arg3)
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & r11_1) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_1 = *arg1
        
        do
            int32_t* rax_1 = sx.q(i) * 0x38
            
            if (*(rax_1 + rdx_1) == r11_1.d)
                break
            
            i = *(rax_1 + rdx_1 + 0x30)
        while (i != 0xffffffff)

arg_8.q = *(arg2 + 0x18)
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
int16_t* const rsi = &data_142d40450
int16_t* rdx_3

if (arg4[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *arg4

int16_t* const rcx_5 = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rcx_5 = var_38

sub_140a54510(rcx_5, rdx_3)
int16_t* rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

void* rax_3 = *(arg2 + 0x20)
void* arg_28
void* rdi_1 = arg_28

if (rax_3 != rdi_1)
    int16_t* rcx_8
    int16_t* const r15_1
    
    if (rax_3 == 0)
        rcx_8 = var_38
        r15_1 = u"NULL"
    else
        arg_8.q = *(rax_3 + 0x18)
        r13 = 1
        sub_140b63b70(&arg_8, &var_38)
        r15_1 = &data_142d40450
        rcx_8 = var_38
        
        if (var_30 != 0)
            r15_1 = rcx_8
    
    int64_t var_48 = 0
    int32_t rdx_5 = 0
    int32_t var_40_1 = 0
    int64_t r12_1 = 0
    int32_t var_3c_1 = 0
    int32_t r8_1 = 0
    int64_t rbx_1 = -1
    
    if (r15_1 != 0 && *r15_1 != 0)
        int64_t rdi_2 = -1
        
        do
            rdi_2 += 1
        while (r15_1[rdi_2] != 0)
        
        if (rdi_2.d + 1 s> 0)
            sub_1405947f0(&var_48, rdi_2.d + 1)
            r8_1 = var_3c_1
            rdx_5 = var_40_1
            r12_1 = var_48
        
        int32_t rax_5 = rdi_2.d + 1 + rdx_5
        int32_t var_40_2 = rax_5
        
        if (rax_5 s> r8_1)
            sub_140594770(&var_48)
            r12_1 = var_48
        
        UnDecorator::getReferenceType(r12_1, r15_1, (rdi_2.d + 1) * 2)
        rcx_8 = var_38
        rdi_1 = arg_28
    
    if ((r13.b & 1) != 0)
        r13 &= 0xfffffffe
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    int16_t* rcx_13
    
    if (rdi_1 == 0)
        rcx_13 = var_38
        rsi = u"NULL"
    else
        arg_28 = *(rdi_1 + 0x18)
        r13 |= 2
        sub_140b63b70(&arg_28, &var_38)
        rcx_13 = var_38
        
        if (var_30 != 0)
            rsi = rcx_13
    
    var_48 = 0
    int32_t rdx_9 = 0
    int32_t var_40_3 = 0
    int32_t r8_4 = 0
    int32_t var_3c_2 = 0
    
    if (rsi != 0 && *rsi != 0)
        do
            rbx_1 += 1
        while (rsi[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1.d + 1)
            r8_4 = var_3c_2
            rdx_9 = var_40_3
            r14 = var_48
        
        int32_t rax_7 = rbx_1.d + 1 + rdx_9
        int32_t var_40_4 = rax_7
        
        if (rax_7 s> r8_4)
            sub_140594770(&var_48)
            r14 = var_48
        
        UnDecorator::getReferenceType(r14, rsi, (rbx_1.d + 1) * 2)
        rcx_13 = var_38
    
    if ((r13.b & 2) != 0 && rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

return sub_140cddea0() __tailcall
