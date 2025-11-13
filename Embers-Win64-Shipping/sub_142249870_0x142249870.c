// 函数: sub_142249870
// 地址: 0x142249870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rdx_2 = *arg1 + rsi_1
        int64_t rax = sx.q(rdx_2[1].d)
        int64_t* r8_2
        
        if (rax.d u<= 6)
            switch (rax)
                case 0
                    int64_t* rcx_2 = *rdx_2
                    (*(*rcx_2 + 0x20))(rcx_2)
                case 1
                    int64_t* rcx_3 = *rdx_2
                    (*(*rcx_3 + 8))(rcx_3)
                case 2
                    int64_t* rcx_8 = *rdx_2
                    
                    if (rcx_8 != 0)
                        (*(*rcx_8 + 0x10))(rcx_8, 1)
                case 3
                    int64_t* r8_1 = data_143f52528
                    int64_t* rcx_4 = *rdx_2
                    
                    if (r8_1 != 0)
                        (*(*r8_1 + 8))(r8_1, rcx_4)
                    else if (rcx_4 != 0)
                        (*(*rcx_4 + 0x30))(rcx_4, 1, r8_1)
                case 4
                    r8_2 = data_143f52538
                label_142249911:
                    int64_t* rcx_6 = *rdx_2
                    
                    if (r8_2 != 0)
                        (*(*r8_2 + 8))(r8_2, rcx_6)
                    else if (rcx_6 != 0)
                        (*(*rcx_6 + 8))(rcx_6, 1, r8_2)
                case 5
                    r8_2 = data_143f52548
                    goto label_142249911
                case 6
                    int64_t* rcx_9 = *rdx_2
                    
                    if (rcx_9 != 0)
                        (**rcx_9)(rcx_9, 1)
        i += 1
        rsi_1 += 0x10
    while (i s< arg1[1].d)

arg1[1].d = 0

if (*(arg1 + 0xc) == 0)
    return 

return sub_1405a5410(arg1, 0) __tailcall
