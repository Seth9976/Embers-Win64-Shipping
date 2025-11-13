// 函数: sub_1428de1b0
// 地址: 0x1428de1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int32_t arg_18 = 0

if (sub_1428a40b0(arg2, 0x2c, 1, sub_1428de300, &arg_18) == 0)
    int32_t* var_18
    var_18.d = 0x56
    sub_1428a5670(0x26, 0xbd, 0x96, "crypto\engine\eng_fat.c", var_18.d)
    sub_1428a4880(2)
    return 0

int32_t rdi_1 = arg_18
int32_t rax_2

if ((rdi_1.b & 0x40) != 0)
    rax_2 = sub_1428ce2f0(arg1)

if ((rdi_1.b & 0x40) == 0 || rax_2 != 0)
    int32_t rax_3
    
    if (rdi_1.b s< 0)
        rax_3 = sub_1428ce150(arg1)
    
    if (rdi_1.b s>= 0 || rax_3 != 0)
        int32_t rax_4
        
        if ((rdi_1.b & 1) != 0)
            rax_4 = sub_1428d87a0(arg1)
        
        if ((rdi_1.b & 1) == 0 || rax_4 != 0)
            int32_t rax_5
            
            if ((rdi_1.b & 2) != 0)
                rax_5 = sub_142923140(arg1)
            
            if ((rdi_1.b & 2) == 0 || rax_5 != 0)
                int32_t rax_6
                
                if ((rdi_1.b & 4) != 0)
                    rax_6 = sub_14291a8e0(arg1)
                
                if ((rdi_1.b & 4) == 0 || rax_6 != 0)
                    int32_t rax_7
                    
                    if (test_bit(rdi_1, 0xb))
                        rax_7 = sub_142926ec0(arg1)
                    
                    if (not(test_bit(rdi_1, 0xb)) || rax_7 != 0)
                        int32_t rax_8
                        
                        if ((rdi_1.b & 8) != 0)
                            rax_8 = sub_1428dd2c0(arg1)
                        
                        if ((rdi_1.b & 8) == 0 || rax_8 != 0)
                            int32_t rax_9
                            
                            if (test_bit(rdi_1, 9))
                                rax_9 = sub_1428d65a0(arg1)
                            
                            if (not(test_bit(rdi_1, 9)) || rax_9 != 0)
                                int32_t rax_10
                                
                                if (test_bit(rdi_1, 0xa))
                                    rax_10 = sub_142910ac0(arg1)
                                
                                if (not(test_bit(rdi_1, 0xa)) || rax_10 != 0)
                                    rbx = 1

return zx.q(rbx)
