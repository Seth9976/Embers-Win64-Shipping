// 函数: sub_141ad5890
// 地址: 0x141ad5890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x53) == 0
int32_t r12 = -1
int128_t zmm8 = zx.o(0)
*(arg1 + 0x54) = 0
int128_t zmm11

if (cond:0)
    zmm11 = 0x3f800000
else
    zmm11 = zx.o(0)

int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
void var_a8

if (sub_141e2ae10(arg1, *arg2) == 0)
    uint64_t i_3 = zx.q(arg1[9].d)
    arg1[9].d = 0
    
    if (*(arg1 + 0x4c) != i_3.d)
        sub_1405dadb0(&arg1[8], i_3.d)
    
    if (i_3.d s> 0)
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            int64_t rbp_2 = sx.q(arg1[9].d)
            int32_t rax_7 = (rbp_2 + 1).d
            arg1[9].d = rax_7
            
            if (rax_7 s> *(arg1 + 0x4c))
                sub_1406105e0(&arg1[8])
            
            int32_t* rdx_11 = arg1[8] + (rbp_2 << 2)
            
            if (rdx_11 != 0)
                *rdx_11 = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)
else
    sub_141e1eab0(sub_141e23160(arg1), arg2)
    int32_t i_1 = 0
    
    if (arg1[5].d s> 0)
        int128_t* rdi_1 = nullptr
        
        do
            zmm7 = *(rdi_1 + arg1[8])
            
            if (not(zmm7.d f<= 9.99999975e-06f))
                if (*(arg1 + 0x54) == 0)
                    void* rbp_1 = *arg2
                    void* r15_1 = *(rbp_1 + 0xb0)
                    
                    if (sub_141ac5e40(arg1, r15_1) == 0)
                        sub_141df0480(&arg1[0x12], &arg1[0x14], &arg1[8])
                    else
                        zmm7 = sub_141aca8a0(arg1, rbp_1 + 0x4a0, r15_1)
                        
                        if (sub_141ac5e40(arg1, *(*arg2 + 0xb0)) == 0)
                            break
                    
                    bool cond:2_1 = *(arg1 + 0x53) == 0
                    *(arg1 + 0x54) = 1
                    
                    if (not(cond:2_1))
                        int32_t* rax_5 = arg1[0x14]
                        int128_t zmm0 = rax_5[1]
                        
                        if (not(zmm0.d f<= 9.99999975e-06f))
                            r12 = *rax_5
                            zmm8 = zmm0
                
                zmm6 = i_1 != r12 ? zmm11 : zmm8
                
                public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
                    &var_a8, arg2)
                zmm7.d = zmm7.d f* arg2[2].d
                zmm6.d = zmm6.d f* *(arg2 + 0x14)
                int32_t var_90_1 = arg2[3].d.d
                int32_t var_98_1 = zmm7.d
                int32_t var_94_1 = zmm6.d
                int64_t var_a0_1 = arg2[1]
                sub_141e32270((sx.q(i_1) << 4) + arg1[4], &var_a8)
            
            i_1 += 1
            rdi_1 += 4
        while (i_1 s< arg1[5].d)

int128_t zmm10
zmm10.d = 1f f- zmm8.d
void** rdx_12 = arg2

if (not(zmm10.d f>= 9.99999975e-06f))
    public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
        &var_a8, rdx_12)
    zmm10.d = zmm10.d f* *(arg2 + 0x14)
    rdx_12 = &var_a8
    int32_t var_94_2 = zmm10.d
    int32_t var_90_2 = arg2[3].d.d
    int32_t var_98_2 = arg2[2].d
    int64_t var_a0_2 = arg2[1]

return sub_141e32270(&arg1[2], rdx_12)
