// 函数: sub_1428f5fa0
// 地址: 0x1428f5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbx = nullptr

if (arg2 != 0)
    char rax_1 = *arg2
    
    if (rax_1 != 0)
        char* rbp_1 = &arg2[1]
        
        if (rax_1 != 0x2d)
            rbp_1 = arg2
        
        int32_t r15_1
        r15_1.b = rax_1 == 0x2d
        uint64_t rdi_1 = 0
        
        for (void* i = nullptr; i s<= 0x1fffffff; i += 1)
            if (sub_1428e4710(sx.d(*(i + rbp_1)), 4) == 0)
                break
            
            rdi_1 = zx.q(rdi_1.d + 1)
        
        if (rdi_1.d == 0 || rdi_1.d s> 0x1fffffff)
        label_1428f613e:
            
            if (*arg1 == 0)
                sub_1428901a0(rbx)
        else
            if (arg1 == 0)
                return zx.q(r15_1 + rdi_1.d)
            
            rbx = *arg1
            
            if (rbx != 0)
                sub_142890900(rbx, 0)
            label_1428f6065:
                uint32_t rax_4 = (rdi_1 << 2).d
                
                if (rax_4 s> 0x7fffffc0)
                    goto label_1428f613e
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_4 + 0x3f)
                int32_t rax_8 = (temp1_1 + (temp0_1 & 0x3f)) s>> 6
                int64_t* rax_9
                
                if (rax_8 s> *(rbx + 0xc))
                    rax_9 = sub_142890d10(rbx, rax_8)
                else
                    rax_9 = rbx
                
                if (rax_9 == 0)
                    goto label_1428f613e
                
                int64_t rsi_1 = 0
                int32_t rax_13 = rdi_1.d s/ 0x13 * 0x13 - rdi_1.d
                int32_t rdi_2 = rdi_1.d - 1
                
                if (rdi_1.d - 1 s< 0)
                label_1428f6127:
                    sub_142890ce0(rbx)
                    *arg1 = rbx
                    
                    if (rbx[1].d != 0)
                        rbx[2].d = r15_1
                    
                    return zx.q(r15_1 + rdi_1.d)
                
                int32_t rdx_6 = 0
                
                if (rax_13 != 0)
                    rdx_6 = rax_13 + 0x13
                
                while (true)
                    int32_t rax_14 = sx.d(*rbp_1)
                    rbp_1 = &rbp_1[1]
                    rdx_6 += 1
                    rsi_1 = sx.q(rax_14 - 0x30) + rsi_1 * 0xa
                    
                    if (rdx_6 == 0x13)
                        if (sub_1428f5360(rbx, -0x7538dcfb76180000) == 0)
                            break
                        
                        if (sub_1428f4ee0(rbx, rsi_1) == 0)
                            break
                        
                        rsi_1 = 0
                        rdx_6 = 0
                    
                    int32_t temp5_1 = rdi_2
                    rdi_2 -= 1
                    
                    if (temp5_1 - 1 s< 0)
                        goto label_1428f6127
                
                goto label_1428f613e
            
            int64_t* rax_3 = sub_142890500()
            rbx = rax_3
            
            if (rax_3 != 0)
                goto label_1428f6065

return 0
