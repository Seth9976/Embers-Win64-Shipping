// 函数: sub_142c22f70
// 地址: 0x142c22f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_1 = zx.q(arg2) * 0x14 + arg1
int32_t rbx = sx.d(*(rsi_1 + 0x10))
uint32_t result = zx.d(*(rsi_1 + 0x12))
uint32_t result_1 = result

if (rbx != 0)
    result &= 2
    
    if (result.b != 0)
        result = 0
        uint64_t rdi_1 = zx.q(rbx + arg2)
        *(rsi_1 + 0x10) = 0
        
        if (rdi_1.d != arg4)
            sub_142c22f70(arg1, zx.q(rdi_1.d))
            void* rdx_2 = rdi_1 * 0x14 + arg1
            
            if ((arg3 & 0xfffffffe) != 4)
                *(rdx_2 + 8) = neg.d(*(rsi_1 + 8))
            else
                *(rdx_2 + 0xc) = neg.d(*(rsi_1 + 0xc))
            
            result = result_1
            rbx.w = neg.w(rbx.w)
            *(rdx_2 + 0x10) = rbx.w
            *(rdx_2 + 0x12) = result.b

return result
