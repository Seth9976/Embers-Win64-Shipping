// 函数: sub_142988810
// 地址: 0x142988810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_180 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rcx = *(arg1 + 8)
uint64_t result
void* var_178
void var_168
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
struct Imf_2_3::CompositeDeepScanLine::VTable** rdi
struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** rdi_2

if (*(rcx + 0xc8) != 0)
    if (Concurrency::details::UMSSchedulingContext::OnPrimary(rcx + 0x50) == 0)
    label_142988bbe:
        
        if (sub_1429a3660(sub_142983a40(*(arg1 + 8) + 0x50)) == 0)
            if (Concurrency::details::UMSSchedulingContext::OnPrimary(*(arg1 + 8) + 0x50) != 0)
                int64_t* buffer1_7 = sub_142983a40(*(arg1 + 8) + 0x50)
                int64_t* buffer2_3 = &data_143b86a08
                
                if (data_143b86a20 u>= 0x10)
                    buffer2_3 = data_143b86a08
                
                int64_t* buffer1_3 = buffer1_7
                
                if (buffer1_7[3] u>= 0x10)
                    buffer1_3 = *buffer1_7
                
                uint64_t count_3 = buffer1_7[2]
                int32_t rax_45
                
                if (count_3 == data_143b86a18)
                    rax_45 = memcmp(buffer1_3, buffer2_3, count_3)
                
                if (count_3 != data_143b86a18 || rax_45 != 0)
                    sub_1429779b0(&var_178, 3, 1)
                    int64_t* rax_48 = sub_142983a40(*(arg1 + 8) + 0x50)
                    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(
                        sub_14058b120(&var_168, "InputFile cannot handle parts of type "), rax_48)
                    sub_142977aa0(&exceptionObject, &var_178)
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
            
            struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** rax_46 =
                j_sub_140a82f30(0x18)
            struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** var_188_7 =
                rax_46
            
            if (rax_46 == 0)
                rdi_2 = nullptr
            else
                rdi_2 = sub_1429a8560(rax_46, *(*(arg1 + 8) + 0xc8))
            
            result = *(arg1 + 8)
            *(result + 0x78) = rdi_2
        else
            *(*(arg1 + 8) + 0x6c) = 1
            *(*(arg1 + 8) + 0x88) = *sub_1429812f0(*(arg1 + 8) + 0x50)
            void* rax_40 = sub_142980a30(*(arg1 + 8) + 0x50)
            *(*(arg1 + 8) + 0x8c) = *(rax_40 + 4)
            *(*(arg1 + 8) + 0x90) = *(rax_40 + 0xc)
            struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** rax_42 =
                j_sub_140a82f30(0x10)
            struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** var_188_6 = rax_42
            struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** rdi_3
            
            if (rax_42 == 0)
                rdi_3 = nullptr
            else
                rdi_3 = sub_1429ac2d0(rax_42, *(*(arg1 + 8) + 0xc8))
            
            result = *(arg1 + 8)
            *(result + 0x70) = rdi_3
    else
        int64_t* buffer1_6 = sub_142983a40(*(arg1 + 8) + 0x50)
        int64_t* buffer2_2 = &data_143b86a48
        
        if (data_143b86a60 u>= 0x10)
            buffer2_2 = data_143b86a48
        
        int64_t* buffer1_2 = buffer1_6
        
        if (buffer1_6[3] u>= 0x10)
            buffer1_2 = *buffer1_6
        
        uint64_t count_2 = buffer1_6[2]
        
        if (count_2 != data_143b86a58)
            goto label_142988bbe
        
        if (memcmp(buffer1_2, buffer2_2, count_2) != 0)
            goto label_142988bbe
        
        *(*(arg1 + 8) + 0x6c) = 0
        void* rax_27 = sub_142980a30(*(arg1 + 8) + 0x50)
        *(*(arg1 + 8) + 0x8c) = *(rax_27 + 4)
        *(*(arg1 + 8) + 0x90) = *(rax_27 + 0xc)
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** rax_29 =
            j_sub_140a82f30(0x10)
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** var_188_4 =
            rax_29
        rdi = nullptr
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** rcx_35
        
        if (rax_29 == 0)
            rcx_35 = nullptr
        else
            rcx_35 = sub_1429b4620(rax_29, *(*(arg1 + 8) + 0xc8))
        
        *(*(arg1 + 8) + 0x80) = rcx_35
        struct Imf_2_3::CompositeDeepScanLine::VTable** rax_32 = j_sub_140a82f30(0x10)
        struct Imf_2_3::CompositeDeepScanLine::VTable** var_188_5 = rax_32
        
        if (rax_32 != 0)
            rdi = sub_1429b2100(rax_32)
        
    label_142988b8b:
        *(*(arg1 + 8) + 0xb0) = rdi
        void* rcx_37 = *(arg1 + 8)
        result = sub_1429b27e0(*(rcx_37 + 0xb0), *(rcx_37 + 0x80))
else
    if (Concurrency::details::UMSSchedulingContext::OnPrimary(rcx + 0x50) != 0)
        int64_t* buffer1_4 = sub_142983a40(*(arg1 + 8) + 0x50)
        int64_t* buffer2 = &data_143b86a48
        
        if (data_143b86a60 u>= 0x10)
            buffer2 = data_143b86a48
        
        int64_t* buffer1 = buffer1_4
        
        if (buffer1_4[3] u>= 0x10)
            buffer1 = *buffer1_4
        
        uint64_t count = buffer1_4[2]
        
        if (count != data_143b86a58)
            goto label_142988957
        
        if (memcmp(buffer1, buffer2, count) != 0)
            goto label_142988957
        
        *(*(arg1 + 8) + 0x6c) = 0
        void* rax_5 = sub_142980a30(*(arg1 + 8) + 0x50)
        *(*(arg1 + 8) + 0x8c) = *(rax_5 + 4)
        *(*(arg1 + 8) + 0x90) = *(rax_5 + 0xc)
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** rax_7 =
            j_sub_140a82f30(0x10)
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** var_188 = rax_7
        rdi = nullptr
        struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** rcx_10
        
        if (rax_7 == 0)
            rcx_10 = nullptr
        else
            void* r9_1 = *(arg1 + 8)
            rcx_10 = sub_1429b46f0(rax_7, r9_1 + 0x50, *(*(r9_1 + 0xe0) + 0x50), *(r9_1 + 0x68), 
                *(r9_1 + 0xc0))
        
        *(*(arg1 + 8) + 0x80) = rcx_10
        struct Imf_2_3::CompositeDeepScanLine::VTable** rax_10 = j_sub_140a82f30(0x10)
        struct Imf_2_3::CompositeDeepScanLine::VTable** var_188_1 = rax_10
        
        if (rax_10 != 0)
            rdi = sub_1429b2100(rax_10)
        
        goto label_142988b8b
    
label_142988957:
    void* rcx_12 = *(arg1 + 8)
    
    if (((*(rcx_12 + 0x68) u>> 9).b & 1) == 0)
        if (Concurrency::details::UMSSchedulingContext::OnPrimary(rcx_12 + 0x50) != 0)
            int64_t* buffer1_5 = sub_142983a40(*(arg1 + 8) + 0x50)
            int64_t* buffer2_1 = &data_143b86a08
            
            if (data_143b86a20 u>= 0x10)
                buffer2_1 = data_143b86a08
            
            int64_t* buffer1_1 = buffer1_5
            
            if (buffer1_5[3] u>= 0x10)
                buffer1_1 = *buffer1_5
            
            uint64_t count_1 = buffer1_5[2]
            int32_t rax_21
            
            if (count_1 == data_143b86a18)
                rax_21 = memcmp(buffer1_1, buffer2_1, count_1)
            
            if (count_1 != data_143b86a18 || rax_21 != 0)
                sub_1429779b0(&var_178, 3, 1)
                int64_t* rax_50 = sub_142983a40(*(arg1 + 8) + 0x50)
                std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(
                    sub_14058b120(&var_168, "InputFile cannot handle parts of type "), rax_50)
                sub_142977aa0(&exceptionObject, &var_178)
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
        
        struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** rax_22 =
            j_sub_140a82f30(0x18)
        struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** var_188_3 = rax_22
        
        if (rax_22 == 0)
            rdi_2 = nullptr
        else
            void* rcx_25 = *(arg1 + 8)
            rdi_2 =
                sub_1429a86c0(rax_22, rcx_25 + 0x50, *(*(rcx_25 + 0xe0) + 0x50), *(rcx_25 + 0xc0))
        
        result = *(arg1 + 8)
        *(result + 0x78) = rdi_2
    else
        *(rcx_12 + 0x6c) = 1
        *(*(arg1 + 8) + 0x88) = *sub_1429812f0(*(arg1 + 8) + 0x50)
        void* rax_16 = sub_142980a30(*(arg1 + 8) + 0x50)
        *(*(arg1 + 8) + 0x8c) = *(rax_16 + 4)
        *(*(arg1 + 8) + 0x90) = *(rax_16 + 0xc)
        struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** rax_18 =
            j_sub_140a82f30(0x10)
        struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** var_188_2 = rax_18
        struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** rdi_1
        
        if (rax_18 == 0)
            rdi_1 = nullptr
        else
            void* r9_3 = *(arg1 + 8)
            rdi_1 = sub_1429ac180(rax_18, r9_3 + 0x50, *(*(r9_3 + 0xe0) + 0x50), *(r9_3 + 0x68), 
                *(r9_3 + 0xc0))
        
        result = *(arg1 + 8)
        *(result + 0x70) = rdi_1
__security_check_cookie(rax_1 ^ &var_1b8)
return result
