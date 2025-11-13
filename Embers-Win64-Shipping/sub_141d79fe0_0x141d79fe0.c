// 函数: sub_141d79fe0
// 地址: 0x141d79fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[9]
int16_t** result = arg2
int64_t* rax_1 = (**rcx)(rcx)
int16_t* r12 = nullptr
int64_t var_48 = 0
int32_t rbx = rax_1[1].d
int64_t rsi = *rax_1
int32_t var_40 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rsi, rbx * 2)
else
    int32_t var_3c_1 = 0

sub_140b21570(&var_48)
int64_t r8_2 = arg5

if (r8_2 == 0)
    int64_t* rcx_4 = arg1[9]
    r8_2 = (**rcx_4)(rcx_4) + 0x18

int64_t* rcx_5 = arg1[9]
int16_t* var_68
int64_t* rax_5 = (*(*rcx_5 + 0x20))(rcx_5, &var_68, r8_2, arg3)
int64_t* rcx_6 = arg1[9]
int16_t* var_58
int64_t* rax_6 = (*(*rcx_6 + 0x20))(rcx_6, &var_58, &var_48, arg3)
int32_t rcx_7 = rax_5[1].d
int32_t rbx_1 = rcx_7 - 1

if (rcx_7 == 0)
    rbx_1 = 0

int32_t rcx_8

if (rax_6[1].d == 0)
    rcx_8 = 2

if (rax_6[1].d != 0 || rbx_1 == 0xffffffff)
    rcx_8 = 1

int64_t var_88 = *rax_6
*rax_6 = 0
int32_t rax_9 = rax_6[1].d
int32_t rax_10 = *(rax_6 + 0xc)
rax_6[1] = 0
int32_t rdx_7 = rax_9 + rbx_1 + rcx_8

if (rdx_7 s> rax_10)
    sub_1405947f0(&var_88, rdx_7)

sub_140a2cf70(&var_88, *rax_5, rbx_1)
int16_t* rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int16_t* rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int32_t var_50
int32_t var_4c
int32_t rsi_3
int16_t* r14_2
int32_t r15_1

if (arg4 == 0 || *arg4 == 0)
    rsi_3 = rax_9
    int64_t rbx_3 = var_88
    var_68 = nullptr
    
    if (rsi_3 != 0)
        sub_1405a4c70(&var_68, rsi_3, 0)
        r12 = var_68
        memcpy(r12, rbx_3, rsi_3 * 2)
        int32_t var_5c
        r15_1 = var_5c
        r14_2 = r12
    else
        r15_1 = 0
        r14_2 = nullptr
else
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (arg4[rbx_2] != 0)
    
    int32_t rax_11
    
    if (rax_9 == 0)
        rax_11 = rax_9 + 1
    
    if (rax_9 != 0 || rbx_2.d == 0)
        rax_11 = 0
    
    int64_t r14_1 = var_88
    int32_t rcx_13 = rax_11 + rbx_2.d
    var_58 = nullptr
    var_50 = rax_9
    
    if (rax_9 != 0 || rcx_13 != 0)
        sub_1405a4c70(&var_58, rax_9 + rcx_13, 0)
        memcpy(var_58, r14_1, rax_9 * 2)
    else
        var_4c = 0
    
    sub_140a20ba0(&var_58, arg4, rbx_2.d)
    r12 = var_58
    rsi_3 = var_50
    r15_1 = var_4c
    r14_2 = r12

int16_t* const rbx_4 = &data_142d40450

if (rsi_3 != 0)
    rbx_4 = r14_2

int64_t* rcx_20 = arg1[9]
uint64_t r8_10 = zx.q(*((**rcx_20)(rcx_20) + 0x28))
int64_t r9_2 = *arg1

if ((*(r9_2 + 0x2c8))(arg1, rbx_4, r8_10, r9_2) == 0)
    int32_t r13 = 2
    
    while (true)
        sub_140a2e390(&var_58, u"_(%d)", zx.q(r13))
        rsi_3 = var_50
        int32_t rax_15
        
        if (rax_9 s> 1)
            int32_t rsi_4
            
            if (rsi_3 == 0)
                rsi_4 = 0
            else
                rsi_4 = rsi_3 - 1
            
            int32_t rax_16
            
            if (rax_9 == 0)
                rax_16 = rax_9 + 1
            
            if (rax_9 != 0 || rsi_4 == 0)
                rax_16 = 0
            
            int64_t r14_3 = var_88
            int32_t rcx_23 = rax_16 + rsi_4
            int16_t* var_78 = nullptr
            int32_t var_6c
            
            if (rax_9 != 0 || rcx_23 != 0)
                sub_1405a4c70(&var_78, rax_9 + rcx_23, 0)
                memcpy(var_78, r14_3, rax_9 * 2)
            else
                var_6c = 0
            
            sub_140a20ba0(&var_78, var_58, rsi_4)
            r14_2 = var_78
            rax_15 = 0
            rsi_3 = rax_9
            r15_1 = var_6c
            var_78 = nullptr
            int32_t var_70_1
            var_70_1.q = 0
        else
            r14_2 = var_58
            rax_15 = 0
            r15_1 = var_4c
            var_58 = nullptr
            var_50.q = 0
        
        if (arg4 != 0 && *arg4 != 0)
            int64_t rbx_6 = -1
            
            do
                rbx_6 += 1
            while (arg4[rbx_6] != 0)
            
            if (rsi_3 == 0 && rbx_6.d != 0)
                rax_15 = 1
            
            var_68 = r14_2
            int32_t rdx_19 = rax_15 + rbx_6.d + rsi_3
            
            if (rdx_19 s> r15_1)
                sub_1405947f0(&var_68, rdx_19)
            
            sub_140a20ba0(&var_68, arg4, rbx_6.d)
            r14_2 = var_68
            var_68 = nullptr
            int32_t var_60_2
            var_60_2.q = 0
        
        if (r12 != 0)
            sub_140a74f90(r12)
        
        int16_t* rcx_30 = var_58
        r12 = r14_2
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int16_t* rbx_7 = &data_142d40450
        
        if (rsi_3 != 0)
            rbx_7 = r14_2
        
        int64_t* rcx_32 = arg1[9]
        uint64_t r8_16 = zx.q(*((**rcx_32)(rcx_32) + 0x28))
        int64_t r9_3 = *arg1
        
        if ((*(r9_3 + 0x2c8))(arg1, rbx_7, r8_16, r9_3) != 0)
            break
        
        r13 += 1
    
    result = arg2

int64_t rcx_34 = var_88
*result = r14_2
*(result + 0xc) = r15_1
result[1].d = rsi_3

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rcx_35 = var_48

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

return result
