// 函数: sub_140856da0
// 地址: 0x140856da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x28)
uint64_t rbp
rbp.b = 1

if (result != 0)
    void* rdx_1 = *(result + 0x408)
    
    if (rdx_1 != 0 && *(rdx_1 + 0x30) != 0)
        int64_t* i = *(arg1 + 0xa0)
        
        for (void* rsi_2 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != rsi_2; i = &i[2])
            int64_t* rbx_1 = i[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            rbp = zx.q(rbp.b)
            
            if (sub_1408048d0(*i) == 0)
                rbp = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_4 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_4 == 1)
                        int64_t r8_1 = *rbx_1
                        (*(r8_1 + 8))(rbx_1, zx.q(rax_4), r8_1)
        
        return zx.q(rbp.b)

result.b = 0
return result
