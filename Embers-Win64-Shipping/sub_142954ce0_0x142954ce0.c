// 函数: sub_142954ce0
// 地址: 0x142954ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t* rbp = nullptr
int32_t var_58 = 0

if (arg4 == 0)
    sub_1428a5670(0x10, 0xa0, 0x64, "crypto\ec\ec2_oct.c", 0xf7)
    return 0

uint32_t rbx = zx.d(*arg3)
int32_t r14_1 = rbx & 1
int32_t rbx_1 = rbx & 0xfffffffe

if (rbx_1 == 0)
label_142954d70:
    
    if (r14_1 == 0)
    label_142954d7f:
        
        if (rbx_1 != 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_1428bef80(arg1) + 7)
            int32_t rax_7 = (temp1_1 + (temp0_1 & 7)) s>> 3
            int64_t rax_8 = sx.q(rax_7)
            int64_t rdx_2 = rax_8
            
            if (rbx_1 != 2)
                rdx_2 = rax_8 * 2
            
            if (arg4 == rdx_2 + 1)
                int64_t* rdi_1 = arg5
                
                if (rdi_1 != 0)
                label_142954e25:
                    sub_1428d8e50(rdi_1)
                    int64_t* rax_10 = sub_1428d8ba0(rdi_1)
                    int64_t* rax_11 = sub_1428d8ba0(rdi_1)
                    int64_t* rax_12 = sub_1428d8ba0(rdi_1)
                    
                    if (rax_12 != 0 && sub_14288fa60(&arg3[1], rax_7, rax_10) != 0)
                        if (sub_1428909a0(rax_10, arg1[8]) s>= 0)
                            sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x12b)
                        else
                            int32_t var_68
                            int32_t rax_15
                            
                            if (rbx_1 != 2)
                                if (sub_14288fa60(&arg3[1 + rax_8], rax_7, rax_11) != 0)
                                    if (sub_1428909a0(rax_11, arg1[8]) s< 0)
                                        if (rbx_1 != 6)
                                        label_142954f56:
                                            var_68.q = rdi_1
                                            rax_15 = sub_1428bfc10(arg1, arg2, rax_10)
                                            goto label_142954f69
                                        
                                        var_68.q = rdi_1
                                        
                                        if ((*(*arg1 + 0x118))(arg1, rax_12, rax_11, rax_10, var_68)
                                                != 0)
                                            if (r14_1 == sub_142890290(rax_12))
                                                goto label_142954f56
                                            
                                            sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 
                                                0x13d)
                                    else
                                        sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 
                                            0x136)
                            else
                                var_68.q = rdi_1
                                rax_15 = sub_142919fb0(arg1, arg2, rax_10, zx.q(r14_1), var_68)
                            label_142954f69:
                                
                                if (rax_15 != 0)
                                    var_58 = 1
                    
                    sub_1428d8a60(rdi_1)
                    sub_1428d8ae0(rbp)
                    return zx.q(var_58)
                
                int64_t* rax_9 = sub_1428d8d60()
                rbp = rax_9
                rdi_1 = rax_9
                
                if (rax_9 != 0)
                    goto label_142954e25
            else
                sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x117)
        else
            if (arg4 == 1)
                return sub_1428bfd80(arg1, arg2)
            
            sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x10a)
    else
        sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x104)
else if (rbx_1 == 2)
label_142954d6b:
    
    if (rbx_1 != 4 || r14_1 == 0)
        goto label_142954d7f
    
    sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x104)
else
    if (rbx_1 == 4)
        goto label_142954d70
    
    if (rbx_1 == 6)
        goto label_142954d6b
    
    sub_1428a5670(0x10, 0xa0, 0x66, "crypto\ec\ec2_oct.c", 0x100)

return 0
