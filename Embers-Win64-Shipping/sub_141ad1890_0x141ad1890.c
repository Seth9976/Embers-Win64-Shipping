// 函数: sub_141ad1890
// 地址: 0x141ad1890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
arg1[0x30].d = 0
char rax = sub_141e2ae10(arg1, *arg2)
*(arg1 + 0x186) = rax

if (rax != 0)
    int128_t zmm6_1 = sub_141e1eab0(sub_141e23160(arg1), rdi)
    uint32_t rcx_2 = zx.d(*(arg1 + 0x184))
    int32_t zmm0_1
    
    if (rcx_2 == 0)
        arg1[0x30].d =
            sub_141e3b510(&arg1[0x1f], sub_141e3b530(&arg1[0x2a], *(arg1 + 0xf4), rdi[3].d))
    else if (rcx_2 == 1)
        arg1[0x30].d = sub_141e3b430(&arg1[0x20], *(arg1 + 0x185), rdi[3].d)
    else if (rcx_2 == 2)
        int64_t* rsi_1 = *(*rdi + 0xa0)
        
        if (rsi_1 != 0)
            void* rax_3 = sub_14245f6d0()
            void* rcx_4 = rsi_1[2]
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                rdi[3].d
                uint32_t zmm0_2[0x4]
                float zmm6_2[0x4]
                zmm0_2, zmm6_2 = sub_141e01880(rsi_1, arg1[0x29])
                int512_t zmm6_3
                zmm0_1, zmm6_3 = sub_141e3b530(&arg1[0x2a], zmm0_2, zmm6_2)
                zmm6_3.o = zmm6_1
                arg1[0x30].d = zmm0_1
    
    uint32_t zmm1_1[0x4] = arg1[0x30].d
    zmm0_1 = (zx.o(0)).d
    
    if (not(zmm1_1[0] f< zmm0_1))
        zmm0_1 = __minss_xmmss_memss(zmm1_1[0], 0x3f800000)[0]
    
    arg1[0x30].d = zmm0_1
    
    if (not(zmm0_1 f<= 9.99999975e-06f))
        sub_141ad2f10(arg1, rdi)

return sub_141e32270(&arg1[0x1c], rdi) __tailcall
