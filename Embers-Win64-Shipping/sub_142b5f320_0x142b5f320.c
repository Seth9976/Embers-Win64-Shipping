// 函数: sub_142b5f320
// 地址: 0x142b5f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3
int32_t rdx = *(arg2 + 0x2c0)
*(arg1 + 0x2c0) = rdx

if (rdx s<= 0)
    goto label_142b5f36c

if (sub_142b5ec70(arg1, rdx, arg3).b != 0)
    memcpy(*(arg1 + 0x2b8), *(arg2 + 0x2b8), *(arg1 + 0x2c0) << 2)
label_142b5f36c:
    int64_t* rcx_1 = *(arg1 + 0x2e0)
    
    if (rcx_1 != 0)
        sub_142a86f90(rcx_1)
    
    int64_t* rcx_2 = *(arg1 + 0x2e8)
    
    if (rcx_2 != 0)
        sub_142a86f90(rcx_2)
    
    int32_t rbp_1 = 0
    int32_t arg_8
    uint64_t rax
    
    if (*(arg2 + 0x2e0) == 0)
    label_142b5f45c:
        
        if (*(arg2 + 0x2e8) != 0)
            if (*(arg1 + 0x2e8) == 0)
                *(arg1 + 0x2e8) = sub_142a86f30(sub_142007a80, sub_142a86b90, 0, rbx)
            
            rax = sub_1405f8990(*(arg2 + 0x2e8))
            arg_8 = 0xffffffff
            
            if (rax.d s> 0)
                while (*rbx s<= 0)
                    void* rax_3 = sub_142a86e70(*(arg2 + 0x2e8), &arg_8)
                    sub_142a86e40(*(arg1 + 0x2e8), *(rax_3 + 0x10), *(rax_3 + 8), rbx)
                    rbp_1 += 1
                    
                    if (rbp_1 s>= rax.d)
                        break
    else
        if (*(arg1 + 0x2e0) != 0)
            goto label_142b5f3fc
        
        rax = sub_142a86f30(sub_142007a80, sub_142a86b90, sub_142b62550, rbx)
        *(arg1 + 0x2e0) = rax
        
        if (*rbx s<= 0)
            std::ios_base::width(rax, sub_140a4f210)
        label_142b5f3fc:
            rax = sub_1405f8990(*(arg2 + 0x2e0))
            arg_8 = 0xffffffff
            int32_t r12_1 = rax.d
            int32_t r14_1 = 0
            
            if (rax.d s> 0)
                while (*rbx s<= 0)
                    void* rax_1 = sub_142a86e70(*(arg2 + 0x2e0), &arg_8)
                    int64_t* rcx_6 = *(rax_1 + 8)
                    int64_t rdx_3 = *rcx_6
                    rax = (*(rdx_3 + 0x18))(rcx_6, rdx_3)
                    
                    if (rax == 0)
                        *rbx = 7
                        goto label_142b5f4fe
                    
                    sub_142a86e20(*(arg1 + 0x2e0), *(rax_1 + 0x10), rax, rbx)
                    r14_1 += 1
                    
                    if (r14_1 s>= r12_1)
                        break
            
            goto label_142b5f45c

label_142b5f4fe:
