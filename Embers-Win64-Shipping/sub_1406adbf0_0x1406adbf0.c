// 函数: sub_1406adbf0
// 地址: 0x1406adbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rdi = 0
int32_t var_f8 = 0

if (arg1 != 0 && *arg1 == 0)
    void*** rax_2 = j_sub_140a82f30(0x20)
    void*** rsi_1 = rax_2
    class std::_Locinfo var_f0
    int128_t var_68
    int128_t var_58
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        void* rcx = *(arg2 + 8)
        char __return
        int64_t var_70
        char var_48
        int64_t var_30
        char* rax_3
        
        if (rcx == 0)
            int64_t var_38_1 = 0
            rax_3 = &var_48
            var_48 = 0
            rdi = 0xb
            var_30 = 0xf
        else
            void* rdx = *(rcx + 0x28)
            
            if (rdx == 0)
                rdx = rcx + 0x30
            
            int64_t var_78_1 = 0
            int64_t r8_1 = -1
            var_70 = 0xf
            __return = 0
            
            do
                r8_1 += 1
            while (*(rdx + r8_1) != 0)
            
            sub_14058ad40(&__return, rdx, r8_1)
            rax_3 = &__return
            rdi = 7
        
        int128_t zmm0_1 = *rax_3
        int128_t zmm1 = *(rax_3 + 0x10)
        *(rax_3 + 0x10) = 0
        *(rax_3 + 0x18) = 0xf
        *rax_3 = 0
        var_68 = zmm0_1
        var_58 = zmm1
        
        if ((rdi.b & 8) != 0)
            rdi &= 0xfffffff7
            
            if (var_30 u>= 0x10)
                void* rcx_2 = var_48.q
                void* rax_4 = rcx_2
                
                if (var_30 + 1 u>= 0x1000)
                    rcx_2 = *(rcx_2 - 8)
                
                if (var_30 + 1 u>= 0x1000 && rax_4 - rcx_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(rcx_2)
        
        if ((rdi.b & 4) != 0)
            rdi &= 0xfffffffb
            
            if (var_70 u>= 0x10)
                void* rcx_3 = __return.q
                void* rax_7 = rcx_3
                
                if (var_70 + 1 u>= 0x1000)
                    rcx_3 = *(rcx_3 - 8)
                
                if (var_70 + 1 u>= 0x1000 && rax_7 - rcx_3 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(rcx_3)
        
        int128_t* _Pch = &var_68
        
        if (var_58:8.q u>= 0x10)
            _Pch = var_68.q
        
        class std::_Locinfo* rax_10 = std::_Locinfo::_Locinfo(&var_f0, _Pch)
        std::locale::facet::facet(rsi_1, 0)
        *rsi_1 = &data_142d8b460
        struct _Collvec* rax_11 = std::_Locinfo::_Getcoll(rax_10, &__return)
        zmm0_1.d = rax_11->_Page
        zmm0_1:8.q = rax_11->_LocaleName
        *(rsi_1 + 0x10) = zmm0_1
    
    *arg1 = rsi_1
    
    if ((rdi.b & 2) != 0)
        rdi &= 0xfffffffd
        std::_Locinfo::~_Locinfo(&var_f0)
    
    if ((rdi.b & 1) != 0)
        int64_t rdx_6 = var_58:8.q
        
        if (rdx_6 u>= 0x10)
            void* rcx_8 = var_68.q
            void* rax_12 = rcx_8
            
            if (rdx_6 + 1 u>= 0x1000)
                rcx_8 = *(rcx_8 - 8)
            
            if (rdx_6 + 1 u>= 0x1000 && rax_12 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_118)
return 1
