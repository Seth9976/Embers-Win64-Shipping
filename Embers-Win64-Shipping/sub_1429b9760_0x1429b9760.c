// 函数: sub_1429b9760
// 地址: 0x1429b9760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char* rsi = arg2
*arg5 = *(arg1 + 0x28)
uint64_t result

if (arg3 != 0)
    int32_t rax_3 = *arg4
    int32_t rbx_1 = *(arg1 + 0x50)
    int32_t r13_1 = *(arg1 + 0x4c)
    
    if (r13_1 s>= arg4[2])
        r13_1 = arg4[2]
    
    int32_t i = arg4[1]
    
    if (rbx_1 s>= arg4[3])
        rbx_1 = arg4[3]
    
    int64_t r15_1 = *(arg1 + 0x20)
    int32_t var_88_1 = rbx_1
    void* var_80
    sub_14297bd10(*(arg1 + 0x38), &var_80)
    void var_70
    int64_t rax_5 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        *(arg1 + 0x38), &var_70)
    
    if (var_80 != rax_5)
        int64_t r12_1 = 0
        int64_t rcx_8
        
        do
            int64_t* rbx_3 = *(arg1 + 0x40) + r12_1
            *rbx_3 = r15_1
            rbx_3[1] = r15_1
            rbx_3[2].d = sub_1429a63d0(*(var_80 + 0x120), rax_3, r13_1)
            int32_t rax_9 = sub_1429a63d0(*(var_80 + 0x124), i, var_88_1)
            int32_t rcx_5 = *(rbx_3 + 0x24) * rbx_3[2].d
            *(rbx_3 + 0x14) = rax_9
            r15_1 += sx.q(rax_9 * rcx_5) << 1
            sub_14297bb00(&var_80)
            r12_1 += 0x28
            rcx_8 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(arg1 + 0x38), &var_70)
        while (var_80 != rcx_8)
        rsi = arg2
        rbx_1 = var_88_1
    
    void* r10_1 = arg1
    
    if (*(arg1 + 0x18) != 1)
        for (; i s<= rbx_1; i += 1)
            int32_t j = 0
            
            if (*(r10_1 + 0x30) s> 0)
                int64_t r12_3 = 0
                
                do
                    void* rdi_4 = *(r10_1 + 0x40) + r12_3
                    int32_t r8_4 = *(rdi_4 + 0x18)
                    int32_t rcx_14
                    
                    if (i s< 0)
                        int32_t rax_30
                        
                        if (r8_4 s< 0)
                            rax_30 = not.d(r8_4) - i
                        else
                            rax_30 = r8_4 - i - 1
                        
                        rcx_14 = neg.d(divs.dp.d(sx.q(rax_30), r8_4))
                    else
                        rcx_14 = divs.dp.d(sx.q(i), r8_4)
                    
                    if (i == rcx_14 * r8_4)
                        int64_t rbx_7 = sx.q(*(rdi_4 + 0x24) * *(rdi_4 + 0x10)) * 2
                        memcpy(*(rdi_4 + 8), rsi, rbx_7.d)
                        r10_1 = arg1
                        rsi = &rsi[rbx_7]
                        *(rdi_4 + 8) += rbx_7
                    
                    j += 1
                    r12_3 += 0x28
                while (j s< *(r10_1 + 0x30))
                
                rbx_1 = var_88_1
    else
        for (; i s<= rbx_1; i += 1)
            int32_t j_1 = 0
            
            if (*(r10_1 + 0x30) s> 0)
                int64_t r12_2 = 0
                
                do
                    void* rdi_2 = *(r10_1 + 0x40) + r12_2
                    int32_t r8_2 = *(rdi_2 + 0x18)
                    int32_t rcx_9
                    
                    if (i s< 0)
                        int32_t rax_18
                        
                        if (r8_2 s< 0)
                            rax_18 = not.d(r8_2) - i
                        else
                            rax_18 = r8_2 - i - 1
                        
                        rcx_9 = neg.d(divs.dp.d(sx.q(rax_18), r8_2))
                    else
                        rcx_9 = divs.dp.d(sx.q(i), r8_2)
                    
                    if (i == rcx_9 * r8_2)
                        int32_t k = *(rdi_2 + 0x10)
                        
                        if (*(rdi_2 + 0x1c) != 1)
                            int64_t rbx_5 = sx.q(*(rdi_2 + 0x24) * k) * 2
                            memcpy(*(rdi_2 + 8), rsi, rbx_5.d)
                            r10_1 = arg1
                            rsi = &rsi[rbx_5]
                            *(rdi_2 + 8) += rbx_5
                        else if (k s> 0)
                            uint16_t* r9 = *(rdi_2 + 8)
                            
                            do
                                uint16_t rdx_9 = zx.w(*rsi)
                                uint16_t rcx_12 = zx.w(rsi[1])
                                rsi = &rsi[2]
                                k -= 1
                                *r9 = rcx_12 << 8 | rdx_9
                                *(rdi_2 + 8) += 2
                                r9 = *(rdi_2 + 8)
                            while (k s> 0)
                    
                    j_1 += 1
                    r12_2 += 0x28
                while (j_1 s< *(r10_1 + 0x30))
                
                rbx_1 = var_88_1
    
    char* r13_2 = *(r10_1 + 0x28)
    int32_t rax_36 = r13_2.d
    int32_t i_2 = 0
    
    if (*(r10_1 + 0x30) s> 0)
        void* rdi_5 = nullptr
        var_80 = nullptr
        int32_t i_1
        
        do
            void* r12_5 = *(r10_1 + 0x40) + rdi_5
            
            if (*(r12_5 + 0x1c) == 1)
                int32_t r8_7 = *(r12_5 + 0x14)
                
                if (r8_7 s> 0)
                    int32_t rdx_17 = *(r12_5 + 0x10)
                    int32_t j_2 = 1
                    int32_t j_3 = 1
                    
                    do
                        int16_t* r14_1 = *r12_5 + (sx.q((j_2 - 1) * rdx_17) << 1)
                        int64_t rax_44 = sx.q(rdx_17)
                        int16_t* rdi_6 = &r14_1[rax_44]
                        int16_t* rsi_2 = &rdi_6[rax_44]
                        int16_t* rbx_9 = &rsi_2[rax_44]
                        
                        if (j_2 + 2 s>= r8_7)
                            int16_t* rax_46 = r14_1
                            
                            if (j_2 s< r8_7)
                                rax_46 = rdi_6
                            
                            rdi_6 = rax_46
                            rbx_9 = rdi_6
                            
                            if (j_2 + 1 s< r8_7)
                                rbx_9 = rsi_2
                            
                            rsi_2 = rbx_9
                        
                        int32_t r15_2 = 0
                        
                        if (rdx_17 s> 0)
                            do
                                int64_t var_60
                                int16_t var_58
                                int64_t var_50
                                int64_t var_48
                                
                                if (r15_2 + 3 s< rdx_17)
                                    var_60 = *r14_1
                                    var_58 = (*rdi_6).w
                                    var_50 = *rsi_2
                                    var_48 = *rbx_9
                                else
                                    j_2 = 0
                                    int32_t j_4 = 0
                                    
                                    do
                                        int32_t j_5 = rdx_17 - r15_2 - 1
                                        
                                        if (rdx_17 - r15_2 - 1 s>= j_4)
                                            j_5 = j_4
                                        
                                        *(&var_60 + (sx.q(j_4) << 1)) = r14_1[sx.q(j_5)]
                                        *(&var_60 + (sx.q(j_2 + 4) << 1)) = rdi_6[sx.q(j_5)]
                                        *(&var_60 + (sx.q(j_2 + 8) << 1)) = rsi_2[sx.q(j_5)]
                                        int64_t rdx_22 = sx.q(j_2 + 0xc)
                                        j_2 = j_4 + 1
                                        j_4 = j_2
                                        *(&var_60 + (rdx_22 << 1)) = rbx_9[sx.q(j_5)]
                                    while (j_2 s< 4)
                                    
                                    r10_1 = arg1
                                
                                char rcx_28 = *(r12_5 + 0x20)
                                r14_1 = &r14_1[4]
                                rsi_2 = &rsi_2[4]
                                rdi_6 = &rdi_6[4]
                                rbx_9 = &rbx_9[4]
                                
                                if (rcx_28 != 0)
                                    var_60.w = *(&data_1435b7cf0 + (zx.q(var_60.w) << 1))
                                    var_60:2.w = *(&data_1435b7cf0 + (zx.q(var_60:2.w) << 1))
                                    var_60:4.w = *(&data_1435b7cf0 + (zx.q(var_60:4.w) << 1))
                                    var_60:6.w = *(&data_1435b7cf0 + (zx.q(var_60:6.w) << 1))
                                    var_58 = *(&data_1435b7cf0 + (zx.q(var_58) << 1))
                                    int16_t var_56 = *(&data_1435b7cf0 + (zx.q(var_56) << 1))
                                    int16_t var_54 = *(&data_1435b7cf0 + (zx.q(var_54) << 1))
                                    int16_t var_52 = *(&data_1435b7cf0 + (zx.q(var_52) << 1))
                                    var_50.w = *(&data_1435b7cf0 + (zx.q(var_50.w) << 1))
                                    var_50:2.w = *(&data_1435b7cf0 + (zx.q(var_50:2.w) << 1))
                                    var_50:4.w = *(&data_1435b7cf0 + (zx.q(var_50:4.w) << 1))
                                    var_50:6.w = *(&data_1435b7cf0 + (zx.q(var_50:6.w) << 1))
                                    var_48.w = *(&data_1435b7cf0 + (zx.q(var_48.w) << 1))
                                    var_48:2.w = *(&data_1435b7cf0 + (zx.q(var_48:2.w) << 1))
                                    var_48:4.w = *(&data_1435b7cf0 + (zx.q(var_48:4.w) << 1))
                                    var_48:6.w = *(&data_1435b7cf0 + (zx.q(var_48:6.w) << 1))
                                
                                j_2.b = rcx_28 == 0
                                int32_t rax_85
                                rax_85, j_2 = sub_1429b9e40(&var_60, r13_2, *(r10_1 + 0x14), j_2.b)
                                rdx_17 = *(r12_5 + 0x10)
                                r10_1 = arg1
                                r15_2 += 4
                                r13_2 = &r13_2[sx.q(rax_85)]
                            while (r15_2 s< rdx_17)
                            
                            j_2 = j_3
                        
                        r8_7 = *(r12_5 + 0x14)
                        j_2 += 4
                        j_3 = j_2
                    while (j_2 s<= r8_7)
                    
                    rdi_5 = var_80
            else
                int64_t rbx_8 = sx.q(*(r12_5 + 0x24) * *(r12_5 + 0x10) * *(r12_5 + 0x14) * 2)
                memcpy(r13_2, *r12_5, rbx_8.d)
                r10_1 = arg1
                r13_2 = &r13_2[rbx_8]
            
            i_1 = i_2 + 1
            rdi_5 += 0x28
            i_2 = i_1
            var_80 = rdi_5
        while (i_1 s< *(r10_1 + 0x30))
        rax_36 = (*(r10_1 + 0x28)).d
    
    result = zx.q(r13_2.d - rax_36)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
