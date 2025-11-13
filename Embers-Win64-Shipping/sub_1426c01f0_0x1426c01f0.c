// 函数: sub_1426c01f0
// 地址: 0x1426c01f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x5c)
void* rsi = *(arg1 + 0x50)
int32_t i_2 = *(arg1 + 0x58)

if (result s< 0)
    if (i_2 != 0)
        void* rsi_2 = rsi + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0x5c)
    
    *(arg1 + 0x58) = 0
    
    if (result != 0)
        return sub_1405a5410(arg1 + 0x50, 0)
else
    if (i_2 != 0)
        int64_t* rsi_1 = rsi + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x58) = 0

return result
