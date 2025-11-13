// 函数: sub_141f5dd50
// 地址: 0x141f5dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x5a8))

if ((rax.b & 0x40) != 0)
    char rdx_1 = *(arg1 + 0x5a6)
    rax.b &= 0xbf
    *(arg1 + 0x5a8) = rax.b
    char rcx = rdx_1 & 1
    
    if ((rax.b & 0x20) == 0)
        if (rcx != 0)
            sub_140780b40(arg1 + 0x480, ((sx.q(*(arg1 + 0x494)) + 0x45) << 4) + arg1)
            sub_14081d8c0(arg1 + 0x470, ((sx.q(*(arg1 + 0x494)) + 0x58) << 4) + arg1)
            rdx_1 = *(arg1 + 0x5a6)
        
        rax = 0
        *(arg1 + 0x490) = 0
        
        if ((rdx_1 & 1) == 0)
            sub_140780b40(arg1 + 0x480, arg1 + 0x450)
            rax = sub_14081d8c0(arg1 + 0x470, ((sx.q(*(arg1 + 0x494)) + 0x58) << 4) + arg1)
    else
        int64_t rdx_2 = sx.q(*(arg1 + 0x490))
        rax = 1 - rdx_2.d
        *(arg1 + 0x494) = rdx_2.d
        *(arg1 + 0x490) = rax
        int64_t rcx_5
        
        if (rcx == 0)
            sub_140780b40(((sx.q(rax) + 0x45) << 4) + arg1, ((rdx_2 + 0x45) << 4) + arg1)
            rdx_2 = sx.q(*(arg1 + 0x494))
            rcx_5 = sx.q(*(arg1 + 0x490))
        label_141f5ddf7:
            int64_t* rax_1 =
                sub_14081d8c0(((rcx_5 + 0x58) << 4) + arg1, ((rdx_2 + 0x58) << 4) + arg1)
            *(arg1 + 0x5a9) &= 0xfe
            *(arg1 + 0x498) += 1
            return rax_1
        
        if ((*(arg1 + 0x5a9) & 1) != 0)
            rcx_5 = sx.q(rax)
            goto label_141f5ddf7
    
    *(arg1 + 0x498) += 1

return rax
