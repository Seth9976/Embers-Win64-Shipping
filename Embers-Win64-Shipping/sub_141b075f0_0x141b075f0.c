// 函数: sub_141b075f0
// 地址: 0x141b075f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
uint64_t rbx
rbx.b = 0
int128_t zmm6 = zx.o(0)
int128_t zmm7 = data_14399f5e0
int64_t* rax_1 = (*(*rcx + 0x78))(rcx)

if (rax_1 != 0)
    int64_t rdx = *rax_1
    void* rax_2 = (*(rdx + 0x150))(rax_1, rdx)
    
    if (rax_2 != 0 && ((*(rax_2 + 0x11a) - 1) & 0xfd) == 0)
        int64_t* rax_3 = sub_142029890(*(rax_2 + 0x188), 0)
        
        if (rax_3 != 0)
            void* r8_1 = rax_3[0x57]
            
            if (r8_1 != 0)
                int32_t rax_4 = *(r8_1 + 0xc)
                void* const rax_11
                
                if (rax_4 s>= data_143e1d9b4)
                    rax_11 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_4)
                    uint32_t rdx_2 = zx.d(temp0_1)
                    int32_t rax_6 = temp1_1 + rdx_2
                    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
                
                if (((*(rax_11 + 8) u>> 0x1d).b & 1) == 0)
                    zmm6 = *(r8_1 + 0x25c)
                    zmm7 = *(r8_1 + 0x24c)
                    rbx.b = (*(r8_1 + 0x2710) u>> 3).b & 1

char var_2c = rbx.b
arg2[4].b = (arg2[4].b & 0xfe) | 3
uint128_t zmm0
zmm0.d = zmm6.d
*(arg2 + 8) = zmm0
*arg2 = &data_1430560b8
arg2[3] = zmm7:0xc.q
return arg2
