// 函数: sub_141e33650
// 地址: 0x141e33650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[3]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

void* rsi = *arg2
int64_t result = (*(*arg1 + 0xb8))(arg1)

if (result.d == 0xffffffff || *(rsi + 0x5e8) s<= result.d)
    result.b = 1
else
    result.b = 0

if (result.b != 0)
    result = sub_141e1eab0(sub_141e23160(arg1), arg2)
    uint32_t rcx_4 = zx.d(arg1[6].b)
    *(arg1 + 0xcc) = 0
    float zmm0_1[0x4]
    
    if (rcx_4 == 0)
        *(arg1 + 0xcc) =
            sub_141e3b530(&arg1[0x13], sub_141e3b510(&arg1[0x12], *(arg1 + 0x34)), arg2[3].d)[0]
    else if (rcx_4 == 1)
        zmm0_1, result = sub_141e3b430(&arg1[8], arg1[7].b & 1, arg2[3].d)
        *(arg1 + 0xcc) = zmm0_1[0]
    else if (rcx_4 == 2)
        result = *arg2
        int64_t* rsi_1 = *(result + 0xa0)
        
        if (rsi_1 != 0)
            void* rax_4 = sub_14245f6d0()
            void* rcx_6 = rsi_1[2]
            result = sx.q(*(rax_4 + 0x38))
            
            if (result.d s<= *(rcx_6 + 0x38))
                int64_t result_2 = result
                result = *(rcx_6 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_4 + 0x30)
                    arg2[3].d
                    uint32_t zmm0_2[0x4]
                    float zmm6_1[0x4]
                    zmm0_2, result, zmm6_1 = sub_141e01880(rsi_1, arg1[0x11])
                    *(arg1 + 0xcc) = sub_141e3b530(&arg1[0x13], zmm0_2, zmm6_1)[0]
    
    zmm0_1 = *(arg1 + 0xcc)
    float zmm2_1[0x4] = zx.o(0)
    
    if (not(zmm0_1[0] < zmm2_1[0]))
        zmm2_1 = __minss_xmmss_memss(zmm0_1[0], 0x3f800000)
    
    bool cond:0_1 = zmm2_1[0] <= 9.99999975e-06f
    *(arg1 + 0xcc) = zmm2_1[0]
    
    if (not(cond:0_1))
        int64_t rax_5 = *arg2
        zmm2_1[0] = zmm2_1[0] f* arg2[2].d
        int64_t* rcx_11 = arg1[5]
        zmm0_1 = *(arg2 + 0x14)
        float zmm1_1[0x4] = arg2[3].d
        int64_t var_38 = rax_5
        result = arg2[1]
        float var_28_1 = zmm2_1[0]
        int64_t result_1 = result
        float var_24_1 = zmm0_1[0]
        float var_20_1 = zmm1_1[0]
        
        if (rcx_11 != 0)
            return (*(*rcx_11 + 0x10))(rcx_11, &var_38)

return result
