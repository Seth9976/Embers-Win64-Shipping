// 函数: sub_1428cd510
// 地址: 0x1428cd510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void var_58
void* r12 = &var_58
int32_t result_2 = 0
int64_t* rbp = nullptr
int32_t result_1 = 0
int32_t var_70 = 0x18
uint64_t r15 = zx.q(arg4)
uint64_t result

if (arg4 != 0)
    if (arg4 == 0xffffffff)
        r15 = -1
        
        do
            r15 += 1
        while (arg3[r15] != 0)
    
    uint64_t rax_3 = zx.q(sx.d(*arg3) - 0x30)
    int32_t var_74_1 = rax_3.d
    int32_t var_88_1
    int32_t r8
    
    if (rax_3.d u> 2)
        var_88_1 = 0x49
        r8 = 0x7a
    label_1428cd902:
        sub_1428a5670(0xd, 0x64, r8, "crypto\asn1\a_object.c", var_88_1)
        sub_1428901a0(rbp)
        result = 0
    else
        if (r15.d - 1 s<= 0)
            var_88_1 = 0x4e
            r8 = 0x8a
            goto label_1428cd902
        
        int32_t r14_1 = sx.d(arg3[1])
        int32_t r15_2 = r15.d - 2
        void* rcx_1 = &arg3[2]
        void* var_68_1 = rcx_1
        
        if (r15_2 s<= 0)
        label_1428cd8da:
            sub_1428901a0(rbp)
            result = zx.q(result_1)
        else
            while (true)
                int32_t var_88_2
                int32_t r8_3
                
                if (r14_1 == 0x2e || r14_1 == 0x20)
                    uint64_t rdi_1 = 0
                    int32_t r13_1 = 0
                    
                    if (r15_2 s<= 0)
                    label_1428cd6c9:
                        
                        if (result_2 != 0)
                            goto label_1428cd70d
                        
                        if (rax_3.d s>= 2 || rdi_1.d u< 0x28)
                            uint32_t rax_11 = (rax_3 * 5).d << 3
                            
                            if (r13_1 == 0)
                                rdi_1 = zx.q(rdi_1.d + rax_11)
                            label_1428cd70d:
                                int32_t rsi_1 = 0
                                char* rbx_1 = nullptr
                                
                                if (r13_1 == 0)
                                    do
                                        rsi_1 += 1
                                        char rax_21 = rdi_1.b & 0x7f
                                        rdi_1 = zx.q(rdi_1.d u>> 7)
                                        *(rbx_1 + r12) = rax_21
                                        rbx_1 = &rbx_1[1]
                                    while (rdi_1.d != 0)
                                    
                                    goto label_1428cd7bf
                                
                                int32_t rdi_6 = (sub_142890560(rbp) + 6) s/ 7
                                
                                if (rdi_6 s<= var_70)
                                label_1428cd786:
                                    
                                    if (rdi_6 == 0)
                                    label_1428cd7b6:
                                        result_2 = result_1
                                    label_1428cd7bf:
                                        int32_t result_3 = rsi_1 + result_2
                                        
                                        if (arg1 == 0)
                                            result_2 = result_3
                                        label_1428cd82a:
                                            result_1 = result_2
                                            
                                            if (r15_2 s> 0)
                                                rcx_1 = var_68_1
                                                rax_3 = zx.q(var_74_1)
                                                continue
                                            
                                            if (r12 != &var_58)
                                                sub_1428a6780(r12)
                                            
                                            goto label_1428cd8da
                                        else if (result_3 s<= arg2)
                                            char* i = rbx_1 - 1
                                            
                                            if (i s> 0)
                                                void* rcx_14 = sx.q(result_2) + arg1
                                                result_2 += i.d
                                                
                                                do
                                                    rcx_14 += 1
                                                    char rax_19 = *(i + r12) | 0x80
                                                    i -= 1
                                                    *(rcx_14 - 1) = rax_19
                                                while (i s> 0)
                                            
                                            int64_t result_4 = sx.q(result_2)
                                            result_2 += 1
                                            *(result_4 + arg1) = *r12
                                            goto label_1428cd82a
                                        
                                    label_1428cd892:
                                        sub_1428a5670(0xd, 0x64, 0x6b, "crypto\asn1\a_object.c", 
                                            0xa0)
                                    else
                                        while (true)
                                            rdi_6 -= 1
                                            uint64_t rax_18 = sub_1428f50a0(rbp, 0x80)
                                            
                                            if (rax_18 == -1)
                                                break
                                            
                                            *(rbx_1 + r12) = rax_18.b
                                            rsi_1 += 1
                                            rbx_1 = &rbx_1[1]
                                            
                                            if (rdi_6 == 0)
                                                goto label_1428cd7b6
                                else
                                    if (r12 != &var_58)
                                        sub_1428a6780(r12)
                                    
                                    var_70 = rdi_6 + 0x20
                                    void* rax_17 = sub_1428a6730(sx.q(rdi_6 + 0x20))
                                    r12 = rax_17
                                    
                                    if (rax_17 != 0)
                                        goto label_1428cd786
                            else if (sub_1428f4ee0(rbp, sx.q(rax_11)) != 0)
                                result_2 = result_1
                                goto label_1428cd70d
                        else
                        label_1428cd892_1:
                            sub_1428a5670(0xd, 0x64, 0x93, "crypto\asn1\a_object.c", 0x78)
                    else
                        while (true)
                            r14_1 = sx.d(*rcx_1)
                            r15_2 -= 1
                            var_68_1 = rcx_1 + 1
                            
                            if (r14_1 != 0x20 && r14_1 != 0x2e)
                                if (sub_1428e4710(r14_1, 4) == 0)
                                    var_88_2 = 0x64
                                    r8_3 = 0x82
                                    goto label_1428cd892_2
                                
                                if (r13_1 != 0)
                                label_1428cd68f:
                                    
                                    if (sub_1428f5360(rbp, 0xa) == 0)
                                        break
                                    
                                    if (sub_1428f4ee0(rbp, sx.q(r14_1 - 0x30)) == 0)
                                        break
                                else
                                    if (rdi_1.d u>= 0x19999991)
                                        r13_1 = 1
                                        
                                        if (rbp == 0)
                                            int64_t* rax_5 = sub_142890500()
                                            rbp = rax_5
                                            
                                            if (rax_5 == 0)
                                                break
                                        
                                        if (sub_142890900(rbp, zx.q(rdi_1.d)) == 0)
                                            break
                                        
                                        goto label_1428cd68f
                                    
                                    rdi_1 = zx.q(r14_1 + (((rdi_1 * 5).d - 0x18) << 1))
                                
                                rcx_1 = var_68_1
                                
                                if (r15_2 s> 0)
                                    continue
                            
                            result_2 = result_1
                            rax_3 = zx.q(var_74_1)
                            goto label_1428cd6c9
                else
                    var_88_2 = 0x57
                    r8_3 = 0x83
                label_1428cd892_2:
                    sub_1428a5670(0xd, 0x64, r8_3, "crypto\asn1\a_object.c", var_88_2)
                
                if (r12 == &var_58)
                    break
                
                sub_1428a6780(r12)
                break
            
            sub_1428901a0(rbp)
            result = 0
else
    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
