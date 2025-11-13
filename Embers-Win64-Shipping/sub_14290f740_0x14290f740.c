// 函数: sub_14290f740
// 地址: 0x14290f740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = -1
int64_t r12 = 0
int32_t r13 = 0
int64_t* result = sub_14293bfc0(arg1)

if (result == 0)
    return result

int64_t* arg_10

if (sub_14293bfe0(arg1, nullptr, nullptr, &arg_10) != 0)
    int32_t rax_1 = sub_1428a96d0(*arg_10)
    
    if (rax_1 == 6)
        return 1
    
    if (rax_1 != 0x397)
        sub_1428a5670(4, 0x9f, 0xa2, "crypto\rsa\rsa_ameth.c", 0x38c)
        return 0xffffffff
    
    int64_t* rax_4 = sub_1428cd3c0(&data_1434ea630, arg_10[1])
    int64_t* rbx_1 = rax_4
    
    if (rax_4 == 0)
        sub_1428a5670(4, 0x9f, 0xa1, "crypto\rsa\rsa_ameth.c", 0x393)
        rbx_1 = nullptr
    else
        int64_t* rsi_1 = rax_4[1]
        int64_t rax_6
        
        if (rsi_1 != 0)
            if (sub_1428a96d0(*rsi_1) == 0x38f)
                rax_6 = sub_1428cd3c0(&data_143511f80, rsi_1[1])
            else
                rax_6 = 0
            
            rbx_1[3] = rax_6
        
        if (rsi_1 == 0 || rax_6 != 0)
            int64_t rax_8 = sub_14290f6d0(rbx_1[3])
            
            if (rax_8 != 0)
                int64_t rax_9 = sub_14290f6d0(*rbx_1)
                
                if (rax_9 != 0)
                    int64_t* rsi_2 = rbx_1[2]
                    
                    if (rsi_2 == 0)
                        goto label_14290f95f
                    
                    if (sub_1428a96d0(*rsi_2) == 0x3a7)
                        int32_t* rax_11 = rsi_2[1]
                        
                        if (*rax_11 == 4)
                            void* rax_12 = *(rax_11 + 8)
                            r12 = *(rax_12 + 8)
                            *(rax_12 + 8) = 0
                            r13 = **(rsi_2[1] + 8)
                        label_14290f95f:
                            
                            if (sub_1428973a0(result, 0xffffffff, 0x1001, 4, 0) s> 0)
                                int32_t var_38_1 = 0
                                
                                if (sub_1428bcb30(result, 6, 0x300, 0x1009, 0, rax_9) s> 0)
                                    var_38_1.q = rax_8
                                    
                                    if (sub_1428973a0(result, 0x3f8, 0x1005, 0, var_38_1) s> 0
                                            && sub_1428bcb30(result, 6, 0x300, 0x100a, r13, r12)
                                            s> 0)
                                        rdi = 1
                        else
                            sub_1428a5670(4, 0x9f, 0xa0, "crypto\rsa\rsa_ameth.c", 0x3a6)
                    else
                        sub_1428a5670(4, 0x9f, 0xa3, "crypto\rsa\rsa_ameth.c", 0x3a2)
        else
            sub_142897980(rbx_1)
            sub_1428a5670(4, 0x9f, 0xa1, "crypto\rsa\rsa_ameth.c", 0x393)
            rbx_1 = nullptr
    
    sub_142897980(rbx_1)

return zx.q(rdi)
