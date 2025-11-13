// 函数: sub_142bb4c00
// 地址: 0x142bb4c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg3 + 8)
void* r13 = arg3
uint8_t r14_1 = (arg4 u>> 7).b & 1
void* rbx = *(rdi + 0x90)
int64_t r12 = *(rdi + 0xa0)
int32_t r15 = arg4
void* var_48 = rbx
int64_t var_40 = r12
uint8_t var_58 = r14_1
memset(arg1, 0, 0x140)
int32_t rax_1

if ((r15.b & 2) != 0)
    if (arg5 != 0)
        goto label_142bb4ee0
    
label_142bb4ed1:
    void* rbx_1 = **(r13 + 0xf0)
    sub_142b92d20(rbx_1)
    arg1[3] = rbx_1
label_142bb4ee0:
    arg1[4].d = r15
    rax_1 = 0
    *arg1 = rdi
    arg1[1] = arg2
    arg1[2] = r13
    arg1[5] = r12
    arg1[0x26] = 0
    arg1[0x27] = 0
else
    if (arg5 != 0)
        goto label_142bb4ee0
    
    rax_1 = arg2[0x33].d
    r13.b = 0
    int32_t rcx
    
    if (rax_1 s>= 0)
        rcx = *(arg2 + 0x19c)
    
    if (rax_1 s< 0 || rcx s< 0)
        rax_1 = sub_142bb5710(arg2, r14_1)
        
        if (rax_1 == 0)
        label_142bb4cbe:
            int64_t* rdi_1 = arg2[0x32]
            
            if (rdi_1 == 0)
                return 0x99
            
            if (*(rbx + 0x78) != 0x28)
                r12.b = 0
                r14_1 = 0
                *(rdi_1 + 0x372) = 0
            else
                int32_t rax_3 = r15 & 0xf0000
                r12.b = rax_3 != 0x20000
                
                if (rax_3 == 0x20000 || (r15 & 0x70000) != 0)
                    r14_1 = 0
                else
                    r14_1 = 1
                
                if (rax_3 == 0x20000 || not(test_bit(r15, 0x12)))
                    *(rdi_1 + 0x372) = 0
                else
                    *(rdi_1 + 0x372) = 1
            
            if (*(rbx + 0x78) != 0x28)
                rbx.b = (r15 & 0xf0000) != 0x20000
            else if (r12.b != 0 || (r15 & 0xf0000) == 0x20000)
                rbx.b = 0
            else
                rbx.b = 1
            
            rax_1 = sub_142bad3f0(rdi_1, rdi, arg2)
            
            if (rax_1 == 0)
                if (*(var_48 + 0x78) == 0x28)
                    if (r12.b != *(rdi_1 + 0x371))
                        *(rdi_1 + 0x371) = r12.b
                        r13.b = 1
                    
                    if (r14_1 != *(rdi_1 + 0x376))
                        *(rdi_1 + 0x376) = r14_1
                        r13.b = 1
                
                if (rbx.b == rdi_1[0x6e].b)
                    if (r13.b != 0)
                        goto label_142bb4dc2
                    
                label_142bb4e28:
                    char rdx_4 = *(rdi_1 + 0x1f4)
                    int32_t rcx_7 = r15 | 2
                    
                    if ((rdx_4 & 1) == 0)
                        rcx_7 = r15
                    
                    r15 = rcx_7
                    
                    if ((rdx_4 & 2) != 0)
                        __builtin_memcpy(&rdi_1[0x38], 
                            "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x"
                        "00\x00\x01\x00\x00\x00\x40\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x44"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x09\x00\x03\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x01\x00\x01\x00\x01\x00\x00\x00", 
                            0x44)
                    
                    r13 = arg3
                    r12 = var_40
                    *(rdi_1 + 0x315) = (rcx_7 u>> 7).b & 1
                    arg1[0x1d] = rdi_1
                    arg1[0x1e] = rdi_1[0x47]
                    goto label_142bb4ed1
                
                rdi_1[0x6e].b = rbx.b
            label_142bb4dc2:
                uint64_t r14_2 = 0
                
                if (*(arg2 + 0x134) u> 0)
                    do
                        *(arg2[0x27] + (r14_2 << 2)) =
                            sub_142b93e80(sx.d(*(*(rdi + 0x3d8) + (r14_2 << 1))), *(arg2 + 0x74))
                        r14_2 = zx.q(r14_2.d + 1)
                    while (r14_2.d u< *(arg2 + 0x134))
                    
                    r15 = arg4
                
                rax_1 = sub_142bb5bc0(arg2, var_58)
                
                if (rax_1 == 0)
                    goto label_142bb4e28
    else if (rax_1 == 0)
        if (rcx != 0)
            return rcx
        
        goto label_142bb4cbe

return rax_1
