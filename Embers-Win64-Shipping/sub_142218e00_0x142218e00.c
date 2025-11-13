// 函数: sub_142218e00
// 地址: 0x142218e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4b]

if (rcx != 0)
    (*(*rcx + 0x660))(rcx)
    return arg2

int32_t rax_10
uint64_t var_28

if (arg1[0x1e].b u>= 3)
label_142218ebe:
    void* rbx_2 = arg1[0x26]
    int32_t rax_14
    uint128_t zmm0
    
    if (rbx_2 == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_14 = data_143dbb210
    else
        float zmm1[0x4] = *(rbx_2 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1, 4))
        float var_18[0x4] = zmm1
        
        if (temp0_2 != 0)
            *(rbx_2 + 0x180) = zmm1
            int32_t* rax_12 = sub_140adf5d0(&var_18, &var_28)
            *(rbx_2 + 0x190) = *rax_12
            *(rbx_2 + 0x198) = rax_12[2]
        
        zmm0 = zx.o(*(rbx_2 + 0x190))
        rax_14 = *(rbx_2 + 0x198)
    
    var_28 = zmm0.q
    rax_10 = rax_14
    *arg2 = var_28
else
    sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_28)
    int32_t var_20
    int32_t rax_5 = var_20
    
    while (true)
        if (rax_5 s< 0)
            goto label_142218ebe
        
        int64_t* rdx_1 = var_28
        
        if (rax_5 s>= rdx_1[1].d)
            goto label_142218ebe
        
        void* rax_7 = sub_140d3c6e0(*rdx_1 + (sx.q(rax_5) << 3))
        
        if (rax_7 != 0)
            void* rcx_5 = *(rax_7 + 0x2b8)
            
            if (rcx_5 != 0 && sub_14226f770(rcx_5) == arg1)
                *arg2 = *(rax_7 + 0x2d8)
                rax_10 = *(rax_7 + 0x2e0)
                break
        
        rax_5 = var_20 + 1
        var_20 = rax_5
arg2[1].d = rax_10
return arg2
