// 函数: sub_142988f40
// 地址: 0x142988f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
struct _Mtx_internal_imp_t* mtx = *(arg1 + 8)
int32_t code_1

if (mtx->__offset(0x6c).b == 0)
    void* rcx_52 = mtx->__offset(0xb0).q
    
    if (rcx_52 == 0)
        char r8_8 = sub_1429ab560(mtx->__offset(0x78).q, arg2)
        code_1 = sub_142987e60(*(arg1 + 8) + 0x98, arg2, r8_8)
    else
        code_1 = sub_1429b3d60(rcx_52, arg2)
else
    struct _Mtx_internal_imp_t* mtx_1 = mtx
    int32_t code
    void* r8_1
    code, r8_1 = _Mtx_lock(mtx)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    char var_f0_1 = 1
    int64_t* rbx_2 = *(arg1 + 8) + 0x98
    void* var_120
    sub_14297bd10(rbx_2, &var_120)
    void* var_110
    sub_14297bd10(arg2, &var_110)
    void* i_2
    int64_t rcx_5 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rbx_2, &i_2)
    int64_t* var_118
    
    if (var_120 != rcx_5)
        int64_t rdx_7
        
        do
            int64_t* rax_3 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                arg2, &var_118)
            void* rcx_7 = var_110
            
            if (rcx_7 == *rax_3)
                break
            
            char* rax_4 = var_120 + 0x20
            r8_1 = rcx_7 + 0x20 - (var_120 + 0x20)
            uint32_t i
            uint32_t rdx_4
            
            do
                rdx_4 = zx.d(*rax_4)
                i = zx.d(*(rax_4 + r8_1))
                
                if (rdx_4 != i)
                    break
                
                rax_4 = &rax_4[1]
            while (i != 0)
            
            if (rdx_4 - i != 0)
                break
            
            if (*(var_120 + 0x120) != *(rcx_7 + 0x120))
                break
            
            sub_14297bb00(&var_120)
            r8_1 = sub_14297bb00(&var_110)
            rdx_7 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                rbx_2, &i_2)
        while (var_120 != rdx_7)
    
    int64_t rcx_12 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rbx_2, &var_118)
    
    if (var_120 != rcx_12)
    label_1429890ac:
        sub_142988660(*(arg1 + 8))
        *(*(arg1 + 8) + 0xb8) = 0xffffffff
        int32_t* rax_10 = sub_142980a30(*(arg1 + 8) + 0x50)
        int64_t* rax_11 = j_sub_140a82f30(0x10)
        int64_t* rbx_3 = rax_11
        var_118 = rax_11
        
        if (rax_11 == 0)
            rbx_3 = nullptr
        else
            *rbx_3 = 0
            rbx_3[1] = 0
            *rbx_3 = sub_140e348a0()
        
        *(*(arg1 + 8) + 0xa8) = rbx_3
        *(*(arg1 + 8) + 0xbc) = *rax_10
        int32_t rbx_5 = sub_1429ae4c0(*(*(arg1 + 8) + 0x70)) * (rax_10[2] - *rax_10 + 1)
        sub_14297bd10(arg2, &i_2)
        int64_t* rax_16 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg2, &var_118)
        void* i_1 = i_2
        
        if (i_1 != *rax_16)
            int64_t r15_1 = sx.q(rbx_5)
            int64_t* rax_26
            
            do
                int128_t zmm1_1 = *(i_1 + 0x140)
                int32_t rcx_27 = *(i_1 + 0x120)
                void exceptionObject
                int32_t rdx_14
                int64_t rbx_7
                void* i_3
                int64_t r8_4
                int64_t r9_3
                int32_t rax_19
                
                if (rcx_27 == 0)
                    int64_t rax_23 = 4 * r15_1
                    
                    if (mulu.dp.q(4, r15_1) u>> 0x40 != zx.o(0))
                        rax_23 = -1
                    
                    int64_t rax_24 = j_sub_140a82f30(rax_23)
                    i_3 = i_2
                    rax_19 = sub_1429ad120(*(*(arg1 + 8) + 0x70), 0)
                    rbx_7 = rax_24 - (sx.q(*(*(arg1 + 8) + 0xbc)) << 2)
                    rdx_14 = 0
                    r8_4 = sx.q(rax_19) << 2
                    r9_3 = 4
                else if (rcx_27 == 1)
                    int64_t rax_20 = 2 * r15_1
                    
                    if (mulu.dp.q(2, r15_1) u>> 0x40 != zx.o(0))
                        rax_20 = -1
                    
                    int64_t rax_21 = j_sub_140a82f30(rax_20)
                    int64_t var_108_1 = rax_21
                    i_3 = i_2
                    r8_4 = sx.q(sub_1429ad120(*(*(arg1 + 8) + 0x70), 0)) * 2
                    rbx_7 = rax_21 - sx.q(*(*(arg1 + 8) + 0xbc)) * 2
                    r9_3 = 2
                    rdx_14 = 1
                else
                    if (rcx_27 != 2)
                        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    int64_t rax_17 = 4 * r15_1
                    
                    if (mulu.dp.q(4, r15_1) u>> 0x40 != zx.o(0))
                        rax_17 = -1
                    
                    int64_t rax_18 = j_sub_140a82f30(rax_17)
                    i_3 = i_2
                    rax_19 = sub_1429ad120(*(*(arg1 + 8) + 0x70), 0)
                    rbx_7 = rax_18 - (sx.q(*(*(arg1 + 8) + 0xbc)) << 2)
                    rdx_14 = 2
                    r8_4 = sx.q(rax_19) << 2
                    r9_3 = 4
                int128_t* rax_25 = sub_142984980(&exceptionObject, rdx_14, rbx_7, r9_3, r8_4, 1, 1, 
                    zmm1_1:8.q, 0, 1)
                sub_142984e30(*(*(arg1 + 8) + 0xa8), i_3 + 0x20, rax_25)
                sub_14297bb00(&i_2)
                rax_26 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    arg2, &var_118)
                i_1 = i_2
            while (i_1 != *rax_26)
        
        void* rcx_46 = *(arg1 + 8)
        r8_1 = sub_1429addf0(*(rcx_46 + 0x70), *(rcx_46 + 0xa8))
    else
        int64_t rcx_14 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg2, &var_118)
        
        if (var_110 != rcx_14)
            goto label_1429890ac
    
    sub_142987e60(*(arg1 + 8) + 0x98, arg2, r8_1.b)
    code_1 = _Mtx_unlock(mtx)
    
    if (code_1 != 0)
        std::_Throw_C_error(code_1)
        noreturn

__security_check_cookie(rax_1 ^ &var_178)
return code_1
