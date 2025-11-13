// 函数: sub_14196b850
// 地址: 0x14196b850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r14 = arg7
int32_t i = 0
r14[0x1e].d += 1
*arg6 = 0
uint64_t result = zx.q(*(arg1 + 0x10))

if (result.d != 0 || *(arg1 + 0x1c) u> 0 || *(arg1 + 0x68) s> 0 || *(r14 + 0xf9) != 0)
    *(r14 + 0xf4) += result.d
    int128_t zmm6
    zmm6.d = 0.100000001f f/ arg2.d
    zmm6.d = zmm6.d f* *(arg1 + 0x3c)
    int128_t zmm7 = *(data_143f01e20 + 4)
    int32_t var_98
    int32_t var_90
    int64_t r12
    
    if (arg5 == 0)
        int16_t* const rcx = &data_142d40450
        int16_t* rdx_1
        
        if (*(arg1 + 0x50) == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *(arg1 + 0x48)
        
        if (arg4[1].d != 0)
            rcx = *arg4
        
        if (sub_140b40430(rcx, rdx_1) != 0 && (zmm6.d f> zmm7.d || *(r14 + 0xf9) != 0))
            goto label_14196b92f
        
        r12.b = 0
    else if (zmm6.d f> zmm7.d || *(r14 + 0xf9) != 0)
    label_14196b92f:
        uint64_t r8 = zx.q(*(arg1 + 0x30))
        r12.b = 1
        int64_t var_78 = 0
        int64_t var_70_1 = 0
        int64_t var_68
        int32_t var_60
        
        if (r8.d != 0)
            var_90 = *(arg1 + 0x38)
            var_98 = *(arg1 + 0x34)
            sub_140a2e390(&var_68, u"%u %s %u prims %u verts ", r8)
            int64_t rcx_2 = var_78
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            var_78 = var_68
            var_70_1.d = var_60
            int32_t var_5c
            var_70_1:4.d = var_5c
        
        uint64_t r8_1 = zx.q(*(arg1 + 0x2c))
        
        if (r8_1.d != 0)
            sub_140a2e390(&var_68, u"%u %s", r8_1)
            int32_t r8_3
            
            if (var_60 == 0)
                r8_3 = 0
            else
                r8_3 = var_60 - 1
            
            sub_140a20ba0(&var_78, var_68, r8_3)
            int64_t rcx_5 = var_68
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            uint64_t r8_4 = zx.q(*(arg1 + 0x20))
            
            if (r8_4.d s> 0 && *(arg1 + 0x1c) == 1)
                sub_140a2e390(&var_68, u" %u", r8_4)
                int32_t r8_6
                
                if (var_60 == 0)
                    r8_6 = 0
                else
                    r8_6 = var_60 - 1
                
                sub_140a20ba0(&var_78, var_68, r8_6)
                int64_t rcx_8 = var_68
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                uint64_t r8_7 = zx.q(*(arg1 + 0x24))
                
                if (r8_7.d s> 1)
                    sub_140a2e390(&var_68, u"x%u", r8_7)
                    int32_t r8_9
                    
                    if (var_60 == 0)
                        r8_9 = 0
                    else
                        r8_9 = var_60 - 1
                    
                    sub_140a20ba0(&var_78, var_68, r8_9)
                    int64_t rcx_11 = var_68
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                
                uint64_t r8_10 = zx.q(*(arg1 + 0x28))
                
                if (r8_10.d s> 1)
                    sub_140a2e390(&var_68, u"x%u", r8_10)
                    int32_t r8_12
                    
                    if (var_60 == 0)
                        r8_12 = 0
                    else
                        r8_12 = var_60 - 1
                    
                    sub_140a20ba0(&var_78, var_68, r8_12)
                    int64_t rcx_14 = var_68
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                
                sub_140a20ba0(&var_78, u" groups", 7)
        
        *arg6 = *(arg1 + 0x3c)
        sub_14197b8a0(r14, arg1)
        int64_t rcx_17 = var_78
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    else
        r12.b = 0
    
    result = data_143f01ee0
    int32_t result_1 = *(result + 4)
    
    if (result_1 s>= 0)
        result = 3
        
        if (result_1 s< 3)
            result = zx.q(result_1)
        
        if (result.d != 0)
            arg7.d = result.d
            result = sub_141960a60(*(arg1 + 0x60), *(arg1 + 0x68), arg7.b, &arg7)
    
    if (*(arg1 + 0x68) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            arg7.d = 0
            var_90.q = &arg7
            var_98.b = r12.b
            result = sub_14196b850(*(rsi_1 + *(arg1 + 0x60)), arg2, zx.q(arg3 + 1), arg4, var_98, 
                var_90, r14)
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x68))

return result
