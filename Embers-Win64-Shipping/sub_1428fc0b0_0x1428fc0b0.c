// 函数: sub_1428fc0b0
// 地址: 0x1428fc0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* r15 = arg5
void* rbx = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
int32_t rdx_1 = temp0 & 7
int32_t* var_70 = r15
int32_t rax_4 = temp1 + rdx_1
char* var_60 = arg6
int32_t i = arg4
int32_t r11_1 = rax_4 s>> 3
int32_t rax_6 = (rax_4 & 7) - rdx_1
void* rdi = arg1
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3 + 7)
int32_t result = (temp3 + (temp2 & 7)) s>> 3
int64_t result_1 = sx.q(result)

if (arg3 - 1 u<= 0x3f)
    void* r8 = &arg6[1]
    int64_t result_2 = result_1
    uint32_t r14_4 =
        zx.d(*arg6) | zx.d(arg6[1]) << 8 | zx.d(*(r8 + 1)) << 0x10 | zx.d(*(r8 + 2)) << 0x18
    uint32_t rsi_3 =
        zx.d(*(r8 + 3)) | zx.d(*(r8 + 4)) << 8 | (zx.d(*(r8 + 6)) << 8 | zx.d(*(r8 + 5))) << 0x10
    
    if (i u>= result_1.d)
        uint32_t var_90
        uint32_t var_58
        uint32_t var_54
        uint32_t var_50
        
        if (arg7 == 0)
            int32_t rax_50 = (result_1 - 1).d
            
            do
                var_90 = r14_4
                uint32_t var_8c_2 = rsi_3
                sub_1428f9590(&var_90, r15, 1)
                uint64_t r8_5 = sx.q(rax_50)
                void* rdi_2 = rdi + result_2
                uint32_t r12_1 = 0
                uint32_t r15_1 = 0
                
                if (r8_5.d u<= 7)
                    switch (r8_5)
                        case 1
                            goto label_1428fc4b0
                        case 2
                            goto label_1428fc4a3
                        case 3
                            goto label_1428fc497
                        case 4
                            goto label_1428fc48d
                        case 5
                            goto label_1428fc480
                        case 6
                            goto label_1428fc473
                        case 7
                            uint32_t r12_2 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r12_1 = r12_2 << 0x18
                        label_1428fc473:
                            uint32_t rax_51 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r12_1 |= rax_51 << 0x10
                        label_1428fc480:
                            uint32_t rax_53 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r12_1 |= rax_53 << 8
                        label_1428fc48d:
                            uint32_t rax_55 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r12_1 |= rax_55
                        label_1428fc497:
                            uint32_t r15_2 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r15_1 = r15_2 << 0x18
                        label_1428fc4a3:
                            uint32_t rax_56 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r15_1 |= rax_56 << 0x10
                        label_1428fc4b0:
                            uint32_t rax_58 = zx.d(*(rdi_2 - 1))
                            rdi_2 -= 1
                            r15_1 |= rax_58 << 8
                    
                    uint32_t rax_60 = zx.d(*(rdi_2 - 1))
                    rdi_2 -= 1
                    r15_1 |= rax_60
                
                rdi = rdi_2 + result_2
                
                if (arg3 == 0x20)
                    r14_4 = rsi_3
                    rsi_3 = r15_1
                else if (arg3 != 0x40)
                    int64_t r10 = sx.q(r11_1)
                    void* rax_62 = &var_58 + r10
                    var_58 = r14_4
                    var_54 = rsi_3
                    var_50 = r15_1
                    uint32_t var_4c_2 = r12_1
                    
                    if (rax_6 != 0)
                        var_58.b = *rax_62 << rax_6.b | *(&var_58:1 + r10) u>> (8 - rax_6.b)
                        char rcx_31 = rax_6.b
                        var_58:1.b =
                            *(&var_58:2 + r10) u>> (8 - rax_6.b) | *(&var_58:1 + r10) << rcx_31
                        var_58:2.b =
                            *(&var_58:2 + r10) << rcx_31 | *(&var_58:3 + r10) u>> (8 - rax_6.b)
                        char rcx_33 = rax_6.b
                        var_58:3.b =
                            *(&var_54 + r10) u>> (8 - rax_6.b) | *(&var_58:3 + r10) << rcx_33
                        var_54.b = *(&var_54 + r10) << rcx_33 | *(&var_54:1 + r10) u>> (8 - rax_6.b)
                        char rcx_35 = rax_6.b
                        var_54:1.b =
                            *(&var_54:2 + r10) u>> (8 - rax_6.b) | *(&var_54:1 + r10) << rcx_35
                        var_54:2.b =
                            *(&var_54:2 + r10) << rcx_35 | *(&var_54:3 + r10) u>> (8 - rax_6.b)
                        var_54:3.b =
                            *(&var_50 + r10) u>> (8 - rax_6.b) | *(&var_54:3 + r10) << rax_6.b
                    else
                        memmove(&var_58, rax_62, rax_6 + 8)
                        r8_5 = zx.q(rax_50)
                    
                    r14_4 = var_58
                    rsi_3 = var_54
                else
                    r14_4 = r15_1
                    rsi_3 = r12_1
                
                uint32_t r15_3 = r15_1 ^ var_90
                void* rbx_2 = rbx + result_2
                uint32_t r12_3 = r12_1 ^ var_8c_2
                
                if (r8_5.d u<= 7)
                    switch (r8_5.d)
                        case 1
                            rbx_2 -= 1
                            *rbx_2 = (r15_3 u>> 8).b
                        case 2
                            goto label_1428fc651
                        case 3
                            goto label_1428fc646
                        case 4
                            goto label_1428fc640
                        case 5
                            goto label_1428fc635
                        case 6
                            goto label_1428fc62a
                        case 7
                            rbx_2 -= 1
                            *rbx_2 = (r12_3 u>> 0x18).b
                        label_1428fc62a:
                            rbx_2 -= 1
                            *rbx_2 = (r12_3 u>> 0x10).b
                        label_1428fc635:
                            rbx_2 -= 1
                            *rbx_2 = (r12_3 u>> 8).b
                        label_1428fc640:
                            rbx_2 -= 1
                            *rbx_2 = r12_3.b
                        label_1428fc646:
                            rbx_2 -= 1
                            *rbx_2 = (r15_3 u>> 0x18).b
                        label_1428fc651:
                            rbx_2 -= 1
                            *rbx_2 = (r15_3 u>> 0x10).b
                            rbx_2 -= 1
                            *rbx_2 = (r15_3 u>> 8).b
                    
                    rbx_2 -= 1
                    *rbx_2 = r15_3.b
                
                i -= result_1.d
                rbx = rbx_2 + result_2
                r15 = var_70
                result_1 = zx.q(result_2.d)
            while (i u>= result_2.d)
        else
            do
                var_90 = r14_4
                i -= result_1.d
                sub_1428f9590(&var_90, var_70, 1)
                uint32_t r8_1 = 0
                int32_t r9_1 = (result_2 - 1).d
                uint32_t rdx_5 = 0
                void* rdi_1 = rdi + result_2
                result_1 = zx.q(result_2.d)
                
                if (r9_1 u<= 7)
                    switch (r9_1)
                        case 1
                            goto label_1428fc248
                        case 2
                            goto label_1428fc23c
                        case 3
                            goto label_1428fc232
                        case 4
                            goto label_1428fc228
                        case 5
                            goto label_1428fc21b
                        case 6
                            goto label_1428fc20e
                        case 7
                            uint32_t r8_2 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            r8_1 = r8_2 << 0x18
                        label_1428fc20e:
                            uint32_t rax_17 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            r8_1 |= rax_17 << 0x10
                        label_1428fc21b:
                            uint32_t rax_19 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            r8_1 |= rax_19 << 8
                        label_1428fc228:
                            uint32_t rax_21 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            r8_1 |= rax_21
                        label_1428fc232:
                            uint32_t rdx_6 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            rdx_5 = rdx_6 << 0x18
                        label_1428fc23c:
                            uint32_t rax_22 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            rdx_5 |= rax_22 << 0x10
                        label_1428fc248:
                            uint32_t rax_24 = zx.d(*(rdi_1 - 1))
                            rdi_1 -= 1
                            rdx_5 |= rax_24 << 8
                    
                    uint32_t rax_26 = zx.d(*(rdi_1 - 1))
                    rdi_1 -= 1
                    rdx_5 |= rax_26
                
                uint32_t rdx_7 = rdx_5 ^ var_90
                rdi = rdi_1 + result_2
                uint32_t r8_3 = r8_1 ^ rsi_3
                char* rbx_1 = rbx + result_2
                
                if (r9_1 u<= 7)
                    switch (r9_1)
                        case 1
                            rbx_1 -= 1
                            *rbx_1 = (rdx_7 u>> 8).b
                        case 2
                            goto label_1428fc2b1
                        case 3
                            goto label_1428fc2a7
                        case 4
                            goto label_1428fc2a1
                        case 5
                            goto label_1428fc296
                        case 6
                            goto label_1428fc28b
                        case 7
                            rbx_1 -= 1
                            *rbx_1 = (r8_3 u>> 0x18).b
                        label_1428fc28b:
                            rbx_1 -= 1
                            *rbx_1 = (r8_3 u>> 0x10).b
                        label_1428fc296:
                            rbx_1 -= 1
                            *rbx_1 = (r8_3 u>> 8).b
                        label_1428fc2a1:
                            rbx_1 -= 1
                            *rbx_1 = r8_3.b
                        label_1428fc2a7:
                            rbx_1 -= 1
                            *rbx_1 = (rdx_7 u>> 0x18).b
                        label_1428fc2b1:
                            rbx_1 -= 1
                            *rbx_1 = (rdx_7 u>> 0x10).b
                            rbx_1 -= 1
                            *rbx_1 = (rdx_7 u>> 8).b
                    
                    rbx_1 -= 1
                    *rbx_1 = rdx_7.b
                
                rbx = &rbx_1[result_2]
                
                if (arg3 == 0x20)
                    r14_4 = rsi_3
                    rsi_3 = rdx_7
                else if (arg3 != 0x40)
                    int64_t r9_2 = sx.q(r11_1)
                    void* rax_41 = &var_58 + r9_2
                    uint32_t var_4c_1 = r8_3
                    var_58 = r14_4
                    var_54 = rsi_3
                    var_50 = rdx_7
                    
                    if (rax_6 != 0)
                        var_58.b = *(&var_58:1 + r9_2) u>> (8 - rax_6.b) | *rax_41 << rax_6.b
                        char rcx_18 = rax_6.b
                        var_58:1.b =
                            *(&var_58:2 + r9_2) u>> (8 - rax_6.b) | *(&var_58:1 + r9_2) << rcx_18
                        var_58:2.b =
                            *(&var_58:2 + r9_2) << rcx_18 | *(&var_58:3 + r9_2) u>> (8 - rax_6.b)
                        char rcx_20 = rax_6.b
                        var_58:3.b =
                            *(&var_54 + r9_2) u>> (8 - rax_6.b) | *(&var_58:3 + r9_2) << rcx_20
                        var_54.b =
                            *(&var_54 + r9_2) << rcx_20 | *(&var_54:1 + r9_2) u>> (8 - rax_6.b)
                        char rcx_22 = rax_6.b
                        var_54:1.b =
                            *(&var_54:2 + r9_2) u>> (8 - rax_6.b) | *(&var_54:1 + r9_2) << rcx_22
                        var_54:2.b =
                            *(&var_54:2 + r9_2) << rcx_22 | *(&var_54:3 + r9_2) u>> (8 - rax_6.b)
                        var_54:3.b =
                            *(&var_50 + r9_2) u>> (8 - rax_6.b) | *(&var_54:3 + r9_2) << rax_6.b
                    else
                        memmove(&var_58, rax_41, 8)
                        result_1 = zx.q(result_2.d)
                    
                    r14_4 = var_58
                    rsi_3 = var_54
                else
                    r14_4 = rdx_7
                    rsi_3 = r8_3
            while (i u>= result_1.d)
    
    *var_60 = r14_4.b
    *r8 = (r14_4 u>> 8).b
    *(r8 + 1) = (r14_4 u>> 0x10).b
    *(r8 + 2) = (r14_4 u>> 0x18).b
    *(r8 + 3) = rsi_3.b
    *(r8 + 4) = (rsi_3 u>> 8).b
    result = rsi_3 u>> 0x10
    *(r8 + 5) = result.b
    *(r8 + 6) = (rsi_3 u>> 0x18).b

__security_check_cookie(rax_1 ^ &var_b8)
return result
