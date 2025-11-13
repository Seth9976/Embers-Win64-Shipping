// 函数: sub_1429b2b60
// 地址: 0x1429b2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
int128_t zmm6
int128_t var_58 = zmm6
int64_t* rdi = arg4
int64_t var_70[0x2]
sub_1429b1b70(&var_70, (arg4[1] - *arg4) s>> 3)
int64_t* var_90
sub_142995aa0(&var_90, (rdi[1] - *rdi) s>> 3)
struct Imf_2_3::DeepCompositing::VTable* var_a0
Concurrency::network_link_registry<class Concurrency::ISource<uint64_t> >::network_link_registry<class Concurrency::ISource<uint64_t> >(
    &var_a0)
struct Imf_2_3::DeepCompositing::VTable** rax = *(arg3 + 0x88)
struct Imf_2_3::DeepCompositing::VTable** rcx_3 = &var_a0

if (rax != 0)
    rcx_3 = rax

int32_t rcx_4 = *(arg3 + 0x80)
int64_t r8 = sx.q(*(arg3 + 0x78))
int32_t i_1 = r8.d
int64_t r13 = var_70[0]
int64_t* rsi_1 = var_90

if (r8.d s<= rcx_4)
    int64_t rax_3 = sx.q((rcx_4 - r8.d + 1) * (arg1 - arg2))
    int64_t rbp_1 = r8
    void* rbx_1 = arg3 + 0x30
    int64_t r11_1 = rax_3 << 2
    int64_t var_a8_1 = r11_1
    int64_t r14_1 = rax_3 << 3
    int64_t* r15_1 = arg5
    int32_t i
    
    do
        int64_t rdx_10
        int64_t r9
        
        if (*(arg3 + 0x40) == 0)
            *rsi_1 = *(r14_1 + ***r15_1)
            rsi_1[1] = *(r14_1 + ***r15_1)
            int64_t j = 2
            rdx_10 = rdi[1]
            r9 = *rdi
            
            if ((rdx_10 - r9) s>> 3 u> 2)
                int64_t* r10_2 = 0x30
                
                do
                    rsi_1[j] = *(r14_1 + *(r10_2 + **r15_1))
                    j += 1
                    r10_2 = &r10_2[3]
                    rdx_10 = rdi[1]
                    r9 = *rdi
                while (j u< (rdx_10 - r9) s>> 3)
        else
            int64_t j_1 = 0
            rdx_10 = rdi[1]
            r9 = *rdi
            
            if ((rdx_10 - r9) s>> 3 != 0)
                int64_t* r10_1 = nullptr
                
                do
                    rsi_1[j_1] = *(r14_1 + *(r10_1 + **r15_1))
                    j_1 += 1
                    r10_1 = &r10_1[3]
                    rdx_10 = rdi[1]
                    r9 = *rdi
                while (j_1 u< (rdx_10 - r9) s>> 3)
        
        int32_t var_c8_1 = *(r11_1 + *arg7)
        int32_t var_d0_1 = *(r11_1 + *arg6)
        int32_t var_d8_1 = ((rdx_10 - r9) s>> 3).d
        (*rcx_3)->vFunc_1(rcx_3, r13, rsi_1)
        void* j_3
        sub_14297bd10(rbx_1, &j_3)
        void var_98
        int64_t* rax_30 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rbx_1, &var_98)
        void* j_2 = j_3
        
        if (j_2 != *rax_30)
            void* rbx_2 = nullptr
            int64_t r15_2 = sx.q(arg1)
            int64_t* rax_32
            
            do
                float zmm0_1 = *(r13 + (sx.q(*(rbx_2 + *(arg3 + 0xa8))) << 2))
                int32_t rcx_18 = *(j_2 + 0x120)
                
                if (rcx_18 == 2)
                    *(*(j_2 + 0x138) * r15_2 + *(j_2 + 0x130) * rbp_1 + *(j_2 + 0x128)) = zmm0_1
                else if (rcx_18 == 1)
                    zmm0_1 - 0f
                    uint16_t r8_3
                    
                    if (is_unordered.d(zmm0_1, 0f) || zmm0_1 != 0f)
                        int16_t r9_1 = *(&data_1436fbc50 + (zx.q(zmm0_1) u>> 0x17 << 1))
                        
                        if (r9_1 == 0)
                            r8_3 = sub_142c998f0(zmm0_1)
                            j_2 = j_3
                        else
                            int32_t rcx_23 = zmm0_1 & 0x7fffff
                            r8_3 = ((rcx_23 + 0xfff + (rcx_23 u>> 0xd & 1)) u>> 0xd).w + r9_1
                    else
                        r8_3 = (zmm0_1 u>> 0x10).w
                    
                    *(*(j_2 + 0x138) * r15_2 + *(j_2 + 0x130) * rbp_1 + *(j_2 + 0x128)) = r8_3
                
                rbx_2 += 4
                sub_14297bb00(&j_3)
                rax_32 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    arg3 + 0x30, &var_98)
                j_2 = j_3
            while (j_2 != *rax_32)
            rdi = arg4
            rsi_1 = var_90
            r15_1 = arg5
            rbx_1 = arg3 + 0x30
        
        r14_1 += 8
        r11_1 = var_a8_1 + 4
        var_a8_1 = r11_1
        i = i_1 + 1
        i_1 = i
        rbp_1 += 1
    while (i s<= *(arg3 + 0x80))

int64_t result = sub_1429c03d0(&var_a0)

if (rsi_1 != 0)
    int64_t* rax_36 = rsi_1
    int64_t var_80
    
    if ((var_80 - rsi_1) s>> 3 << 3 u>= 0x1000)
        rsi_1 = rsi_1[-1]
        
        if (rax_36 - rsi_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(rsi_1)

if (r13 == 0)
    return result

int64_t rax_39 = r13
int64_t var_60

if (((var_60 - r13) & 0xfffffffffffffffc) u>= 0x1000)
    r13 = *(r13 - 8)
    
    if (rax_39 - r13 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn

return j_sub_140a74f90(r13)
