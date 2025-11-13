// 函数: sub_140dbbb40
// 地址: 0x140dbbb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x12c)
int32_t i_2 = *(arg1 + 0x128)
void* rbp = arg1
void* rcx = *(arg1 + 0x120)

if (arg2 s> result)
    void* rsi_2 = rbp
    
    if (rcx != 0)
        rsi_2 = rcx
    
    if (i_2 != 0)
        void* rsi_3 = rsi_2 + 0x40
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_3
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_3 += 0x48
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(rbp + 0x12c)
    
    *(arg1 + 0x128) = 0
    
    if (result != arg2)
        return sub_140dbd360(rbp, arg2)
else
    if (rcx != 0)
        rbp = rcx
    
    if (i_2 != 0)
        void* rsi_1 = rbp + 0x40
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
            
            rsi_1 += 0x48
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x128) = 0

return result
