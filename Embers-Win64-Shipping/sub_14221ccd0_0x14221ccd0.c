// 函数: sub_14221ccd0
// 地址: 0x14221ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x45].d

if ((rax.b & 0x20) == 0)
    arg1[0x45].d = rax | 0x20
    
    if (arg1[0x1e].b == 3)
        void* rdi_1 = arg1[0x4b]
        int64_t rax_3
        
        if (rdi_1 != 0)
            void* rax_2 = sub_14256a090()
            arg2 = *(rdi_1 + 0x10)
            arg3 = rax_2 + 0x30
            rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rdi_1 == 0 || rax_3.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_3 << 3)) != arg3)
            arg3.b = 1
            uint64_t rax_5 = sub_141dbe590(arg1, 0, arg3.b)
            arg1[0x45].d &= 0xffffffdf
            return rax_5
    
    (*(*arg1 + 0x6f8))(arg1, arg2, arg3)
    (*(*arg1 + 0x640))(arg1)
    int64_t rdx
    rdx.b = 1
    (*(*arg1 + 0x2f8))(arg1, rdx)
    float zmm0[0x4] = *(arg1 + 0x94)
    int512_t zmm1
    zmm1.o = 0x3dcccccd
    
    if (not(zmm0[0] < 0.100000001f))
        zmm1.o = __minss_xmmss_memss(zmm0[0], 0x3f800000)
    
    rax = (*(*arg1 + 0x390))(arg1, zmm1)
    arg1[0x45].d &= 0xffffffdf

return rax
