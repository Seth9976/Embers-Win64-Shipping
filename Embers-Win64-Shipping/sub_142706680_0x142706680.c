// 函数: sub_142706680
// 地址: 0x142706680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg1[0x4f].b == 0 && arg1[0x37].b != 2)
    rax = zx.q(arg1[0x47].d)
    
    if (rax.d != 0xffffffff && arg2 != 0xffffffff && (arg2 == rax.d || arg2 == 0 || rax.d == 0))
        void* rax_1 = arg1[0x15]
        
        if (rax_1 == 0)
            rax_1 = sub_141ee69e0(arg1)
        
        rax = sub_1426fbe40(rax_1)
        uint64_t rbp_1 = rax
        
        if (rax != 0)
            int32_t arg_10
            sub_140ba6bd0(rax + 0x78, &arg_10, &arg1[0x4b])
            int64_t rcx_2 = sx.q(arg_10)
            
            if (rcx_2.d == 0xffffffff)
                rax = 0
            else
                rax = rcx_2 * 0x38 + *(rbp_1 + 0x78)
            
            void* const rsi_1 = rax + 8
            
            if (rax == 0)
                rsi_1 = nullptr
            
            if (rsi_1 != 0 && (*(rsi_1 + 0x20) & 1) != 0)
                int32_t rdx_1 = *(rsi_1 + 0x18)
                
                if (rdx_1 s>= 0)
                    int32_t* rcx_3 = *(rbp_1 + 0xd8)
                    
                    if (rcx_3 != 0)
                        sub_142616490(rcx_3, rdx_1)
                        sub_1426160f0(*(rbp_1 + 0xd8), *(rsi_1 + 0x18))

if (arg1[0x37].b == 2)
    return 

rax = zx.q(arg1[0x47].d)

if (rax.d == 0xffffffff || arg2 == 0xffffffff || (arg2 != rax.d && arg2 != 0 && rax.d != 0))
    return 

if (arg3 == 0)
    int64_t* rcx_5 = arg1[0x1d]
    
    if (rcx_5 != 0 && (*(*rcx_5 + 0x528))(rcx_5) != 0)
        sub_142714b30(arg1[0x1d])

void* rax_5 = arg1[0x1d]
float rax_6
float zmm0[0x4]

if (rax_5 == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_6 = data_143dbb200
else
    void* rcx_7 = *(rax_5 + 0xb0)
    
    if (rcx_7 == 0)
        zmm0 = zx.o(data_143b58088)
        rax_6 = data_143b58090
    else
        float zmm1[0x4] = *(rcx_7 + 0x1d0)
        int64_t var_38
        var_38.d = zmm1[0]
        var_38:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx_7 + 0x114)
        zmm0 = zx.o(var_38)
        rax_6 = temp0_2[0]

arg1[0x33] = zmm0.q
arg1[0x34].d = rax_6
void* rax_9 = arg1[0x20]

if (rax_9 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(rax_9 + 0xe8)

arg1[0x36].d = zmm0[0]
arg1[0x37].b = 2
sub_142717810(arg1)
