// 函数: sub_14294a960
// 地址: 0x14294a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int64_t* rax = sub_1428d8d60()
int32_t rdi_1

if (rax == 0)
    sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
    rdi_1 = 0
else
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    int64_t* rax_2 = sub_1428d8ba0(rax)
    
    if (rax_2 == 0)
        sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
        rdi_1 = 0
    else
        void* rax_3
        
        if (*(arg1 + 8) == 0)
            rax_3 = sub_142890500()
            *(arg1 + 8) = rax_3
        
        if (*(arg1 + 8) == 0 && rax_3 == 0)
            sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
            rdi_1 = 0
        else
            void* rax_4
            
            if (*(arg1 + 0x10) == 0)
                rax_4 = sub_142890500()
                *(arg1 + 0x10) = rax_4
            
            if (*(arg1 + 0x10) == 0 && rax_4 == 0)
                sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                rdi_1 = 0
            else if (arg3 s> 1)
                rdi_1 = 1
                int32_t rsi_1
                
                if (arg3 == 2)
                    if (sub_142890900(rax_1, 0x18) == 0)
                        sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                        rdi_1 = 0
                    else if (sub_142890900(rax_2, 0xb) == 0)
                        sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                        rdi_1 = 0
                    else
                        rsi_1 = arg3
                    label_14294aac0:
                        int32_t var_38
                        var_38.q = rax_2
                        
                        if (sub_14291af90(*(arg1 + 8), arg2, 1, rax_1, var_38, arg4) == 0)
                            sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                            rdi_1 = 0
                        else if (sub_14291af30(arg4, 3, 0) == 0)
                            sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                            rdi_1 = 0
                        else if (sub_142890900(*(arg1 + 0x10), sx.q(rsi_1)) == 0)
                            sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                            rdi_1 = 0
                else if (arg3 != 5)
                    if (sub_142890900(rax_1, 2) == 0)
                        sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                        rdi_1 = 0
                    else
                        if (sub_142890900(rax_2, 1) != 0)
                            rsi_1 = arg3
                            goto label_14294aac0
                        
                        sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                        rdi_1 = 0
                else if (sub_142890900(rax_1, zx.q(arg3 + 5)) == 0)
                    sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                    rdi_1 = 0
                else
                    if (sub_142890900(rax_2, zx.q(arg3 - 2)) != 0)
                        rsi_1 = arg3
                        goto label_14294aac0
                    
                    sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                    rdi_1 = 0
            else
                sub_1428a5670(5, 0x6a, 0x65, "crypto\dh\dh_gen.c", 0x51)
                sub_1428a5670(5, 0x6a, 3, "crypto\dh\dh_gen.c", 0x79)
                rdi_1 = 0

if (rax != 0)
    sub_1428d8a60(rax)
    sub_1428d8ae0(rax)

return zx.q(rdi_1)
