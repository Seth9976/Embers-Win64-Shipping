// 函数: sub_141d98250
// 地址: 0x141d98250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int32_t result = sub_141da1e80(rcx, &rcx[0x74], arg2 + 0x10, 0)

if (result.b != 0)
    *(arg2 + 0xa8) = 0
    
    if (*(arg2 + 0xac) != 0)
        sub_1405c5510(arg2 + 0xa0, 0)
    
    void* rcx_2 = *arg1
    int64_t var_38
    sub_141d9ef80(rcx_2, &var_38, rcx_2 + 0x3a0)
    int64_t* rcx_3 = *arg1
    int64_t* var_48
    result = (*(*rcx_3 + 0x1d8))(rcx_3, &var_48, &var_38)
    int64_t* rcx_4 = var_48
    int64_t* var_40
    
    if (rcx_4 == 0)
    label_141d98492:
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                result = (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_40 + 8))(var_40, 1)
    else
        int64_t r9_1 = *rcx_4
        int64_t r8_3 = sx.q(arg1[1].d) * 5
        (*(r9_1 + 0x178))(rcx_4, *(*(arg2 + 0x90) + (r8_3 << 3) + 0x18), r8_3, r9_1)
        int32_t rax_5 = *(*(arg2 + 0x90) + sx.q(arg1[1].d) * 0x28 + 0xc) + *(arg2 + 0xa8)
        *(arg2 + 0xa8) = rax_5
        
        if (rax_5 s> *(arg2 + 0xac))
            sub_1405daba0(arg2 + 0xa0)
        
        int64_t* rcx_7 = var_48
        result = (*(*rcx_7 + 0x150))(rcx_7, *(arg2 + 0xa0), sx.q(*(arg2 + 0xa8)))
        int64_t var_58
        
        if (*(arg2 + 0x43) != 0)
            int64_t* rcx_8 = *arg1
            result = (*(*rcx_8 + 0x1b8))(rcx_8)
            
            if (result.b == 0)
            label_141d9852b:
                bool cond:0_1 = *(arg2 + 0xac) == 0
                *(arg2 + 0xa8) = 0
                
                if (not(cond:0_1))
                    result = sub_1405c5510(arg2 + 0xa0, 0)
                
                goto label_141d98492
            
            int64_t* rcx_9 = *arg1
            int64_t var_28 = *(arg2 + 0x48)
            int32_t var_20_1 = *(arg2 + 0x50)
            int128_t zmm0_1 = var_28.o
            var_28 = *(arg2 + 0xa0)
            int32_t var_20_2 = *(arg2 + 0xa8)
            var_58 = 0
            int64_t var_50_1 = 0
            int64_t rax_12 = *rcx_9
            int128_t var_18 = zmm0_1
            zmm0_1 = var_28.o
            var_28.o = zmm0_1
            result = (*(rax_12 + 0x1d0))(zmm0_1, &var_28, &var_58, &var_18, var_58, var_50_1)
            
            if (result.b == 0)
            label_141d98500:
                bool cond:1_1 = *(arg2 + 0xac) == 0
                *(arg2 + 0xa8) = 0
                
                if (not(cond:1_1))
                    result = sub_1405c5510(arg2 + 0xa0, 0)
                
                int64_t rcx_22 = var_58
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
                
                goto label_141d98492
            
            result = &var_58
            
            if (arg2 + 0xa0 == &var_58)
                int64_t rcx_11 = var_58
                
                if (rcx_11 != 0)
                    result = sub_140a74f90(rcx_11)
            else
                int64_t rcx_10 = *(arg2 + 0xa0)
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                *(arg2 + 0xa0) = var_58
                *(arg2 + 0xa8) = var_50_1.d
                result = var_50_1:4.d
                *(arg2 + 0xac) = result
            
            goto label_141d983f1
        
    label_141d983f1:
        
        if (*(arg2 + 0x42) != 0)
            int64_t* rcx_12 = *arg1
            result = (*(*rcx_12 + 0x198))(rcx_12)
            
            if (result.b == 0)
                goto label_141d9852b
            
            int64_t* rcx_13 = *arg1
            var_58 = 0
            int64_t var_50_2 = 0
            result = (*(*rcx_13 + 0x1a8))(rcx_13, arg2 + 0xa0, &var_58)
            
            if (result.b == 0)
                goto label_141d98500
            
            result = &var_58
            
            if (arg2 + 0xa0 == &var_58)
                int64_t rcx_20 = var_58
                
                if (rcx_20 != 0)
                    result = sub_140a74f90(rcx_20)
            else
                int64_t rcx_14 = *(arg2 + 0xa0)
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                *(arg2 + 0xa0) = var_58
                *(arg2 + 0xa8) = var_50_2.d
                result = var_50_2:4.d
                *(arg2 + 0xac) = result
            
            goto label_141d9845b
        
    label_141d9845b:
        int64_t* rbx_2 = var_40
        var_48 = nullptr
        
        if (rbx_2 != 0)
            var_40 = nullptr
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            goto label_141d98492
    int64_t rcx_19 = var_38
    
    if (rcx_19 != 0)
        return sub_140a74f90(rcx_19)

return result
