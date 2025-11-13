// 函数: sub_1428e20f0
// 地址: 0x1428e20f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rsi = arg2
int32_t r14 = 0
int32_t* r12 = nullptr
int32_t* rax = sub_1428e3030(arg1, data_143b85e30)
int32_t* rbx = rax
void* const rdx_1 = &data_14351356c
*arg4 = 0
*arg5 = 0
void* rax_2 = *(rbx + 0x30)

if (rax_2 != 0)
    rdx_1 = rax_2

int64_t rax_3 = sub_1428e2400(rbx, rdx_1)

if (rax_3 != 0)
    int32_t r13_1 = 0
    int64_t i_2 = CertEnumCertificatesInStore(rax_3, 0)
    int64_t i_1 = i_2
    
    if (i_2 != 0)
        int64_t i
        
        do
            int64_t var_48 = *(i_1 + 8)
            int64_t* rax_5 = sub_1428a2d00(nullptr, &var_48, *(i_1 + 0x10))
            
            if (rax_5 != 0)
                if (sub_142898c70(arg3) s<= 0)
                label_1428e22ca:
                    
                    if (sub_1428ae8e0(rax_5, 1, 0) == 0)
                    label_1428e221d:
                        sub_1428a2c50(rax_5)
                    else
                        int64_t* rax_16 = sub_1428e0ab0(rbx, i_1)
                        
                        if (rax_16 == 0)
                        label_1428e221d_1:
                            sub_1428a2c50(rax_5)
                        else
                            int64_t rax_17 = CertDuplicateCertificateContext(i_1)
                            int32_t rdx_9 = data_143b85e3c
                            *rax_16 = rax_17
                            sub_1428a2ce0(rax_5, rdx_9, rax_16)
                            
                            if (r12 == 0)
                                r12 = sub_142898ba0()
                            
                            sub_142898d50(r12, rax_5)
                else
                    int32_t rbx_1 = 0
                    
                    if (sub_142898c70(arg3) s> 0)
                        while (true)
                            if (sub_1428a32a0(sub_142898ea0(arg3, rbx_1), sub_1428a38f0(rax_5))
                                    == 0)
                                rbx = rax
                                break
                            
                            rbx_1 += 1
                            
                            if (rbx_1 s>= sub_142898c70(arg3))
                                goto label_1428e221d_2
                        
                        goto label_1428e22ca
                    
                label_1428e221d_2:
                    sub_1428a2c50(rax_5)
                
                rbx = rax
            else
                sub_1428df6c0(rbx, "Can't Parse Certificate %d\n", zx.q(r13_1))
            
            r13_1 += 1
            i = CertEnumCertificatesInStore(rax_3, i_1)
            i_1 = i
        while (i != 0)
        rsi = arg2
    
    CertCloseStore(rax_3, 0)
    
    if (r12 != 0)
        int32_t rax_12 = (*(rbx + 0x48))(arg1, rsi, r12)
        
        if (sub_142898c70(r12) s> 0)
            int32_t rax_20
            
            do
                void* rax_14 = sub_142898ea0(r12, r14)
                
                if (r14 != rax_12)
                    int64_t* rax_19 = sub_1428a2c90(rax_14, data_143b85e3c)
                    
                    if (rax_19 != 0)
                        CryptDestroyKey(rax_19[2])
                        CryptReleaseContext(rax_19[1], 0)
                        int64_t rcx_23 = *rax_19
                        
                        if (rcx_23 != 0)
                            CertFreeCertificateContext(rcx_23)
                        
                        sub_1428a6780(rax_19)
                    
                    sub_1428a2c50(rax_14)
                else
                    *arg4 = rax_14
                
                r14 += 1
                rax_20 = sub_142898c70(r12)
            while (r14 s< rax_20)
        
        sub_142898a10(r12)
        void* rcx_28 = *arg4
        
        if (rcx_28 != 0)
            int32_t* rax_22 = sub_1428e0d30(arg1, sub_1428a2c90(rcx_28, data_143b85e3c))
            int32_t rdx_15 = data_143b85e3c
            *arg5 = rax_22
            sub_1428a2ce0(*arg4, rdx_15, 0)
            return 1

return 0
