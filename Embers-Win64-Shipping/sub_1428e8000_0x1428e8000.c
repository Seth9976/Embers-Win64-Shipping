// 函数: sub_1428e8000
// 地址: 0x1428e8000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* rax = sub_1428a3930(arg1)
int32_t var_28 = 0
int32_t var_34 = 0x16
int32_t var_48 = 2
int32_t var_38
int32_t* var_40 = &var_38
int32_t i_2 = sub_1428e73d0(rax, 0xd, 0xffffffff)
int32_t i_1 = i_2

if (i_2 != 0xffffffff)
    int32_t i
    
    do
        int32_t rdi_1 = 0
        char* arg_18
        int32_t rax_3 = sub_1428f6be0(&arg_18, sub_1428e7030(sub_1428e7380(rax, i_1)))
        int64_t r8_1 = sx.q(rax_3)
        
        if (rax_3 s< 0)
            return 0x11
        
        char* rbx_1 = arg_18
        int64_t rcx_4 = r8_1
        
        if (rax_3 s> 0)
            while (rbx_1[rcx_4 - 1] == 0)
                r8_1 = zx.q(r8_1.d - 1)
                rcx_4 -= 1
                
                if (rcx_4 s<= 0)
                    break
        
        int64_t r10_1 = sx.q(r8_1.d)
        int64_t rax_4 = -1
        
        do
            rax_4 += 1
        while (rbx_1[rax_4] != 0)
        
        if (r10_1 != rax_4)
            sub_1428a6780(rbx_1)
            return 0x35
        
        int32_t r9_1 = 0
        char* rcx_5 = nullptr
        
        if (r8_1.d s<= 0)
        label_1428e8196:
            sub_1428a6780(rbx_1)
        else
            while (true)
                char rdx_2 = *(rcx_5 + rbx_1)
                
                if (rdx_2 - 0x61 u> 0x19 &&
                        (rdx_2 - 0x30 u> 0x2f || not(test_bit(0x87fffffe03ff, zx.q(rdx_2 - 0x30)))))
                    if (rcx_5 s<= 0)
                        goto label_1428e8196
                    
                    if (r9_1 s>= (r8_1 - 1).d)
                        goto label_1428e8196
                    
                    if (rdx_2 != 0x2d)
                        if (rdx_2 != 0x2e)
                            goto label_1428e8196
                        
                        char rax_9 = *(rcx_5 + rbx_1 + 1)
                        
                        if (rax_9 == rdx_2)
                            goto label_1428e8196
                        
                        if (*(rcx_5 + rbx_1 - 1) == 0x2d)
                            goto label_1428e8196
                        
                        if (rax_9 == 0x2d)
                            goto label_1428e8196
                        
                        rdi_1 = 1
                
                r9_1 += 1
                rcx_5 = &rcx_5[1]
                
                if (rcx_5 s>= r10_1)
                    if (rdi_1 == 0)
                        goto label_1428e8196
                    
                    if (r8_1.d != 0)
                        var_38 = r8_1.d
                        char* var_30_1 = rbx_1
                        int32_t rax_10 = sub_1428e84b0(&var_48, arg2)
                        sub_1428a6780(rbx_1)
                        
                        if (rax_10 != 0)
                            return zx.q(rax_10)
                    
                    break
        
        i = sub_1428e73d0(rax, 0xd, i_1)
        i_1 = i
    while (i != 0xffffffff)

return 0
