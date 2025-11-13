// 函数: sub_1426b63e0
// 地址: 0x1426b63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i

if (arg1 != arg2)
    void* i_2 = *(arg1 + 0x30)
    i = i_2
    
    if (i_2 != 0)
        do
            if (i == arg2)
                goto label_1426b6444
            
            i = *(i + 0x30)
        while (i != 0)
    
    if (i != arg2)
        void* i_1 = *(arg2 + 0x30)
        i = i_1
        
        if (i_1 != 0)
            do
                if (i == arg1)
                    goto label_1426b6444
                
                i = *(i + 0x30)
            while (i != 0)
        
        if (i != arg1)
            if (i_2 != 0 && i_1 != 0)
                i = sub_1426b63e0(i_2)
            
            if (i_2 == 0 || i_1 == 0 || i.b == 0)
                i.b = 0
                return i

label_1426b6444:
i.b = 1
return i
