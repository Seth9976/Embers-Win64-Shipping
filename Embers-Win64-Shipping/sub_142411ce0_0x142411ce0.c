// 函数: sub_142411ce0
// 地址: 0x142411ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = -1

do
    rax += 1
while (arg2[rax] != 0)

if (rax.d s> 0)
    int32_t i = 0
    
    if (*(arg1 + 0x50) s> 0)
        int64_t rbp_1 = sx.q(rax.d)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t rax_1 = *(arg1 + 0x48)
            int16_t* const rbx_1
            
            if (*(rsi_1 + rax_1 + 8) == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *(rsi_1 + rax_1)
            
            if (sub_140a546e0(rbx_1, arg2, rbp_1) == 0)
                int16_t rax_3
                
                if (rbx_1[rbp_1 - 1] != 0x3d)
                    rax_3 = rbx_1[rbp_1]
                
                if (rbx_1[rbp_1 - 1] == 0x3d || rax_3 == 0x3d || rax_3 == 0)
                    return &rbx_1[rbp_1]
            
            i += 1
            rsi_1 = &rsi_1[2]
        while (i s< *(arg1 + 0x50))

return arg3
