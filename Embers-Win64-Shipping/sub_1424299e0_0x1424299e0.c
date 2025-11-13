// 函数: sub_1424299e0
// 地址: 0x1424299e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
int64_t* rsi = arg1 + 0xc0
int64_t result

do
    rsi = &rsi[-0xc]
    i -= 1
    result = sub_1408466d0(&rsi[6])
    int32_t j_2 = rsi[3].d
    int64_t* rdi_1 = rsi[2]
    
    if (j_2 != 0)
        int32_t j
        
        do
            result = sub_141eb83a0(rdi_1, *rdi_1)
            rdi_1 = &rdi_1[1]
            j = j_2
            j_2 -= 1
        while (j != 1)
        rdi_1 = rsi[2]
    
    if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)
    
    int32_t j_3 = rsi[1].d
    int64_t* rbx_1 = *rsi
    
    if (j_3 != 0)
        int32_t j_1
        
        do
            result = sub_141eb8440(rbx_1, *rbx_1)
            rbx_1 = &rbx_1[1]
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        rbx_1 = *rsi
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)
while (i != 0)

return result
