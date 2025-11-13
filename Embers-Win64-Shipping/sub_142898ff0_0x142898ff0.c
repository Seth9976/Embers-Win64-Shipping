// 函数: sub_142898ff0
// 地址: 0x142898ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rcx = *arg1

if (arg2 s<= 0x7fffffff - rcx)
    int64_t r10_1 = *(arg1 + 8)
    int32_t rbx_1 = rcx + arg2
    
    if (rbx_1 s< 4)
        rbx_1 = 4
    
    if (r10_1 != 0)
        int32_t rcx_4 = arg1[5]
        
        if (arg3 == 0)
            if (rbx_1 s<= rcx_4)
                return 1
            
            do
                if (rcx_4 s>= 0x7fffffff)
                    return 0
                
                if (rcx_4 s>= 0x55555555)
                    rcx_4 = 0x7fffffff
                else
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rcx_4)
                    rcx_4 += (temp1_1 - temp0_1) s>> 1
            while (rcx_4 s< rbx_1)
            
            rbx_1 = rcx_4
            
            if (rcx_4 == 0)
                return 0
        else if (rbx_1 == rcx_4)
            return 1
        
        int64_t rax_8 = sub_1428a67c0(r10_1, sx.q(rbx_1) << 3, "crypto\stack\stack.c", 0xc6)
        
        if (rax_8 != 0)
            *(arg1 + 8) = rax_8
            arg1[5] = rbx_1
            return 1
    else
        int64_t rax_1 = sub_1428a6a70(sx.q(rbx_1) << 3)
        *(arg1 + 8) = rax_1
        
        if (rax_1 != 0)
            arg1[5] = rbx_1
            return 1
        
        sub_1428a5670((rax_1 + 0xf).d, 0x81, (rax_1 + 0x41).d, "crypto\stack\stack.c", 0xb5)

return 0
