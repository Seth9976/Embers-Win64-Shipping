// 函数: sub_141d987f0
// 地址: 0x141d987f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1

if (result[0x2e].b == 0)
    *(arg2 + 0xb8) = 0
    
    if (*(arg2 + 0xbc) != 0)
        sub_1405c5510(arg2 + 0xb0, 0)
    
    void* rcx_1 = *arg1
    int64_t var_48
    sub_141d9ef80(rcx_1, &var_48, rcx_1 + 0x3a0)
    int64_t* rcx_2 = *arg1
    int64_t* var_68
    result = (*(*rcx_2 + 0x1d8))(rcx_2, &var_68, &var_48)
    int64_t* rdx_2 = var_68
    int64_t* var_60
    
    if (rdx_2 == 0)
    label_141d98a9b:
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                result = (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_60 + 8))(var_60, 1)
    else
        int64_t* rcx_3 = *arg1
        int32_t var_38 = 6
        int64_t var_30_1 = 0
        int64_t var_28_1 = 0
        result = sub_141da1270(rcx_3, rdx_2, arg2 + 0x20, &var_38, 0)
        char r14_1 = result.b
        
        if (var_30_1 != 0)
            result = sub_140a74f90(var_30_1)
        
        if (r14_1 != 0)
            int64_t* rcx_5 = var_68
            int64_t r9_2 = *rcx_5
            int64_t r8_5 = sx.q(arg1[1].d) * 0xa
            (*(r9_2 + 0x178))(rcx_5, *(*(arg2 + 0x80) + (r8_5 << 3) + 0x48), r8_5, r9_2)
            int32_t rax_5 = *(*(arg2 + 0x80) + sx.q(arg1[1].d) * 0x50 + 0x40) + *(arg2 + 0xb8)
            *(arg2 + 0xb8) = rax_5
            
            if (rax_5 s> *(arg2 + 0xbc))
                sub_1405daba0(arg2 + 0xb0)
            
            int64_t* rcx_9 = var_68
            result = (*(*rcx_9 + 0x150))(rcx_9, *(arg2 + 0xb0), sx.q(*(arg2 + 0xb8)))
            int64_t var_78
            
            if (*(arg2 + 0x53) == 0)
            label_141d989fa:
                
                if (*(arg2 + 0x52) == 0)
                    goto label_141d98a64
                
                int64_t* rcx_16 = *arg1
                result = (*(*rcx_16 + 0x198))(rcx_16)
                
                if (result.b == 0)
                    goto label_141d98b02
                
                int64_t* rcx_17 = *arg1
                var_78 = 0
                int64_t var_70_2 = 0
                result = (*(*rcx_17 + 0x1a8))(rcx_17, arg2 + 0xb0, &var_78)
                
                if (result.b == 0)
                    goto label_141d98996
                
                result = &var_78
                
                if (arg2 + 0xb0 == &var_78)
                    int64_t rcx_24 = var_78
                    
                    if (rcx_24 != 0)
                        result = sub_140a74f90(rcx_24)
                else
                    int64_t rcx_18 = *(arg2 + 0xb0)
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    *(arg2 + 0xb0) = var_78
                    *(arg2 + 0xb8) = var_70_2.d
                    result = zx.q(var_70_2:4.d)
                    *(arg2 + 0xbc) = result.d
                
                goto label_141d98a64
            
            int64_t* rcx_10 = *arg1
            result = (*(*rcx_10 + 0x1b8))(rcx_10)
            
            if (result.b == 0)
            label_141d98b02:
                *(arg2 + 0xb8) = 0
                
                if (*(arg2 + 0xbc) != 0)
                    result = sub_1405c5510(arg2 + 0xb0, 0)
                
                goto label_141d98a9b
            
            int64_t* rcx_11 = *arg1
            int64_t var_58 = *(arg2 + 0x58)
            int32_t var_50_1 = *(arg2 + 0x60)
            int128_t zmm0_1 = var_58.o
            var_58 = *(arg2 + 0xb0)
            int32_t var_50_2 = *(arg2 + 0xb8)
            var_78 = 0
            int64_t var_70_1 = 0
            var_38.o = zmm0_1
            zmm0_1 = var_58.o
            var_58.o = zmm0_1
            result = (*(*rcx_11 + 0x1d0))(zmm0_1, &var_58, &var_78, &var_38)
            
            if (result.b == 0)
            label_141d98996:
                bool cond:1_1 = *(arg2 + 0xbc) == 0
                *(arg2 + 0xb8) = 0
                
                if (not(cond:1_1))
                    result = sub_1405c5510(arg2 + 0xb0, 0)
                
                int64_t rcx_13 = var_78
                
                if (rcx_13 != 0)
                    result = sub_140a74f90(rcx_13)
                
                goto label_141d98a9b
            
            result = &var_78
            
            if (arg2 + 0xb0 == &var_78)
                int64_t rcx_15 = var_78
                
                if (rcx_15 != 0)
                    result = sub_140a74f90(rcx_15)
            else
                int64_t rcx_14 = *(arg2 + 0xb0)
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                *(arg2 + 0xb0) = var_78
                *(arg2 + 0xb8) = var_70_1.d
                result = zx.q(var_70_1:4.d)
                *(arg2 + 0xbc) = result.d
            
            goto label_141d989fa
        
    label_141d98a64:
        int64_t* rbx_2 = var_60
        var_68 = nullptr
        
        if (rbx_2 != 0)
            var_60 = nullptr
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            goto label_141d98a9b
    int64_t rcx_23 = var_48
    
    if (rcx_23 != 0)
        return sub_140a74f90(rcx_23)

return result
