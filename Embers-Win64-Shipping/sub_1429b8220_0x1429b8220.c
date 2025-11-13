// 函数: sub_1429b8220
// 地址: 0x1429b8220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char* r15 = arg2
uint64_t result

if (arg3 != 0)
    int32_t rax_3 = *arg4
    int32_t i_4 = arg4[1]
    int32_t rdi_1 = *(arg1 + 0x50)
    
    if (arg4[3] s<= rdi_1)
        rdi_1 = arg4[3]
    
    int32_t var_e0_1 = rdi_1
    int32_t rsi_1 = *(arg1 + 0x4c)
    
    if (arg4[2] s<= rsi_1)
        rsi_1 = arg4[2]
    
    int64_t rbp_1 = *(arg1 + 0x20)
    int64_t var_d8_1 = rbp_1
    void* var_e8
    sub_14297bd10(*(arg1 + 0x38), &var_e8)
    int64_t r12_1 = 0
    int16_t* var_c8
    int64_t rax_5 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        *(arg1 + 0x38), &var_c8)
    
    if (var_e8 != rax_5)
        int64_t rcx_9
        
        do
            int64_t* rbx_2 = *(arg1 + 0x40) + r12_1
            *rbx_2 = rbp_1
            rbx_2[1] = rbp_1
            rbx_2[2].d = sub_1429a63d0(*(var_e8 + 0x120), rax_3, rsi_1)
            *(rbx_2 + 0x14) = sub_1429a63d0(*(var_e8 + 0x124), i_4, rdi_1)
            rbx_2[3].d = *(var_e8 + 0x124)
            int32_t temp0_1 = divs.dp.d(sx.q(sub_1429a6580(*(var_e8 + 0x11c))), sub_1429a6580(1))
            *(rbx_2 + 0x1c) = temp0_1
            rbp_1 += sx.q(temp0_1 * *(rbx_2 + 0x14) * rbx_2[2].d) << 1
            sub_14297bb00(&var_e8)
            r12_1 += 0x20
            rcx_9 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(arg1 + 0x38), &var_c8)
            rdi_1 = var_e0_1
        while (var_e8 != rcx_9)
        var_d8_1 = rbp_1
        r15 = arg2
    
    int64_t rax_22 = j_sub_140a82f30(0x2000)
    int64_t var_c0_1 = rax_22
    memset(rax_22, 0, 0x2000)
    uint16_t rdx_7 = zx.w(r15[1]) << 8 | zx.w(*r15)
    void* r15_2 = &r15[4]
    uint16_t rax_24 = zx.w(r15[3]) << 8 | zx.w(r15[2])
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    
    if (rax_24 u>= 0x2000)
        sub_14297ab20(&exceptionObject, 
            "Error in header for PIZ-compressed data (invalid bitmap size).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    if (rdx_7 u<= rax_24)
        uint32_t rcx_14 = zx.d(rax_24) - zx.d(rdx_7)
        char* rdx_9 = zx.q(rdx_7) + rax_22
        int32_t i_6 = rcx_14 + 1
        
        if (rcx_14 != 0xffffffff)
            int32_t i
            
            do
                *rdx_9 = *r15_2
                rdx_9 = &rdx_9[1]
                r15_2 += 1
                i = i_6
                i_6 -= 1
            while (i != 1)
    
    int16_t* rax_27 = j_sub_140a82f30(0x20000)
    var_c8 = rax_27
    memset(rax_27, 0, 0x20000)
    int32_t r9 = 0
    int32_t i_1 = 0
    int64_t r10_1 = 0
    int16_t* r8_2 = rax_27
    
    do
        if (i_1 == 0 || ((r10_1 s>> 3)[rax_22] & (1 << (i_1.b & 7)).b) != 0)
            *r8_2 = i_1.w
            r9 += 1
            r8_2 = &r8_2[1]
        
        i_1 += 1
        r10_1 += 1
    while (i_1 s< 0x10000)
    
    if (r9 s< 0x10000)
        __builtin_memset(&rax_27[sx.q(r9)], 0, sx.q(0x10000 - r9) << 1)
    
    int32_t r10_8 = ((sx.d(*(r15_2 + 3)) << 8 | zx.d(*(r15_2 + 2))) << 8 | zx.d(*(r15_2 + 1))) << 8
        | zx.d(*r15_2)
    
    if (r10_8 s> arg3)
        sub_14297ab20(&exceptionObject, 
            "Error in header for PIZ-compressed data (invalid array length).")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    void* r8_3 = *(arg1 + 0x20)
    sub_1429bc720(r15_2 + 4, r10_8, r8_3, ((rbp_1 - r8_3) s>> 1).d)
    int32_t i_2 = 0
    int32_t i_5 = 0
    
    if (*(arg1 + 0x30) s> 0)
        void* rdx_12 = nullptr
        var_e8 = nullptr
        
        do
            void* r15_4 = *(arg1 + 0x40) + rdx_12
            int32_t rbp_2 = 0
            int32_t r8_4 = *(r15_4 + 0x1c)
            
            if (r8_4 s> 0)
                do
                    int32_t rdx_13 = *(r15_4 + 0x10)
                    sub_1429c0790(*r15_4 + (sx.q(rbp_2) << 1), rdx_13, r8_4, *(r15_4 + 0x14), 
                        rdx_13 * r8_4, r9.w - 1)
                    rbp_2 += 1
                    r8_4 = *(r15_4 + 0x1c)
                while (rbp_2 s< r8_4)
                
                i_2 = i_5
                rdx_12 = var_e8
            
            i_2 += 1
            i_5 = i_2
            rdx_12 += 0x20
            var_e8 = rdx_12
        while (i_2 s< *(arg1 + 0x30))
        
        rbp_1 = var_d8_1
    
    int64_t rdi_7 = *(arg1 + 0x20)
    int32_t rbp_4 = ((rbp_1 - rdi_7) s>> 1).d
    
    if (rbp_4 s> 0)
        int64_t i_3 = 0
        
        do
            *(rdi_7 + (i_3 << 1)) = rax_27[zx.q(*(rdi_7 + (i_3 << 1)))]
            i_3 += 1
        while (i_3 s< sx.q(rbp_4))
    
    char* rdi_8 = *(arg1 + 0x28)
    
    if (*(arg1 + 0x14) != 1)
        for (int32_t rax_47 = var_e0_1; i_4 s<= rax_47; i_4 += 1)
            int32_t j = 0
            
            if (*(arg1 + 0x30) s> 0)
                int64_t rcx_27 = 0
                int64_t var_d8_2 = 0
                
                do
                    void* r15_6 = *(arg1 + 0x40) + rcx_27
                    int32_t r8_8 = *(r15_6 + 0x18)
                    int32_t rcx_28
                    
                    if (i_4 s< 0)
                        int32_t rax_53
                        
                        if (r8_8 s< 0)
                            rax_53 = not.d(r8_8) - i_4
                        else
                            rax_53 = r8_8 - i_4 - 1
                        
                        rcx_28 = neg.d(divs.dp.d(sx.q(rax_53), r8_8))
                    else
                        rcx_28 = divs.dp.d(sx.q(i_4), r8_8)
                    
                    if (i_4 == rcx_28 * r8_8)
                        int64_t rbp_7 = sx.q(*(r15_6 + 0x1c) * *(r15_6 + 0x10)) * 2
                        memcpy(rdi_8, *(r15_6 + 8), rbp_7.d)
                        rdi_8 = &rdi_8[rbp_7]
                        *(r15_6 + 8) += rbp_7
                    
                    j += 1
                    rcx_27 = var_d8_2 + 0x20
                    var_d8_2 = rcx_27
                while (j s< *(arg1 + 0x30))
                
                rax_47 = var_e0_1
    else
        for (; i_4 s<= var_e0_1; i_4 += 1)
            int32_t j_1 = 0
            
            if (*(arg1 + 0x30) s> 0)
                int64_t r11_2 = 0
                
                do
                    void* r8_7 = *(arg1 + 0x40) + r11_2
                    int32_t r9_5 = *(r8_7 + 0x18)
                    int32_t rcx_23
                    
                    if (i_4 s< 0)
                        int32_t rax_40
                        
                        if (r9_5 s< 0)
                            rax_40 = not.d(r9_5) - i_4
                        else
                            rax_40 = r9_5 - i_4 - 1
                        
                        rcx_23 = neg.d(divs.dp.d(sx.q(rax_40), r9_5))
                    else
                        rcx_23 = divs.dp.d(sx.q(i_4), r9_5)
                    
                    if (i_4 == rcx_23 * r9_5)
                        int32_t k = *(r8_7 + 0x1c) * *(r8_7 + 0x10)
                        
                        if (k s> 0)
                            int16_t* rax_44 = *(r8_7 + 8)
                            
                            do
                                uint16_t rax_45 = *rax_44
                                *rdi_8 = rax_45.b
                                rdi_8[1] = (rax_45 u>> 8).b
                                rdi_8 = &rdi_8[2]
                                rax_44 = *(r8_7 + 8) + 2
                                *(r8_7 + 8) = rax_44
                                k -= 1
                            while (k s> 0)
                    
                    j_1 += 1
                    r11_2 += 0x20
                while (j_1 s< *(arg1 + 0x30))
    
    *arg5 = *(arg1 + 0x28)
    int32_t result_1 = rdi_8.d - *(arg1 + 0x28)
    j_sub_140a74f90(rax_27)
    j_sub_140a74f90(rax_22)
    result = zx.q(result_1)
else
    *arg5 = *(arg1 + 0x28)
    result = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
