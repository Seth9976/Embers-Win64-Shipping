// 函数: sub_142cccae0
// 地址: 0x142cccae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0x33
int64_t* rsi = &data_143e2bf10

do
    int32_t j_1 = rsi[-1].d
    rsi = &rsi[-2]
    int64_t* rbx_1 = *rsi
    i -= 1
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x10))(rcx_1)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *rsi
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
while (i != 0)
