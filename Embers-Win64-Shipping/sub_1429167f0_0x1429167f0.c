// 函数: sub_1429167f0
// 地址: 0x1429167f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rbp = arg7
int64_t* rbx = nullptr
int64_t* r12 = nullptr
int32_t* var_a0 = nullptr
int64_t* r15 = nullptr
int32_t var_b8 = 0
int32_t rax_2 = sub_1428916c0(arg1)
int64_t var_b0
var_b0.d = rax_2
void var_98

if (rax_2 s> 0)
    rbx = sub_142891ee0()
    r12 = sub_142891ee0()
    int64_t* rax_5 = sub_142891ee0()
    r15 = rax_5
    
    if (rbx != 0 && r12 != 0 && rax_5 != 0)
        sub_1428915a0(rax_5, 8)
        int32_t* rax_6 = sub_1428969b0(0x357, nullptr, arg2, arg3)
        var_a0 = rax_6
        
        if (rax_6 != 0 && sub_1428932d0(r15, nullptr, arg1, nullptr, rax_6) != 0)
            int32_t rax_8
            int512_t zmm1_1
            rax_8, zmm1_1 = sub_142891c70(rbx, r15)
            
            if (rax_8 != 0)
                int32_t rax_9
                
                if (arg4 != 0)
                    rax_9 = sub_142891c10(rbx, arg4, arg6)
                
                int64_t var_a8
                
                if ((arg4 == 0 || rax_9 != 0)
                        && sub_1428930f0(rbx, &var_98, &var_a8, zmm1_1, arg5) != 0)
                    int32_t rax_11
                    int512_t zmm1_2
                    rax_11, zmm1_2 = sub_142891c70(rbx, r15)
                    
                    if (rax_11 != 0)
                        int64_t rsi_1 = sx.q(var_b0.d)
                        int64_t rdi_1 = arg8
                        int32_t i
                        
                        do
                            if (sub_142891c10(rbx, &var_98, var_a8) == 0)
                                break
                            
                            if (rdi_1 u> rsi_1)
                                int32_t rax_13
                                rax_13, zmm1_2 = sub_142891c70(r12, rbx)
                                
                                if (rax_13 == 0)
                                    break
                            
                            if (arg4 != 0 && sub_142891c10(rbx, arg4, arg6) == 0)
                                break
                            
                            if (rdi_1 u<= rsi_1)
                                if (sub_1428930f0(rbx, &var_98, &var_a8, zmm1_2, arg5) != 0)
                                    memcpy(rbp, &var_98, rdi_1.d)
                                    var_b8 = 1
                                
                                break
                            
                            int32_t rax_15
                            int512_t zmm1_3
                            rax_15, zmm1_3 = sub_1428930f0(rbx, rbp, &var_b0, zmm1_2, arg5)
                            
                            if (rax_15 == 0)
                                break
                            
                            rbp += var_b0
                            rdi_1 -= var_b0
                            
                            if (sub_1428930f0(r12, &var_98, &var_a8, zmm1_3, arg5) == 0)
                                break
                            
                            i, zmm1_2 = sub_142891c70(rbx, r15)
                        while (i != 0)

sub_1428965a0(var_a0)
sub_142891ea0(rbx)
sub_142891ea0(r12)
sub_142891ea0(r15)
sub_1428b8960(&var_98, 0x40)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(var_b8)
