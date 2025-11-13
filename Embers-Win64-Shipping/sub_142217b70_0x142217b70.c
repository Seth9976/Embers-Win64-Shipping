// 函数: sub_142217b70
// 地址: 0x142217b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)

if (arg4 == 1)
    int32_t rbx_1 = 0
    void* rbp_1 = **(*(arg1 + 0x10) + 0x40)
    float zmm1
    
    if (*(rbp_1 + 0x78) s<= 0)
    label_142217c2f:
        zmm1 = 1f
    else
        int64_t* rdi_1 = nullptr
        int64_t* rsi_1
        float zmm0_1
        
        while (true)
            rsi_1 = *(rdi_1 + *(rbp_1 + 0x70))
            
            if (rsi_1 != 0)
                void* rax_3
                rax_3, zmm0_1 = sub_142554d60()
                void* rdx = rsi_1[2]
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                    break
            
            rbx_1 += 1
            rdi_1 = &rdi_1[1]
            
            if (rbx_1 s>= *(rbp_1 + 0x78))
                goto label_142217c2f_2
        
        int512_t zmm2
        zmm2.o = *(arg1 + 0x12c)
        (*(*rsi_1 + 0x350))(rsi_1, arg1, zmm2, *(arg1 + 0x18), arg5)
        
        if (zmm0_1 <= 0f)
        label_142217c2f_1:
            zmm1 = 1f
        else
            zmm1 = 1f / zmm0_1
            
            if (not(zmm1 != 0f))
            label_142217c2f_2:
                zmm1 = 1f
    
    arg5.d = 1f / zmm1
    
    if (not(arg5.d f>= 0.00100000005f))
        zmm1 = 999.999939f
    
    *(*(arg1 + 0x350) + (r15 << 2)) = zmm1
    *(*(arg1 + 0x360) + (r15 << 2)) = *(arg3 + 0x50)

*arg6 = *(*(arg1 + 0x350) + (r15 << 2))
*arg7 = *(*(arg1 + 0x360) + (r15 << 2))
return arg7
