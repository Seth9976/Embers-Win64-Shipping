// 函数: sub_140a87d90
// 地址: 0x140a87d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rsi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rsi_2 = rsi + 0x10
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_4 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_4 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x18
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_140a899b0(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rsi_1 = rsi + 0x10
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    (**rbx_1)(rbx_1)
                    result = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[3]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
