// 函数: sub_1429b3d60
// 地址: 0x1429b3d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
sub_1429b13d0(*(arg1 + 8) + 0x90, 3)
char* const rbx = &data_142d94068
sub_14058ad40(*(*(arg1 + 8) + 0x90), &data_142d94068, 1)
void* rax_3 = *(arg1 + 8)

if (*(rax_3 + 0x40) != 0)
    rbx = "ZBack"

int64_t r8_1 = -1

do
    r8_1 += 1
while (rbx[r8_1] != 0)

sub_14058ad40(*(rax_3 + 0x90) + 0x20, rbx, r8_1)
sub_14058ad40(*(*(arg1 + 8) + 0x90) + 0x40, &(*U"DEFGAB")[4], 1)
sub_1429b1550(*(arg1 + 8) + 0xa8, 0)
void* i_1
sub_14297bd10(arg2, &i_1)
void var_68
int64_t* result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg2, &var_68)

for (void* i = i_1; i != *result; i = i_1)
    int64_t var_48_1 = 0
    int64_t var_40_1 = 0xf
    char var_58 = 0
    int64_t r8_3 = -1
    
    do
        r8_3 += 1
    while ((i + 0x20)[r8_3] != 0)
    
    sub_14058ad40(&var_58, i + 0x20, r8_3)
    char* rdx_4 = &var_58
    char* rbx_1 = var_58.q
    int64_t rdi_1 = var_40_1
    
    if (rdi_1 u>= 0x10)
        rdx_4 = rbx_1
    
    int32_t rax_6
    
    if (var_48_1 == 5)
        int64_t rax_5 = 0
        
        while (true)
            char rcx_12 = rdx_4[rax_5]
            rax_5 += 1
            char temp0_1 = *(rax_5 + &Imf_2_3::CompositeDeepScanLine::`vftable'.vFunc_0:7)
            
            if (rcx_12 != temp0_1)
                rax_6 = sbb.d(rax_5.d, rax_5.d, rcx_12 u< temp0_1) | 1
                break
            
            if (rax_5 == 5)
                rax_6 = 0
                break
    
    int32_t var_78
    int64_t* rcx_14
    int32_t* rdx_5
    
    if (var_48_1 != 5 || rax_6 != 0)
        char* rax_8 = &var_58
        
        if (rdi_1 u>= 0x10)
            rax_8 = rbx_1
        
        int32_t rax_10
        
        if (var_48_1 == 1)
            uint32_t rax_9 = zx.d(*rax_8)
            
            if (rax_9.b != 0x5a)
                rax_10 = sbb.d(rax_9, rax_9, rax_9.b u< 0x5a) | 1
            else
                rax_10 = 0
        
        if (var_48_1 != 1 || rax_10 != 0)
            char* rax_12 = &var_58
            
            if (rdi_1 u>= 0x10)
                rax_12 = rbx_1
            
            int32_t rax_14
            
            if (var_48_1 == 1)
                uint32_t rax_13 = zx.d(*rax_12)
                
                if (rax_13.b != 0x41)
                    rax_14 = sbb.d(rax_13, rax_13, rax_13.b u< 0x41) | 1
                else
                    rax_14 = 0
            
            if (var_48_1 != 1 || rax_14 != 0)
                void* rax_16 = *(arg1 + 8)
                int32_t rdx_8 = ((*(rax_16 + 0x98) - *(rax_16 + 0x90)) s>> 5).d
                var_78 = rdx_8
                int32_t* rax_17 = *(rax_16 + 0xb0)
                
                if (*(rax_16 + 0xb8) == rax_17)
                    std::vector<uint64_t const& __ptr64,uint64_t,class std::allocator<uint64_t> >::_Emplace_reallocate<uint64_t const& __ptr64>(
                        rax_16 + 0xa8, rax_17, &var_78)
                else
                    *rax_17 = rdx_8
                    *(rax_16 + 0xb0) += 4
                
                void* rbx_2 = *(arg1 + 8)
                int128_t* rax_18 = *(rbx_2 + 0x98)
                
                if (*(rbx_2 + 0xa0) == rax_18)
                    sub_140909240(rbx_2 + 0x90, rax_18, &var_58)
                else
                    sub_140592d30(rax_18, &var_58)
                    *(rbx_2 + 0x98) += 0x20
                
                rbx_1 = var_58.q
                rdi_1 = var_40_1
            else
                var_78 = 2
                rcx_14 = *(arg1 + 8) + 0xa8
                rdx_5 = rcx_14[1]
                
                if (rcx_14[2] == rdx_5)
                    std::vector<uint64_t const& __ptr64,uint64_t,class std::allocator<uint64_t> >::_Emplace_reallocate<uint64_t const& __ptr64>(
                        rcx_14, rdx_5, &var_78)
                else
                    *rdx_5 = 2
                    rcx_14[1] += 4
        else
            var_78 = 0
            rcx_14 = *(arg1 + 8) + 0xa8
            rdx_5 = rcx_14[1]
            
            if (rcx_14[2] == rdx_5)
                std::vector<uint64_t const& __ptr64,uint64_t,class std::allocator<uint64_t> >::_Emplace_reallocate<uint64_t const& __ptr64>(
                    rcx_14, rdx_5, &var_78)
            else
                *rdx_5 = 0
                rcx_14[1] += 4
    else
        var_78 = 1
        rcx_14 = *(arg1 + 8) + 0xa8
        rdx_5 = rcx_14[1]
        
        if (rcx_14[2] == rdx_5)
            std::vector<uint64_t const& __ptr64,uint64_t,class std::allocator<uint64_t> >::_Emplace_reallocate<uint64_t const& __ptr64>(
                rcx_14, rdx_5, &var_78)
        else
            *rdx_5 = 1
            rcx_14[1] += 4
    
    if (rdi_1 u>= 0x10)
        char* rax_19 = rbx_1
        
        if (rdi_1 + 1 u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_19 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
    
    sub_14297bb00(&i_1)
    result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        arg2, &var_68)

void** rdi_3 = *(arg1 + 8) + 0x30

if (rdi_3 != arg2)
    sub_142986500(rdi_3)
    void* rbx_3 = *rdi_3
    char var_74
    *(rbx_3 + 8) = sub_142985280(rdi_3, *(*arg2 + 8), rbx_3, var_74)
    rdi_3[1] = arg2[1]
    int64_t* r8_9 = *rdi_3
    int64_t* rdx_16 = r8_9[1]
    
    if (*(rdx_16 + 0x19) != 0)
        *r8_9 = r8_9
        result = *rdi_3
        result[2] = result
    else
        int64_t* rcx_25 = *rdx_16
        
        if (*(rcx_25 + 0x19) == 0)
            int64_t* rax_24
            
            do
                rdx_16 = rcx_25
                rax_24 = *rcx_25
                rcx_25 = rax_24
            while (*(rax_24 + 0x19) == 0)
        
        *r8_9 = rdx_16
        void* rdx_17 = *rdi_3
        int64_t* result_1 = *(rdx_17 + 8)
        result = result_1[2]
        
        while (*(result + 0x19) == 0)
            result_1 = result
            result = result[2]
        
        *(rdx_17 + 0x10) = result_1

__security_check_cookie(rax_1 ^ &var_98)
return result
