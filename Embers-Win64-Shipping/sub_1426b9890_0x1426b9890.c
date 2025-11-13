// 函数: sub_1426b9890
// 地址: 0x1426b9890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = *arg1
int64_t* i = i_1

if (i_1 != 0)
    do
        if (i == arg2)
            goto label_1426b98cc
        
        i = i[6]
    while (i != 0)

if (i == arg2)
label_1426b98cc:
    int64_t rsi_1 = *(arg2 + 0x30)
    
    if (i_1 != rsi_1)
        while (i_1 != 0)
            int64_t* i_2 = i_1[6]
            
            if (*(i_1 + 0x84) == 1 && i_1[0x11].d s<= 1)
                int64_t* rcx = i_1[5]
                *(i_1 + 0x84) = 2
                
                if (rcx != 0)
                    sub_1426a8a50(rcx, 0)
                
                i = (*(*i_1 + 0x2a8))(i_1, 0)
                
                if (i.d != 4)
                    i = 4
                
                if (i.d s> *(i_1 + 0x84))
                    *(i_1 + 0x84) = i.d
                    
                    if (i.d == 4)
                        i = sub_1426be890(i_1, 3)
            
            if ((i_1[0x12].b & 4) == 0 || (i_1[0x10].b & 8) != 0)
                i = (*(*i_1 + 0x298))(i_1, zx.q(i_1[0x11].d))
            
            int64_t* rcx_4 = i_1[6]
            
            if (rcx_4 != 0)
                i = (*(*rcx_4 + 0x2a0))(rcx_4, i_1, zx.q(i_1[0x11].d))
            
            i_1 = i_2
            
            if (i_2 == rsi_1)
                break
    
    *arg1 = rsi_1

return i
