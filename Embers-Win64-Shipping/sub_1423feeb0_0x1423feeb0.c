// 函数: sub_1423feeb0
// 地址: 0x1423feeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x20) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rbp_1 = *(rsi_1 + *(arg1 + 0x18))
        
        if (rbp_1 != 0)
            sub_1423feeb0(rbp_1)
            j_sub_140a74f90(rbp_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x20))

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x20) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x18, 0)

int64_t rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 == 0)
    return 

return sub_140a74f90(rcx_4) __tailcall
