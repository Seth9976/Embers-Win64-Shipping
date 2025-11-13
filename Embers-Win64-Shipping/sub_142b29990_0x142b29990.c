// 函数: sub_142b29990
// 地址: 0x142b29990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_10 = *(arg1 + 0x190)
int64_t r9 = *(arg1 + 0x198)

if (rax_10 != r9)
    uint32_t rcx = zx.d(*rax_10)
    
    if (rcx != 0 || r9 != 0)
        *(arg1 + 0x190) = &rax_10[1]
        
        if ((rcx & 0xfffffc00) == 0xd800 && &rax_10[1] != r9)
            uint32_t r9_1 = zx.d(rax_10[1])
            
            if ((r9_1 & 0xfffffc00) == 0xdc00)
                *(arg1 + 0x190) = &rax_10[2]
                return zx.q(((rcx - 0xd7f7) << 0xa) + r9_1)
        
        return zx.q(rcx)
    
    *(arg1 + 0x198) = rax_10

return 0xffffffff
