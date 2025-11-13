// 函数: sub_1426ab930
// 地址: 0x1426ab930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* i = *(*(arg2 + 0x10) + 0x70)

if (i == 0)
    return arg1

do
    int64_t rax_3
    
    if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
        rax_3 = 0
    else
        rax_3 = i[2]
    
    if (rax_3 == arg3)
        break
    
    int64_t rax_4 = i[8]
    
    if (not(test_bit(rax_4, 0xd)) && not(test_bit(rax_4, 0x10)))
        for (int64_t* j = *arg4; j != &j[sx.q(arg4[1].d)]; j = &j[1])
            if (*j == i)
                goto label_1426abaa2
        
        sub_140d111b0()
        
        if ((data_143e1ba78 & *(i[1] + 0x10)) != 0)
        label_1426aba18:
            int32_t rdx_4 = arg1[1].d
            int32_t rsi_1 = rdx_4 - 1
            
            if (rdx_4 == 0)
                rsi_1 = -1
            
            int32_t rax_6 = rdx_4 - 1
            
            if (rdx_4 == 0)
                rax_6 = 0
            
            if (rax_6 != 0)
                int32_t rax_7
                rax_7.b = rdx_4 s<= 0
                
                if (rdx_4 s<= 0)
                    rsi_1 = 0
                
                int32_t rax_9 = rax_7 + 1 + rdx_4
                arg1[1].d = rax_9
                
                if (rax_9 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t rcx_6 = sx.q(rsi_1)
                *(*arg1 + (rcx_6 << 1)) = 0xa
                *(*arg1 + (rcx_6 << 1) + 2) = 0
            
            int64_t var_38
            int64_t* rax_12 = sub_1426adee0(&var_38, i, sx.q(*(i + 0x4c)) + arg2)
            int32_t rcx_8 = rax_12[1].d
            int32_t r8_2 = rcx_8 - 1
            
            if (rcx_8 == 0)
                r8_2 = 0
            
            sub_140a20ba0(arg1, *rax_12, r8_2)
            int64_t rcx_10 = var_38
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        else
            sub_140d12020()
            
            if ((data_143e1c4a8 & *(i[1] + 0x10)) != 0)
                goto label_1426aba18
            
            if (sub_1426aa760(i) != 0)
                goto label_1426aba18
    
label_1426abaa2:
    i = i[0xb]
while (i != 0)

return arg1
