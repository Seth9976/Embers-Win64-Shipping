// 函数: sub_1429071e0
// 地址: 0x1429071e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1b8)
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* r12 = arg5
int32_t r13 = 4
int64_t* var_1a8 = r12
int32_t result_1 = 0
uint64_t result

if (sub_142890210(arg3, 4) != 0)
    sub_1428a5670(3, 0x7d, 0x42, "crypto\bn\bn_exp.c", 0xaf)
    result = 0
else if (sub_142890210(arg2, 4) != 0)
    sub_1428a5670(3, 0x7d, 0x42, "crypto\bn\bn_exp.c", 0xaf)
    result = 0
else if (sub_142890210(arg4, 4) != 0)
    sub_1428a5670(3, 0x7d, 0x42, "crypto\bn\bn_exp.c", 0xaf)
    result = 0
else
    int32_t rax_5 = sub_142890560(arg3)
    
    if (rax_5 != 0)
        sub_1428d8e50(r12)
        int64_t* rax_8 = sub_1428d8ba0(r12)
        int64_t* rax_9 = sub_1428d8ba0(r12)
        int64_t var_158[0x20]
        var_158[0] = rax_9
        void var_198
        
        if (rax_9 != 0)
            sub_14293aa30(&var_198)
            int64_t* rdx = arg4
            
            if (arg4[2].d == 0)
                goto label_142907346
            
            if (sub_142890040(rax_8, rdx) != 0)
                rax_8[2].d = 0
                rdx = rax_8
            label_142907346:
                
                if (sub_14293aa80(&var_198, rdx) s> 0 && sub_1429084c0(rax_9, arg2, arg4, r12) != 0)
                    if (sub_142890300(rax_9) == 0)
                        uint64_t rbx_1 = 1
                        int32_t var_1c8
                        
                        if (rax_5 s<= 0x29f)
                            if (rax_5 s> 0xef)
                                r13 = 5
                                goto label_1429073d1
                            
                            if (rax_5 s> 0x4f)
                                goto label_1429073d1
                            
                            r13 = 1
                            
                            if (rax_5 s> 0x17)
                                r13 = 3
                            
                            if (rax_5 s> 0x17)
                                goto label_1429073d1
                            
                        label_14290744e:
                            int32_t var_1b4_1 = 1
                            int32_t rdi_3 = 1
                            int32_t r14_2 = rax_5 - 1
                            
                            if (sub_142890900(arg1, 1) != 0)
                                while (true)
                                    if (sub_142890240(arg3, r14_2) != 0)
                                        int32_t r15_1 = 0
                                        int32_t rsi_2 = 1
                                        
                                        if (r13 u> 1)
                                            int32_t i = r14_2 - 1
                                            
                                            while (i s>= 0)
                                                if (sub_142890240(arg3, i) != 0)
                                                    char rcx_26 = rbx_1.b - r15_1.b
                                                    r15_1 = rbx_1.d
                                                    rsi_2 = rsi_2 << rcx_26 | 1
                                                
                                                rbx_1 = zx.q(rbx_1.d + 1)
                                                i -= 1
                                                
                                                if (rbx_1.d s>= r13)
                                                    break
                                            
                                            r12 = var_1a8
                                        
                                        if (var_1b4_1 == 0)
                                            int32_t i_1 = 0
                                            
                                            if (r15_1 + 1 s> 0)
                                                do
                                                    var_1c8.q = r12
                                                    
                                                    if (sub_14293ad70(arg1, arg1, arg1, &var_198, 
                                                            var_1c8) == 0)
                                                        goto label_14290757a
                                                    
                                                    i_1 += 1
                                                while (i_1 s< r15_1 + 1)
                                        
                                        var_1c8.q = r12
                                        
                                        if (sub_14293ad70(arg1, arg1, var_158[sx.q(rsi_2) s>> 1], 
                                                &var_198, var_1c8) == 0)
                                            break
                                        
                                        int32_t r14_3 = r14_2 - r15_1
                                        rdi_3 = 0
                                        var_1b4_1 = 0
                                        r14_2 = r14_3 - 1
                                        rbx_1 = 1
                                        
                                        if (r14_3 s> 0)
                                            continue
                                    else
                                        if (rdi_3 == 0)
                                            var_1c8.q = r12
                                            
                                            if (sub_14293ad70(arg1, arg1, arg1, &var_198, var_1c8)
                                                    == 0)
                                                break
                                        
                                        if (r14_2 != 0)
                                            r14_2 -= 1
                                            continue
                                    
                                    result_1 = 1
                                    break
                        else
                            r13 = 6
                        label_1429073d1:
                            var_1c8.q = r12
                            
                            if (sub_14293ad70(rax_8, rax_9, rax_9, &var_198, var_1c8) != 0)
                                int64_t rdi_2 = sx.q(1 << (r13.b - 1))
                                
                                if (rdi_2 s> 1)
                                    do
                                        int64_t* rax_16 = sub_1428d8ba0(r12)
                                        var_158[rbx_1] = rax_16
                                        
                                        if (rax_16 == 0)
                                            goto label_14290757a
                                        
                                        var_1c8.q = r12
                                        void var_160
                                        
                                        if (sub_14293ad70(rax_16, *(&var_160 + (rbx_1 << 3)), 
                                                rax_8, &var_198, var_1c8) == 0)
                                            goto label_14290757a
                                        
                                        rbx_1 += 1
                                    while (rbx_1 s< rdi_2)
                                    
                                    rbx_1 = 1
                                
                                goto label_14290744e
                    else
                        sub_142890900(arg1, 0)
                        result_1 = 1
        
    label_14290757a:
        sub_1428d8a60(r12)
        sub_14293a9e0(&var_198)
        result = zx.q(result_1)
    else
        int32_t result_2 = 1
        
        if (sub_14288fa30(arg4, 1) == 0)
            result_2 = sub_142890900(arg1, 1)
        else
            sub_142890900(arg1, 0)
        
        result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
