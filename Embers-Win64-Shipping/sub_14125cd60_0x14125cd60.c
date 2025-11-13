// 函数: sub_14125cd60
// 地址: 0x14125cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 == 0)
    return 

void* rsi_1 = *arg1 + 0x50
int32_t i

do
    int32_t j_1 = *(rsi_1 + 8)
    int64_t* rbx_1 = *rsi_1
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t* rcx = *rbx_1
            
            if (rcx != 0)
                rcx[1].d -= 1
                
                if (rcx[1].d == 1)
                    (**rcx)(rcx, 1)
            
            rbx_1 = &rbx_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    rsi_1 += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
