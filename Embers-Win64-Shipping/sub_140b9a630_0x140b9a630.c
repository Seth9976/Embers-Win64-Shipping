// 函数: sub_140b9a630
// 地址: 0x140b9a630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x1d8)
int64_t rbx = *arg2
void*** rdi_1

if (*(rdi + 0x1c0) == *(rdi + 0x1ec))
labelid_2d:
    rdi_1 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = rdi + 0x1f0
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(rdi + 0x200)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140b9a6cc:
        rdi_1 = nullptr
    else
        int64_t r8_1 = *(rdi + 0x1b8)
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_4)
            int64_t rcx_2 = rdx_3 * 3
            
            if (*(r8_1 + (rcx_2 << 3)) == rbx)
                break
            
            rax_4 = *(r8_1 + (rcx_2 << 3) + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_140b9a6cc_2
        
        if (rax_4 == 0xffffffff)
        label_140b9a6cc_1:
            rdi_1 = nullptr
        else
            void* rdi_3 = r8_1 + rdx_3 * 0x18
            
            if (rdi_3 == 0)
            label_140b9a6cc_2:
                rdi_1 = nullptr
            else
                rdi_1 = *(rdi_3 + 8)

int64_t rsi
rsi.b = rdi_1 != 0
void*** var_78

if (rdi_1 == 0)
    int64_t rdi_2 = *arg2
    var_78 = nullptr
    int64_t var_70_1 = 0
    int64_t rbx_1 = 0
    int128_t zmm0 = var_78.o
    int64_t arg_8 = 0
    int32_t var_68 = 0xffffffff
    int128_t var_54_1 = zmm0
    int64_t var_64_1 = rdi_2
    int64_t var_40_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0xffffffff
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        rbx_1 = rdi_2
    
    int64_t var_5c_1 = rbx_1
    void*** rax_6 = j_sub_140a82f30(0x568)
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_140b94650(rax_6, *(arg1 + 0x1d8), &var_68, *(arg1 + 0x1e0))
    
    if (*(rdi_1 + 0x44) == 0)
        *(rdi_1 + 0x44) = *(arg1 + 0x44)
    
    sub_140bac040(*(arg1 + 0x1d8), rdi_1, rsi.b, 0)

uint64_t result

if (*(rdi_1 + 0xcc) != 0 || *(rdi_1 + 0xcb) != 0)
    rdi_1[0x13].d += 1
    int64_t rsi_2 = sx.q(*(arg1 + 0x88))
    int32_t rax_21 = (rsi_2 + 1).d
    *(arg1 + 0x88) = rax_21
    
    if (rax_21 s> *(arg1 + 0x8c))
        sub_1405a4d70(arg1 + 0x80)
    
    result = *(arg1 + 0x80)
    *(result + (rsi_2 << 3)) = rdi_1
else
    void*** rax_10 = sub_140a84c80(0, 0x30, 0)
    var_78 = rax_10
    
    if (rax_10 != 0)
        rax_10[1] = arg1
        *rax_10 = &data_142d3fe58
        rax_10[2] = sub_140baba70
        rax_10[4] = sub_140a387b0()
        *rax_10 = &data_142d3feb0
    
    int64_t* rax_12 = j_sub_140a82f30(0x10)
    int64_t* rbx_2 = rax_12
    
    if (rax_12 == 0)
        rbx_2 = nullptr
    label_140b9a852:
        
        if (rax_10 != 0)
            (*rax_10)[7](rax_10, 0)
            void*** rax_15 = sub_140a84c80(rax_10, 0, 0)
            var_78 = rax_15
            
            if (rax_15 != 0)
                sub_140a74f90(rax_15)
    else
        *rax_12 = 0
        rax_12[1].d = 0
        
        if (&var_78 == rbx_2)
            goto label_140b9a852
        
        if (rax_10 != 0)
            (*rax_10)[8](rax_10, rbx_2)
            goto label_140b9a852
    
    int64_t r14_1 = sx.q(rdi_1[0xd].d)
    int32_t rax_16 = (r14_1 + 1).d
    rdi_1[0xd].d = rax_16
    
    if (rax_16 s> *(rdi_1 + 0x6c))
        sub_1405a4f90(&rdi_1[0xc])
    
    int16_t* rax_19 = &rdi_1[0xc][r14_1 * 2]
    *rax_19 = 1
    *(rax_19 + 8) = rbx_2
    rdi_1[0x13].d += 1
    int64_t rbx_3 = sx.q(*(arg1 + 0x78))
    int32_t rax_20 = (rbx_3 + 1).d
    *(arg1 + 0x78) = rax_20
    
    if (rax_20 s> *(arg1 + 0x7c))
        sub_1405a4d70(arg1 + 0x70)
    
    result = *(arg1 + 0x70)
    *(result + (rbx_3 << 3)) = rdi_1
    
    if (arg3 != 0)
        return sub_140bafaf0(rdi_1, arg3)

return result
