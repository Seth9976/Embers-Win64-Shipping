// 函数: sub_142906de0
// 地址: 0x142906de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
__chkstk(0x58)
uint64_t rbx = arg2
int32_t rbp = 0
int32_t* r13 = nullptr

if (sub_142890210(arg3, 4) == 0 && sub_142890210(arg4, 4) == 0)
    if (sub_142890290(arg4) == 0)
        sub_1428a5670(3, 0x75, 0x66, "crypto\bn\bn_exp.c", 0x48c)
        return 0
    
    if (arg4[1].d == 1)
        uint64_t temp1_1 = modu.dp.q(0:rbx, **arg4)
        rbx = temp1_1
        arg_10 = temp1_1
    
    int32_t rax_6 = sub_142890560(arg3)
    
    if (rax_6 == 0)
        int32_t r12_1 = 1
        
        if (sub_14288fa30(arg4, 1) == 0)
            r12_1 = sub_142890900(arg1, 1)
        else
            sub_142890900(arg1, 0)
        
        return zx.q(r12_1)
    
    if (rbx == 0)
        sub_142890900(arg1, 0)
        return zx.q((rbx + 1).d)
    
    sub_1428d8e50(arg5)
    int64_t* rbx_1 = sub_1428d8ba0(arg5)
    int64_t* rax_11 = sub_1428d8ba0(arg5)
    int64_t* r15_1 = rax_11
    
    if (rax_11 == 0)
    label_14290717e:
        
        if (arg6 == 0)
            sub_1428cc600(r13)
    else
        r13 = arg6
        
        if (r13 != 0)
        label_142906f65:
            uint64_t rdi_1 = arg_10
            int32_t var_58_1 = rax_6 - 2
            int32_t rbp_1 = 1
            int32_t var_68
            
            if (rax_6 - 2 s>= 0)
                int32_t temp3_1
                
                do
                    uint64_t rsi_3 = rdi_1 * rdi_1
                    
                    if (divu.dp.q(0:rsi_3, rdi_1) != rdi_1)
                        if (rbp_1 == 0)
                            if (sub_1428f5360(rbx_1, rdi_1) == 0)
                                goto label_14290717c_2
                            
                            var_68.q = arg5
                            
                            if (sub_14291a950(nullptr, r15_1, rbx_1, arg4, var_68) == 0)
                                goto label_14290717c_2
                            
                            int64_t* rax_21 = rbx_1
                            rbx_1 = r15_1
                            r15_1 = rax_21
                        else
                            if (sub_142890900(rbx_1, rdi_1) == 0)
                                goto label_14290717c_2
                            
                            if (sub_142890970(rbx_1, rbx_1, r13, arg5) == 0)
                                goto label_14290717c_2
                            
                            rbp_1 = 0
                        
                        rsi_3 = 1
                    
                    rdi_1 = rsi_3
                    
                    if (rbp_1 == 0)
                        var_68.q = arg5
                        
                        if (sub_1428ccb60(rbx_1, rbx_1, rbx_1, r13, var_68) == 0)
                            goto label_14290717c_2
                    
                    if (sub_142890240(arg3, var_58_1) != 0)
                        uint64_t rsi_4 = rsi_3 * arg_10
                        
                        if (divu.dp.q(0:rsi_4, arg_10) != rdi_1)
                            if (rbp_1 == 0)
                                if (sub_1428f5360(rbx_1, rdi_1) == 0)
                                    goto label_14290717c_2
                                
                                var_68.q = arg5
                                
                                if (sub_14291a950(nullptr, r15_1, rbx_1, arg4, var_68) == 0)
                                    goto label_14290717c_2
                                
                                int64_t* rax_30 = rbx_1
                                rbx_1 = r15_1
                                r15_1 = rax_30
                            else
                                if (sub_142890900(rbx_1, rdi_1) == 0)
                                    goto label_14290717c_2
                                
                                if (sub_142890970(rbx_1, rbx_1, r13, arg5) == 0)
                                    goto label_14290717c_2
                                
                                rbp_1 = 0
                            
                            rsi_4 = arg_10
                        
                        rdi_1 = rsi_4
                    
                    temp3_1 = var_58_1
                    var_58_1 -= 1
                while (temp3_1 - 1 s>= 0)
            
            int32_t rax_33
            
            if (rdi_1 == 1)
                if (rbp_1 == 0)
                    goto label_14290712c
                
                rax_33 = sub_142890900(arg1, 1)
            label_142907131:
                
                if (rax_33 == 0)
                labelid_d:
                    rbp = 0
                else
                    rbp = 1
            else if (rbp_1 == 0)
                if (sub_1428f5360(rbx_1, rdi_1) == 0)
                labelid_d:
                    rbp = 0
                else
                    var_68.q = arg5
                    
                    if (sub_14291a950(nullptr, r15_1, rbx_1, arg4, var_68) != 0)
                        rbx_1 = r15_1
                    label_14290712c:
                        rax_33 = sub_1428ccac0(arg1, rbx_1, r13, arg5)
                        goto label_142907131
                    
                label_14290717c:
                    rbp = 0
            else if (sub_142890900(rbx_1, rdi_1) == 0)
            label_14290717c_1:
                rbp = 0
            else
                if (sub_142890970(rbx_1, rbx_1, r13, arg5) != 0)
                    goto label_14290712c
                
            label_14290717c_2:
                rbp = 0
            goto label_14290717e
        
        int32_t* rax_12 = sub_1428cc660()
        r13 = rax_12
        
        if (rax_12 == 0)
            sub_1428cc600(r13)
        else
            if (sub_1428cc700(rax_12, arg4, arg5) != 0)
                goto label_142906f65
            
            sub_1428cc600(r13)
    
    sub_1428d8a60(arg5)
    return zx.q(rbp)

sub_1428a5670(3, 0x75, 0x42, "crypto\bn\bn_exp.c", 0x484)
return 0
