// 函数: sub_1425c6430
// 地址: 0x1425c6430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int16_t* var_38
void* rax_7

if ((*(*rcx + 0x30))(rcx) == 0)
    while (true)
        int64_t* rcx_1 = *(arg1 + 0x20)
        int16_t arg_8
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
        *(arg1 + 0x64) += 1
        uint32_t rbx_1 = zx.d(arg_8)
        
        if (rbx_1.w == 0)
            goto label_1425c64c8
        
        if (rbx_1.w == 0xa)
            *(arg1 + 0x60) += 1
            *(arg1 + 0x64) = 0
        else if (rbx_1.w u> 0x20 || not(test_bit(0x100002200, zx.q(rbx_1.w))))
            uint64_t rax_8 = zx.q(rbx_1 - 0x2b)
            
            if (rax_8.w u<= 0x3a && test_bit(0x400000004007fed, rax_8))
                if (sub_1425c6910(arg1, rbx_1.w, arg3).b == 0)
                    goto label_1425c6520
                
                *arg2 = 8
                rax_7.b = 1
                return rax_7
            
            if (zx.d(rbx_1.w) - 0x22 u> 0x5b)
                break
            
            switch (rbx_1.w)
                case 0x22
                    if (sub_1425c6ce0(arg1).b == 0)
                        goto label_1425c6520
                    
                    *arg2 = 7
                    rax_7.b = 1
                    return rax_7
                case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2d, 0x2e, 0x2f, 0x30, 
                        0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3b, 0x3c, 0x3d, 
                        0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x47, 0x48, 0x49, 0x4a, 
                        0x4b, 0x4c, 0x4d, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x55, 0x56, 0x57, 0x58, 
                        0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x67, 
                        0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x75, 
                        0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                    break
                case 0x2c
                    *arg2 = 1
                    rax_7.b = 1
                    return rax_7
                case 0x3a
                    *arg2 = 6
                    rax_7.b = 1
                    return rax_7
                case 0x46, 0x4e, 0x54, 0x66, 0x6e, 0x74
                    var_38 = nullptr
                    int64_t var_30_2 = 2
                    sub_140594770(&var_38)
                    int16_t* r14 = var_38
                    *r14 = rbx_1.w
                    r14[1] = 0
                    int64_t* rcx_16 = *(arg1 + 0x20)
                    int32_t rsi = var_30_2.d
                    
                    if ((*(*rcx_16 + 0x30))(rcx_16) == 0)
                        char i
                        
                        do
                            int64_t* rcx_17 = *(arg1 + 0x20)
                            (*(*rcx_17 + 0x150))(rcx_17, &arg_8, 2)
                            int16_t rbx_4 = arg_8
                            
                            if (rbx_4 - 0x61 u> 0x19 && rbx_4 - 0x41 u> 0x19)
                                int64_t* rcx_20 = *(arg1 + 0x20)
                                int64_t rbx_5 = *rcx_20
                                int64_t rax_25 = (*(rbx_5 + 0x20))(rcx_20)
                                (*(rbx_5 + 0x178))(*(arg1 + 0x20), rax_25 - 2)
                                break
                            
                            *(arg1 + 0x64) += 1
                            
                            if (rbx_4 != 0)
                                int32_t r15_1 = rsi - 1
                                
                                if (rsi s<= 0)
                                    r15_1 = 0
                                
                                int32_t rsi_1
                                rsi_1.b = rsi s<= 0
                                rsi += rsi_1 + 1
                                var_30_2.d = rsi
                                
                                if (rsi s> var_30_2:4.d)
                                    sub_140594770(&var_38)
                                    rsi = var_30_2.d
                                    r14 = var_38
                                
                                int64_t rax_23 = sx.q(r15_1)
                                r14[rax_23] = rbx_4
                                r14[rax_23 + 1] = 0
                            
                            int64_t* rcx_19 = *(arg1 + 0x20)
                            i = (*(*rcx_19 + 0x30))(rcx_19)
                        while (i == 0)
                    
                    int16_t* rbx_6 = &data_142d40450
                    int16_t* rcx_22 = &data_142d40450
                    
                    if (rsi != 0)
                        rcx_22 = r14
                    
                    if (sub_140a54510(rcx_22, u"False") != 0)
                        int16_t* rcx_23 = &data_142d40450
                        
                        if (rsi != 0)
                            rcx_23 = r14
                        
                        if (sub_140a54510(rcx_23, u"True") != 0)
                            if (rsi != 0)
                                rbx_6 = r14
                            
                            if (sub_140a54510(rbx_6, u"Null") != 0)
                                var_38 = nullptr
                                int32_t var_30_3 = 0
                                sub_1405947f0(&var_38, 0x4a)
                                int32_t rax_29 = var_30_3 + 0x4a
                                var_30_3 = rax_29
                                
                                if (rax_29 s> 0)
                                    sub_140594770(&var_38)
                                
                                UnDecorator::getReferenceType(var_38, 
                                    Invalid Json Token. Check that your member names have quotes around "
                                "them!", 0x94)
                                sub_140e88b20(arg1, &var_38)
                                int16_t* rcx_29 = var_38
                                
                                if (rcx_29 != 0)
                                    sub_140a74f90(rcx_29)
                                
                                rbx_6.b = 0
                            else
                                rbx_6.b = 1
                                *arg2 = 0xb
                        else
                            *(arg1 + 0x68) = 1
                            rbx_6 = 1
                            *arg2 = 9
                    else
                        *(arg1 + 0x68) = 0
                        rbx_6.b = 1
                        *arg2 = 0xa
                    
                    if (r14 != 0)
                        sub_140a74f90(r14)
                    
                    return zx.q(rbx_6.b)
                case 0x5b
                    *arg2 = 4
                    int64_t rbx_3 = sx.q(*(arg1 + 0x10))
                    int32_t rax_16 = (rbx_3 + 1).d
                    *(arg1 + 0x10) = rax_16
                    
                    if (rax_16 s> *(arg1 + 0x14))
                        sub_1406105e0(arg1 + 8)
                    
                    *(*(arg1 + 8) + (rbx_3 << 2)) = 5
                    int64_t rax_17
                    rax_17.b = 1
                    return rax_17
                case 0x5d
                    *arg2 = 5
                    goto label_1425c65f3
                case 0x7b
                    *arg2 = 2
                    int64_t rbx_2 = sx.q(*(arg1 + 0x10))
                    int32_t rax_12 = (rbx_2 + 1).d
                    *(arg1 + 0x10) = rax_12
                    
                    if (rax_12 s> *(arg1 + 0x14))
                        sub_1406105e0(arg1 + 8)
                    
                    *(*(arg1 + 8) + (rbx_2 << 2)) = 6
                    int64_t rax_13
                    rax_13.b = 1
                    return rax_13
                case 0x7d
                    *arg2 = 3
                label_1425c65f3:
                    *(arg1 + 0x10) -= 1
                    sub_140679af0(arg1 + 8)
                    rax_7.b = 1
                    return rax_7
        
        int64_t* rcx_2 = *(arg1 + 0x20)
        
        if ((*(*rcx_2 + 0x30))(rcx_2) != 0)
            goto label_1425c64c8

label_1425c64c8:
var_38 = nullptr
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0x14)
int32_t rax_6 = var_30_1 + 0x14
var_30_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"Invalid Json Token.", 0x28)
sub_140e88b20(arg1, &var_38)
int16_t* rcx_7 = var_38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

label_1425c6520:
rax_7.b = 0
return rax_7
