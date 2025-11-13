// 函数: sub_1426be0a0
// 地址: 0x1426be0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1426e85a0(arg1)
char rax_1 = *(arg1 + 0x263)

if ((rax_1 & 0x40) != 0)
    *(arg1 + 0x263) = rax_1 & 0xbf
    
    if (rax == 0)
        void* rcx = arg1[0x17]
        
        if (rcx != 0)
            sub_1426be1c0(rcx, 1)
        
        if (arg1[0x34] != 0)
            if ((arg1[0x35].b & 2) != 0 || (arg1[0x35].b & 1) == 0)
                rax_1 = 0
            else
                rax_1 = 1
        else if ((arg1[0x35].b & 1) == 0 || (arg1[0x35].b & 2) != 0 || (arg1[0x35].b & 1) == 0)
            rax_1 = 0
        else
            rax_1 = 1
        
        if (arg1[0x32] != 0 || rax_1 != 0)
            *(arg1 + 0x263) |= 8
        
        return 0
    
    if (rax == 1)
        void* rax_3 = arg1[0x17]
        
        if (rax_3 != 0)
            *(rax_3 + 0x1a8) &= 0xfffffffe
            bool cond:0_1 = *(rax_3 + 0x1a4) == 0
            *(rax_3 + 0x1a0) = 0
            
            if (not(cond:0_1))
                sub_1405c5510(rax_3 + 0x198, 0)

return zx.q(rax)
