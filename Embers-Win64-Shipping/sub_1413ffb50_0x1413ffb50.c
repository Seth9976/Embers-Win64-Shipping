// 函数: sub_1413ffb50
// 地址: 0x1413ffb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (data_143f0f1b7 != 0)
    int32_t rax_2 = (*(arg1 + 0x28) + 1) & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    *(arg1 + 0x28) = rax_2
    int64_t rcx = sx.q(rax_2)
    
    if (*(((rcx + 3) << 4) + arg1) != 0 && *(((rcx + 7) << 4) + arg1) != 0)
        if (data_143f01c92 != 0)
            sub_14198b920(arg1 + 0xc8)
            int64_t* rcx_2 = *(arg1 + 0xc8)
            *(arg1 + 0xc8) = 0
            
            if (rcx_2 != 0)
                rcx_2[9].d -= 1
                
                if (rcx_2[9].d == 1)
                    sub_140a2f6e0(rcx_2)
        
        int64_t* rcx_3 = data_143f0f180
        int64_t r9
        r9.b = 1
        int64_t var_18
        char rax_11
        int64_t r9_1
        rax_11, r9_1 = (*(*rcx_3 + 0x328))(rcx_3, *(arg1 + (sx.q(*(arg1 + 0x28)) + 3) * 0x10), 
            &var_18, r9, 0xffffffff)
        int64_t* r10_2 = data_143f0f180
        r9_1.b = 1
        int64_t arg_20
        char rax_12 = (*(*r10_2 + 0x328))(r10_2, *(arg1 + (sx.q(*(arg1 + 0x28)) + 7) * 0x10), 
            &arg_20, r9_1, 0xffffffff)
        int64_t rdx_3 = sx.q(*(arg1 + 0x24))
        int64_t r8_3 = *(arg1 + 0x10)
        *(arg1 + 0x20) = *(arg1 + 0x20) f- *(r8_3 + (rdx_3 << 2))
        int32_t zmm1 = *(r8_3 + (rdx_3 << 2))
        
        if (rax_11 != 0 && rax_12 != 0)
            int64_t rax_13 = arg_20
            zmm1 = float.s(rax_13 - var_18)
            
            if (rax_13 - var_18 s< 0)
                zmm1 = zmm1 f+ 1.84467441e+19f
            
            zmm1 = zmm1 f* 0.00100000005f
        
        *(r8_3 + (rdx_3 << 2)) = zmm1
        *(arg1 + 8)
        int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + 0x24) + 1), *(arg1 + 8))
        *(arg1 + 0x20) = zmm1 f+ *(arg1 + 0x20)
        *(arg1 + 0x24) = temp1_1
        
        if (rax_11 != 0 && rax_12 != 0)
            result.b = 1
            return result

result.b = 0
return result
