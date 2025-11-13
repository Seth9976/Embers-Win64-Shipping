// 函数: sub_141e7eea0
// 地址: 0x141e7eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int64_t rdx
rax, rdx = sub_140a80ea0()

if (rax == 0)
    void** const var_38 = &data_142d42ed8
    char var_60 = arg2
    char var_5f = arg3
    int64_t (* var_58)(int64_t* arg1) = sub_141e766f0
    int64_t var_48 = 0
    int128_t var_30 = arg1.o
    return sub_141e85cb0(&var_58, arg4)

uint64_t result = zx.q(*(arg1 + 0x352))

if (arg2 != 0)
    if ((result.b & 1) == 0 || arg3 != 0)
        int32_t i = 0
        
        if (*(arg1 + 0x148) s> 0)
            int64_t rsi_2 = 0
            
            do
                result = *(arg1 + 0x140)
                int64_t* rbp_2 = *(rsi_2 + result)
                
                if ((*(rbp_2 + 0x74) & 2) != 0)
                    if (arg3 == 0)
                        result = sub_141e64540(rbp_2)
                    
                    if (arg3 != 0 || result.b != 0)
                        result = sub_141e6bc20(rbp_2, 0)
                
                i += 1
                rsi_2 += 8
            while (i s< *(arg1 + 0x148))
else if ((result.b & 1) != 0 || arg3 != 0)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x148) s> 0)
        int64_t rsi_1 = 0
        
        do
            result = *(arg1 + 0x140)
            int64_t* rbp_1 = *(rsi_1 + result)
            
            if ((*(rbp_1 + 0x74) & 2) == 0)
                if (arg3 == 0)
                    result = sub_141e64540(rbp_1)
                
                if (arg3 != 0 || result.b != 0)
                    rdx.b = 1
                    result, rdx = sub_141e6bc20(rbp_1, rdx)
            
            i_1 += 1
            rsi_1 += 8
        while (i_1 s< *(arg1 + 0x148))

*(arg1 + 0x352) &= 0xfe
*(arg1 + 0x352) |= arg2
return result
