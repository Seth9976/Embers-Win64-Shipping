// 函数: sub_1429b8fc0
// 地址: 0x1429b8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint64_t result

if (arg3 != 0)
    int64_t rcx_1 = *(arg1 + 0x18)
    int32_t var_d4 = *(arg1 + 0x14) * *(arg1 + 0x10)
    
    if (sub_140374350(rcx_1, &var_d4, arg2, arg3) != 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297ab20(&exceptionObject, "Data decompression (zlib) failed.")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    int32_t rbp_1 = arg4[1]
    char* rsi_1 = *(arg1 + 0x18)
    int32_t rax_6 = rsi_1.d
    void* rdi_1 = *(arg1 + 0x20)
    int32_t r12_1 = *arg4
    int32_t r13_1 = *(arg1 + 0x38)
    int32_t r15_1 = *(arg1 + 0x34)
    
    if (r15_1 s>= arg4[2])
        r15_1 = arg4[2]
    
    if (r13_1 s>= arg4[3])
        r13_1 = arg4[3]
    
    if (rbp_1 s<= r13_1)
        do
            void* i_1
            sub_14297bd10(*(arg1 + 0x28), &i_1)
            void var_c8
            int64_t* rax_7 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(arg1 + 0x28), &var_c8)
            void* i = i_1
            
            if (i != *rax_7)
                int64_t* rax_41
                
                do
                    int32_t r8_1 = *(i + 0x124)
                    int32_t rcx_4
                    
                    if (rbp_1 s< 0)
                        int32_t rax_13
                        
                        if (r8_1 s< 0)
                            rax_13 = not.d(r8_1) - rbp_1
                        else
                            rax_13 = r8_1 - rbp_1 - 1
                        
                        rcx_4 = neg.d(divs.dp.d(sx.q(rax_13), r8_1))
                    else
                        rcx_4 = divs.dp.d(sx.q(rbp_1), r8_1)
                    
                    if (rbp_1 == rcx_4 * r8_1)
                        uint64_t j_3 = zx.q(sub_1429a63d0(*(i + 0x120), r12_1, r15_1))
                        int32_t rdx_8 = 0
                        int32_t rax_18 = *(i + 0x11c)
                        
                        if (rax_18 == 0)
                            int64_t rax_32 = sx.q(j_3.d)
                            char* r11_3 = rsi_1
                            void* r8_5 = &rsi_1[rax_32]
                            void* r9_3 = &rsi_1[rax_32 << 1]
                            rsi_1 = r9_3 + (rax_32 << 1)
                            
                            if (rsi_1.d - *(arg1 + 0x18) u> var_d4)
                                sub_1429b8f40()
                                noreturn
                            
                            if (j_3.d s> 0)
                                void* r11_4 = r11_3 - r8_5
                                int64_t r9_4 = r9_3 - r8_5
                                uint64_t j
                                
                                do
                                    uint32_t rax_35 = zx.d(*r8_5)
                                    uint32_t rcx_17 = zx.d(*(r11_4 + r8_5))
                                    r8_5 += 1
                                    rdx_8 += ((rcx_17 << 8 | rax_35) << 8
                                        | zx.d(*(r9_4 + r8_5 - 1))) << 8
                                        | zx.d(*((rax_32 << 1) + r8_5 - 1))
                                    *(rdi_1 + 1) = rdx_8:1.b
                                    *(rdi_1 + 2) = rdx_8:2.b
                                    *(rdi_1 + 3) = rdx_8:3.b
                                    *rdi_1 = rdx_8.b
                                    rdi_1 += 4
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                        else if (rax_18 == 1)
                            int64_t rax_28 = sx.q(j_3.d)
                            char* r8_4 = rsi_1
                            char* r9_2 = &rsi_1[rax_28]
                            rsi_1 = &rsi_1[rax_28 << 1]
                            
                            if (rsi_1.d - *(arg1 + 0x18) u> var_d4)
                                sub_1429b8f40()
                                noreturn
                            
                            if (j_3.d s> 0)
                                uint64_t j_4 = j_3
                                uint64_t j_1
                                
                                do
                                    uint32_t rcx_14 = zx.d(*r8_4)
                                    r8_4 = &r8_4[1]
                                    uint32_t rax_31 = zx.d(*r9_2)
                                    r9_2 = &r9_2[1]
                                    rdx_8 += rcx_14 << 8 | rax_31
                                    *rdi_1 = rdx_8.w
                                    rdi_1 += 2
                                    j_1 = j_4
                                    j_4 -= 1
                                while (j_1 != 1)
                        else if (rax_18 == 2)
                            int64_t rcx_8 = sx.q(j_3.d)
                            char* r8_3 = rsi_1
                            void* r11_1 = &rsi_1[rcx_8]
                            rsi_1 = r11_1 + (rcx_8 << 1)
                            void* r9_1 = rcx_8 + r11_1
                            
                            if (rsi_1.d - *(arg1 + 0x18) u> var_d4)
                                sub_1429b8f40()
                                noreturn
                            
                            if (j_3.d s> 0)
                                void* r11_2 = r11_1 - r8_3
                                uint64_t j_2
                                
                                do
                                    uint32_t rax_22 = zx.d(*r8_3)
                                    r9_1 += 1
                                    uint32_t rcx_9 = zx.d(*(r11_2 + r8_3))
                                    r8_3 = &r8_3[1]
                                    rdx_8 += ((rcx_9 | rax_22 << 8) << 8 | zx.d(*(r9_1 - 1))) << 8
                                    *(rdi_1 + 1) = rdx_8:1.b
                                    *(rdi_1 + 2) = rdx_8:2.b
                                    *(rdi_1 + 3) = rdx_8:3.b
                                    *rdi_1 = rdx_8.b
                                    rdi_1 += 4
                                    j_2 = j_3
                                    j_3 -= 1
                                while (j_2 != 1)
                    
                    sub_14297bb00(&i_1)
                    rax_41 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                        *(arg1 + 0x28), &var_c8)
                    i = i_1
                while (i != *rax_41)
            
            rbp_1 += 1
        while (rbp_1 s<= r13_1)
        
        rax_6 = *(arg1 + 0x18)
    
    if (rsi_1.d - rax_6 u< var_d4)
        sub_1429b8f80()
        noreturn
    
    *arg5 = *(arg1 + 0x20)
    result = zx.q(rdi_1.d - *(arg1 + 0x20))
else
    *arg5 = *(arg1 + 0x20)
    result = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
