// 函数: sub_1428b9590
// 地址: 0x1428b9590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4f8)
void var_538
int64_t var_58 = __security_cookie ^ &var_538
int32_t r15 = 0
char (* r14)[0x20] = arg6
int64_t rdi = -1
int32_t var_4f0 = 0
uint32_t var_4f8 = 0
int32_t var_4f4 = 0
int64_t var_4e0_1
__builtin_memset(&var_4e0_1, 0, 0x18)
int64_t* var_4d0_1
char var_4b0[0x18]
void var_498
char var_458[0x20]
char* var_4d8_1

if (arg5 == 0)
label_1428b96b2:
    int32_t rax_12 = arg1(arg4, 0)
    var_4f0 = rax_12
    
    if (rax_12 s>= 0)
        int64_t rax_13 = sub_1428a6730(zx.q(rax_12 + 0x14))
        var_4e0_1 = rax_13
        
        if (rax_13 != 0)
            int64_t var_4c8 = rax_13
            uint32_t rax_14 = arg1(arg4, &var_4c8)
            int32_t rbx_1 = 1
            var_4f8 = rax_14
            int64_t rdi_2
            
            if (arg5 == 0)
                rdi_2 = var_4e0_1
                var_458[0] = 0
            label_1428b9a3a:
                uint32_t rax_33 = sub_1428ba590(arg3, arg2, &var_458, rdi_2, rax_14)
                var_4f8 = rax_33
                
                if (rax_33 s<= 0)
                    rbx_1 = 0
                
                r15 = rbx_1
            else
                uint64_t rbx_2
                
                if (r14 != 0)
                    rbx_2 = zx.q(arg7)
                label_1428b9865:
                    
                    if (sub_142897af0(&var_4b0, zx.q(sub_140611e40(arg5))) s> 0 && sub_1429088e0(
                            arg5, &data_143505b10, &var_4b0, r14, rbx_2.d, 1, &var_498, nullptr) != 0)
                        if (r14 == &var_458)
                            sub_1428b8960(&var_458, 0x400)
                        
                        var_458[0] = 0
                        int64_t rax_21 = -1
                        
                        do
                            rax_21 += 1
                        while (var_458[rax_21] != 0)
                        
                        void* rcx_18 = &var_458[rax_21]
                        sub_1428b7080(rcx_18, &var_58 - rcx_18, "Proc-Type: 4,%s\n", "ENCRYPTED")
                        int64_t r14_1 = sx.q(sub_140611e40(arg5))
                        
                        do
                            rdi += 1
                        while (var_458[rdi] != 0)
                        
                        void* rsi_1 = &var_458[rdi]
                        int32_t rbx_3 = &var_58 - rsi_1.d
                        int32_t rax_23
                        int512_t zmm1_1
                        rax_23, zmm1_1 =
                            sub_1428b7080(rsi_1, sx.q(rbx_3), "DEK-Info: %s,", var_4d8_1)
                        
                        if (rax_23 s> 0)
                            int32_t rbx_4 = rbx_3 - rax_23
                            void* rsi_2 = rsi_1 + sx.q(rax_23)
                            
                            if (r14_1 s> 0)
                                int64_t rdi_1 = 0
                                
                                do
                                    int32_t rax_25
                                    rax_25, zmm1_1 = sub_1428b7080(rsi_2, sx.q(rbx_4), "%02X", 
                                        zx.q(var_4b0[rdi_1]))
                                    
                                    if (rax_25 s<= 0)
                                        goto label_1428b9998
                                    
                                    rbx_4 -= rax_25
                                    rdi_1 += 1
                                    rsi_2 += sx.q(rax_25)
                                while (rdi_1 s< r14_1)
                            
                            if (rbx_4 s> 1)
                                *rsi_2 = 0xa
                        
                    label_1428b9998:
                        int64_t* rax_27 = sub_142892200()
                        var_4d0_1 = rax_27
                        
                        if (rax_27 != 0)
                            int32_t var_518_7
                            var_518_7.q = &var_4b0
                            
                            if (sub_142892d80(rax_27, arg5, nullptr, &var_498, var_518_7) != 0)
                                rdi_2 = var_4e0_1
                                
                                if (sub_142892db0(rax_27, rdi_2, &var_4f4, rdi_2, var_4f8) != 0 &&
                                        sub_142892c50(rax_27, sx.q(var_4f4) + rdi_2, &var_4f8, 
                                        zmm1_1) != 0)
                                    rbx_1 = 1
                                    rax_14 = var_4f8 + var_4f4
                                    var_4f8 = rax_14
                                    goto label_1428b9a3a
                else if (arg8 != 0)
                    rbx_2 = zx.q(arg8(&var_458, 0x400, 1, arg9))
                label_1428b9822:
                    
                    if (rbx_2.d s> 0)
                        r14 = &var_458
                        goto label_1428b9865
                    
                    sub_1428a5670(9, 0x69, 0x6f, "crypto\pem\pem_lib.c", 0x165)
                else
                    if (arg9 != 0)
                        rbx_2 = -1
                        
                        do
                            rbx_2 += 1
                        while (arg9[rbx_2] != 0)
                        
                        if (rbx_2.d s> 0x400)
                            rbx_2 = 0x400
                        
                        memcpy(&var_458, arg9, rbx_2.d)
                        goto label_1428b9822
                    
                    char* rax_15 = sub_142908b80()
                    char const* const r9 = "Enter PEM pass phrase:"
                    
                    if (rax_15 != 0)
                        r9 = rax_15
                    
                    if (sub_142908ba0(&var_458, 4, 0x400, r9, 1) == 0)
                        rbx_2 = -1
                        
                        do
                            rbx_2 += 1
                        while (var_458[rbx_2] != 0)
                        
                        goto label_1428b9822
                    
                    sub_1428a5670(9, 0x64, 0x6d, "crypto\pem\pem_lib.c", 0x3b)
                    memset(&var_458, 0, 0x400)
                    sub_1428a5670(9, 0x69, 0x6f, "crypto\pem\pem_lib.c", 0x165)
        else
            sub_1428a5670((rax_13 + 9).d, (rax_13 + 0x69).d, (rax_13 + 0x41).d, 
                "crypto\pem\pem_lib.c", 0x158)
    else
        sub_1428a5670(9, 0x69, 0xd, "crypto\pem\pem_lib.c", 0x150)
        var_4f0 = 0
else
    char* rax_4 = sub_1428a9620(sub_1406938b0(arg5))
    var_4d8_1 = rax_4
    
    if (rax_4 == 0)
        sub_1428a5670(9, 0x69, 0x71, "crypto\pem\pem_lib.c", 0x14a)
    else if (sub_140611e40(arg5) == 0)
        sub_1428a5670(9, 0x69, 0x71, "crypto\pem\pem_lib.c", 0x14a)
    else if (sub_140611e40(arg5) s> 0x10)
        sub_1428a5670(9, 0x69, 0x71, "crypto\pem\pem_lib.c", 0x14a)
    else
        int32_t rax_7 = sub_140611e40(arg5)
        int64_t rax_9 = -1
        
        do
            rax_9 += 1
        while (var_4d8_1[rax_9] != 0)
        
        if (rax_9 + 0x24 + sx.q(rax_7 * 2) u<= 0x400)
            goto label_1428b96b2
        
        sub_1428a5670(9, 0x69, 0x71, "crypto\pem\pem_lib.c", 0x14a)
sub_1428b8960(&var_498, 0x40)
sub_1428b8960(&var_4b0, 0x10)
sub_1428921c0(var_4d0_1)
sub_1428b8960(&var_458, 0x400)
sub_1428a6890(var_4e0_1, zx.q(var_4f0), "crypto\pem\pem_lib.c", 0x194)
__security_check_cookie(var_58 ^ &var_538)
return zx.q(r15)
