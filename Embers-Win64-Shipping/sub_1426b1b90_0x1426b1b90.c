// 函数: sub_1426b1b90
// 地址: 0x1426b1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143b57f88
*arg2 = data_143b57f80
arg2[1].d = rax
int32_t rax_1 = arg1[0x59].d
int64_t rdi = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rsi_2 = rdi * 0x14
    
    while (true)
        int64_t r14_1 = rdi
        int32_t* rbx_2 = arg1[0x58] + rsi_2
        int64_t rax_3 = sub_140d3c6e0(rbx_2)
        int32_t rax_4
        uint128_t zmm0
        
        if (rax_3 != 0)
            void var_38
            int64_t* rax_6 = (*(*arg1 + 0x7c0))(arg1, &var_38, rax_3)
            zmm0 = zx.o(*rax_6)
            rax_4 = rax_6[1].d
        else
            uint128_t zmm2 = data_143b57f80.d
            int32_t zmm1 = rbx_2[2]
            
            if ((zmm2 ^ 0x80000000).d f>= zmm1 || zmm1 f>= zmm2.d)
            label_1426b1c64:
                rdi -= 1
                rsi_2 -= 0x14
                
                if (r14_1 s<= 0)
                    break
                
                continue
            else
                zmm2 = data_143b57f80:4.d
                zmm1 = rbx_2[3]
                
                if ((zmm2 ^ 0x80000000).d f>= zmm1 || zmm1 f>= zmm2.d)
                    goto label_1426b1c64
                
                zmm2 = data_143b57f88
                zmm1 = rbx_2[4]
                
                if ((zmm2 ^ 0x80000000).d f>= zmm1 || not(zmm1 f< zmm2.d))
                    goto label_1426b1c64
                
                zmm0 = zx.o(*(rbx_2 + 8))
                rax_4 = rbx_2[4]
        
        *arg2 = zmm0.q
        arg2[1].d = rax_4
        break

return arg2
