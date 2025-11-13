// 函数: sub_1429ba5c0
// 地址: 0x1429ba5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rsi = arg1
int32_t rbx = arg3
int32_t var_e8 = rbx
void* r13 = arg2
*arg5 = *(rsi + 0x28)
uint64_t result

if (arg3 != 0)
    int32_t rcx_1 = *(rsi + 0x50)
    int32_t rax_3 = *arg4
    int64_t rdi_1 = *(rsi + 0x20)
    int32_t r12_1 = *(rsi + 0x4c)
    
    if (r12_1 s>= arg4[2])
        r12_1 = arg4[2]
    
    int32_t i_1 = arg4[1]
    
    if (rcx_1 s>= arg4[3])
        rcx_1 = arg4[3]
    
    void* var_d8
    sub_14297bd10(*(rsi + 0x38), &var_d8)
    int64_t var_c0
    int64_t rax_5 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        *(rsi + 0x38), &var_c0)
    
    if (var_d8 != rax_5)
        int64_t r15_1 = 0
        int64_t rcx_10
        
        do
            int64_t* rbx_2 = *(rsi + 0x40) + r15_1
            *rbx_2 = rdi_1
            rbx_2[1] = rdi_1
            rbx_2[2].d = sub_1429a63d0(*(var_d8 + 0x120), rax_3, r12_1)
            int32_t rax_9 = sub_1429a63d0(*(var_d8 + 0x124), i_1, rcx_1)
            int32_t rcx_7 = *(rbx_2 + 0x24) * rbx_2[2].d
            *(rbx_2 + 0x14) = rax_9
            rdi_1 += sx.q(rax_9 * rcx_7) << 1
            sub_14297bb00(&var_d8)
            r15_1 += 0x28
            rcx_10 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(rsi + 0x38), &var_c0)
        while (var_d8 != rcx_10)
        r13 = arg2
        rbx = var_e8
    
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int32_t i_2 = 0
    
    if (*(rsi + 0x30) s> 0)
        zmm6 = data_142d3f800
        int64_t r14_1 = 0
        var_c0 = 0
        int32_t i
        
        do
            int64_t* r12_3 = *(rsi + 0x40) + r14_1
            
            if (*(r12_3 + 0x1c) == 1)
                int32_t j = 0
                var_d8.d = 0
                
                if (*(r12_3 + 0x14) s> 0)
                    int32_t r8_3 = 1
                    int32_t var_e4_1 = 1
                    
                    do
                        uint64_t rdx_6 = sx.q(r12_3[2].d)
                        int32_t k = 0
                        int32_t k_2 = 0
                        int64_t r15_2 = *r12_3 + (sx.q(rdx_6.d * j) << 1)
                        int64_t var_b0_1 = r15_2
                        int64_t r14_2 = r15_2 + (rdx_6 << 1)
                        int64_t var_a0_1 = r14_2
                        int64_t rsi_1 = r14_2 + (rdx_6 << 1)
                        int64_t var_c8_1 = rsi_1
                        int64_t var_a8_1 = rsi_1 + (rdx_6 << 1)
                        
                        if (rdx_6.d s> 0)
                            do
                                if (rbx s< 3)
                                    goto label_1429baf67
                                
                                char r9 = *(r13 + 2)
                                int32_t var_d0_1
                                uint16_t var_88
                                uint16_t var_80
                                uint16_t var_7e_1
                                uint16_t var_7c_1
                                uint16_t var_7a_1
                                uint16_t var_78
                                uint16_t var_76_1
                                uint16_t var_74_1
                                uint16_t var_72_1
                                uint16_t var_70
                                uint16_t var_6e_1
                                uint16_t var_6c_1
                                uint16_t var_6a_1
                                uint64_t rax_18
                                uint16_t rcx_13
                                uint16_t r8_4
                                uint16_t r9_1
                                uint16_t r10_1
                                uint16_t r11_1
                                
                                if (r9 != 0xfc)
                                    if (rbx s< 0xe)
                                        goto label_1429baf67
                                    
                                    uint16_t rbx_5 = zx.w(*(r13 + 3))
                                    char rdx_7 = *(r13 + 4)
                                    uint16_t r8_5 = zx.w(*(r13 + 1)) | zx.w(*r13) << 8
                                    uint16_t r11_2
                                    r11_2.b = rbx_5.b u>> 4
                                    uint8_t rcx_15 = r9 u>> 2
                                    int16_t r15_3 = 0x20 << rcx_15
                                    uint16_t rax_21
                                    rax_21.b = rdx_7 u>> 6
                                    uint16_t rdx_8 = zx.w(*(r13 + 5))
                                    r11_2 =
                                        (((r11_2 | zx.w(r9) << 4) & 0x3f) << rcx_15) - r15_3 + r8_5
                                    var_80 = r11_2
                                    rbx_5 =
                                        (((rbx_5 << 2 | rax_21) & 0x3f) << rcx_15) - r15_3 + r11_2
                                    var_88 = r8_5
                                    var_78 = rbx_5
                                    char rax_23 = *(r13 + 7)
                                    uint16_t r14_3
                                    r14_3.b = rax_23 u>> 6
                                    uint16_t r10_2 = (zx.w(rdx_8.b u>> 2) << rcx_15) - r15_3 + r8_5
                                    uint16_t r8_6 = zx.w(*(r13 + 6))
                                    uint16_t r9_2 = ((zx.w(rdx_7) & 0x3f) << rcx_15) - r15_3 + rbx_5
                                    var_70 = r9_2
                                    uint16_t rdi_6
                                    rdi_6.b = r8_6.b u>> 4
                                    uint16_t rdx_9 = zx.w(*(r13 + 8))
                                    uint16_t r8_7 = zx.w(*(r13 + 9))
                                    rdi_6 =
                                        (((rdi_6 | rdx_8 << 4) & 0x3f) << rcx_15) - r15_3 + r11_2
                                    r14_3 = (((r14_3 | r8_6 << 2) & 0x3f) << rcx_15) - r15_3 + rbx_5
                                    uint16_t r11_3 =
                                        ((zx.w(rax_23) & 0x3f) << rcx_15) - r15_3 + r9_2
                                    var_7e_1 = rdi_6
                                    uint16_t rbx_6 = (zx.w(rdx_9.b u>> 2) << rcx_15) - r15_3 + r10_2
                                    var_76_1 = r14_3
                                    uint16_t rsi_2
                                    rsi_2.b = r8_7.b u>> 4
                                    var_6e_1 = r11_3
                                    char rax_25 = *(r13 + 0xa)
                                    uint16_t r9_3 = zx.w(*(r13 + 0xb))
                                    int128_t zmm4 = data_1435f7d10
                                    zmm7 = data_1435f7d00
                                    rsi_2 =
                                        (((rsi_2 | rdx_9 << 4) & 0x3f) << rcx_15) - r15_3 + rdi_6
                                    uint16_t rdi_7
                                    rdi_7.b = rax_25 u>> 6
                                    uint16_t r8_8 = zx.w(*(r13 + 0xc))
                                    uint16_t rax_27
                                    rax_27.b = r8_8.b u>> 4
                                    char rdx_11 = *(r13 + 0xd)
                                    uint16_t rax_28
                                    rax_28.b = rdx_11 u>> 6
                                    rdi_7 = (((rdi_7 | r8_7 << 2) & 0x3f) << rcx_15) - r15_3 + r14_3
                                    var_7c_1 = rsi_2
                                    var_74_1 = rdi_7
                                    uint16_t r10_3 =
                                        ((zx.w(rax_25) & 0x3f) << rcx_15) - r15_3 + r11_3
                                    var_72_1 =
                                        (((rax_28 | r8_8 << 2) & 0x3f) << rcx_15) - r15_3 + rdi_7
                                    int64_t rcx_16 = 2
                                    var_6c_1 = r10_3
                                    var_7a_1 =
                                        (((r9_3 << 4 | rax_27) & 0x3f) << rcx_15) - r15_3 + rsi_2
                                    var_6a_1 = ((zx.w(rdx_11) & 0x3f) << rcx_15) - r15_3 + r10_3
                                    uint16_t* rax_30 = &var_88
                                    int64_t temp26_1
                                    
                                    do
                                        int16_t zmm1[0x8] = *rax_30
                                        rax_30 = &rax_30[8]
                                        int16_t zmm3[0x8] =
                                            _mm_cmpeq_epi16(zmm1 & zmm4, zx.o(0)) & not.o(zmm6)
                                        int16_t zmm2[0x8] =
                                            (zmm1 & zmm7 & zmm3) | (zmm3 & not.o(zmm1))
                                        *(rax_30 - 0x10) =
                                            (zmm3 & not.o(zmm2 & not.o(zmm6))) | (zmm2 & zmm3)
                                        temp26_1 = rcx_16
                                        rcx_16 -= 1
                                    while (temp26_1 != 1)
                                    rdx_6 = zx.q(r12_3[2].d)
                                    rax_18 = zx.q((rcx_16 + 0xe).d)
                                    rcx_13 = var_88
                                    r11_1 = var_80
                                    r10_1 = (zx.w(r9_3.b u>> 2) << rcx_15) - r15_3 + rbx_6
                                    r9_1 = rbx_6
                                    r8_4 = r10_2
                                    k = k_2
                                    r14_2 = var_a0_1
                                    rbx = var_e8
                                    var_d0_1 = 0xfffffff2
                                else
                                    rcx_13 = zx.w(*(r13 + 1)) | zx.w(*r13) << 8
                                    
                                    if (rcx_13 s>= 0)
                                        rcx_13 = not.w(rcx_13)
                                    else
                                        rcx_13 &= 0x7fff
                                    
                                    var_88 = rcx_13
                                    r8_4 = rcx_13
                                    uint16_t var_86_1 = rcx_13
                                    r9_1 = rcx_13
                                    uint16_t var_84_1 = rcx_13
                                    r10_1 = rcx_13
                                    uint16_t var_82_1 = rcx_13
                                    r11_1 = rcx_13
                                    var_80 = rcx_13
                                    rax_18 = 3
                                    var_7e_1 = rcx_13
                                    var_7c_1 = rcx_13
                                    var_7a_1 = rcx_13
                                    var_78 = rcx_13
                                    var_76_1 = rcx_13
                                    var_74_1 = rcx_13
                                    var_72_1 = rcx_13
                                    var_70 = rcx_13
                                    var_6e_1 = rcx_13
                                    var_6c_1 = rcx_13
                                    var_6a_1 = rcx_13
                                    var_d0_1 = 0xfffffffd
                                
                                r13 += rax_18
                                var_e8 = rbx + var_d0_1
                                
                                if (r12_3[4].b != 0)
                                    var_88 = *(&data_1435d7cf0 + (zx.q(rcx_13) << 1))
                                    int16_t var_86_3 = *(&data_1435d7cf0 + (zx.q(r8_4) << 1))
                                    int16_t var_84_3 = *(&data_1435d7cf0 + (zx.q(r9_1) << 1))
                                    int16_t var_82_3 = *(&data_1435d7cf0 + (zx.q(r10_1) << 1))
                                    var_80 = *(&data_1435d7cf0 + (zx.q(r11_1) << 1))
                                    int16_t var_7e_2 = *(&data_1435d7cf0 + (zx.q(var_7e_1) << 1))
                                    int16_t var_7c_2 = *(&data_1435d7cf0 + (zx.q(var_7c_1) << 1))
                                    int16_t var_7a_2 = *(&data_1435d7cf0 + (zx.q(var_7a_1) << 1))
                                    var_78 = *(&data_1435d7cf0 + (zx.q(var_78) << 1))
                                    int16_t var_76_2 = *(&data_1435d7cf0 + (zx.q(var_76_1) << 1))
                                    int16_t var_74_2 = *(&data_1435d7cf0 + (zx.q(var_74_1) << 1))
                                    int16_t var_72_2 = *(&data_1435d7cf0 + (zx.q(var_72_1) << 1))
                                    var_70 = *(&data_1435d7cf0 + (zx.q(var_70) << 1))
                                    int16_t var_6e_2 = *(&data_1435d7cf0 + (zx.q(var_6e_1) << 1))
                                    int16_t var_6c_2 = *(&data_1435d7cf0 + (zx.q(var_6c_1) << 1))
                                    int16_t var_6a_2 = *(&data_1435d7cf0 + (zx.q(var_6a_1) << 1))
                                
                                uint32_t count
                                
                                if (k + 3 s>= rdx_6.d)
                                    count = (rdx_6.d - k) * 2
                                else
                                    count = 8
                                
                                uint16_t* rdx_13 = &var_88
                                
                                if (var_e4_1 + 2 s>= *(r12_3 + 0x14))
                                    memcpy(var_b0_1, rdx_13, count)
                                    int32_t rcx_21 = *(r12_3 + 0x14)
                                    r8_3 = var_e4_1
                                    
                                    if (r8_3 s< rcx_21)
                                        memcpy(r14_2, &var_80, count)
                                        rcx_21 = *(r12_3 + 0x14)
                                        r8_3 = var_e4_1
                                    
                                    if (r8_3 + 1 s< rcx_21)
                                        memcpy(var_c8_1, &var_78, count)
                                        r8_3 = var_e4_1
                                else
                                    memcpy(var_b0_1, rdx_13, count)
                                    memcpy(r14_2, &var_80, count)
                                    memcpy(var_c8_1, &var_78, count)
                                    memcpy(var_a8_1, &var_70, count)
                                    r8_3 = var_e4_1
                                
                                var_a8_1 += 8
                                rdx_6 = zx.q(r12_3[2].d)
                                r14_2 += 8
                                rbx = var_e8
                                k += 4
                                var_b0_1 += 8
                                var_a0_1 = r14_2
                                var_c8_1 += 8
                                k_2 = k
                            while (k s< rdx_6.d)
                            
                            var_e8 = rbx
                        
                        r8_3 += 4
                        j = var_d8.d + 4
                        var_e4_1 = r8_3
                        var_d8.d = j
                    while (j s< *(r12_3 + 0x14))
                    
                    rsi = arg1
                    r14_1 = var_c0
            else
                int32_t rdi_5 = *(r12_3 + 0x24) * r12_3[2].d * *(r12_3 + 0x14) * 2
                
                if (rbx s< rdi_5)
                label_1429baf67:
                    sub_1429b8f40()
                    noreturn
                
                int64_t rbx_3 = sx.q(rdi_5)
                memcpy(*r12_3, r13, rbx_3.d)
                r13 += rbx_3
                rbx = var_e8 - rdi_5
                var_e8 = rbx
            
            r14_1 += 0x28
            i = i_2 + 1
            var_c0 = r14_1
            i_2 = i
        while (i s< *(rsi + 0x30))
    
    int32_t rax_67 = rcx_1
    char* rdi_8 = *(arg1 + 0x28)
    
    if (*(arg1 + 0x18) != 1)
        for (; i_1 s<= rax_67; i_1 += 1)
            int32_t j_1 = 0
            
            if (*(arg1 + 0x30) s> 0)
                int64_t r12_5 = 0
                
                do
                    void* rsi_8 = *(arg1 + 0x40) + r12_5
                    int32_t r8_16 = *(rsi_8 + 0x18)
                    int32_t rcx_30
                    
                    if (i_1 s< 0)
                        int32_t rax_87
                        
                        if (r8_16 s< 0)
                            rax_87 = not.d(r8_16) - i_1
                        else
                            rax_87 = r8_16 - i_1 - 1
                        
                        rcx_30 = neg.d(divs.dp.d(sx.q(rax_87), r8_16))
                    else
                        rcx_30 = divs.dp.d(sx.q(i_1), r8_16)
                    
                    if (i_1 == rcx_30 * r8_16)
                        int64_t rbx_12 = sx.q(*(rsi_8 + 0x24) * *(rsi_8 + 0x10)) * 2
                        memcpy(rdi_8, *(rsi_8 + 8), rbx_12.d)
                        rdi_8 = &rdi_8[rbx_12]
                        *(rsi_8 + 8) += rbx_12
                    
                    j_1 += 1
                    r12_5 += 0x28
                while (j_1 s< *(arg1 + 0x30))
                
                rax_67 = rcx_1
    else
        for (; i_1 s<= rax_67; i_1 += 1)
            int32_t j_2 = 0
            
            if (*(arg1 + 0x30) s> 0)
                int64_t r12_4 = 0
                
                do
                    void* rsi_6 = *(arg1 + 0x40) + r12_4
                    int32_t r8_14 = *(rsi_6 + 0x18)
                    int32_t rcx_25
                    
                    if (i_1 s< 0)
                        int32_t rax_73
                        
                        if (r8_14 s< 0)
                            rax_73 = not.d(r8_14) - i_1
                        else
                            rax_73 = r8_14 - i_1 - 1
                        
                        rcx_25 = neg.d(divs.dp.d(sx.q(rax_73), r8_14))
                    else
                        rcx_25 = divs.dp.d(sx.q(i_1), r8_14)
                    
                    if (i_1 == rcx_25 * r8_14)
                        int32_t k_1 = *(rsi_6 + 0x10)
                        
                        if (*(rsi_6 + 0x1c) != 1)
                            int64_t rbx_10 = sx.q(*(rsi_6 + 0x24) * k_1) * 2
                            memcpy(rdi_8, *(rsi_6 + 8), rbx_10.d)
                            rdi_8 = &rdi_8[rbx_10]
                            *(rsi_6 + 8) += rbx_10
                        else if (k_1 s> 0)
                            int16_t* rax_77 = *(rsi_6 + 8)
                            
                            do
                                uint16_t rcx_28 = *rax_77
                                k_1 -= 1
                                *rdi_8 = rcx_28.b
                                rdi_8[1] = (rcx_28 u>> 8).b
                                rdi_8 = &rdi_8[2]
                                rax_77 = *(rsi_6 + 8) + 2
                                *(rsi_6 + 8) = rax_77
                            while (k_1 s> 0)
                    
                    j_2 += 1
                    r12_4 += 0x28
                while (j_2 s< *(arg1 + 0x30))
                
                rax_67 = rcx_1
    
    if (var_e8 s> 0)
        sub_1429b8f80()
        noreturn
    
    *arg5 = *(arg1 + 0x28)
    result = zx.q(rdi_8.d - *(arg1 + 0x28))
else
    result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
