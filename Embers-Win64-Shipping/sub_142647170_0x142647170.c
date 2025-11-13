// 函数: sub_142647170
// 地址: 0x142647170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int512_t zmm2
int128_t zmm6
result, zmm2, zmm6 = sub_141ed55e0(arg1, arg2)
int64_t* rdi = arg1[0x14]

if (rdi != 0)
    int128_t var_18_1 = zmm6
    zmm6 = *(arg1 + 0xb4)
    int128_t __saved_zmm7_1 = arg3
    arg3 = arg1[0x16].d
    result = (*(*rdi + 0x150))(rdi)
    
    if (result != 0)
        int64_t* rbx_1 = *(result + 0x120)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_14269bba0()
            void* rcx_1 = rbx_1[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rcx_1 + 0x38))
                int64_t result_1 = result
                result = *(rcx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    int512_t zmm3
                    zmm3.o = zmm6
                    zmm2.o = arg3
                    result = (*(*rbx_1 + 0x2f0))(rbx_1, rdi, zmm2, zmm3, __saved_zmm7_1, var_18_1)

return result
