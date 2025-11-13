// 函数: sub_142863410
// 地址: 0x142863410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r10 = *(arg1 + 0xa8)
int32_t rbx = *(arg2 + 0x1c)

if ((*(r10 + 0x334) & rbx) == 0 && (*(arg2 + 0x20) & *(r10 + 0x338)) == 0)
    int32_t r9 = *(r10 + 0x340)
    
    if (r9 != 0)
        int32_t rcx_3
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            int32_t rax_6 = *(arg2 + 0x34)
            
            if (rax_6 == 0x100)
                rax_6 = 0xff00
            
            if (r9 == 0x100)
                r9 = 0xff00
            
            if (rax_6 s>= r9)
                int32_t rcx_1 = *(arg2 + 0x38)
                int32_t rax_7 = *(r10 + 0x33c)
                
                if (rcx_1 == 0x100)
                    rcx_1 = 0xff00
                
                if (rax_7 == 0x100)
                    rax_7 = 0xff00
                
                if (rcx_1 s<= rax_7)
                    rcx_3.b = sub_1428546e0(arg1, arg3, *(arg2 + 0x44), 0, arg2) == 0
                    return zx.q(rcx_3)
        else
            int32_t rax_3 = *(arg2 + 0x2c)
            
            if (rax_3 == 0x301 && arg4 != 0 && (rbx.b & 0x84) != 0)
                rax_3 = 0x300
            
            if (rax_3 s<= r9 && *(arg2 + 0x30) s>= *(r10 + 0x33c))
                rcx_3.b = sub_1428546e0(arg1, arg3, *(arg2 + 0x44), 0, arg2) == 0
                return zx.q(rcx_3)

return 1
