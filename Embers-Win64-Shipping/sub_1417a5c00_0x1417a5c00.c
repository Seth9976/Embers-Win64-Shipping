// 函数: sub_1417a5c00
// 地址: 0x1417a5c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 0x118
WTI::~WTI(rsi)

for (int64_t i = 8; i != 0; )
    int64_t rcx_1 = rsi[-2]
    rsi = &rsi[-4]
    i -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int32_t j_1 = rsi[1].d
    int64_t* rbx_1 = *rsi
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t* rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *rsi
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
