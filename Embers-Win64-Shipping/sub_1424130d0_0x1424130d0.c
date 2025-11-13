// 函数: sub_1424130d0
// 地址: 0x1424130d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = -1

do
    result += 1
while (arg2[result] != 0)

void* r12 = nullptr

if (result.d s> 0)
    int32_t i = 0
    
    if (*(arg1 + 0x50) s> 0)
        int64_t* rsi_1 = nullptr
        int64_t rbp_1 = sx.q(result.d)
        
        do
            int64_t rax = *(arg1 + 0x48)
            int16_t* const rbx_1
            
            if (*(rsi_1 + rax + 8) == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *(rsi_1 + rax)
            
            result = sub_140a546e0(rbx_1, arg2, rbp_1)
            
            if (result.d == 0)
                if (rbx_1[rbp_1 - 1] != 0x3d)
                    result = zx.q(rbx_1[rbp_1])
                
                if (rbx_1[rbp_1 - 1] == 0x3d || result.w == 0x3d || result.w == 0)
                    r12 = &rbx_1[rbp_1]
                    break
            
            i += 1
            rsi_1 = &rsi_1[2]
        while (i s< *(arg1 + 0x50))

result.b = r12 != 0
return result
