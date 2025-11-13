// 函数: sub_142bbb780
// 地址: 0x142bbb780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x2e0)
int64_t r14 = *(arg1 + 0x98)
uint64_t rdi = zx.q(arg2)
int32_t arg_8 = 0

if (rbx != 0)
    goto label_142bbb7e9

int32_t* rax_1 = sub_142b99860(r14, 0x300, &arg_8)
rbx = rax_1

if (arg_8 == 0)
    rax_1[0xbe] = 0
    *(arg1 + 0x2e0) = rax_1
label_142bbb7e9:
    
    if (rdi.d == 0)
    label_142bbb967:
        
        if (arg3 == 0)
            goto label_142bbb983
        
        int32_t rax_18 = rbx[1]
        
        if (rax_18 == 0 || rax_18 == arg3)
            rbx[1] = arg3
        label_142bbb983:
            int32_t rsi_1 = *rbx
            int32_t rdi_1 = rbx[1]
            
            if (rsi_1 != 0 && rdi_1 != 0 && *(rbx + 0x28) == 0)
                *(rbx + 0x28) = sub_142b99a90(r14, 4, 0, rsi_1 * rdi_1, 0, &arg_8)
                
                if (arg_8 == 0 && rsi_1 u> 1)
                    int32_t rdx = rdi_1
                    void* r8_1 = &rbx[0xc]
                    uint64_t i_3 = zx.q(rsi_1 - 1)
                    uint64_t i
                    
                    do
                        r8_1 += 8
                        uint64_t rcx_7 = zx.q(rdx)
                        rdx += rdi_1
                        *(r8_1 - 8) = *(rbx + 0x28) + (rcx_7 << 2)
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
        else
            arg_8 = 3
    else
        int32_t rax_2 = *rbx
        
        if (rax_2 != 0)
            if (rax_2 == rdi.d)
                goto label_142bbb967
            
            arg_8 = 3
        else
            *(rbx + 0x120) = sub_142b99a90(r14, 0x38, 0, rdi.d, 0, &arg_8)
            
            if (arg_8 == 0)
                *(rbx + 0x1a8) = sub_142b99a90(r14, 0xc4, 0, rdi.d, 0, &arg_8)
                
                if (arg_8 == 0)
                    *(rbx + 0x238) = sub_142b99a90(r14, 0x10, 0, rdi.d, 0, &arg_8)
                    
                    if (arg_8 == 0)
                        int64_t rax_6 = sub_142b99a90(r14, 4, 0, (rdi * 2).d, 0, &arg_8)
                        *(rbx + 0x108) = rax_6
                        
                        if (arg_8 == 0)
                            int32_t i_1 = 2
                            *(rbx + 0x110) = rax_6 + (rdi << 2)
                            *(rbx + 0x118) = arg1 + 0xd8
                            *(rbx + 0x1a0) = arg1 + 0x114
                            *(rbx + 0x230) = arg1 + 0x27c
                            
                            if (rdi.d u>= 2)
                                do
                                    uint64_t i_2 = zx.q(i_1)
                                    uint64_t rax_11 = zx.q(i_1 - 1)
                                    uint64_t rcx_5 = zx.q(rax_11.d)
                                    i_1 += 1
                                    *(rbx + (i_2 << 3) + 0x118) =
                                        *(rbx + (rax_11 << 3) + 0x118) + 0x38
                                    *(rbx + (i_2 << 3) + 0x1a0) =
                                        *(rbx + (rcx_5 << 3) + 0x1a0) + 0xc4
                                    *(rbx + (i_2 << 3) + 0x230) =
                                        *(rbx + (rcx_5 << 3) + 0x230) + 0x10
                                while (i_1 u<= rdi.d)
                            
                            *rbx = rdi.d
                            goto label_142bbb967

return zx.q(arg_8)
