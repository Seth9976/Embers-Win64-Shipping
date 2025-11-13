// 函数: sub_1428a62f0
// 地址: 0x1428a62f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rsi = nullptr
void* result = sub_1428a6690(arg1)

if (result != 0)
    *arg3 = 0
    int32_t rax_2 = sub_142898c70(*result)
    int64_t r15_1 = sx.q(rax_2)
    void var_98
    
    if (rax_2 s> 0)
        if (r15_1.d s>= 0xa)
            void* rax_3 = sub_1428a6730(r15_1 << 3)
            rsi = rax_3
            
            if (rax_3 != 0)
                goto label_1428a6394
        else
            rsi = &var_98
        label_1428a6394:
            int32_t rdi_1 = 0
            
            if (r15_1.d s> 0)
                int64_t rbx_1 = 0
                
                do
                    *(rsi + (rbx_1 << 3)) = sub_142898ea0(*result, rdi_1)
                    rdi_1 += 1
                    rbx_1 += 1
                while (rbx_1 s< r15_1)
    
    sub_1428a5d00(data_143fecac0)
    
    if (r15_1.d s<= 0 || rsi != 0)
        int32_t rdi_2 = 0
        
        if (r15_1 s> 0)
            int64_t rbx_2 = 0
            
            do
                void* rax_5 = *(rsi + (rbx_2 << 3))
                
                if (rax_5 != 0 && *(rax_5 + 0x10) != 0)
                    int32_t* rcx_5 = *arg3
                    int32_t rax_6
                    
                    if (rcx_5 != 0)
                        rax_6 = sub_142898c70(rcx_5)
                    
                    int64_t rdx_4
                    
                    if (rcx_5 == 0 || rdi_2 s>= rax_6)
                        rdx_4 = 0
                    else
                        rdx_4 = sub_142898ea0(*arg3, rdi_2)
                    
                    int32_t* r10_1 = *(rsi + (rbx_2 << 3))
                    (*(r10_1 + 0x10))(arg2, rdx_4, arg3, zx.q(rdi_2), *r10_1, *(r10_1 + 8))
                
                rdi_2 += 1
                rbx_2 += 1
            while (rbx_2 s< r15_1)
        
        if (rsi != &var_98)
            sub_1428a6780(rsi)
        
        result = 1
    else
        sub_1428a5670((rsi + 0xf).d, (rsi + 0x70).d, (rsi + 0x41).d, "crypto\ex_data.c", 0xea)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_c8)
return result
