// 函数: sub_1407595d0
// 地址: 0x1407595d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x180) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* rcx_1 = *(rdi_1 + *(arg1 + 0x178))
    
    if (rcx_1 != 0 && ((rcx_1[0x14].d u>> 1).b & 1) != 0)
        (*(*rcx_1 + 0x38))(rcx_1, arg3)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x180))
