// 函数: sub_141f0fdd0
// 地址: 0x141f0fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_28
int64_t* var_20
int64_t* var_18

if (sub_141dcded0(*(arg1 + 0xa0)) != 0)
    int64_t* rcx_1 = *(arg1 + 0xa0)
    (*(*rcx_1 + 0x368))(rcx_1, zx.q(arg2))
    
    if (sub_141dcded0(*(arg1 + 0xa0)) != 0)
        int64_t* rbx_1 = *(arg1 + 0xa0)
        sub_141f19760(rbx_1 + 0x189, &var_18)
        int64_t* rcx_4 = var_18
        
        if (rcx_4 != 0)
            var_28 = arg2.b
            var_20 = rbx_1
            sub_1405a9f90(rcx_4, &var_28)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

int32_t rax_5 = *(arg1 + 0xc)
void* const rax_12

if (rax_5 s>= data_143e1d9b4)
    rax_12 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_5)
    uint32_t rdx_4 = zx.d(temp0_1)
    int32_t rax_7 = temp1_1 + rdx_4
    rax_12 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_4) * 0x18

uint8_t result = (*(rax_12 + 8) u>> 0x1d).b

if ((result & 1) == 0)
    result = sub_141f1a520(arg1 + 0x3e2, &var_28)
    int64_t* rcx_12 = var_28.q
    
    if (rcx_12 != 0)
        var_18.b = arg2.b
        void* var_10_1 = arg1
        result = sub_1405a9f90(rcx_12, &var_18)
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp5_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*var_20 + 8))(var_20, 1)

return result
