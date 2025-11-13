// 函数: sub_142832bd4
// 地址: 0x142832bd4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (rbx.d s>= 1)
    int32_t temp0_1 = *(arg1 + 0x64)
    
    if (rbx.d s<= temp0_1)
        int32_t i = rbx.d
        
        if (rbx.d s< temp0_1)
            int64_t r14_1 = rbx << 3
            
            do
                void* rcx = *(r14_1 + *(arg1 + 0x68))
                int64_t rax_1
                rax_1.b = *(rcx + 4)
                rax_1.b -= 1
                
                if (rax_1.b u<= 1)
                    sub_1428394c0(rcx)
                
                i += 1
                r14_1 += 8
            while (i s< *(arg1 + 0x64))
        
        *(arg1 + 8) = rbx.d
        return 0

return 0xffffffff
