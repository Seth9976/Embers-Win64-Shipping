// 函数: sub_1413ef610
// 地址: 0x1413ef610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_20 = arg5
int32_t i = 0
int32_t i_1 = 0

do
    int32_t j = 0
    int32_t r12_1
    r12_1.b = i != 0
    
    do
        int32_t k = 0
        arg5 = zx.q(sbb.d(arg5.d, arg5.d, j != 0)) & 2
        
        do
            void* var_38
            arg4 = sub_1419a2ec0(*(arg1 + 0x5150), &var_38, &data_143ec9210, 
                (sbb.d(arg4, arg4, k != 0) & 4) + r12_1 + arg5.d)
            void* rax_4 = var_38
            int64_t rbp_1 = 0
            
            if (rax_4 != 0)
                int64_t rdx_1 = sx.q(*(rax_4 + 0x10c))
                void* var_30
                int64_t* rbx_1 = *(var_30 + 0x10)
                int64_t* rax_6 = rbx_1[3]
                
                if (rax_6[rdx_1] == 0)
                    arg4 = sub_1419ccf30(rbx_1, rdx_1.d)
                    rax_6 = rbx_1[3]
                
                rbp_1 = rax_6[rdx_1]
            
            int64_t rbx_2 = sx.q(arg2[1].d)
            int32_t rax_7 = (rbx_2 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                arg4 = sub_1405a4d70(arg2)
            
            k += 1
            *(*arg2 + (rbx_2 << 3)) = rbp_1
        while (k u< 2)
        
        j += 1
    while (j u< 2)
    
    i = i_1 + 1
    i_1 = i
while (i u< 2)

return i
