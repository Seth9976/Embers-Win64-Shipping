// 函数: sub_1418d2580
// 地址: 0x1418d2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 8
int64_t* rsi = arg1 + 0xd0

do
    int32_t j_1 = rsi[-2].d
    rsi = &rsi[-3]
    int64_t* rbx_1 = *rsi
    i -= 1
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *rsi
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
while (i != 0)
