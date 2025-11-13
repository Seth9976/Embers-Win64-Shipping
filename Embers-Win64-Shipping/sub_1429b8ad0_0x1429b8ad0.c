// 函数: sub_1429b8ad0
// 地址: 0x1429b8ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char* rdi = arg2
uint64_t result

if (arg3 != 0)
    void* rbp_1 = *(arg1 + 0x18)
    void* rbx_1 = rbp_1
    int32_t r12_1 = *(arg1 + 0x34)
    int32_t rcx = *(arg1 + 0x38)
    
    if (r12_1 s>= arg4[2])
        r12_1 = arg4[2]
    
    if (rcx s>= arg4[3])
        rcx = arg4[3]
    
    int32_t r13_1 = *arg4
    int32_t r14_1 = arg4[1]
    
    if (r14_1 s<= rcx)
        do
            void* i_1
            sub_14297bd10(*(arg1 + 0x28), &i_1)
            void var_b8
            int64_t* rax_3 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(arg1 + 0x28), &var_b8)
            void* i = i_1
            
            if (i != *rax_3)
                int64_t* rax_47
                
                do
                    int32_t r8 = *(i + 0x124)
                    int32_t rcx_3
                    
                    if (r14_1 s< 0)
                        int32_t rax_9
                        
                        if (r8 s< 0)
                            rax_9 = not.d(r8) - r14_1
                        else
                            rax_9 = r8 - r14_1 - 1
                        
                        rcx_3 = neg.d(divs.dp.d(sx.q(rax_9), r8))
                    else
                        rcx_3 = divs.dp.d(sx.q(r14_1), r8)
                    
                    if (r14_1 == rcx_3 * r8)
                        uint64_t j_3 = zx.q(sub_1429a63d0(*(i + 0x120), r13_1, r12_1))
                        uint32_t rsi_1 = 0
                        int32_t rax_14 = *(i + 0x11c)
                        
                        if (rax_14 == 0)
                            int64_t rax_36 = sx.q(j_3.d)
                            void* r11_2 = rbp_1
                            void* r10_2 = rax_36 + rbp_1
                            void* r8_7 = rax_36 + r10_2
                            void* r9_2 = rax_36 + r8_7
                            rbp_1 = r9_2 + rax_36
                            
                            if (j_3.d s> 0)
                                void* r11_3 = r11_2 - r8_7
                                int64_t r10_3 = r10_2 - r8_7
                                uint64_t j
                                
                                do
                                    char rax_37 = *rdi
                                    r9_2 += 1
                                    r8_7 += 1
                                    char var_d3_1 = rdi[1]
                                    char var_d2_1 = rdi[2]
                                    char rax_40 = rdi[3]
                                    rdi = &rdi[4]
                                    char var_d1_1 = rax_40
                                    int32_t rcx_15 = rax_37.d - rsi_1
                                    rsi_1 = rax_37.d
                                    *(r11_3 + r8_7 - 1) = (rcx_15 u>> 0x18).b
                                    *(r10_3 + r8_7 - 1) = (rcx_15 u>> 0x10).b
                                    *(r8_7 - 1) = (rcx_15 u>> 8).b
                                    *(r9_2 - 1) = rcx_15.b
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                        else if (rax_14 == 1)
                            int64_t rax_32 = sx.q(j_3.d)
                            void* r9_1 = rbp_1
                            void* r8_6 = rax_32 + rbp_1
                            rbp_1 = rax_32 + r8_6
                            
                            if (j_3.d s> 0)
                                uint64_t j_5 = j_3
                                uint64_t j_1
                                
                                do
                                    uint32_t rax_33 = zx.d(*rdi)
                                    r8_6 += 1
                                    r9_1 += 1
                                    uint32_t rdx_10 = rax_33 - rsi_1
                                    rdi = &rdi[2]
                                    rsi_1 = rax_33
                                    *(r9_1 - 1) = (rdx_10 u>> 8).b
                                    *(r8_6 - 1) = rdx_10.b
                                    j_1 = j_5
                                    j_5 -= 1
                                while (j_1 != 1)
                        else if (rax_14 == 2)
                            int64_t rcx_7 = sx.q(j_3.d)
                            uint8_t* r11_1 = rbp_1
                            void* r9 = rcx_7 + rbp_1
                            char* r10_1 = rcx_7 + r9
                            rbp_1 = &r10_1[rcx_7]
                            
                            if (j_3.d s> 0)
                                uint64_t j_4 = zx.q(j_3.d)
                                uint64_t j_2
                                
                                do
                                    char rax_16 = *rdi
                                    char var_d7_1 = rdi[1]
                                    char var_d6_1 = rdi[2]
                                    char rax_19 = rdi[3]
                                    rdi = &rdi[4]
                                    char var_d5_1 = rax_19
                                    int32_t var_cc_1 = rax_16.d.d
                                    int32_t rax_21 = var_cc_1 & 0x7f800000
                                    int32_t rcx_9 = var_cc_1 & 0x7fffff
                                    uint32_t rax_23
                                    
                                    if (rax_21 != 0x7f800000)
                                        int32_t rdx_8 = rcx_9 | rax_21
                                        rax_23 = ((rcx_9 & 0x80) + rdx_8) u>> 8
                                        
                                        if (rax_23 u>= 0x7f8000)
                                            rax_23 = rdx_8 u>> 8
                                    else if (rcx_9 == 0)
                                        rax_23 = 0x7f8000
                                    else
                                        int32_t rax_22
                                        rax_22.b = rcx_9 u< 0x100
                                        rax_23 = rax_22 | (rcx_9 | 0x7f800000) u>> 8
                                    
                                    uint32_t r8_5 = (var_cc_1 & 0x80000000) u>> 8 | rax_23
                                    uint32_t rcx_13 = r8_5 - rsi_1
                                    rsi_1 = r8_5
                                    *r11_1 = (rcx_13 u>> 0x10).b
                                    r11_1 = &r11_1[1]
                                    *r9 = (rcx_13 u>> 8).b
                                    r9 += 1
                                    *r10_1 = rcx_13.b
                                    r10_1 = &r10_1[1]
                                    j_2 = j_4
                                    j_4 -= 1
                                while (j_2 != 1)
                    
                    sub_14297bb00(&i_1)
                    rax_47 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                        *(arg1 + 0x28), &var_b8)
                    i = i_1
                while (i != *rax_47)
            
            r14_1 += 1
        while (r14_1 s<= rcx)
        
        rbx_1 = *(arg1 + 0x18)
    
    double zmm0_1 = ceil(float.d(rbp_1 - rbx_1) f* 1.01)
    int64_t rcx_18 = *(arg1 + 0x20)
    int32_t result_1 = int.d(zmm0_1) + 0x64
    
    if (sub_140374220(rcx_18, &result_1, rbx_1) != 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_142c99e10(&exceptionObject, "Data compression (zlib) failed.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn
    
    *arg5 = *(arg1 + 0x20)
    result = zx.q(result_1)
else
    *arg5 = *(arg1 + 0x20)
    result = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
