// 函数: ?FAddClassDep@MRE@@IEAAHKKPEAH0@Z
// 地址: 0x1413a08b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

for (int32_t i = 0; i u< 2; i += 1)
    int32_t j = 0
    int32_t r15_1
    r15_1.b = i != 0
    
    do
        void* var_28
        arg4 = sub_1419a2ec0(*(arg1 + 0x5150), &var_28, &data_143ec5330, 
            (sbb.d(arg4, arg4, j != 0) & 2) + r15_1)
        void* rax_3 = var_28
        int64_t rbp_1 = 0
        
        if (rax_3 != 0)
            int64_t rdx_1 = sx.q(*(rax_3 + 0x10c))
            void* var_20
            int64_t* rdi_1 = *(var_20 + 0x10)
            int64_t* rax_5 = rdi_1[3]
            
            if (rax_5[rdx_1] == 0)
                arg4 = sub_1419ccf30(rdi_1, rdx_1.d)
                rax_5 = rdi_1[3]
            
            rbp_1 = rax_5[rdx_1]
        
        int64_t rdi_2 = sx.q(arg2[1].d)
        int32_t rax_6 = (rdi_2 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            arg4 = sub_1405a4d70(arg2)
        
        result = *arg2
        j += 1
        *(result + (rdi_2 << 3)) = rbp_1
    while (j u< 2)

return result
