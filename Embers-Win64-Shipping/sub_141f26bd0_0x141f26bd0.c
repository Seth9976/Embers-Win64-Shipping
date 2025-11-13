// 函数: sub_141f26bd0
// 地址: 0x141f26bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** var_28 = nullptr
(*(*arg1 + 0x688))(arg1, &var_28, 3)
int64_t** rdi = var_28
int64_t result = sx.q(0)
void* rsi = &rdi[result]

if (rdi != rsi)
    int128_t zmm6 = 0xbf800000
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            void* rax_1 = sub_1425b3af0()
            void* rdx_1 = rbx_1[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    zmm6 = sub_142397530(rbx_1, zmm6, 0)
                    *(rbx_1 + 0x3d) &= 0xdf
                    result.b = arg2 << 5
                    *(rbx_1 + 0x3d) |= result.b
        
        rdi = &rdi[1]
    while (rdi != rsi)
    
    rdi = var_28

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
