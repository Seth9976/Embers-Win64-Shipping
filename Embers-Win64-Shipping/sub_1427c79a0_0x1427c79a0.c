// 函数: sub_1427c79a0
// 地址: 0x1427c79a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
var_18.d = 5
int64_t var_10 = 0
int128_t zmm0

if (arg2 == 0)
label_1427c7a30:
    zmm0 = var_18.o
else
    void* rax_2 = (*(*arg2 + 8))(arg2)
    
    if (rax_2 == 0)
    label_1427c7a30_1:
        zmm0 = var_18.o
    else
        int32_t rsi_1 = *(rax_2 + 0x10)
        int32_t rbx_1 = 0
        
        if (rsi_1 == 0)
        label_1427c7a30_2:
            zmm0 = var_18.o
        else
            while (true)
                int64_t* rax_4 = (*(*arg2 + 0x18))(arg2, zx.q(rbx_1))
                
                if (rax_4 != 0)
                    char* rcx_2 = *rax_4
                    void* r9_2 = arg3 - rcx_2
                    uint32_t i
                    uint32_t r8
                    
                    do
                        r8 = zx.d(*rcx_2)
                        i = zx.d(*(rcx_2 + r9_2))
                        
                        if (r8 != i)
                            break
                        
                        rcx_2 = &rcx_2[1]
                    while (i != 0)
                    
                    if (r8 - i == 0)
                        zmm0 = *(rax_4 + 8)
                        break
                
                rbx_1 += 1
                
                if (rbx_1 u>= rsi_1)
                    goto label_1427c7a30_2

*arg1 = zmm0
return arg1
