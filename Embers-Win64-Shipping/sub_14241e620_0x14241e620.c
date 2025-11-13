// 函数: sub_14241e620
// 地址: 0x14241e620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x70
        int32_t i
        
        do
            sub_140e53610(rdi_2 + 0x30)
            sub_140e53610(rdi_2)
            int64_t* rbx_2 = *(rdi_2 - 0x18)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            sub_141b84450(rdi_2 - 0x68)
            rdi_2 += 0xc8
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_141a641d0(arg1, arg2)
else
    if (i_2 != 0)
        void* rdi_1 = rdi + 0x70
        int32_t i_1
        
        do
            sub_140e53610(rdi_1 + 0x30)
            sub_140e53610(rdi_1)
            int64_t* rbx_1 = *(rdi_1 - 0x18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = sub_141b84450(rdi_1 - 0x68)
            rdi_1 += 0xc8
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
