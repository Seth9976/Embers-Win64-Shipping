// 函数: sub_142a52b80
// 地址: 0x142a52b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 s> 1 && arg2 s<= 3)
    int32_t r11 = 0
    int32_t i = 3
    int32_t rbx = 0x49
    
    while (true)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx + r11)
        int32_t r8 = arg2
        uint64_t rax_4 = zx.q((temp1_1 - temp0_1) s>> 1)
        int32_t r10_1 = rax_4.d
        void* rdx_2 = (sx.q((rax_4 * 5).d) << 1) + &data_14361b45a
        
        while (true)
            uint32_t rax_5 = zx.d(*rdx_2)
            uint32_t rcx_1 = zx.d(*(arg1 - ((sx.q((rax_4 * 5).d) << 1) + &data_14361b45a) + rdx_2))
            rdx_2 += 2
            
            if (rax_5 == 0)
            label_142a52c44:
                r11 = r10_1 + 1
            label_142a52c48:
                
                if (r11 s< rbx)
                    break
                
                rax_5.b = 0
            else
                uint32_t rcx_2 = rcx_1 - rax_5
                
                if (rcx_1 != rax_5)
                    goto label_142a52c39
                
                r8 -= 1
                
                if (r8 s> 0)
                    continue
                else if (3 - arg2 != 0 && *rdx_2 != rcx_2.w)
                    rcx_2 = neg.d(3 - arg2)
                label_142a52c39:
                    
                    if (rcx_2 != 0)
                        if (rcx_2 s>= 0)
                            goto label_142a52c44
                        
                        rbx = r10_1
                        goto label_142a52c48
                
                void* rdi_1 = (sx.q((rax_4 * 5).d) << 1) + 0x14361b460
                
                do
                    rax_5 = zx.d(*rdi_1)
                    
                    if (rax_5.w == 0)
                        break
                    
                    uint32_t rbx_1 = zx.d(rax_5.w)
                    i += 1
                    rdi_1 += 2
                    
                    if ((rbx_1 & 0xfffffc00) == 0xd800)
                        i += 1
                        rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + zx.d(*rdi_1)
                        rdi_1 += 2
                    
                    arg3[1](*arg3, zx.q(rbx_1))
                    sub_142a527b0(zx.q(rbx_1), arg3)
                while (i s< 5)
                
                rax_5.b = 1
            
            return rax_5

int64_t rax
rax.b = 0
return rax
