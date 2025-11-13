// 函数: sub_1418b70a0
// 地址: 0x1418b70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x28) s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    int64_t* rcx = *(rsi_1 + *(arg1 + 0x20))
    
    if ((*(*rcx + 0x50))(rcx).b == arg2)
        if (data_143de5426 == 0 && data_143f138f5 != 0)
            *(arg1 + 0x30) = i
            
            if (i s>= 0 && i s< *(arg1 + 0x28))
                int64_t* rbx = *(*(arg1 + 0x20) + sx.q(i) * 0x10)
                
                if (rbx != 0)
                    if ((*(*rbx + 0x50))(rbx) != 1)
                        if ((*(*rbx + 0x50))(rbx) != 2)
                            char rax_8
                            int64_t r9_1
                            rax_8, r9_1 = (*(*rbx + 0x50))(rbx)
                            
                            if (rax_8 != 0)
                                sub_140af98a0("Unknown", 0x79, 
                                    Attempting to play an Active PreLoadScreen type that hasn't been "
                                "implemented inside of PreLoadScreenman", r9_1)
                                sub_140afbb40()
                            else
                                sub_1418b40a0(arg1, arg3)
                        else
                            sub_1418b45e0(arg1)
                    else
                        sub_1418b4330(arg1, arg3)
        
        break
    
    i += 1
    rsi_1 = &rsi_1[2]
while (i s< *(arg1 + 0x28))
