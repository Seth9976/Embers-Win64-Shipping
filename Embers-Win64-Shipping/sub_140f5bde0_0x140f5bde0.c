// 函数: sub_140f5bde0
// 地址: 0x140f5bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            sub_140745b20(rdi_2)
            rdi_2 += 0x18
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a5130(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            result = sub_140745b20(rdi_1)
            rdi_1 = &rdi_1[3]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
