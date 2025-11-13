// 函数: sub_1428c1f30
// 地址: 0x1428c1f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
__chkstk(0x38)
void* rbp = arg2
int32_t* rax_1 = sub_1428f35e0(rbp, sub_14060aa60(arg1))
int32_t* rsi = rax_1

if (sub_142898c70(rax_1) s<= 0)
    int32_t rax_3
    int32_t r8
    
    if (rsi != 0)
        rax_3 = 0x4a
        r8 = 0x77
    else
        rax_3 = (&rsi[0x12]).d
        r8 = (&rsi[0x1e]).d
    
    sub_1428a5670(0xe, 0x7b, r8, "crypto\conf\conf_ssl.c", rax_3)
    sub_1428a4880(2)
    sub_1428c1e00()
    return 0

int64_t rbx_1 = sx.q(sub_142898c70(rsi))
sub_1428c1e00()
int64_t rax_6 = sub_1428a6a70(rbx_1 * 0x18)
int64_t r12_1 = 0
data_143fecb80 = rax_6
data_143fecb88 = rbx_1

if (rbx_1 != 0)
    void* rcx_7 = nullptr
    void* arg_18 = nullptr
    
    while (true)
        int64_t* r15_1 = rcx_7 + rax_6
        void* rax_7 = sub_142898ea0(rsi, r12_1.d)
        int32_t* rax_8 = sub_1428f35e0(rbp, *(rax_7 + 0x10))
        
        if (sub_142898c70(rax_8) s<= 0)
            int32_t rax_18
            int32_t rdi_2
            
            if (rax_8 != 0)
                rax_18 = 0x5d
                rdi_2 = 0x75
            else
                rdi_2 = (rax_8 + 0x76).d
                rax_18 = rdi_2 - 0x1c
            
            sub_1428a5670(0xe, 0x7b, rdi_2, "crypto\conf\conf_ssl.c", rax_18)
            *(rax_7 + 8)
            int32_t var_58_2
            var_58_2.q = *(rax_7 + 0x10)
            sub_1428a4880(4)
            goto label_1428c21e6
        
        int64_t rax_10 = sub_1428a6ba0(*(rax_7 + 8))
        *r15_1 = rax_10
        
        if (rax_10 == 0)
        label_1428c21e6:
            sub_1428c1e00()
            return 0
        
        int64_t rbp_1 = sx.q(sub_142898c70(rax_8))
        int64_t rax_12 = sub_1428a6a70(rbp_1 << 4)
        r15_1[1] = rax_12
        
        if (rax_12 == 0)
            goto label_1428c21e6
        
        int64_t rbx_3 = 0
        r15_1[2] = rbp_1
        
        if (rbp_1 != 0)
            int64_t rdi_1 = 0
            
            do
                void* rax_13 = sub_142898ea0(rax_8, rbx_3.d)
                int64_t* r14_1 = r15_1[1]
                char* rax_14 = strchr(*(rax_13 + 8), 0x2e)
                void* rax_15
                
                if (rax_14 == 0)
                    rax_15 = *(rax_13 + 8)
                else
                    rax_15 = &rax_14[1]
                
                *(r14_1 + rdi_1) = sub_1428a6ba0(rax_15)
                int64_t rax_17 = sub_1428a6ba0(*(rax_13 + 0x10))
                bool cond:1_1 = *(r14_1 + rdi_1) == 0
                *(r14_1 + rdi_1 + 8) = rax_17
                
                if (cond:1_1)
                    goto label_1428c21e6
                
                if (rax_17 == 0)
                    goto label_1428c21e6
                
                rbx_3 += 1
                rdi_1 += 0x10
            while (rbx_3 u< rbp_1)
            
            rsi = rax_1
        
        r12_1 += 1
        rcx_7 = arg_18 + 0x18
        arg_18 = rcx_7
        
        if (r12_1 u>= data_143fecb88)
            break
        
        rax_6 = data_143fecb80
        rbp = arg2

return 1
