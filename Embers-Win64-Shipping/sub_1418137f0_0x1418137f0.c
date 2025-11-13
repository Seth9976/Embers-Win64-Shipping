// 函数: sub_1418137f0
// 地址: 0x1418137f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x28))
        break
    
    int64_t* rcx_2 = *(*(arg1 + 0x20) + sx.q(i) * 0x10)
    (*(*rcx_2 + 0xb8))(rcx_2)

if (arg2 != 0 && *(arg1 + 0x28) s> 0)
    double zmm6[0x2] = 0x3c888889
    
    do
        double zmm0[0x2]
        zmm0, zmm6 = sub_140b73230(zmm6)
        
        for (int32_t i_1 = 0; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= *(arg1 + 0x28))
                break
            
            int64_t* rsi_1 = *(*(arg1 + 0x20) + sx.q(i_1) * 0x10)
            int64_t* rcx_5 = rsi_1[0xba]
            (*(*rcx_5 + 0x20))(rcx_5, &rsi_1[0xc1])
            
            if ((*(*rsi_1 + 0x10))(rsi_1) != 0)
                sub_141838020(rsi_1, zmm0)
                zmm0 = sub_140a18a40(arg1 + 0x20, i_1, 1, 1)
                i_1 -= 1
    while (*(arg1 + 0x28) s> 0)

int32_t i_3 = *(arg1 + 0x28)

if (i_3 != 0)
    int64_t* rsi_3 = *(arg1 + 0x20) + 8
    int32_t i_2
    
    do
        int64_t* rbx = *rsi_3
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_9 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        rsi_3 = &rsi_3[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

bool cond:1 = *(arg1 + 0x2c) == 0
*(arg1 + 0x28) = 0

if (not(cond:1))
    sub_1405a5410(arg1 + 0x20, 0)

return sub_14084ee30(arg1 + 0x30, 0) __tailcall
