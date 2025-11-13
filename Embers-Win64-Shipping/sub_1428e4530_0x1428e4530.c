// 函数: sub_1428e4530
// 地址: 0x1428e4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_1428a38f0(arg1)
int64_t r15 = 0
int32_t rbp = 0

if (sub_142898c70(rax) s> 0)
    while (true)
        void* rax_2 = sub_142898ea0(rax, rbp)
        int32_t arg_10
        int64_t rax_3 = sub_1428ac730(rax_2, 0x303, &arg_10, nullptr)
        
        if (rax_3 != 0)
            int32_t* rax_5 = *(arg1 + 0xa8)
            r15 = rax_3
            
            if (rax_5 == 0)
                rax_5 = sub_142898ba0()
                *(arg1 + 0xa8) = rax_5
                
                if (rax_5 == 0)
                    return 0
            
            if (sub_142898d50(rax_5, rax_3) == 0)
                return 0
            
            goto label_1428e45fe
        
        if (arg_10 == 0xffffffff)
        label_1428e45fe:
            *(rax_2 + 0x28) = r15
            int32_t* rax_7 = sub_1428ac730(rax_2, 0x8d, &arg_10, nullptr)
            
            if (rax_7 != 0 || arg_10 == 0xffffffff)
                if (rax_7 == 0)
                    *(rax_2 + 0x30) = 0xffffffff
                else
                    *(rax_2 + 0x30) = sub_1428e4770(rax_7)
                    sub_1428c3460(rax_7)
                
                int32_t* rdi_2 = *(rax_2 + 0x20)
                arg_10 = 0
                int32_t rax_9 = sub_142898c70(rdi_2)
                int32_t rcx_8 = arg_10
                
                if (rcx_8 s< rax_9)
                    int32_t rax_14
                    
                    do
                        int64_t* rax_10 = sub_142898ea0(rdi_2, rcx_8)
                        
                        if (sub_1428e74c0(rax_10) != 0
                                && sub_1428a96d0(sub_142891580(rax_10)) != 0x303)
                            *(arg1 + 0x7c) |= 0x200
                            break
                        
                        arg_10 += 1
                        rax_14 = sub_142898c70(rdi_2)
                        rcx_8 = arg_10
                    while (rcx_8 s< rax_14)
                
                rbp += 1
                
                if (rbp s>= sub_142898c70(rax))
                    break
                
                continue
        
        *(arg1 + 0x7c) |= 0x80
        break

return 1
