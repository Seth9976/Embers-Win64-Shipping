// 函数: sub_1428ea4d0
// 地址: 0x1428ea4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* r14 = arg1
int64_t rsi = sx.q(arg2)
int64_t rcx = sx.q(*(arg3 + 0x10))

if (rcx.d != 0x10)
    if (arg2 != 0)
        if (rsi.d s<= 4)
            char* r15_1 = rcx
            int32_t rbx_1 = 0
            
            do
                char rcx_2 = *r14
                r14 = &r14[1]
                rsi = zx.q(rsi.d - 1)
                int32_t rax_4 = sub_1428a6d80(rcx_2)
                
                if (rax_4 s< 0)
                    return 0
                
                rbx_1 = rbx_1 << 4 | sx.d(rax_4.b)
            while (rsi.d != 0)
            
            *(r15_1 + arg3 + 1) = rbx_1.b
            *(r15_1 + arg3) = (rbx_1 u>> 8).b
            *(arg3 + 0x10) += 2
            return zx.q((rsi + 1).d)
        
        if (rcx.d s<= 0xc && r14[rsi] == 0 && sub_1428ea430(rcx + arg3, r14, arg3.d) != 0)
            *(arg3 + 0x10) += 4
            return 1
    else
        int32_t rax_1 = *(arg3 + 0x14)
        
        if (rax_1 == 0xffffffff)
            *(arg3 + 0x18) += 1
            *(arg3 + 0x14) = rcx.d
            return zx.q(arg2 + 1)
        
        if (rax_1 == rcx.d)
            *(arg3 + 0x18) += 1
            return 1

return 0
