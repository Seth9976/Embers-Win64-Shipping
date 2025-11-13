// 函数: sub_142c74720
// 地址: 0x142c74720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = nullptr
int32_t rdi = 0x5a

if (arg3 == 0)
    return 0

if (arg2 != 0)
    int64_t r14_1 = sx.q(sub_1428a29f0(sub_1427ec3c0(arg2), nullptr))
    
    if (r14_1.d s>= 1)
        char* rax_4 = data_143ccb898(r14_1)
        arg_18 = rax_4
        
        if (rax_4 != 0)
            int32_t rax_6
            int512_t zmm2_1
            rax_6, zmm2_1 = sub_1428a29f0(sub_1427ec3c0(arg2), &arg_18)
            
            if (r14_1.d == rax_6)
                char* rax_7 = arg_18
                
                if (rax_7 != 0 && rax_7 - rax_4 == r14_1)
                    rdi = sub_142c5ab30(arg1, arg3, rax_4, r14_1, zmm2_1)
            
            data_143ccb8a0(rax_4)

return zx.q(rdi)
