// 函数: sub_1408481b0
// 地址: 0x1408481b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg1)
uint64_t result_1 = result

if (result != 0)
    int32_t r8_4 = (arg1[9] ^ *(result + 0x1ec)) | (arg1[8] ^ *(result + 0x1e8))
        | (arg1[7] ^ *(result_1 + 0x1e4))
    result = zx.q(arg1[6]) ^ zx.q(*(result_1 + 0x1e0))
    
    if ((r8_4 | result.d) == 0)
        result = zx.q(arg1[0xa].b)
        
        if (*(result_1 + 0x1f0) == result.b)
            result = zx.q(arg1[0xb]) ^ zx.q(*(result_1 + 0x1f4))
            
            if (((*(result_1 + 0x200) ^ arg1[0xe]) | (*(result_1 + 0x1fc) ^ arg1[0xd])
                    | (*(result_1 + 0x1f8) ^ arg1[0xc]) | result.d) == 0)
                int32_t rcx_5 = *(result_1 + 0x204)
                int32_t rdx_3 = arg1[0xf]
                result = zx.q(rcx_5) ^ zx.q(rdx_3)
                
                if ((result.b & 1) == 0)
                    result = zx.q(rcx_5) ^ zx.q(rdx_3)
                    
                    if ((result.b & 2) == 0 && ((rcx_5.b ^ rdx_3.b) & 4) == 0
                            && result_1 + 0x3e8 != &arg1[2])
                        int64_t rcx_7 = *(result_1 + 0x3e8)
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        *(result_1 + 0x3e8) = *(arg1 + 8)
                        *(arg1 + 8) = 0
                        *(result_1 + 0x3f0) = arg1[4]
                        result = zx.q(arg1[5])
                        *(result_1 + 0x3f4) = result.d
                        *(arg1 + 0x10) = 0

return result
