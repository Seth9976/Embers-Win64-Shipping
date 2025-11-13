// 函数: sub_1428bf180
// 地址: 0x1428bf180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 != 0)
    int64_t* rax_2 = arg1[1]
    
    if (rax_2 != 0)
    label_1428bf200:
        
        if (sub_1428bf580(rax_2, arg2) != 0)
            int64_t* rcx_1 = arg1[2]
            
            if (arg3 == 0)
                sub_142890900(rcx_1, 0)
            label_1428bf228:
                int64_t* rcx_2 = arg1[3]
                
                if (arg4 == 0)
                    sub_142890900(rcx_2, 0)
                label_1428bf24b:
                    
                    if (sub_142890290(arg1[2]) == 0)
                        sub_1428cc600(arg1[0x12])
                        arg1[0x12] = 0
                        return 1
                    
                    int64_t* rax_7 = sub_1428d8d60()
                    int32_t rdi_1 = 0
                    sub_1428cc600(arg1[0x12])
                    arg1[0x12] = 0
                    
                    if (rax_7 != 0)
                        int32_t* rax_8 = sub_1428cc660()
                        arg1[0x12] = rax_8
                        
                        if (rax_8 != 0)
                            if (sub_1428cc700(rax_8, arg1[2], rax_7) == 0)
                                sub_1428cc600(arg1[0x12])
                                arg1[0x12] = 0
                                sub_1428d8ae0(rax_7)
                                return 0
                            
                            rdi_1 = 1
                    
                    sub_1428d8ae0(rax_7)
                    return zx.q(rdi_1)
                
                if (sub_142890040(rcx_2, arg4) != 0)
                    goto label_1428bf24b
            else if (sub_142890040(rcx_1, arg3) != 0)
                goto label_1428bf228
    else
        rax_2 = sub_1428bfa80(arg1)
        arg1[1] = rax_2
        
        if (rax_2 != 0)
            goto label_1428bf200
else
    sub_1428a5670(0x10, 0x6f, 0x43, "crypto\ec\ec_lib.c", 0x110)

return 0
