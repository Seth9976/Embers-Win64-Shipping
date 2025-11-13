// 函数: sub_142208ef0
// 地址: 0x142208ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141f66020(arg4)

if (rax == 0)
label_142208f86:
    rax.b = 0
    return rax

int64_t* rbx_1 = *(*rax + (sx.q(*(arg3 + 0x48)) << 3))
void* rax_2 = sub_1421b7c40(arg2, arg1)
int32_t var_38
int32_t var_34
sub_142337b80(rbx_1, arg5, &var_38, &var_34)
int32_t rdi_1 = 0
int64_t rax_3 = sx.q(*(arg1 + 0x80))
int16_t* rbp_2 = sx.q(var_38) * 0xe8 + *rbx_1

if (rax_3.d s> 0)
    rax = *(arg1 + 0x78)
    int64_t rcx_4 = 0
    
    while (*rax != zx.d(*rbp_2))
        rcx_4 += 1
        rax += 4
        
        if (rcx_4 s>= rax_3)
            goto label_142208f86

int32_t r13 = var_34
void* rax_4 = sub_141f66050(arg4, 0)
void* rsi_1 = rax_4

if (rax_4 == 0 || *(rbp_2 + 0x3c) s<= 0)
label_142209033:
    rax_4.b = 0
else
    while (true)
        int64_t rcx_7 = sx.q(sub_1422c5b30(rsi_1, zx.q(*(rbp_2 + 0x10) + r13), rdi_1))
        uint64_t rbx_2 = zx.q(*(*(rbp_2 + 0x28) + (rcx_7 << 1)))
        
        if (sub_140d3e110(arg4 + 0x438) != 0)
            rbx_2 = zx.q(*(*(arg4 + 0x4b0) + (rbx_2 << 2)))
        
        if (*(rax_2 + 0x14) != 0)
            void* rdx_5 = *(rax_2 + 0x20)
            void* rcx_9 = rdx_5 + (sx.q(*(rax_2 + 0x18)) << 2)
            rax_4 = rdx_5
            
            if (rdx_5 u< rcx_9)
                while (*rax_4 != rbx_2.d)
                    rax_4 += 4
                    
                    if (rax_4 u>= rcx_9)
                        goto label_14220902c
            
            if (rdx_5 u>= rcx_9 || ((rax_4 - rdx_5) s>> 2).d == 0xffffffff)
            label_14220902c:
                rdi_1 += 1
                
                if (rdi_1 s>= *(rbp_2 + 0x3c))
                    goto label_142209033
                
                continue
        
        if (arg6 != 0)
            *arg6 = rbx_2.d
        
        rax_4.b = 1
        break

return rax_4
