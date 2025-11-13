// 函数: sub_1407b7600
// 地址: 0x1407b7600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax
    rax.b = 1
    return rax

void* rax_2 = sub_1405948b0(sub_1408524d0(arg3))
int32_t rax_3

if (rax_2 != 0)
    rax_3 = sub_142437340(rax_2)

if (rax_2 == 0 || *(arg1 + 0x30) s>= rax_3)
label_1407b7719:
    *arg2 = data_143dbb1f8.q
    int32_t rax_16 = data_143dbb200
    int64_t temp0_1 = _mm_unpacklo_ps(zx.o(0), 0)
    arg2[1].d = rax_16
    int32_t var_20_1 = 0
    *(arg2 + 0xc) = temp0_1
    *(arg2 + 0x14) = 0
    arg2[3].d = 0
else
    int32_t rbx_1 = 0
    int64_t* var_18
    sub_1424373a0(rax_2, &var_18)
    int32_t var_10
    int32_t rax_4 = var_10
    
    while (true)
        if (rax_4 s< 0)
            goto label_1407b7719
        
        int64_t* rdx_1 = var_18
        
        if (rax_4 s>= rdx_1[1].d)
            goto label_1407b7719
        
        void* rax_6 = sub_140d3c6e0(*rdx_1 + (sx.q(rax_4) << 3))
        
        if (rbx_1 == *(arg1 + 0x30) && rax_6 != 0)
            int64_t* rcx_6 = *(rax_6 + 0x2b8)
            void var_28
            int64_t* rax_9 = (*(*rcx_6 + 0x708))(rcx_6, &var_28)
            *arg2 = *rax_9
            arg2[1].d = rax_9[1].d
            int64_t* rcx_7 = *(rax_6 + 0x2b8)
            int64_t* rax_12 = (*(*rcx_7 + 0x700))(rcx_7, &var_28)
            int64_t zmm0 = *rax_12
            *(arg2 + 0xc) = zmm0
            *(arg2 + 0x14) = rax_12[1].d
            int64_t* rcx_8 = *(rax_6 + 0x2b8)
            (*(*rcx_8 + 0x6c0))(rcx_8)
            arg2[3].d = zmm0.d
            break
        
        rbx_1 += 1
        rax_4 = var_10 + 1
        var_10 = rax_4

int64_t rax_15
rax_15.b = 0
return rax_15
