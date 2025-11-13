// 函数: sub_1429a6210
// 地址: 0x1429a6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char rax_2

if (arg2 == 0)
    rax_2 = Concurrency::details::UMSSchedulingContext::OnPrimary(arg1)

uint64_t result

if (arg2 != 0 || rax_2 == 0)
    if (Concurrency::details::UMSSchedulingContext::OnPrimary(arg1) != 0
            && sub_1429a3540(sub_142983a40(arg1)) == 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "unsupported header type to get chunk offset table size")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    if (sub_1429a3660(sub_142983a40(arg1)) != 0)
        result = sub_1429bd4a0(arg1)
    else
        void* rax_9 = sub_142980a30(arg1)
        void* var_98
        __builtin_memset(&var_98, 0, 0x18)
        int64_t rax_10 = sub_1429a3ac0(arg1, &var_98)
        struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable** rax_12 =
            sub_14298bdf0(*sub_14297ea20(arg1), rax_10, arg1)
        int32_t rcx_11
        
        if (rax_12 == 0)
            rcx_11 = 1
        else
            struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable* rdx_2 = *rax_12
            rcx_11 = rdx_2->__offset(0x8).q(rax_12, rdx_2)
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(rax_9 + 0xc) - *(rax_9 + 4) + rcx_11)
        
        if (rax_12 != 0)
            struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable* r8_2 = *rax_12
            r8_2->__offset(0x0).q(rax_12, 1, r8_2)
        
        void* rcx_13 = var_98
        
        if (rcx_13 != 0)
            void* rax_19 = rcx_13
            int128_t var_90
            
            if (((var_90:8.q - rcx_13) & 0xfffffffffffffff8) u>= 0x1000)
                rcx_13 = *(rcx_13 - 8)
                
                if (rax_19 - rcx_13 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_13)
        
        result = zx.q(divs.dp.d(temp2_1:temp3_1, rcx_11))
else
    result = zx.q(*sub_14297e990(arg1))

__security_check_cookie(rax_1 ^ &var_b8)
return result
