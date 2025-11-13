// 函数: sub_14066fdb0
// 地址: 0x14066fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int16_t* var_58
int64_t var_50
int16_t* var_48
int64_t var_40
uint64_t result
int32_t rcx_35
int32_t rbx_2
int32_t rsi_1
int32_t rsi_5
int16_t* r14_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_14066fe47:
    var_48 = nullptr
    var_40 = 0
    sub_1405947f0(&var_48, 0x14)
    rbx_2 = var_40.d + 0x14
    var_40.d = rbx_2
    
    if (rbx_2 s> 0)
        sub_140594770(&var_48)
        rbx_2 = var_40.d
    
    r14_1 = var_48
    UnDecorator::getReferenceType(r14_1, u"Invalid Json Token.", 0x28)
    *(arg1 + 0x64)
    sub_140a2e390(&var_48, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
    rsi_1 = var_40.d
    int16_t* rbx_8
    int32_t r15_1
    
    if (rbx_2 s> 1)
        if (rsi_1 == 0)
            rsi_5 = 0
        else
            rsi_5 = rsi_1 - 1
        
        int32_t rax_23
        
        if (rbx_2 == 0)
            rax_23 = rbx_2 + 1
        
        if (rbx_2 != 0 || rsi_5 == 0)
            rax_23 = 0
        
        rcx_35 = rsi_5 + rax_23
    label_140670286:
        var_58 = nullptr
        var_50.d = rbx_2
        
        if (rbx_2 != 0 || rcx_35 != 0)
            sub_1405a4c70(&var_58, rbx_2 + rcx_35, 0)
            memcpy(var_58, r14_1, rbx_2 * 2)
        else
            var_50:4.d = 0
        
        sub_140a20ba0(&var_58, var_48, rsi_5)
        rbx_8 = var_58
        rsi_1 = var_50.d
        r15_1 = var_50:4.d
        var_58 = nullptr
        int64_t var_50_3 = 0
    else
    label_14066feaf:
        rbx_8 = var_48
        r15_1 = var_40:4.d
        var_48 = nullptr
        int64_t var_40_1 = 0
    
    void var_38
    
    if (arg1 + 0x38 != &var_38)
        int64_t rcx_39 = *(arg1 + 0x38)
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        *(arg1 + 0x38) = rbx_8
        *(arg1 + 0x44) = r15_1
        *(arg1 + 0x40) = rsi_1
    else if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    int16_t* rcx_41 = var_48
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    result.b = 0
    return result

int16_t arg_8
uint64_t rbx_1

while (true)
    int64_t* rcx_1 = *(arg1 + 0x20)
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
    *(arg1 + 0x64) += 1
    rbx_1 = zx.q(arg_8)
    
    if (rbx_1.w == 0)
        goto label_14066fe47
    
    if (rbx_1.d != 0xa)
        if (rbx_1.d u> 0x20)
            break
        
        if (not(test_bit(0x100002200, rbx_1)))
            break
    else
        *(arg1 + 0x60) += 1
        *(arg1 + 0x64) = 0
    
    int64_t* rcx_2 = *(arg1 + 0x20)
    
    if ((*(*rcx_2 + 0x30))(rcx_2) != 0)
        goto label_14066fe47

uint64_t rax_5 = zx.q((rbx_1 - 0x2b).d)

if (rax_5.w u<= 0x3a && test_bit(0x400000004007fed, rax_5))
    if (sub_140670e80(arg1, rbx_1.w, arg3).b == 0)
        result.b = 0
        return result
    
    *arg2 = 8
    result.b = 1
    return result

switch ((rbx_1 - 0x22).d)
    case 0
        if (sub_140671370(arg1).b == 0)
            result.b = 0
            return result
        
        *arg2 = 7
        result.b = 1
        return result
    case 0xa
        *arg2 = 1
        return 1
    case 0x18
        *arg2 = 6
        result.b = 1
        return result
    case 0x24, 0x2c, 0x32, 0x44, 0x4c, 0x52
        var_58 = nullptr
        int64_t var_50_1 = 2
        sub_140594770(&var_58)
        int16_t* r14_2 = var_58
        *r14_2 = rbx_1.w
        r14_2[1] = 0
        int64_t* rcx_16 = *(arg1 + 0x20)
        int32_t rsi_2 = var_50_1.d
        
        if ((*(*rcx_16 + 0x30))(rcx_16) == 0)
            char i
            
            do
                int64_t* rcx_17 = *(arg1 + 0x20)
                (*(*rcx_17 + 0x150))(rcx_17, &arg_8, 2)
                int16_t rbx_5 = arg_8
                
                if (rbx_5 - 0x61 u> 0x19 && rbx_5 - 0x41 u> 0x19)
                    int64_t* rcx_20 = *(arg1 + 0x20)
                    int64_t rbx_6 = *rcx_20
                    int64_t rax_17 = (*(rbx_6 + 0x20))(rcx_20)
                    (*(rbx_6 + 0x178))(*(arg1 + 0x20), rax_17 - 2)
                    break
                
                *(arg1 + 0x64) += 1
                
                if (rbx_5 != 0)
                    int32_t r15_2 = rsi_2 - 1
                    
                    if (rsi_2 s<= 0)
                        r15_2 = 0
                    
                    int32_t rsi_3
                    rsi_3.b = rsi_2 s<= 0
                    rsi_2 += rsi_3 + 1
                    var_50_1.d = rsi_2
                    
                    if (rsi_2 s> var_50_1:4.d)
                        sub_140594770(&var_58)
                        rsi_2 = var_50_1.d
                        r14_2 = var_58
                    
                    int64_t rax_15 = sx.q(r15_2)
                    r14_2[rax_15] = rbx_5
                    r14_2[rax_15 + 1] = 0
                
                int64_t* rcx_19 = *(arg1 + 0x20)
                i = (*(*rcx_19 + 0x30))(rcx_19)
            while (i == 0)
        
        int16_t* rbx_7 = &data_142d40450
        int16_t* rcx_22 = &data_142d40450
        
        if (rsi_2 != 0)
            rcx_22 = r14_2
        
        if (sub_140a54510(rcx_22, u"False") != 0)
            int16_t* rcx_23 = &data_142d40450
            
            if (rsi_2 != 0)
                rcx_23 = r14_2
            
            if (sub_140a54510(rcx_23, u"True") != 0)
                if (rsi_2 != 0)
                    rbx_7 = r14_2
                
                if (sub_140a54510(rbx_7, u"Null") != 0)
                    var_58 = nullptr
                    int32_t var_50_2 = 0
                    sub_1405947f0(&var_58, 0x4a)
                    int32_t rax_21 = var_50_2 + 0x4a
                    var_50_2 = rax_21
                    
                    if (rax_21 s> 0)
                        sub_140594770(&var_58)
                    
                    UnDecorator::getReferenceType(var_58, 
                        Invalid Json Token. Check that your member names have quotes around them!", 
                        0x94)
                    sub_14067a5a0(arg1, &var_58)
                    int16_t* rcx_29 = var_58
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    rbx_7.b = 0
                else
                    rbx_7.b = 1
                    *arg2 = 0xb
            else
                *(arg1 + 0x68) = 1
                rbx_7 = 1
                *arg2 = 9
        else
            *(arg1 + 0x68) = 0
            rbx_7.b = 1
            *arg2 = 0xa
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
        
        return zx.q(rbx_7.b)
    case 0x39
        *arg2 = 4
        int64_t rbx_4 = sx.q(*(arg1 + 0x10))
        int32_t rax_9 = (rbx_4 + 1).d
        *(arg1 + 0x10) = rax_9
        
        if (rax_9 s> *(arg1 + 0x14))
            sub_1406105e0(arg1 + 8)
        
        *(*(arg1 + 8) + (rbx_4 << 2)) = 5
        result.b = 1
        return result
    case 0x3b
        *arg2 = 5
        *(arg1 + 0x10) -= 1
        sub_140679af0(arg1 + 8)
        result.b = 1
        return result
    case 0x59
        *arg2 = 2
        int64_t rbx_3 = sx.q(*(arg1 + 0x10))
        int32_t rax_8 = (rbx_3 + 1).d
        *(arg1 + 0x10) = rax_8
        
        if (rax_8 s> *(arg1 + 0x14))
            sub_1406105e0(arg1 + 8)
        
        *(*(arg1 + 8) + (rbx_3 << 2)) = 6
        result.b = 1
        return result
    case 0x5b
        *arg2 = 3
        *(arg1 + 0x10) -= 1
        sub_140679af0(arg1 + 8)
        result.b = 1
        return result
    default
        var_58 = nullptr
        var_50 = 0
        sub_1405947f0(&var_58, 0x14)
        rbx_2 = var_50.d + 0x14
        var_50.d = rbx_2
        
        if (rbx_2 s> 0)
            sub_140594770(&var_58)
            rbx_2 = var_50.d
        
        r14_1 = var_58
        UnDecorator::getReferenceType(r14_1, u"Invalid Json Token.", 0x28)
        *(arg1 + 0x64)
        sub_140a2e390(&var_48, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
        rsi_1 = var_40.d
        
        if (rbx_2 s<= 1)
            goto label_14066feaf
        
        if (rsi_1 == 0)
            rsi_5 = 0
        else
            rsi_5 = rsi_1 - 1
        
        int32_t rax_22
        
        if (rbx_2 == 0)
            rax_22 = rbx_2 + 1
        
        if (rbx_2 != 0 || rsi_5 == 0)
            rax_22 = 0
        
        rcx_35 = rax_22 + rsi_5
        goto label_140670286
