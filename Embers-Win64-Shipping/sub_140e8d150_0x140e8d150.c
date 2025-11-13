// 函数: sub_140e8d150
// 地址: 0x140e8d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x3d0) s<= 0)
    return 

int64_t rsi_1 = 0

do
    int64_t* rcx = *(arg1 + 0x3c8)
    int64_t rax = 0
    
    if (*(rcx + rsi_1 + 8) != 0)
        int64_t* rcx_1 = *(rcx + rsi_1)
        void arg_8
        
        if (rcx_1 != 0)
            rax = *(*(*rcx_1 + 0x30))(rcx_1, &arg_8)
    
    if (rax != arg2)
        i += 1
        rsi_1 += 0x10
    else
        sub_140e86170(arg1 + 0x3c8, i, 1, 1)
while (i s< *(arg1 + 0x3d0))
