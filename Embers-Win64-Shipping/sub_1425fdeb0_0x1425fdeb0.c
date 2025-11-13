// 函数: sub_1425fdeb0
// 地址: 0x1425fdeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((*(arg1 + 0x78) & 1) == 0)
    *(arg1 + 0xb4) = *(*(arg1 + 0x88) + 0x250)
    int64_t* rax_1
    int512_t zmm0_1
    rax_1, zmm0_1 = sub_142475900()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx_2 = *rax_1
        (*(rdx_2 + 0x390))(rax_1, rdx_2)
        rax_2 = rax_1[0x23]
    
    void* rdx_3 = *(*(arg1 + 0x10) + 8)
    uint64_t rax_3
    
    if (rdx_3 == 0)
        rax_3.b = 0
    else
        rax_3.b = *(rdx_3 + 0x4c) & 1
    
    if (((*(rax_2 + 0x120) u>> 1).b & 1) == 0 && rax_3.b != 0)
        *(arg1 + 0xb4) = *(*(arg1 + 0x88) + 0x258)
    
    int32_t r8_1 = 1
    
    if ((*(arg1 + 0x74) & 1) != 0)
        r8_1 = 2
        *(arg1 + 0xc0) = *(*(arg1 + 0x88) + 0x260)
    
    if ((*(*(arg1 + 0x10) + 0x100) & 2) != 0)
        int64_t rax_8 = zx.q(r8_1) + 0xf
        r8_1 += 1
        *(arg1 + rax_8 * 0xc) = *(*(arg1 + 0x88) + 0x268)
    
    *(arg1 + 0x1ac) &= 0xfffffffd
    void* var_34_1 = arg1 + 0xb0
    void* rax_11 = *(arg1 + 0x18)
    int32_t var_38 = r8_1
    *(arg1 + 0xa0) = 0
    *(arg1 + 0x98) = 0
    int32_t* var_40_1
    void* rbx_1
    int64_t r8_3
    
    if (*(rax_11 + 0xc) == 1)
        void* rcx_6 = *(arg1 + 0x80)
        
        if ((*(rcx_6 + 0x358) & 2) != 0 && *(*(arg1 + 0x10) + 0x104) == 1)
            int64_t* rcx_7 = *(rcx_6 + 0x30)
            int64_t rax_14 = (*(*rcx_7 + 0x78))(rcx_7, zx.q(*(arg1 + 0x6c)))
            
            if (rax_14 != 0)
                int64_t r8_2 = *(arg1 + 0x90)
                *(arg1 + 0x1ac) |= 2
                r8_3 = r8_2 + 0x38
                int64_t var_18 = rax_14
                int64_t* var_24_1 = &var_18
                void* rax_15 = *(arg1 + 0x80)
                *(arg1 + 0xa0) = 2
                int32_t var_c_1 = 2
                int32_t var_10_1 = 1
                int32_t var_28 = 1
                rbx_1 = *(rax_15 + 0x7b0)
                bool z_1
                
                if (0 == *(rbx_1 + 0x1b0))
                    *(rbx_1 + 0x1b0) = 0
                    z_1 = true
                else
                    *(rbx_1 + 0x1b0)
                    z_1 = false
                
                if (z_1)
                    goto label_1425fe0f8
                
                var_40_1 = &var_28
                goto label_1425fe0a6
    
    r8_3 = *(arg1 + 0x90) + 0x38
    rbx_1 = *(*(arg1 + 0x80) + 0x7b0)
    bool z_2
    
    if (0 == *(rbx_1 + 0x1b0))
        *(rbx_1 + 0x1b0) = 0
        z_2 = true
    else
        *(rbx_1 + 0x1b0)
        z_2 = false
    
    if (z_2)
    label_1425fe0f8:
        *(arg1 + 0x98) = 0
        result.b = 0
        return result
    
    var_40_1 = nullptr
label_1425fe0a6:
    zmm0_1.o = 0x40800000
    
    if ((*(**(rbx_1 + 8) + 0x40))(zmm0_1, arg1 + 0x98, r8_3, 8, 0x40800000, rbx_1 + 0x1a0, &var_38, 
            var_40_1) != 0)
        goto label_1425fe0f8
    
    *(rbx_1 + 0x1a8) += 1
    
    if (*(arg1 + 0x98) == 0)
        result.b = 0
        return result

result.b = 1
return result
