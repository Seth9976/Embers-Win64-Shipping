// 函数: sub_142696b80
// 地址: 0x142696b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t var_238[0x40]
int32_t var_138[0x40]
sub_141de9540(*(arg1 + 0x338), &var_238, &var_138, 0x40)
int64_t* rbx = *arg2
uint64_t rdx_1 = sx.q(arg2[1].d)
void* rbp_2 = &rbx[rdx_1 * 4]

if (rbx != rbp_2)
    do
        if (rbx[1].d != 0)
            void* rsi_1 = *rbx
            void* rax_2 = sub_140d3c6e0(rsi_1 + 0xc)
            void* const rdi_1 = rax_2
            
            if (rax_2 == 0)
                rdi_1 = nullptr
            else
                void* rax_3 = sub_1425492f0()
                
                if (rax_3 == 0)
                    rdi_1 = nullptr
                else
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rdi_1 + 0x38)
                            || *(*(rdi_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rdi_1 = nullptr
            
            int32_t rax_6 = sub_142656a30(arg1, rdi_1)
            
            if (rax_6 u<= 0x3f)
                int64_t rcx_4 = sx.q(rax_6)
                *(rsi_1 + 4) = var_238[rcx_4]
                *(rsi_1 + 8) = var_138[rcx_4]
        
        rbx = &rbx[4]
    while (rbx != rbp_2)
    
    rbx = *arg2
    rdx_1 = zx.q(arg2[1].d)

char var_248
int64_t result = sub_14266f780(rbx, rdx_1.d, var_248)
__security_check_cookie(rax_1 ^ &var_268)
return result
