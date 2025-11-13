// 函数: sub_141e73a50
// 地址: 0x141e73a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = data_143f39bc8
int32_t var_a8 = arg4

if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] f<= 9.99999994e-09f) && not(zmm1[0] f<= 0f))
    zmm1[0] = zmm1[0] f* 1024f
    int64_t rcx = 0
    
    if (not(zmm1[0] f< 9.22337204e+18f))
        zmm1[0] = zmm1[0] f- 9.22337204e+18f
        
        if (not(zmm1[0] f>= 9.22337204e+18f))
            rcx = -0x8000000000000000
    
    *(arg1 + 0x38) = (int.q(zmm1[0]) + rcx) << 0xa

int32_t rcx_17 = arg2[2].d
uint64_t result

if (rcx_17 u>= 0xffffffff || rcx_17 s>= *(*(*arg2 + 0x2e8) + 0x18))
    rcx_17.b = 3
    sub_141e7a8e0(rcx_17.b, arg3, &var_a8)
label_141e73cbd:
    
    if (*arg3 != 0)
        void* rax_15 = arg3[2]
        void* rcx_18 = &arg3[4]
        
        if (rax_15 != 0)
            rcx_18 = rax_15
        
        (*(*rcx_18 + 0x10))(rcx_18)
    
    result.b = 0
else
    EnterCriticalSection(arg1 + 0x48)
    void* rax_5 = sub_141e7ac60(arg1, arg2)
    
    if (rax_5 == 0)
        int128_t* rax_6 = sub_141e80110(arg1, arg2)
        
        if (rax_6 == 0)
            sub_141e7a8e0(4, arg3, &var_a8)
            
            if (arg1 != -0x48)
                LeaveCriticalSection(arg1 + 0x48)
            
            goto label_141e73cbd
        
        int64_t rax_7 = *arg3
        int64_t var_88 = rax_7
        int64_t var_78 = 0
        
        if (rax_7 != 0)
            void* rax_8 = arg3[2]
            void* rcx_7 = &arg3[4]
            
            if (rax_8 != 0)
                rcx_7 = rax_8
            
            (**rcx_7)(rcx_7, &var_78)
        
        char var_b0_1 = arg5
        sub_141e80e00(arg1, rax_6, arg2, &var_88, arg4.b)
        
        if (arg5 != 0 && (*(arg1 + 0x80) != 0 || data_143f39bc0 != 0))
            int32_t rax_10 = sub_1423660c0(*arg2)
            int64_t rcx_10 = arg2[1]
            int32_t var_98_1 = arg2[2].d
            int32_t var_94_1 = rax_10
            char var_90_1 = 0
            result = j_sub_140a82f30(0x20)
            
            if (result != 0)
                *result = 0
                *(result + 8) = rcx_10.o
                *(result + 0x18) = var_90_1.d
                uint64_t* rcx_13 = *(arg1 + 0x70)
                *(arg1 + 0x70) = result
                *rcx_13 = result
        
        if (data_143a2d46c != 0)
            result = 0
            
            if (0 == *(arg1 + 0x30))
                *(arg1 + 0x30) = 0
            else
                result = *(arg1 + 0x30)
            
            if (result u> *(arg1 + 0x38))
                int64_t rax_11 = 0
                
                if (0 == *(arg1 + 0x30))
                    *(arg1 + 0x30) = 0
                else
                    rax_11 = *(arg1 + 0x30)
                
                sub_141e89a80(arg1, rax_11 - *(arg1 + 0x38))
    else
        sub_141e89970(arg1, rax_5)
        bool z_1
        
        if (0 == *(rax_5 + 0x44))
            *(rax_5 + 0x44) = 0
            z_1 = true
        else
            *(rax_5 + 0x44)
            z_1 = false
        
        if (not(z_1))
            sub_141e7a8e0(1, arg3, &var_a8)
    
    if (arg1 != -0x48)
        LeaveCriticalSection(arg1 + 0x48)
    
    if (*arg3 != 0)
        void* rax_13 = arg3[2]
        void* rcx_16 = &arg3[4]
        
        if (rax_13 != 0)
            rcx_16 = rax_13
        
        (*(*rcx_16 + 0x10))(rcx_16)
    
    result.b = 1

return result
