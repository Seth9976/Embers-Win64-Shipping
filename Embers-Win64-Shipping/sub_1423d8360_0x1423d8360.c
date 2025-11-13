// 函数: sub_1423d8360
// 地址: 0x1423d8360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb8) &= 0xfffffffd
int32_t i_1 = *(arg1 + 0x70)
int64_t* rbx = *(arg1 + 0x68)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            rcx[1].d -= 1
            
            if (rcx[1].d == 1)
                (**rcx)(rcx, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x74) == 0
*(arg1 + 0x70) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x68, 0)
