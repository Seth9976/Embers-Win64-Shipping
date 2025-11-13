// 函数: sub_1426b9100
// 地址: 0x1426b9100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xb0)

if (rax != 0 && (*(rax + 0x5c) & 8) == 0)
    int32_t rax_1 = *(rax + 0xc)
    int64_t* i = nullptr
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        do
            for (int64_t* j = *(i + *(arg1 + 0xb8)); j != 0; j = j[6])
                if (*(j + 0x84) s< 2)
                    *(j + 0x84) = 2
                
                int64_t* rcx_4 = j[5]
                
                if (rcx_4 != 0)
                    sub_1426a8a50(rcx_4, 0)
                
                int32_t rax_12 = (*(*j + 0x2a8))(j, 0)
                
                if (rax_12 != 4)
                    rax_12 = 4
                
                if (rax_12 s> *(j + 0x84))
                    *(j + 0x84) = rax_12
                    
                    if (rax_12 == 4)
                        sub_1426be890(j, 3)
            
            i = &i[1]
        while (i s< 0x28)

return sub_141eea780(arg1) __tailcall
