// 函数: sub_140ffa3c0
// 地址: 0x140ffa3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x2688) s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    char rax = 0
    int64_t* rbx_2 = *(rsi_1 + *(arg1 + 0x2680))
    
    if (0 == *(rbx_2 + 0x5c))
        *(rbx_2 + 0x5c) = 0
    else
        rax = (*(rbx_2 + 0x5c)).b
    
    if ((rax & 1) != 0)
        int64_t* entry_r8
        
        if ((rax & 2) == 0)
            rax, entry_r8 = sub_140ffc530(rbx_2, 0, entry_r8)
        else
            sub_1419a21e0(0)
            *(rbx_2 + 0x5c) &= 0xfffffffd
            rax, entry_r8 = (*(*rbx_2 + 0x40))(rbx_2, zx.q(*(rbx_2 + 0x4c)), zx.q(rbx_2[0xa].d), 0, 
                rbx_2[0xc].d)
    
    i += 1
    rsi_1 = &rsi_1[1]
while (i s< *(arg1 + 0x2688))
