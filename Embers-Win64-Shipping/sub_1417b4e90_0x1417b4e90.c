// 函数: sub_1417b4e90
// 地址: 0x1417b4e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1 + 0x18
int64_t* rsi = rdi
int64_t i_1 = 8
int64_t* result
int64_t i

do
    result, arg3 = sub_141782800(arg2, rsi, arg3)
    
    if ((arg2[5].b & 1) != 0)
        int64_t** j = *rdi
        
        for (void* r9_3 = &j[sx.q(rdi[1].d) * 2]; j != r9_3; j = &j[2])
            result = *j
            int64_t* result_1 = nullptr
            char rdx_1 = result[1].b
            
            if (rdx_1 == 1)
                result_1 = result
            
            int32_t rcx_1
            
            if (result_1 == 0)
                if (rdx_1 == 0)
                    result_1 = result
                
                if (result_1 == 0)
                    if (rdx_1 == 2)
                        result_1 = result
                    
                    int32_t rcx_2 = (neg.q(result_1)).d
                    rcx_1 = sbb.d(rcx_2, rcx_2, result_1 != 0) & 2
                else
                    rcx_1 = 1
            else
                rcx_1 = 0
            
            int64_t rcx_5
            
            switch (rcx_1)
                case 0
                    rcx_5 = *(arg1 + 0x118)
                case 1
                    rcx_5 = *(arg1 + 0x138)
                case 2
                    rcx_5 = *(arg1 + 0x158)
            
            *(rcx_5 + (zx.q(j[1].w) << 3)) = result
    
    rsi = &rsi[4]
    rdi = &rdi[4]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
