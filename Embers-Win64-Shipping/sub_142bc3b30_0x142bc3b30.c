// 函数: sub_142bc3b30
// 地址: 0x142bc3b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rbp = *(arg4 + 0xa0)
char* rbx = arg1
int32_t result = sub_142b97060(rbp, arg3, arg6)

if (result == 0)
    void var_148
    void* rdx_1 = &var_148
    void* r12_1 = &rbx[zx.q(arg2)]
    void* rdi_1 = &var_148
    uint64_t r14
    r14.b = 1
    int64_t r15
    r15.b = 0
    
    if (rbx u< r12_1)
        while (true)
            if (rdi_1 u< rdx_1)
            label_142bc3c16:
                uint64_t rax_4 = zx.q(*rdi_1)
                
                if ((rax_4 - 0x30).d u< 0xa)
                    rax_4.b -= 0x30
                label_142bc3c53:
                    
                    if (r14.b == 0)
                        *rbx += rax_4.b
                        rbx = &rbx[1]
                    else
                        rax_4.b <<= 4
                        *rbx = rax_4.b
                    
                    r14 = zx.q(1 - r14.b)
                    
                    if (r15.b != 0)
                        break
                    
                    goto label_142bc3c72
                
                if ((rax_4 - 0x61).b u<= 5)
                    rax_4.b -= 0x61
                    goto label_142bc3c53
                
                if ((rax_4 - 0x41).b u<= 5)
                    rax_4.b -= 0x37
                    goto label_142bc3c53
                
                if (rax_4.b u<= 0x20 && test_bit(0x100003601, rax_4))
                label_142bc3c72:
                    rdi_1 += 1
                    
                    if (rbx u>= r12_1)
                        break
                    
                    continue
                else if (rax_4.b == 0x3e)
                    rax_4.b = 0
                    r15.b = 1
                    goto label_142bc3c53
            else
                int32_t rax_2 = sub_1408e52d0(rbp)
                int32_t rcx_2 = *(rbp + 8)
                uint32_t rcx_3 = rcx_2 - rax_2
                
                if (rcx_2 != rax_2)
                    uint32_t r8 = 0x100
                    
                    if (rcx_3 u< 0x100)
                        r8 = rcx_3
                    
                    result, arg5 = sub_142b96990(rbp, &var_148, r8, arg5)
                    
                    if (result != 0)
                        goto label_142bc3cb3
                    
                    rdi_1 = &var_148
                    rdx_1 = &var_148 + zx.q(sub_1408e52d0(rbp)) - zx.q(rax_2)
                    goto label_142bc3c16
            
            result = 0xa0
            goto label_142bc3cb3
    
    result = 0

label_142bc3cb3:
__security_check_cookie(rax_1 ^ &var_168)
return result
