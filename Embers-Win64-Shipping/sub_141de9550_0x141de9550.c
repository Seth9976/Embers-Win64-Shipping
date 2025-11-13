// 函数: sub_141de9550
// 地址: 0x141de9550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0f f<= *(arg1 + 0x94)
uint64_t result = sub_141e3e2f0(arg1, arg2, arg3, arg4)
float zmm0 = *arg2
float zmm1 = *arg3
int32_t arg_8

if (rbx.b == 0)
    int32_t i_1 = 0
    
    if (zmm0 < zmm1)
        result = zx.q(*(arg1 + 0xb0))
        int32_t i = 0
        arg_8 = 0
        
        if (result.d s> 0)
            int64_t rbp_1 = 0
            
            do
                int64_t rax = *(arg1 + 0xa8)
                
                if (*(rax + rbp_1 + 0x1c) != 0)
                    sub_141de9700((sx.q(i) << 5) + rax, arg2, &arg_8, arg4)
                
                result = zx.q(*(arg1 + 0xb0))
                i += 1
                rbp_1 += 0x20
            while (i s< result.d)
            
            if (result.d s> 0)
                int64_t rsi_3 = 0
                
                do
                    result = *(arg1 + 0xa8)
                    
                    if (*(rsi_3 + result + 0x1c) != 0)
                        result = sub_141de9700((sx.q(i_1) << 5) + result, arg1 + 0x90, arg3, arg4)
                    
                    i_1 += 1
                    rsi_3 += 0x20
                while (i_1 s< *(arg1 + 0xb0))
    else if (*(arg1 + 0xb0) s> 0)
        int64_t rsi_2 = 0
        
        do
            result = *(arg1 + 0xa8)
            
            if (*(rsi_2 + result + 0x1c) != 0)
                result = sub_141de9700((sx.q(i_1) << 5) + result, arg2, arg3, arg4)
            
            i_1 += 1
            rsi_2 += 0x20
        while (i_1 s< *(arg1 + 0xb0))
else
    if (not(zmm0 > zmm1))
        return sub_141de9970(arg1 + 0xa8, arg2, arg3, arg4)
    
    result = sub_141de9970(arg1 + 0xa8, arg2, arg1 + 0x90, arg4)
    int32_t i_2 = 0
    arg_8 = 0
    
    if (*(arg1 + 0xb0) s> 0)
        int64_t rsi_1 = 0
        
        do
            result = *(arg1 + 0xa8)
            
            if (*(rsi_1 + result + 0x1c) != 0)
                result = sub_141de9700((sx.q(i_2) << 5) + result, &arg_8, arg3, arg4)
            
            i_2 += 1
            rsi_1 += 0x20
        while (i_2 s< *(arg1 + 0xb0))
return result
