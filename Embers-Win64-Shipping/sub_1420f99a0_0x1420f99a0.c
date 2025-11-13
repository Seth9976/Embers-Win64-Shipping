// 函数: sub_1420f99a0
// 地址: 0x1420f99a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2
sub_141dc6fb0(arg1, arg2, arg3, 0)
float zmm0[0x4] = result[4]
zmm0[0] = zmm0[0] f- result[1]
double zmm2[0x2] = result[3]
zmm2[0].d = zmm2[0].d f- *result
float zmm1[0x4] = result[5]
zmm1[0] = zmm1[0] f- result[2]
zmm2[0].d = zmm2[0].d f* zmm0[0]
zmm2[0].d = zmm2[0].d f* zmm1[0]
float var_a8[0x4]
int32_t var_a0
int64_t var_9c
int32_t var_94

if (not(zmm2[0].d f!= 0f))
    zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_1 = data_143dbb200
    zmm1 = zmm0
    var_9c = zmm0.q
    var_a0 = rax_1
    zmm0 = var_a8
    var_94 = rax_1
    zmm0[0].q = zmm1.q
    *result = zmm0
    var_a8 = zmm0
    *(result + 0x10) = var_9c
    result[6] = 0.d

if (arg3 != 0)
    void* rax_3 = *(arg1 + 0x220)
    
    if (rax_3 == 0 || *(rax_3 + 0x440) == 0)
        int64_t rsi_1 = 0
        int32_t rcx = 0
        int32_t r11_1 = *(arg1 + 0x250)
        int32_t r8 = 0
        var_a8[0] = 0
        var_a8[1] = 1
        var_a0.q = arg1 + 0x238
        var_9c:4.d = 0xffffffff
        var_94.q = 0
        
        if (r11_1 != 0)
            void* rax_4 = *(arg1 + 0x248)
            void* r9 = arg1 + 0x238
            
            if (rax_4 != 0)
                r9 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r9
            int32_t var_94_2
            
            if (rdx_2 != 0)
            label_1420f9b08:
                int32_t rax_11 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                var_a8[1] = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                int32_t var_94_1 = r8 - rax_12 + 0x1f
                
                if (r8 - rax_12 + 0x1f s> r11_1)
                    var_94_2 = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx)
                    r8 += 0x20
                    rcx += 1
                    char var_90
                    var_90.d = r8
                    var_a8[0] = rcx
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                    var_9c:4.d = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_1420f9b08
                
                var_94_2 = r11_1
        
        int32_t rdx_4 = *(arg1 + 0x250)
        zmm2 = var_9c:4.o
        double var_48_1[0x2] = zmm2
        int32_t r12_1 = 0xffffffff << (rdx_4.b & 0x1f)
        float var_58_1[0x4] = var_a8
        int32_t r8_3 = rdx_4 s>> 5
        int32_t r9_2 = rdx_4 & 0xffffffe0
        int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_9c:4.d = r12_1
        int32_t var_94_3 = rdx_4
        float var_88[0x4] = (arg1 + 0x228).o
        
        if (rdx_4 != r11_1)
            void* rax_14 = *(arg1 + 0x248)
            void* r10_1 = arg1 + 0x238
            
            if (rax_14 != 0)
                r10_1 = rax_14
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
            int32_t var_94_5
            
            if (rdx_8 != 0)
            label_1420f9bd3:
                int32_t rax_21 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                int32_t rdi_1
                
                if (rax_21 == 0)
                    rdi_1 = 0x20
                else
                    rdi_1 = 0x1f - temp0_4
                
                int32_t var_94_4 = r9_2 - rdi_1 + 0x1f
                
                if (r9_2 - rdi_1 + 0x1f s> r11_1)
                    var_94_5 = r11_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_3)
                    r9_2 += 0x20
                    r8_3 += 1
                    
                    if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
                    var_9c:4.d = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_1420f9bd3
                
                var_94_5 = r11_1
        
        while (true)
            int64_t rax_23 = sx.q(var_58_1[3])
            int64_t* rdx_9 = var_88[0].q
            
            if (rax_23.d == (var_9c u>> 0x20).d && var_58_1[0].q == arg1 + 0x238
                    && rdx_9 == arg1 + 0x228)
                int64_t* rdi_4 = *(arg1 + 0x290)
                uint64_t r14_3 = sx.q(*(arg1 + 0x298)) << 3 u>> 3
                
                if (rdi_4 u> &rdi_4[sx.q(*(arg1 + 0x298))])
                    r14_3 = 0
                
                if (r14_3 != 0)
                    do
                        int64_t* rcx_10 = *rdi_4
                        
                        if (rcx_10 != 0)
                            float (* rax_31)[0x4] =
                                (*(*rcx_10 + 0x548))(rcx_10, &var_a8, zx.q(arg3), zx.q(arg4))
                            
                            if (result[6].b == 0)
                                if ((*rax_31)[6].b != 0)
                                    *result = *rax_31
                                    *(result + 0x10) = rax_31[1][0].q
                                    result[6] = (*rax_31)[6]
                            else if ((*rax_31)[6].b != 0)
                                *result = __minss_xmmss_memss((*result)[0], *rax_31)[0]
                                result[1] = __minss_xmmss_memss((*rax_31)[1][0], result[1])[0]
                                result[2] = __minss_xmmss_memss((*rax_31)[2][0], result[2])[0]
                                result[3] = __maxss_xmmss_memss((*rax_31)[3][0], result[3])[0]
                                result[4] = __maxss_xmmss_memss(rax_31[1][0][0], result[4])[0]
                                result[5] = __maxss_xmmss_memss((*rax_31)[5][0], result[5])[0]
                        
                        rdi_4 = &rdi_4[1]
                        rsi_1 += 1
                    while (rsi_1 != r14_3)
                
                break
            
            if (*(*(*rdx_9 + rax_23 * 0x18 + 8) + 0x440) != 0)
                break
            
            var_58_1[2] &= not.d(var_88[3])
            sub_14059bdd0(&var_88[2])

return result
