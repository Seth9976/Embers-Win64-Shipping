// 函数: sub_1423d1ec0
// 地址: 0x1423d1ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x20) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* rcx = *(rdi_1 + *(arg1 + 0x18))
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx, arg2)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x20))
