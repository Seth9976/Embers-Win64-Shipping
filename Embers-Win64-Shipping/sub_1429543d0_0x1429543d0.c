// 函数: sub_1429543d0
// 地址: 0x1429543d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t* r14 = nullptr
int32_t var_48 = 0

if (arg4 == 0)
    sub_1428a5670(0x10, 0x67, 0x64, "crypto\ec\ecp_oct.c", 0x118)
    return 0

uint32_t rbx = zx.d(*arg3)
int32_t rbp_1 = rbx & 1
int32_t rbx_1 = rbx & 0xfffffffe

if (rbx_1 == 0)
label_142954462:
    
    if (rbp_1 == 0)
    label_142954470:
        
        if (rbx_1 != 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_142890560(arg1[8]) + 7)
            int32_t rax_7 = (temp1_1 + (temp0_1 & 7)) s>> 3
            int64_t rax_8 = sx.q(rax_7)
            int64_t rdx_2 = rax_8
            
            if (rbx_1 != 2)
                rdx_2 = rax_8 * 2
            
            if (arg4 == rdx_2 + 1)
                int64_t* rdi_1 = arg5
                
                if (rdi_1 != 0)
                label_142954518:
                    sub_1428d8e50(rdi_1)
                    int64_t* rax_10 = sub_1428d8ba0(rdi_1)
                    int64_t* rax_11 = sub_1428d8ba0(rdi_1)
                    
                    if (rax_11 != 0 && sub_14288fa60(&arg3[1], rax_7, rax_10) != 0)
                        if (sub_1428909a0(rax_10, arg1[8]) s>= 0)
                            sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x14b)
                        else
                            int32_t var_58
                            int32_t rax_14
                            
                            if (rbx_1 != 2)
                                if (sub_14288fa60(&arg3[1 + rax_8], rax_7, rax_11) != 0)
                                    if (sub_1428909a0(rax_11, arg1[8]) s< 0)
                                        int32_t rax_19
                                        
                                        if (rbx_1 == 6)
                                            rax_19 = sub_142890290(rax_11)
                                        
                                        if (rbx_1 != 6 || rbp_1 == rax_19)
                                            var_58.q = rdi_1
                                            rax_14 = sub_1428bfc10(arg1, arg2, rax_10)
                                            goto label_142954626
                                        
                                        sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 
                                            0x15b)
                                    else
                                        sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 
                                            0x156)
                            else
                                var_58.q = rdi_1
                                rax_14 = sub_142919fb0(arg1, arg2, rax_10, zx.q(rbp_1), var_58)
                            label_142954626:
                                
                                if (rax_14 != 0)
                                    var_48 = 1
                    
                    sub_1428d8a60(rdi_1)
                    sub_1428d8ae0(r14)
                    return zx.q(var_48)
                
                int64_t* rax_9 = sub_1428d8d60()
                r14 = rax_9
                rdi_1 = rax_9
                
                if (rax_9 != 0)
                    goto label_142954518
            else
                sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x138)
        else
            if (arg4 == 1)
                return sub_1428bfd80(arg1, arg2)
            
            sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x12b)
    else
        sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x125)
else if (rbx_1 == 2)
label_14295445d:
    
    if (rbx_1 != 4 || rbp_1 == 0)
        goto label_142954470
    
    sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x125)
else
    if (rbx_1 == 4)
        goto label_142954462
    
    if (rbx_1 == 6)
        goto label_14295445d
    
    sub_1428a5670(0x10, 0x67, 0x66, "crypto\ec\ecp_oct.c", 0x121)

return 0
