// 函数: sub_1428ab860
// 地址: 0x1428ab860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t rdi = *arg2
int32_t r10 = 0x100000

if (arg3 s<= 0x100000)
    r10 = arg3

int64_t var_28 = rdi
int32_t* arg_10 = nullptr
int32_t result = sub_1428c4260(&arg_10, &var_28, r10, &data_143504af0, arg4, arg5, arg6, arg7)

if (result s> 0)
    int64_t* rbx_1 = *arg1
    
    if (rbx_1 != 0)
        sub_1428a71f0(rbx_1[2])
        sub_142898cb0(*rbx_1, sub_1428abed0)
        sub_1428a6780(rbx_1[3])
        sub_1428a6780(rbx_1)
        *arg1 = 0
    
    void** rax_4 = sub_1428a6a70(0x28)
    
    if (rax_4 == 0)
    label_1428abaaf:
        sub_1428a5670(0xd, 0xab, 0x41, "crypto\x509\x_name.c", 0x69)
        
        if (rax_4 != 0)
            sub_142898a10(*rax_4)
            sub_1428a6780(rax_4)
        
        goto label_1428abae2
    
    void* rax_5 = sub_142898ba0()
    *rax_4 = rax_5
    
    if (rax_5 == 0)
        goto label_1428abaaf
    
    int64_t* rax_6 = sub_1428a7510()
    rax_4[2] = rax_6
    
    if (rax_6 == 0)
        goto label_1428abaaf
    
    rax_4[1].d = 1
    int64_t rax_7 = sub_1428a7260(rax_6, var_28 - rdi)
    int32_t result_1
    
    if (rax_7 != 0)
        memcpy(*(rax_4[2] + 8), rdi, var_28.d - rdi.d)
        int32_t rsi_1 = 0
        
        if (sub_142898c70(arg_10) s> 0)
            int32_t rax_14
            
            do
                int32_t* rax_9 = sub_142898ea0(arg_10, rsi_1)
                int32_t rbx_2 = 0
                
                if (sub_142898c70(rax_9) s> 0)
                    int32_t rax_13
                    
                    do
                        void* rax_11 = sub_142898ea0(rax_9, rbx_2)
                        *(rax_11 + 0x10) = rsi_1
                        
                        if (sub_142898d50(*rax_4, rax_11) == 0)
                            goto label_1428aba8b
                        
                        sub_142898dc0(rax_9, rbx_2, 0)
                        rbx_2 += 1
                        rax_13 = sub_142898c70(rax_9)
                    while (rbx_2 s< rax_13)
                
                rsi_1 += 1
                rax_14 = sub_142898c70(arg_10)
            while (rsi_1 s< rax_14)
        
        result_1 = sub_1428ac270(rax_4)
    
    if (rax_7 == 0 || result_1 == 0)
    label_1428aba8b:
        sub_1428c3d60(rax_4, &data_143504b58)
    label_1428abae2:
        sub_142898cb0(arg_10, sub_1428ac250)
        sub_1428a5670(0xd, 0x9e, 0x3a, "crypto\x509\x_name.c", 0xce)
        return 0
    
    sub_142898cb0(arg_10, sub_1428ac230)
    rax_4[1].d = 0
    result = result_1
    int64_t rcx_18 = var_28
    *arg1 = rax_4
    *arg2 = rcx_18

return result
