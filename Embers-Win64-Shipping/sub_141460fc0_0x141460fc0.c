// 函数: sub_141460fc0
// 地址: 0x141460fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(*(arg3 + 0x110))
char* result = *arg2

if (result[r13] != 0)
    int32_t i = 0
    
    if (arg1[1].d s> 0)
        int32_t rbx_1 = 1
        int64_t r14_1 = 0
        
        do
            result = *arg2
            void* rdi_2 = *arg1 + r14_1
            
            if ((result[r13] & rbx_1.b) != 0)
                int64_t rax = sx.q(*(arg3 + 0x110))
                
                if (rax.d s>= 0 && rax.d s< *(rdi_2 + 0x1560))
                    result = *(rdi_2 + 0x1558)
                
                if (rax.d s< 0 || rax.d s>= *(rdi_2 + 0x1560) || *(result + (rax << 3)) == 0)
                    int64_t* rcx_1 = *(arg3 + 8)
                    int512_t zmm2
                    zmm2.o = *(rdi_2 + 0xd5c)
                    result = sub_141428a40(rdi_2, arg3, 
                        (*(*rcx_1 + 0x150))(rcx_1, rdi_2, zmm2, *(rdi_2 + 0x4898), 0, 0, 0, 
                            0xbf800000, arg4))
            
            i += 1
            rbx_1 = rol.d(rbx_1, 1)
            r14_1 += 0x5240
        while (i s< arg1[1].d)

return result
