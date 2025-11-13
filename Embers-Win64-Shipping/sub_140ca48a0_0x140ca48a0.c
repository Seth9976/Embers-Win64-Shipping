// 函数: sub_140ca48a0
// 地址: 0x140ca48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void* rsi = *(result + 8)
int64_t var_18

if ((*(rsi + 0x2a) & 0x20) != 0)
    for (int64_t* i = *(arg1 + 0x78); i != 0; i = i[0xc])
        result = sub_140cea0a0(i, *(*arg2 + 8))
        
        if (result.b != 0)
            int32_t rbp_1 = i[7].d
            int32_t rsi_1 = 0
            
            if (rbp_1 s> 0)
                do
                    var_18 = *(*arg2 + 8)
                    sub_140bb37e0(&var_18)
                    (*(*i + 0x88))(i, arg2, sx.q(*(i + 0x4c)) + sx.q(*(i + 0x3c) * rsi_1) + arg3, 
                        0, var_18, i)
                    result = sub_140bafac0(&var_18)
                    rsi_1 += 1
                while (rsi_1 s< rbp_1)
else if ((*(rsi + 0x2b) & 0x10) == 0)
    for (int64_t* i_1 = *(arg1 + 0x70); i_1 != 0; i_1 = i_1[0xb])
        result = sub_140cea0a0(i_1, *(*arg2 + 8))
        
        if (result.b != 0)
            int32_t rbp_2 = i_1[7].d
            int32_t rsi_2 = 0
            
            if (rbp_2 s> 0)
                do
                    var_18 = *(*arg2 + 8)
                    sub_140bb37e0(&var_18)
                    (*(*i_1 + 0x88))(i_1, arg2, 
                        sx.q(*(i_1 + 0x4c)) + sx.q(*(i_1 + 0x3c) * rsi_2) + arg3, 0, var_18, i_1)
                    result = sub_140bafac0(&var_18)
                    rsi_2 += 1
                while (rsi_2 s< rbp_2)
else
    int64_t** i_3 = *(rsi + 0x68)
    int64_t** i_2 = i_3
    
    if (i_3 != 0)
        do
            int64_t* rcx_5 = *i_2
            
            if (rcx_5 != 0)
                *(rsi + 0x68) = i_2[2]
                result = sub_140ca4c20(rcx_5, arg2, arg3, i_2[1].d)
                *(rsi + 0x68) = i_3
            
            i_2 = i_2[3]
        while (i_2 != 0)
return result
