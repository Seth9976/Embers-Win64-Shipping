// 函数: sub_1429ddff0
// 地址: 0x1429ddff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1429ddec0(0x20, 0x3860)

if (result != 0)
    memset(result, 0, 0x3860)
    void var_38
    
    if (__intrinsic_setjmp(result + 0x1320, &var_38) == 0)
        *(result + 0x1318) = 1
        sub_1429ddc00(result + 0x12c0)
        *(result + 0x34dc) = 0
        *(result + 0x3820) = 1
        sub_142a20c30(result)
        sub_142a1d5f0(result + 0x12c0)
        *(result + 0x1318) = 0
        *(result + 0x3828) = 0
        *(result + 0x3830) = 0
        sub_1429dd880(result)
        bool z_1
        
        if (0 == data_143fed254)
            data_143fed254 = 1
            z_1 = true
        else
            data_143fed254
            z_1 = false
        
        if (not(z_1))
            bool z_2
            
            if (2 == data_143fed254)
                data_143fed254 = 2
                z_2 = true
            else
                data_143fed254
                z_2 = false
            
            if (not(z_2))
                bool z_3
                
                do
                    Sleep(0)
                    
                    if (2 == data_143fed254)
                        data_143fed254 = 2
                        z_3 = true
                    else
                        data_143fed254
                        z_3 = false
                while (not(z_3))
        else
            if (data_143fed258 == 0)
                sub_1429dd6c0()
                sub_142a21330()
                data_143fed258 = 1
            
            data_143fed254 += 1
        
        return result
    
    *(result + 0x1318) = 0
    j_sub_1429ddc70(result + 0x12c0)
    sub_1429dde60(result)

return nullptr
