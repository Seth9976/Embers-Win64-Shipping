// 函数: sub_141f76840
// 地址: 0x141f76840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_28[0x4] = zmm6
int128_t zmm7
int128_t var_38 = zmm7

if (data_143a2d820 != 0 && (arg1[0x11].b & 2) != 0 && arg1[0x7d] != 0)
    if (arg2 == 0)
        sub_141ee8690(arg1)
    else
        (*(*arg1 + 0x2d8))()
    
    void* rcx = arg1[0x88]
    zmm7 = 0x3f800000
    void* rbx_1 = arg1[0x7d]
    zmm6 = 0x3f800000
    
    if (rcx != 0)
        zmm6 = *(arg1 + 0x504)
        uint128_t zmm1 = arg1[0xa4].d
        zmm6[0] = zmm6[0] f- zmm1.d
        
        if (__andps_xmmxud_memxud(zmm6, data_142d3f770)[0] f> 9.99999994e-09f)
            zmm1.d = zmm1.d f- zmm6[0]
            zmm7.d = 1f f/ zmm1.d
            zmm6[0] = zmm6[0] f* zmm7.d
        else
            int32_t var_60
            sub_1423633d0(rcx, &var_60)
            uint32_t rcx_1 = zx.d(*(arg1 + 0x525))
            uint32_t zmm0[0x4]
            int32_t var_54
            
            if (rcx_1 == 0)
                zmm0 = var_54
            else
                int32_t var_50
                int32_t var_4c
                
                zmm0 = rcx_1 == 1 ? var_50 : var_4c
            zmm7.d = 0.5f f/ zmm0[0]
            
            if (rcx_1 == 0)
                zmm6 = var_60
                zmm6[0] = zmm6[0] f* zmm7.d
                zmm6[0] = zmm6[0] f- 0.5f
            else if (rcx_1 == 1)
                int32_t var_5c
                zmm6 = var_5c
                zmm6[0] = zmm6[0] f* zmm7.d
                zmm6[0] = zmm6[0] f- 0.5f
            else
                int32_t var_58
                zmm6 = var_58
                zmm6[0] = zmm6[0] f* zmm7.d
                zmm6[0] = zmm6[0] f- 0.5f
    
    int32_t var_98_1 = zmm7.d
    uint32_t var_94_1 = zmm6[0]
    int64_t* var_a0_1 = arg1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_5
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
            void var_78
            int64_t* rax_6 = sub_141f5ae30(&var_78, nullptr, 0xff)
            void* rcx_5 = *rax_6
            *(rcx_5 + 0x10) = rbx_1.o
            *(rcx_5 + 0x20) = var_98_1.q
            void* rcx_6 = *rax_6
            int32_t r8_1 = rax_6[2].d
            int64_t* rdx_4 = rax_6[1]
            int64_t* rbx_2 = *(rcx_6 + 0x30)
            int64_t* arg_18 = rbx_2
            int32_t* rsi_1 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rsi_1 += 1
                rbx_2 = arg_18
            
            sub_140778000(rcx_6, rdx_4, r8_1, 1)
            
            if (rbx_2 != 0)
                int32_t rax_7 = *rsi_1
                *rsi_1 -= 1
                
                if (rax_7 == 1)
                    sub_140a2f6e0(arg_18)
        else
            uint32_t var_90[0x4] = rbx_1.o
            uint64_t var_80_1 = var_98_1.q
            sub_141f527d0(&var_90)
    else
        *(rbx_1 + 0x640) = *(arg1 + 0x4a0)
        *(rbx_1 + 0x650) = *(arg1 + 0x4b0)
        *(rbx_1 + 0x660) = *(arg1 + 0x4c0)
        *(rbx_1 + 0x670) = *(arg1 + 0x4d0)
        *(rbx_1 + 0x680) = *(arg1 + 0x4e0)
        *(rbx_1 + 0x690) = arg1[0x9e]
        *(rbx_1 + 0x6a8) = zx.d(*(arg1 + 0x525))
        *(rbx_1 + 0x698) = arg1[0x9f]
        int32_t rax_4 = arg1[0xa0].d
        *(rbx_1 + 0x6b0) = zmm7.d
        *(rbx_1 + 0x6ac) = zmm6[0]
        *(rbx_1 + 0x6a0) = rax_4
else if (arg2 == 0)
    sub_141ee8490(arg1)
else
    sub_141ef12d0(arg1)

arg1[0xa2] = 0
arg1[0xa1] = 0
uint64_t result = sub_141ef1240(arg1)
*(arg1 + 0x524) &= 0xfb
return result
