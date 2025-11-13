// 函数: sub_140d95470
// 地址: 0x140d95470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec25d0
int64_t result = sub_140d9cd40(arg1)

if (*(arg1 + 0x3c) != 0)
    *(arg1 + 0x3c) = 0

if (*(arg1 + 0x34) != 0)
    *(arg1 + 0x34) = 0

int64_t* rdi = arg1[5]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        return (*(*rcx_2 + 8))(rcx_2, 1)

return result
