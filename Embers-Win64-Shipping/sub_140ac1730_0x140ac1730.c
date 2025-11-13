// 函数: sub_140ac1730
// 地址: 0x140ac1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1
int64_t* i_2 = i_1

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x2a0))
        *(arg1 + 0x2a0) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(arg1 + 0x2a0)
        z_1 = false
    
    if (not(z_1))
        break
    
    sub_140a55680(arg1 + 8)
    sub_140ab8ef0(arg1)
    
    do
        int64_t rax_2 = sx.q(data_14399eb54)
        int64_t r14_2
        
        if (rax_2.d s<= 0)
            r14_2 = 0
        else
            r14_2 = rax_2 << 0x14
        
        int64_t* rax_3 = sub_140a47f80(arg1 + 0x10)
        
        if (rax_3 != 0)
            rax_3[0xa].b = 1
            i_1 = rax_3[8]
            void* rbp_3 = &i_1[sx.q(rax_3[9].d) * 4]
            
            while (i_1 != rbp_3)
                int64_t r8_1 = i_1[1]
                
                if (r8_1 != -1)
                    memcpy(**(*i_1 + 0x148) + r8_1, *rax_3[5] + i_1[2], (i_1[3]).d)
                
                void* rax_6 = *i_1
                i_1 = &i_1[4]
                *(rax_6 + 0x150) -= 1
            
            if (rax_3[1] == 0)
                sub_140abfbc0(arg1 + 0xc0, &rax_3[3])
                sub_140a990c0(rax_3)
                j_sub_140a74f90(rax_3)
            else
                *(arg1 + 0x1c8) += rax_3[6]
                int64_t* i = *(arg1 + 0x170)
                
                if (*(arg1 + 0x1c8) u> r14_2)
                    while (i != arg1 + 0x110)
                        if (i[0xa].b == 0)
                            break
                        
                        i_1 = i[1]
                        *(i[2] + 8) = i_1
                        *(i[1] + 0x10) = i[2]
                        *(arg1 + 0x1c8) -= i[6]
                        sub_140abfbc0(arg1 + 0xc0, &i[3])
                        sub_140a990c0(i)
                        j_sub_140a74f90(i)
                        i = i_1
                        
                        if (*(arg1 + 0x1c8) u<= r14_2)
                            break
            
            i_1.b = 1
        else
            i_1.b = 0
        
        sub_140ab86e0(arg1)
    while (i_1.b != 0)

return 0
