// 函数: sub_141f38420
// 地址: 0x141f38420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x51]

if (rcx != 0)
    int32_t zmm0 = arg1[0x56].d
    *(rcx + 0x420) = _mm_unpacklo_ps(0x44fa0000, 0x44fa0000)
    *(rcx + 0x428) = zmm0

sub_141ede5c0(arg1)
uint32_t rbx = zx.d(arg1[0x2a].b)
char result = sub_1423dd000()

if (rbx s<= data_143a30368:4.d)
    result = sub_141f4ac80(arg1)
    
    if (result != 0)
        int128_t* rax_2 = j_sub_140a82f30(0x160)
        
        if (rax_2 != 0)
            rax_2 = sub_14225a730(rax_2, arg1)
        
        arg1[0x5a] = rax_2
        void* rax_3 = arg1[0x15]
        
        if (rax_3 == 0)
            rax_3 = sub_141ee69e0(arg1)
        
        int64_t* rcx_5 = *(rax_3 + 0x1b0)
        return (*(*rcx_5 + 0xe8))(rcx_5, arg1)

return result
