// 函数: sub_14243ec70
// 地址: 0x14243ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(data_143f5e930)

if (result.d s> 0)
    sub_140599090(&data_143a305b0)
    result = zx.q(data_143f5e930)

int32_t i = 0

if (result.d s> 0)
    do
        result = sub_140d3c6e0(data_143f5e928 + (sx.q(i) << 3))
        
        if (result != 0)
            void* rax_1 = sub_140d21d80(result)
            void* rcx_4 = data_143f5b298
            int64_t* j = *(rcx_4 + 0xc38)
            
            for (void* rdi_1 = &j[sx.q(*(rcx_4 + 0xc40))]; j != rdi_1; j = &j[1])
                void* r15_1 = *(*j + 0x278)
                
                if (r15_1 != 0)
                    void* rax_2 = sub_1423de4f0(rcx_4, r15_1)
                    int64_t* k = *(rax_2 + 0x220)
                    
                    for (void* rbp_3 = &k[sx.q(*(rax_2 + 0x228)) * 2]; k != rbp_3; k = &k[2])
                        int64_t* rcx_5 = *k
                        
                        if (rcx_5 != 0)
                            (*(*rcx_5 + 0x358))(rcx_5, result)
                    
                    sub_1420de500(r15_1, *(rax_1 + 0x18), 0)
                    rcx_4 = data_143f5b298
            
            int64_t rdi_2 = sx.q(data_143f5e940)
            int64_t rbx_1 = *(rax_1 + 0x18)
            int32_t rax_4 = (rdi_2 + 1).d
            bool cond:1_1 = rax_4 s<= data_143f5e944
            data_143f5e940 = rax_4
            
            if (not(cond:1_1))
                sub_1405a4d70(&data_143f5e938)
            
            int64_t rax_5 = data_143f5e938
            int64_t (* var_38)(int64_t arg1, int64_t* arg2) = sub_14242e800
            *(rax_5 + (rdi_2 << 3)) = rbx_1
            void arg_8
            void* var_30_1 = &arg_8
            result = sub_140d3bfe0(sub_140d21d80(result), &var_38, 1, 0, 0x20000000)
        
        i += 1
    while (i s< data_143f5e930)

bool cond:0 = data_143f5e934 == 0
data_143f5e930 = 0

if (cond:0)
    return result

return sub_1405c5570(&data_143f5e928, 0) __tailcall
