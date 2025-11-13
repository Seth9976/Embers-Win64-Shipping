// 函数: sub_140fe0aa0
// 地址: 0x140fe0aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_18 = arg3
int32_t rdi_1 = 0
uint64_t i_2 = zx.q(arg1)

do
    int32_t* rbx_3 = zx.q(rdi_1 * arg4) + arg3
    
    if (i_2.d != 0)
        uint64_t i_1 = i_2
        int32_t* r14_5 = (zx.q(rdi_1 * i_2.d) << 2) - rbx_3 + arg5
        uint64_t i
        
        do
            int32_t rdx = *rbx_3
            int32_t rax_3 = rdx u>> 6 & 0x1f
            int32_t rcx_1 = rdx & 0x3f
            int32_t var_58_1
            
            if (rax_3 != 0x1f)
                if (rax_3 == 0)
                    if (rcx_1 == 0)
                        rax_3 = -0x70
                    else
                        rax_3 = 1
                        
                        do
                            rax_3 -= 1
                            rcx_1 *= 2
                        while ((rcx_1.b & 0x40) == 0)
                        
                        rcx_1 &= 0x3f
                
                var_58_1 = (rax_3 + 0x70) << 0x17 | rcx_1 << 0x11
            else
                var_58_1 = (rcx_1 | 0x3fc0) << 0x11
            
            int32_t rcx_7 = rdx u>> 0xb & 0x3f
            int32_t rax_9 = rdx u>> 0x11 & 0x1f
            int32_t rax_13
            
            if (rax_9 != 0x1f)
                if (rax_9 == 0)
                    if (rcx_7 == 0)
                        rax_9 = -0x70
                    else
                        rax_9 = 1
                        
                        do
                            rax_9 -= 1
                            rcx_7 *= 2
                        while ((rcx_7.b & 0x40) == 0)
                        
                        rcx_7 &= 0x3f
                
                rax_13 = (rax_9 + 0x70) << 0x17 | rcx_7 << 0x11
            else
                rax_13 = ((rdx & 0x1f800) | 0x1fe0000) << 6
            
            int32_t rcx_11 = rdx u>> 0x16 & 0x1f
            uint32_t rax_17 = rdx u>> 0x1b
            int32_t var_50_1
            
            if (rax_17 != 0x1f)
                if (rdx u< 0x8000000)
                    if (rcx_11 == 0)
                        rax_17 = -0x70
                    else
                        rax_17 = 1
                        
                        do
                            rax_17 -= 1
                            rcx_11 *= 2
                        while ((rcx_11.b & 0x20) == 0)
                        
                        rcx_11 &= 0x1f
                
                var_50_1 = (rax_17 + 0x70) << 0x17 | rcx_11 << 0x12
            else
                var_50_1 = (rdx u>> 5 & 0x3e0000) | 0x7f800000
            
            int32_t var_48 = var_58_1
            int32_t var_40_1 = var_50_1
            int32_t var_44_1 = rax_13
            int32_t var_3c_1 = 0
            void arg_10
            *(r14_5 + rbx_3) = *sub_140ae16d0(&var_48, &arg_10, arg6)
            rbx_3 = &rbx_3[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        arg3 = arg_18
    
    rdi_1 += 1
while (rdi_1 u< arg2)
