// 函数: sub_142866cd0
// 地址: 0x142866cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rsi = nullptr
void* rdi = *(arg1 + 0x738)
int32_t r15 = 0
int64_t* r13 = nullptr
int64_t* r12 = nullptr
uint64_t r14 = arg3
void* var_d8
int32_t rbx_1
int64_t* rdi_2

if (arg3 != 0)
    int32_t* rcx = *(arg1 + 8)
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0)
        if (*(arg1 + 0x6b0) == 0)
            goto label_142866d6f
        
        rbx_1 = 4
        rdi_2 = arg2
    else
        int32_t rax_4 = *rcx
        
        if ((rax_4 s< 0x304 || rax_4 == 0x10000) && *(arg1 + 0x6b0) != 0)
            rbx_1 = 4
            rdi_2 = arg2
        else
        label_142866d6f:
            
            if (r14 u>= 0x20)
                int64_t* rax_5 = sub_1428be080()
                r13 = rax_5
                
                if (rax_5 != 0)
                    int64_t* rax_6 = sub_142892200()
                    r12 = rax_6
                    
                    if (rax_6 != 0)
                        int64_t rax_7 = *(rdi + 0x218)
                        
                        if (rax_7 != 0)
                            int32_t rax_8 = rax_7(arg1, arg2, &arg2[2], r12, r13, 0)
                            
                            if (rax_8 s< 0)
                                rbx_1 = 1
                                rdi_2 = arg2
                            else if (rax_8 == 0)
                                rbx_1 = 4
                                rdi_2 = arg2
                            else
                                if (rax_8 == 2)
                                    r15 = rax_8 - 1
                                
                            label_142866e93:
                                int64_t rax_15 = sub_1428be500(r13)
                                
                                if (rax_15 != 0)
                                    rdi_2 = arg2
                                    
                                    if (r14 u> sx.q(sub_142890ed0(r12) + 0x10) + rax_15)
                                        r14 -= rax_15
                                        
                                        if (sub_1428be4d0(r13) s<= 0)
                                            rbx_1 = 1
                                        else
                                            void var_98
                                            int32_t rax_19
                                            int512_t zmm1_1
                                            rax_19, zmm1_1 = sub_1428be1d0(r13, &var_98, nullptr)
                                            
                                            if (rax_19 s<= 0)
                                                rbx_1 = 1
                                            else if (sub_1428bc500(&var_98, r14 + rdi_2, rax_15)
                                                    == 0)
                                                void* var_b8 = &rdi_2[2] + sx.q(sub_142890ed0(r12))
                                                r14 -= sx.q(sub_142890ed0(r12) + 0x10)
                                                void* rax_27 = sub_1428a6730(r14)
                                                int32_t var_c8
                                                int32_t rax_28
                                                
                                                if (rax_27 != 0)
                                                    var_d8.d = r14.d
                                                    rax_28 = sub_1428929e0(r12, rax_27, &var_c8, 
                                                        var_b8, var_d8.d)
                                                
                                                int32_t var_b0
                                                
                                                if (rax_27 == 0 || rax_28 s<= 0)
                                                    sub_1428a6780(rax_27)
                                                    rbx_1 = 1
                                                else if (sub_1428927f0(r12, sx.q(var_c8) + rax_27, 
                                                        &var_b0, zmm1_1) s> 0)
                                                    int32_t r8_8 = var_c8 + var_b0
                                                    var_c8 = r8_8
                                                    var_b8 = rax_27
                                                    void* rax_30 =
                                                        sub_14287e0d0(nullptr, &var_b8, r8_8)
                                                    var_c8 += rax_27.d - var_b8.d
                                                    rsi = rax_30
                                                    sub_1428a6780(rax_27)
                                                    
                                                    if (rsi == 0)
                                                        sub_1428a49e0()
                                                        rbx_1 = 4
                                                    else if (var_c8 == 0)
                                                        if (arg5 != 0)
                                                            memcpy(rsi + 0x98, arg4, arg5.d)
                                                            *(rsi + 0x90) = arg5
                                                        
                                                        rbx_1 = r15 + 5
                                                    else
                                                        sub_1428574d0(rsi)
                                                        rsi = nullptr
                                                        rbx_1 = 4
                                                else
                                                    sub_1428a6780(rax_27)
                                                    rbx_1 = 4
                                            else
                                                rbx_1 = 4
                                    else
                                        rbx_1 = 4
                                else
                                    rbx_1 = 1
                                    rdi_2 = arg2
                        else if (*arg2 != *(rdi + 0x200) || arg2[1] != *(rdi + 0x208))
                            rbx_1 = 4
                            rdi_2 = arg2
                        else if (sub_1428be280(r13, *(rdi + 0x210), 0x20, &data_1434e91b0, nullptr)
                                s<= 0)
                            rbx_1 = 1
                            rdi_2 = arg2
                        else
                            if (sub_1428929b0(r12, &data_1434e9880, nullptr, *(rdi + 0x210) + 0x20, 
                                    &arg2[2]) s> 0)
                                int32_t* rcx_4 = *(arg1 + 8)
                                
                                if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) == 0)
                                    int32_t rax_14 = *rcx_4
                                    
                                    if (rax_14 s>= 0x304 && rax_14 != 0x10000)
                                        r15 = 1
                                
                                goto label_142866e93
                            
                            rbx_1 = 1
                            rdi_2 = arg2
                    else
                        rbx_1 = 0
                        rdi_2 = arg2
                else
                    rbx_1 = 0
                    rdi_2 = arg2
            else
                rbx_1 = 4
                rdi_2 = arg2
else
    rbx_1 = 3
    rdi_2 = arg2

sub_1428921c0(r12)
sub_1428be000(r13)
void* rcx_27 = *(arg1 + 0x738)
int64_t r10 = *(rcx_27 + 0x3b0)

if (r10 != 0 && rbx_1 - 3 u<= 3)
    if (r14 u> 0x10)
        r14 = 0x10
    
    int32_t var_d0
    var_d0.q = *(rcx_27 + 0x3b8)
    var_d8.d = rbx_1
    int32_t rax_33 = r10(arg1, rsi, rdi_2, r14, var_d8, var_d0)
    
    if (rax_33 == 0)
        rbx_1 = 1
    else if (rax_33 == 1)
        rbx_1 = 2
        sub_1428574d0(rsi)
        rsi = nullptr
    else if (rax_33 == 2)
        if (rbx_1 - 3 u> 1)
            rbx_1 = 4
        
        sub_1428574d0(rsi)
        rsi = nullptr
    else if (rax_33 - 3 u> 1 || rbx_1 - 5 u> 1)
        rbx_1 = 1
    else
        int32_t rbx_6
        rbx_6.b = rax_33 != 3
        rbx_1 = rbx_6 + 5

if (*(arg1 + 0x6b0) == 0)
label_14286718b:
    
    if (((rbx_1 - 3) & 0xfffffffc) == 0 && rbx_1 != 5)
        *(arg1 + 0x670) = 1
else
    int32_t* rcx_33 = *(arg1 + 8)
    
    if ((*(*(rcx_33 + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_36 = *rcx_33
        
        if (rax_36 s>= 0x304 && rax_36 != 0x10000)
            goto label_14286718b

*arg6 = rsi
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx_1)
