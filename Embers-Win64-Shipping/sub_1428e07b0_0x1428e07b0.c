// 函数: sub_1428e07b0
// 地址: 0x1428e07b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
__chkstk(0x40)
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_28 = __security_cookie ^ &var_28
int32_t rax_2 = arg1[0xf]
int64_t result_1 = 0
int64_t result

if (rax_2 s<= 0)
    result = result_1
else if (rax_2 s<= 2)
    result = sub_1428e2400(arg1, nullptr)
    
    if (result != 0)
        int64_t rax_15 = sub_1428e05b0(arg1, arg2, result)
        
        if (rax_15 != 0)
            result_1 = sub_1428e0ab0(arg1, rax_15)
            CertFreeCertificateContext(rax_15)
        
        CertCloseStore(result, 0)
        result = result_1
else
    if (rax_2 == 3)
        int32_t rax_3 = MultiByteToWideChar(0, 0, arg2, 0xffffffff, nullptr, 0)
        
        if (rax_3 != 0)
            uint64_t rax_5 = zx.q(rax_3) * 2
            int64_t rcx = rax_5 + 0xf
            
            if (rcx u<= rax_5)
                rcx = 0xffffffffffffff0
            
            int64_t rcx_1 = rcx & 0xfffffffffffffff0
            __chkstk(rcx_1)
            void var_58
            void* rsp_1 = &var_58 - rcx_1
            *(rsp_1 + 0x28) = rax_3
            *(rsp_1 + 0x20) = rsp_1 + 0x30
            
            if (MultiByteToWideChar(nop) != 0)
                *(arg1 + 0x18)
                *(rsp_1 + 0x28) = 0
                *(rsp_1 + 0x20) = 0
                int32_t rax_8 = MultiByteToWideChar(nop)
                
                if (rax_8 != 0)
                    uint64_t rax_10 = zx.q(rax_8) * 2
                    int64_t rcx_4 = rax_10 + 0xf
                    
                    if (rcx_4 u<= rax_10)
                        rcx_4 = 0xffffffffffffff0
                    
                    int64_t rcx_5 = rcx_4 & 0xfffffffffffffff0
                    __chkstk(rcx_5)
                    *(arg1 + 0x18)
                    void* rsp_2 = rsp_1 - rcx_5
                    *(rsp_2 + 0x28) = rax_8
                    *(rsp_2 + 0x20) = rsp_2 + 0x30
                    
                    if (MultiByteToWideChar(nop) != 0)
                        uint64_t r9_4 = zx.q(arg1[8])
                        *(rsp_2 + 0x20) = arg1[4]
                        result_1 = sub_1428e0b20(arg1, rsp_1 + 0x30, rsp_2 + 0x30, r9_4)
    
    result = result_1

__security_check_cookie(var_28 ^ &var_28)
return result
