// 函数: sub_140b74300
// 地址: 0x140b74300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t rcx = 0
int32_t var_30 = 0
int32_t var_2c = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx = var_2c
        rdx = var_30
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg3, (rbx_1.d + 1) * 2)

sub_140b11a30(arg2, &var_38)
int16_t* rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (arg4 == 0)
    sub_140b214e0(arg2)

char rax_2 = sub_140a32ae0(arg2, &data_142e76608, 1)
sub_140b25f50(arg2)

if (rax_2 != 0)
    int32_t rcx_9 = arg2[1].d
    int32_t rdx_4 = 0
    var_38 = nullptr
    int16_t* rsi_1 = nullptr
    int32_t var_30_2 = 0
    int32_t r14_1 = 0
    int32_t var_2c_1 = 0
    int32_t rbx_3 = rcx_9 - 1
    
    if (rcx_9 == 0)
        rbx_3 = 0
    
    if (rbx_3 + 2 s> 0)
        sub_1405947f0(&var_38, rbx_3 + 2)
        rdx_4 = var_30_2
        r14_1 = var_2c_1
        rsi_1 = var_38
    
    int32_t r15_2 = rbx_3 + 2 + rdx_4
    
    if (r15_2 s> r14_1)
        sub_140594770(&var_38)
        r14_1 = var_2c_1
        rsi_1 = var_38
    
    *rsi_1 = 0x2f
    int64_t rbx_4 = sx.q(rbx_3)
    memcpy(&rsi_1[1], *arg2, rbx_4.d * 2)
    rsi_1[rbx_4 + 1] = 0
    
    if (arg2 != &var_38)
        int64_t rcx_13 = *arg2
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *arg2 = rsi_1
        arg2[1].d = r15_2
        *(arg2 + 0xc) = r14_1
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

sub_140a30380(arg2, 0x2f, 0x5c)

if (rax_2 == 0)
    int32_t rax_4 = arg2[1].d
    int32_t rbx_5 = rax_4 - 1
    
    if (rax_4 == 0)
        rbx_5 = 0
    
    if (rbx_5 s> 0x104)
        var_38 = nullptr
        int32_t var_2c_2 = 0
        int32_t rdx_7 = 0
        int32_t var_30_4 = 0
        int16_t* rsi_2 = nullptr
        int32_t r14_2 = 0
        
        if (rbx_5 + 5 s> 0)
            sub_1405947f0(&var_38, rbx_5 + 5)
            rdx_7 = var_30_4
            r14_2 = var_2c_2
            rsi_2 = var_38
        
        int32_t r15_4 = rbx_5 + 5 + rdx_7
        
        if (r15_4 s> r14_2)
            sub_140594770(&var_38)
            r14_2 = var_2c_2
            rsi_2 = var_38
        
        *rsi_2 = 0x5c003f005c005c
        int64_t rbx_6 = sx.q(rbx_5)
        memcpy(&rsi_2[4], *arg2, rbx_6.d * 2)
        rsi_2[rbx_6 + 4] = 0
        
        if (arg2 != &var_38)
            int64_t rcx_19 = *arg2
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            *arg2 = rsi_2
            arg2[1].d = r15_4
            *(arg2 + 0xc) = r14_2
        else if (rsi_2 != 0)
            sub_140a74f90(rsi_2)

return arg2
