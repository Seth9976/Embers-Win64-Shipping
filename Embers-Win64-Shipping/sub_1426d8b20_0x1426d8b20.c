// 函数: sub_1426d8b20
// 地址: 0x1426d8b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x60) & 2) == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x58) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* rcx = *(rdi_1 + *(arg1 + 0x50))
    
    if (rcx != 0)
        (*(*rcx + 0x278))(rcx, arg2)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x58))
