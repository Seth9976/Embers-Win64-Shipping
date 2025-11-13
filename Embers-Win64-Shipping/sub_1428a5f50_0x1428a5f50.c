// 函数: sub_1428a5f50
// 地址: 0x1428a5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r14 = nullptr
void* rax_2 = sub_1428a6690(arg1)

if (rax_2 != 0)
    int32_t rax_3 = sub_142898c70(*rax_2)
    int64_t rbp_1 = sx.q(rax_3)
    void var_98
    
    if (rax_3 s> 0)
        if (rax_3 s>= 0xa)
            void* rax_4 = sub_1428a6730(rbp_1 << 3)
            r14 = rax_4
            
            if (rax_4 != 0)
                goto label_1428a5fe6
        else
            r14 = &var_98
        label_1428a5fe6:
            int32_t rdi_1 = 0
            
            if (rbp_1 s> 0)
                int64_t rbx_1 = 0
                
                do
                    *(r14 + (rbx_1 << 3)) = sub_142898ea0(*rax_2, rdi_1)
                    rdi_1 += 1
                    rbx_1 += 1
                while (rbx_1 s< rbp_1)
    
    sub_1428a5d00(data_143fecac0)
    int32_t rdi_2 = 0
    
    if (rbp_1 s> 0)
        int64_t rsi_1 = 0
        
        do
            int32_t* rbx_2
            
            if (r14 == 0)
                sub_1428a5c40(data_143fecac0)
                rbx_2 = sub_142898ea0(*rax_2, rdi_2)
                sub_1428a5d00(data_143fecac0)
            else
                rbx_2 = *(r14 + (rsi_1 << 3))
            
            if (rbx_2 != 0 && *(rbx_2 + 0x18) != 0)
                int32_t* rcx_7 = *arg3
                int32_t rax_7
                
                if (rcx_7 != 0)
                    rax_7 = sub_142898c70(rcx_7)
                
                int64_t rdx_4
                
                if (rcx_7 == 0 || rdi_2 s>= rax_7)
                    rdx_4 = 0
                else
                    rdx_4 = sub_142898ea0(*arg3, rdi_2)
                
                (*(rbx_2 + 0x18))(arg2, rdx_4, arg3, zx.q(rdi_2), *rbx_2, *(rbx_2 + 8))
            
            rdi_2 += 1
            rsi_1 += 1
        while (rsi_1 s< rbp_1)
    
    if (r14 != &var_98)
        sub_1428a6780(r14)

int64_t result = sub_142898a10(*arg3)
*arg3 = 0
__security_check_cookie(rax_1 ^ &var_c8)
return result
