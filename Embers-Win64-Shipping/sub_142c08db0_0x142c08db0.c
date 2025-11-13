// 函数: sub_142c08db0
// 地址: 0x142c08db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(arg6)
int32_t r12 = 0
void* var_38 = nullptr
void* r14 = nullptr
void* rax_1

if (arg2 != 0 && i_4.d != 0)
    rax_1 = sub_140dc0ea0(zx.q(i_4.d), 0x10)
    var_38 = rax_1
    r14 = rax_1

char* const result

if (arg2 != 0 && i_4.d != 0 && rax_1 == 0)
    j_sub_140a74f90(r14)
    result.b = 0
else
    void* rcx_1 = arg5
    *arg1 = *arg4
    
    if (arg2 != 0)
        rcx_1 = r14
    
    int128_t zmm1 = arg4[1]
    *(arg1 + 0x28) = i_4.d
    int64_t i_2 = 2
    arg1[2].q = rcx_1
    arg1[1] = zmm1
    
    if (arg2 != 0 && i_4.d != 0)
        uint64_t i_3 = i_4
        memcpy(r14, arg5, (i_4 << 4).d)
        
        if (i_4.d != 0)
            int32_t rax_2 = *(r14 + 8)
            int32_t rcx_3 = *(r14 + 0xc)
            uint64_t i
            
            do
                if (rax_2 != 0)
                    rax_2 = 1
                
                if (rcx_3 != 0xffffffff)
                    rcx_3 = 2
                
                i = i_3
                i_3 -= 1
            while (i != 1)
            *(r14 + 8) = rax_2
            *(r14 + 0xc) = rcx_3
    
    char const* const rdi = "BUSGSOPGface=%p num_features=%d num_coords=%d shaper_list=%p"
    void* rsi_1 = arg1 + 0x2c
    *(arg1 + 0x38) = 0
    arg1[4].q = 0
    int64_t i_1
    
    do
        sub_142c2b010(arg3, *rdi, arg7, arg8, rsi_1)
        rsi_1 += 4
        rdi = &rdi[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    int64_t* rdi_1 = arg9
    
    if (rdi_1 == 0)
        void* rdi_2 = &sub_142c095e0()[1]
        
        while (true)
            if (*rdi_2 == sub_142c08cf0)
                while (*(arg3 + 0x40) == 0)
                    if (*(arg3 + 0x38) == 0)
                        goto label_142c08ff4
                    
                    bool z_2
                    
                    if (0 == *(arg3 + 0x40))
                        *(arg3 + 0x40) = 1
                        z_2 = true
                    else
                        *(arg3 + 0x40)
                        z_2 = false
                    
                    if (z_2)
                        break
                
                break
            
        label_142c08ff4:
            r12 += 1
            rdi_2 += 0x18
            
            if (r12 u>= 1)
                goto label_142c09001
        
    label_142c08f67:
        *(arg1 + 0x38) = sub_142c08cf0
        arg1[4].q = &data_14369e2e0
        result.b = 1
    else
        char* rcx_5 = *rdi_1
        
        if (rcx_5 != 0)
            while (true)
                if (*rcx_5 == 0x6f && rcx_5[1] == 0x74 && rcx_5[2] == 0)
                    if (*(arg3 + 0x40) != 0)
                        break
                    
                    while (*(arg3 + 0x38) != 0)
                        bool z_1
                        
                        if (0 == *(arg3 + 0x40))
                            *(arg3 + 0x40) = 1
                            z_1 = true
                        else
                            *(arg3 + 0x40)
                            z_1 = false
                        
                        if (z_1)
                            goto label_142c08f67
                        
                        if (*(arg3 + 0x40) != 0)
                            goto label_142c08f67
                
                rcx_5 = rdi_1[1]
                rdi_1 = &rdi_1[1]
                
                if (rcx_5 == 0)
                    goto label_142c09001
            
            goto label_142c08f67
        
    label_142c09001:
        j_sub_140a74f90(var_38)
        result.b = 0

return result
