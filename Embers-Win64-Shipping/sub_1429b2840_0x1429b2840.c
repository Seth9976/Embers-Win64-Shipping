// 函数: sub_1429b2840
// 地址: 0x1429b2840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rsi
rsi.b = 0
uint64_t rdi
rdi.b = 0
void* i_1
sub_14297bd10(sub_14297e970(arg2), &i_1)
void var_c0
int64_t* rax_4 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    sub_14297e970(arg2), &var_c0)
void* i = i_1
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (i != *rax_4)
    int64_t* rax_14
    
    do
        int64_t var_a8_1 = 0
        int64_t var_a0_1 = 0xf
        int64_t r8_1 = -1
        char var_b8 = 0
        
        do
            r8_1 += 1
        while ((i + 0x1c)[r8_1] != 0)
        
        sub_14058ad40(&var_b8, i + 0x1c, r8_1)
        char* rcx_5 = &var_b8
        char* r8_2 = var_b8.q
        
        if (var_a0_1 u>= 0x10)
            rcx_5 = r8_2
        
        if (var_a8_1 != 5 || *rcx_5 != 0x6361425a || rcx_5[4] != 0x6b)
            char* rax_7 = &var_b8
            
            if (var_a0_1 u>= 0x10)
                rax_7 = r8_2
            
            if (var_a8_1 != 1 || *rax_7 != 0x5a)
                char* rax_9 = &var_b8
                
                if (var_a0_1 u>= 0x10)
                    rax_9 = r8_2
                
                if (var_a8_1 == 1)
                    rdi = zx.q(rdi.b)
                    
                    if (zx.d(*rax_9) == 0x41)
                        rdi = 1
            else
                rsi = 1
        else
            arg1[8].b = 1
        
        if (var_a0_1 u>= 0x10)
            char* rax_10 = r8_2
            
            if (var_a0_1 + 1 u>= 0x1000)
                r8_2 = *(r8_2 - 8)
                
                if (rax_10 - r8_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(r8_2)
        
        sub_14297bb00(&i_1)
        rax_14 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            sub_14297e970(arg2), &var_c0)
        i = i_1
    while (i != *rax_14)
    
    if (rsi.b != 0)
        if (rdi.b == 0)
            sub_14297d3f0(&exceptionObject, 
                "Deep data provided to CompositeDeepScanLine is missing an alpha channel")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        int64_t** rcx_11 = arg1[3]
        uint64_t result
        int64_t* rax_21
        
        if ((arg1[4] - rcx_11) s>> 3 != 0)
            rax_21 = sub_1429bef10(*rcx_11)
        label_1429b2a70:
            int32_t* rax_22 = sub_142980aa0(arg2)
            int32_t* rax_23 = sub_142980aa0(rax_21)
            
            if (*rax_23 != *rax_22 || rax_23[1] != rax_22[1] || rax_23[2] != rax_22[2]
                    || rax_23[3] != rax_22[3])
                sub_14297d3f0(&exceptionObject, 
                    "Deep data provided to CompositeDeepScanLine has a different displayWindow to "
                "previously provided data")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            result = sub_142980a30(arg2)
            int32_t rcx_27 = *result
            
            if (rcx_27 s< arg1[0xf].d)
                arg1[0xf].d = rcx_27
            
            int32_t rcx_28 = *(result + 8)
            
            if (rcx_28 s> arg1[0x10].d)
                arg1[0x10].d = rcx_28
            
            int32_t rcx_29 = *(result + 4)
            
            if (rcx_29 s< *(arg1 + 0x7c))
                *(arg1 + 0x7c) = rcx_29
            
            int32_t rcx_30 = *(result + 0xc)
            
            if (rcx_30 s> *(arg1 + 0x84))
                *(arg1 + 0x84) = rcx_30
        else
            if (((arg1[1] - *arg1) & 0xfffffffffffffff8) != 0)
                rax_21 = sub_142988800(**arg1)
                goto label_1429b2a70
            
            int32_t* rax_20 = sub_142980a30(arg2)
            arg1[0xf].d = *rax_20
            *(arg1 + 0x7c) = rax_20[1]
            arg1[0x10].d = rax_20[2]
            result = zx.q(rax_20[3])
            *(arg1 + 0x84) = result.d
        __security_check_cookie(rax_1 ^ &var_e8)
        return result

sub_14297d3f0(&exceptionObject, 
    "Deep data provided to CompositeDeepScanLine is missing a Z channel")
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
