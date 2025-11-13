// 函数: sub_141f57e90
// 地址: 0x141f57e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg1 + 0x504)
float zmm1 = *(arg1 + 0x520)
zmm3[0] = zmm3[0] f- zmm1
int128_t zmm6 = arg3
arg3 = zx.o(0)

if (__andps_xmmxud_memxud(zmm3, data_142d3f770)[0] f<= 9.99999994e-09f)
    void* rcx = *(arg1 + 0x440)
    
    if (rcx != 0)
        void var_38
        sub_1423633d0(rcx, &var_38)
        uint32_t rcx_1 = zx.d(*(arg1 + 0x525))
        void* r8_1
        
        if (rcx_1 == 0)
            r8_1 = &var_38
        else
            void var_34
            void var_30
            
            if (rcx_1 == 1)
                r8_1 = &var_34
            else
                r8_1 = &var_30
        
        uint32_t var_24
        uint32_t zmm1_1 = var_24
        int32_t var_2c
        arg3 = var_2c
        int32_t var_28
        zmm3 = var_28
        float zmm0_1
        
        if (rcx_1 == 0)
            zmm0_1 = arg3.d
        else if (rcx_1 == 1)
            zmm0_1 = zmm3[0]
        else
            zmm0_1 = zmm1_1
        
        if (rcx_1 == 0)
            zmm1_1 = arg3.d
        else if (rcx_1 == 1)
            zmm1_1 = zmm3[0]
        
        arg3.d = zmm6.d f- (*r8_1 - zmm0_1)
        arg3.d = arg3.d f* 0.5f f/ zmm1_1
else
    arg3.d = zmm6.d f- zmm3[0]
    arg3.d = arg3.d f/ (zmm1 f- zmm3[0])

sub_141f57fa0(arg1, arg2, arg3)
return arg2
