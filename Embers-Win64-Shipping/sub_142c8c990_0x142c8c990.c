// 函数: sub_142c8c990
// 地址: 0x142c8c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3
int64_t* arg_20 = nullptr
int64_t var_18 = 0
int64_t rax = -1

do
    rax += 1
while (arg2[rax] != 0)

char* rdx_2

if (rax == 0 || *arg2 == 0x3d)
    rdx_2 = "NTLM handshake failure (empty type-2 message)\n"
else
    int32_t result
    result, arg3 = sub_142c75b70(arg2, &arg_20, &var_18)
    int32_t result_1 = result
    
    if (result != 0)
        return result
    
    int64_t* rcx_1 = arg_20
    
    if (rcx_1 == 0)
        rdx_2 = "NTLM handshake failure (empty type-2 message)\n"
    else
        bool cond:0_1 = var_18 u< 0x20
        *(rsi + 4) = result
        
        if (not(cond:0_1) && *rcx_1 == 0x5053534d4c544e && rcx_1[1].d == 2)
            int32_t rax_3 = sub_142c8ebd0(rcx_1 + 0x14)
            int64_t* rdx_1 = arg_20
            *(rsi + 4) = rax_3
            *(rsi + 8) = rdx_1[3]
            
            if (test_bit(rax_3, 0x17))
                int32_t result_2
                int512_t zmm2
                result_2, zmm2 = sub_142c8cb20(arg1, rdx_1, var_18, rsi, arg4)
                result_1 = result_2
                
                if (result_2 != 0)
                    sub_142c64850(arg1, "NTLM handshake failure (bad type-2 message)\n", 
                        data_143ccb8a0(arg_20), zmm2)
                    return zx.q(result_1)
                
                rdx_1 = arg_20
            
            data_143ccb8a0(rdx_1, rdx_1)
            return zx.q(result_1)
        
        arg3 = data_143ccb8a0()
        rdx_2 = "NTLM handshake failure (bad type-2 message)\n"

sub_142c64850(arg1, rdx_2, arg3, arg4)
return 0x3d
