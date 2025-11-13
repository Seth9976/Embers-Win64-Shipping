// 函数: sub_14088c170
// 地址: 0x14088c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1)

if (rax.d u<= 9)
    switch (rax)
        case 0, 5, 8
            int64_t* rax_1 = j_sub_140a82f30(0x10)
            int64_t* rbx = rax_1
            
            if (rax_1 == 0)
                rbx = rax_1
            else
                *rbx = 0
                rbx[1] = 0
                *(rbx + 6) = 0
            
            sub_1419c7530(rbx + 4, arg2, u"NiagaraParticleDataFloat", 0)
            sub_1419c6ab0(&rbx[1], arg2, u"NiagaraFloatDataStride", 0)
            return rbx
        case 3
            int32_t* rax_3 = j_sub_140a82f30(4)
            
            if (rax_3 == 0)
                return rax_3
            
            *rax_3 = 0
            return rax_3

return 0
