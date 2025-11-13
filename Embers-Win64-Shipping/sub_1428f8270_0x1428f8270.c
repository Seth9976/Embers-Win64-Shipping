// 函数: sub_1428f8270
// 地址: 0x1428f8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t result_1 = 0
int32_t rax_2 = sub_1428ad4e0(arg2)
int32_t rax_3

if (rax_2 != 0 && *arg1 != 0)
    rax_3 = arg2[0x16]

uint64_t result

if (rax_2 == 0 || *arg1 == 0 || rax_3 == 0xffffffff || (rax_3 == 1 && arg1[3] == 0))
    sub_1428a5670(0x32, 0x80, 0x6a, "crypto\ct\ct_vfy.c", 0x68)
    result = 0
else if (*arg2 == 0)
    uint64_t count = arg1[2]
    int32_t rax_4
    
    if (*(arg2 + 0x20) == count)
        rax_4 = memcmp(*(arg2 + 0x18), arg1[1], count)
    
    if (*(arg2 + 0x20) != count || rax_4 != 0)
        sub_1428a5670(0x32, 0x80, 0x72, "crypto\ct\ct_vfy.c", 0x71)
        result = 0
    else if (*(arg2 + 0x28) u<= arg1[9])
        int64_t* rax_6 = sub_142891ee0()
        
        if (rax_6 != 0)
            int32_t var_48
            var_48.q = *arg1
            
            if (sub_1428935d0(rax_6, nullptr, &data_1434e91b0, nullptr, var_48) != 0)
                int32_t rcx_4 = arg2[0x16]
                
                if (rcx_4 != 0xffffffff && (rcx_4 != 1 || arg1[3] != 0))
                    uint8_t var_38 = *arg2
                    char var_36_1 = *(arg2 + 0x2f)
                    char var_35_1 = *(arg2 + 0x2e)
                    char var_34_1 = *(arg2 + 0x2d)
                    char var_33_1 = arg2[0xb].b
                    char var_32_1 = *(arg2 + 0x2b)
                    char var_31_1 = *(arg2 + 0x2a)
                    char var_30_1 = *(arg2 + 0x29)
                    char var_2f_1 = arg2[0xa].b
                    char var_2d_1 = rcx_4.b
                    char var_2e_1 = (rcx_4 s>> 8).b
                    char var_37_1 = 0
                    
                    if (sub_142891c10(rax_6, &var_38, 0xc) != 0)
                        int64_t rbp_1
                        int64_t rdi_1
                        
                        if (arg2[0x16] != 0)
                            if (sub_142891c10(rax_6, arg1[3], arg1[4]) != 0)
                                rbp_1 = arg1[7]
                                rdi_1 = arg1[8]
                                goto label_1428f842b
                        else
                            rbp_1 = arg1[5]
                            rdi_1 = arg1[6]
                        label_1428f842b:
                            
                            if (rbp_1 != 0)
                                char var_36_2 = rdi_1.b
                                var_38 = (rdi_1 u>> 0x10).b
                                uint8_t var_37_2 = (rdi_1 u>> 8).b
                                
                                if (sub_142891c10(rax_6, &var_38, 3) != 0
                                        && sub_142891c10(rax_6, rbp_1, rdi_1) != 0)
                                    var_38 = *(arg2 + 0x39)
                                    char var_37_3 = arg2[0xe].b
                                    int32_t rax_29
                                    int512_t zmm0_1
                                    rax_29, zmm0_1 = sub_142891c10(rax_6, &var_38, 2)
                                    
                                    if (rax_29 != 0)
                                        int64_t r8_3 = *(arg2 + 0x38)
                                        int32_t rax_30
                                        
                                        if (r8_3 != 0)
                                            rax_30, zmm0_1 =
                                                sub_142891c10(rax_6, *(arg2 + 0x30), r8_3)
                                        
                                        if (r8_3 == 0 || rax_30 != 0)
                                            int32_t result_2 = sub_1428934a0(rax_6, *(arg2 + 0x48), 
                                                *(arg2 + 0x50), zmm0_1, arg4, arg3)
                                            result_1 = result_2
                                            
                                            if (result_2 == 0)
                                                sub_1428a5670(result_2 + 0x32, 0x80, 
                                                    result_2 + 0x6b, "crypto\ct\ct_vfy.c", 0x87)
        
        sub_142891ea0(rax_6)
        result = zx.q(result_1)
    else
        sub_1428a5670(0x32, 0x80, 0x74, "crypto\ct\ct_vfy.c", 0x75)
        result = 0
else
    sub_1428a5670(0x32, 0x80, 0x73, "crypto\ct\ct_vfy.c", 0x6c)
    result = 0

__security_check_cookie(rax_1 ^ &var_68)
return result
