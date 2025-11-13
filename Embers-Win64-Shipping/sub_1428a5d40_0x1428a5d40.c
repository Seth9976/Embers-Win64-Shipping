// 函数: sub_1428a5d40
// 地址: 0x1428a5d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t result_1 = 0
int64_t* r14 = arg3
void* rsi = nullptr
uint64_t result

if (*arg3 == 0)
    result = 1
else
    void* rax_2 = sub_1428a6690(arg1)
    
    if (rax_2 == 0)
        result = 0
    else
        int32_t r13_1 = sub_142898c70(*rax_2)
        int32_t rax_4 = sub_142898c70(*r14)
        
        if (rax_4 s< r13_1)
            r13_1 = rax_4
        
        int64_t r12_1 = sx.q(r13_1)
        void var_98
        
        if (r13_1 s> 0)
            if (r13_1 s>= 0xa)
                void* rax_5 = sub_1428a6730(r12_1 << 3)
                rsi = rax_5
                
                if (rax_5 != 0)
                    goto label_1428a5de6
            else
                rsi = &var_98
            label_1428a5de6:
                int32_t rdi_1 = 0
                
                if (r13_1 s> 0)
                    int64_t rbx_1 = 0
                    
                    do
                        *(rsi + (rbx_1 << 3)) = sub_142898ea0(*rax_2, rdi_1)
                        rdi_1 += 1
                        rbx_1 += 1
                    while (rbx_1 s< r12_1)
        
        sub_1428a5d00(data_143fecac0)
        
        if (r13_1 == 0)
            result = 1
        else if (rsi != 0)
            if (sub_1428a64c0(arg2, r13_1 - 1, sub_1428a6130(arg2, r13_1 - 1)) != 0)
                int32_t rbx_2 = 0
                
                if (r13_1 s<= 0)
                label_1428a5ef7:
                    result_1 = 1
                else
                    int64_t rdi_2 = 0
                    
                    while (true)
                        int32_t* rcx_8 = *r14
                        int32_t rax_9
                        
                        if (rcx_8 != 0)
                            rax_9 = sub_142898c70(rcx_8)
                        
                        int64_t rax_10
                        
                        if (rcx_8 == 0 || rbx_2 s>= rax_9)
                            rax_10 = 0
                        else
                            rax_10 = sub_142898ea0(*r14, rbx_2)
                        
                        int64_t var_a8 = rax_10
                        int32_t* rcx_10 = *(rsi + (rdi_2 << 3))
                        
                        if (rcx_10 != 0)
                            int64_t r10_1 = *(rcx_10 + 0x20)
                            
                            if (r10_1 != 0)
                                if (r10_1(arg2, r14, &var_a8, zx.q(rbx_2), *rcx_10, *(rcx_10 + 8))
                                        == 0)
                                    break
                                
                                rax_10 = var_a8
                        
                        sub_1428a64c0(arg2, rbx_2, rax_10)
                        rbx_2 += 1
                        rdi_2 += 1
                        
                        if (rdi_2 s>= r12_1)
                            goto label_1428a5ef7
            
            if (rsi != &var_98)
                sub_1428a6780(rsi)
            
            result = zx.q(result_1)
        else
            sub_1428a5670((rsi + 0xf).d, (rsi + 0x6e).d, (rsi + 0x41).d, "crypto\ex_data.c", 0x11f)
            result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
