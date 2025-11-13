// 函数: sub_140ec7f50
// 地址: 0x140ec7f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x70)

if (rsi == 0)
    return 

int64_t rbx_1 = *rsi
sub_140ec00f0()

if ((*(rbx_1 + 0x58))(rsi, &data_143e29fe0) == 0)
    return 

int64_t* rbx_2 = *(arg2 + 0x78)
int64_t rsi_1 = *(arg2 + 0x70)

if (rbx_2 != 0)
    rbx_2[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (rsi_1 != 0)
    *(arg1 + 0x3f8) = 0
