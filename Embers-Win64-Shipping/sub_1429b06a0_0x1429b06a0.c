// 函数: sub_1429b06a0
// 地址: 0x1429b06a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rsi = nullptr
int32_t var_158 = 0
int32_t var_160 = 0
void* rdx = *(arg1 + 8)
sub_1429a67e0(arg1, *(rdx + 0x50), rdx + 0x60)
int32_t r14 = *(*(arg1 + 8) + 0x60)
uint8_t rdi_1 = (r14 u>> 0xc).b & 1
uint8_t r14_1 = (r14 u>> 9).b & 1
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (r14_1 != 0 && rdi_1 != 0)
    sub_14297ab20(&exceptionObject, "Multipart files cannot have the tiled bit set")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

var_160.q = 0
int128_t var_148
int128_t zmm6 = sub_14297d4e0(&var_148, 0x40, 0x40, 0x3f800000, &var_160, 0x3f800000, 0, 3)
void* rdx_2 = *(arg1 + 8)
sub_142981de0(&var_148, *(rdx_2 + 0x50), rdx_2 + 0x60)

if (sub_1405e8c00(&var_148) != 0)
label_1429b0847:
    sub_14297d7d0(&var_148)
else
    while (true)
        void* rbx_1 = *(arg1 + 8)
        int64_t* rax_4 = *(rbx_1 + 0xa0)
        
        if (*(rbx_1 + 0xa8) == rax_4)
            sub_1429ae4d0(rbx_1 + 0x98, rax_4, &var_148)
        else
            sub_14297d420(rax_4, &var_148)
            *(rbx_1 + 0xa0) += 0x18
        
        sub_14297d7d0(&var_148)
        
        if (rdi_1 == 0)
            break
        
        var_160.q = 0
        zmm6 = sub_14297d4e0(&var_148, 0x40, 0x40, zmm6, &var_160, zmm6.d, 0, 3)
        void* rdx_6 = *(arg1 + 8)
        sub_142981de0(&var_148, *(rdx_6 + 0x50), rdx_6 + 0x60)
        
        if (sub_1405e8c00(&var_148) != 0)
            goto label_1429b0847

int64_t i = 0
void* rbx_2 = *(arg1 + 8)
int64_t rax_6
int64_t rdx_8
rdx_8:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
int64_t rdx_9 = rdx_8 s>> 2

if (rdx_9 != neg.q(rdx_9 u>> 0x3f))
    int64_t rdx_14
    
    do
        char* rdx_11
        
        if (Concurrency::details::UMSSchedulingContext::OnPrimary(*(rbx_2 + 0x98) + rsi) == 0)
            if (rdi_1 != 0)
                sub_14297d3f0(&exceptionObject, 
                    "Every header in a multipart file should have a type")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            rdx_11 = &data_143cc6d80
            
            if (r14_1 != 0)
                rdx_11 = &data_143cc6da0
            
            sub_142983430(*(*(arg1 + 8) + 0x98) + rsi, rdx_11)
        else if (rdi_1 == 0)
            void* rcx_15 = *(arg1 + 8)
            
            if (((*(rcx_15 + 0x60) u>> 0xb).b & 1) == 0)
                rdx_11 = &data_143cc6d80
                
                if (r14_1 != 0)
                    rdx_11 = &data_143cc6da0
                
                sub_142983430(*(rcx_15 + 0x98) + rsi, rdx_11)
        
        if (Concurrency::details::UMSSchedulingContext::OnPrimary(*(*(arg1 + 8) + 0x98) + rsi) == 0
                && rdi_1 != 0)
            sub_14297d3f0(&exceptionObject, "Every header in a multipart file should have a name")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        char rdx_12
        
        if (sub_1429a3660(sub_142983a40(*(*(arg1 + 8) + 0x98) + rsi)) == 0)
            rdx_12 = 0
        else
            rdx_12 = 1
        
        sub_142982460(*(*(arg1 + 8) + 0x98) + rsi, rdx_12, rdi_1)
        i += 1
        rsi += 0x18
        rbx_2 = *(arg1 + 8)
        int64_t rax_19
        int64_t rdx_13
        rdx_13:rax_19 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
        rdx_14 = rdx_13 s>> 2
    while (i u< rdx_14 + (rdx_14 u>> 0x3f))
    rsi = nullptr

int32_t* var_188
int64_t* var_150

if (rdi_1 != 0)
    int128_t var_128 = zx.o(0)
    int64_t* rax_22 = sub_1429af190()
    int64_t* rbx_3 = rax_22
    var_128.q = rax_22
    var_160.q = 0
    void* r8_5 = *(arg1 + 8)
    int64_t rax_23
    int64_t rdx_16
    rdx_16:rax_23 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r8_5 + 0xa0) - *(r8_5 + 0x98))
    int64_t rdx_17 = rdx_16 s>> 2
    char var_108
    void* var_88
    
    if (rdx_17 != neg.q(rdx_17 u>> 0x3f))
        var_150 = nullptr
        int64_t rdx_23
        int64_t i_1
        
        do
            void** rax_26 = sub_142981d30(*(r8_5 + 0x98) + rsi)
            void** r13_1 = var_128.q
            void** r14_2 = r13_1
            void** rsi_1 = r13_1[1]
            
            if (*(rsi_1 + 0x19) != 0)
                r14_2 = r13_1
            else
                do
                    if ((sub_140611000(&rsi_1[4], rax_26) u>> 0x1f).b == 0)
                        r14_2 = rsi_1
                        rsi_1 = *rsi_1
                    else
                        rsi_1 = rsi_1[2]
                while (*(rsi_1 + 0x19) == 0)
                
                if (r14_2 == r13_1)
                    r14_2 = r13_1
                else if ((sub_140611000(rax_26, &r14_2[4]) u>> 0x1f).b != 0)
                    r14_2 = r13_1
            
            if (r14_2 != rbx_3)
                sub_1429aeba0(&exceptionObject, 
                    sub_14281d2a0(&var_88, 
                        sub_140895a80(&var_108, "Header name ", 
                            sub_142981d30(pdb_internal::Array<struct DBI1::ModNames>::operator[](
                                *(arg1 + 8) + 0x98, var_160.q))), 
                        " is not a unique name."))
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            int64_t* rsi_2 = var_150
            char var_167
            var_188.b = var_167
            sub_14297b910(&var_128, &var_148, 0, sub_142981d30(*(*(arg1 + 8) + 0x98) + rsi_2), 
                var_188.b)
            i_1 = var_160.q + 1
            var_160.q = i_1
            rsi = &rsi_2[3]
            var_150 = rsi
            r8_5 = *(arg1 + 8)
            int64_t rax_33
            int64_t rdx_22
            rdx_22:rax_33 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r8_5 + 0xa0) - *(r8_5 + 0x98))
            rdx_23 = rdx_22 s>> 2
            rbx_3 = var_128.q
        while (i_1 u< rdx_23 + (rdx_23 u>> 0x3f))
        rsi = nullptr
    
    sub_1429b0460(&var_128, &var_150, *rbx_3, rbx_3)
    j_sub_140a74f90(var_128.q)
    int64_t i_2 = 1
    rbx_2 = *(arg1 + 8)
    int64_t rax_36
    int64_t rdx_27
    rdx_27:rax_36 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
    int64_t rdx_28 = rdx_27 s>> 2
    
    if (rdx_28 + (rdx_28 u>> 0x3f) u> 1)
        int64_t rdi_3 = 0x18
        int64_t rdx_36
        
        do
            __builtin_memset(&var_148, 0, 0x18)
            int64_t* rdx_30 = *(rbx_2 + 0x98)
            
            if (sub_1429af2e0(rbx_2, rdx_30, rdx_30 + rdi_3, &var_148) != 0)
                int64_t var_f8 = 0
                int64_t var_f0 = 0xf
                var_108 = 0
                int64_t r14_3 = 0
                void* rdi_4 = var_148.q
                int64_t r12_3 = (var_148:8.q - rdi_4) s>> 5
                
                if (r12_3 != 0)
                    int64_t* rdi_5 = rdi_4 + 0x10
                    int32_t rax_46 = var_158
                    
                    do
                        int64_t var_118_1 = 0
                        int64_t var_110_1 = 0xf
                        var_128.b = 0
                        int32_t rax_47 = rax_46 | 1
                        var_160 = rax_47
                        sub_14058c000(&var_128, *rdi_5 + 1)
                        int64_t rcx_47 = var_118_1
                        
                        if (var_110_1 - rcx_47 u< 1)
                            sub_1409093f0(&var_128, 1, 0, &(*U""\tv 0")[3], 1)
                        else
                            var_118_1 = rcx_47 + 1
                            int128_t* rbx_5 = &var_128
                            
                            if (var_110_1 u>= 0x10)
                                rbx_5 = var_128.q
                            
                            void* rbx_6 = rbx_5 + rcx_47
                            memmove(rbx_6, &(*U""\tv 0")[3], 1)
                            *(rbx_6 + 1) = 0
                        
                        void* r9_5 = &rdi_5[-2]
                        
                        if (rdi_5[1] u>= 0x10)
                            r9_5 = *r9_5
                        
                        int64_t rsi_3 = *rdi_5
                        int64_t rcx_50 = var_118_1
                        
                        if (rsi_3 u> var_110_1 - rcx_50)
                            sub_1409093f0(&var_128, rsi_3, 0, r9_5, rsi_3)
                        else
                            var_118_1 = rsi_3 + rcx_50
                            int128_t* rbx_7 = &var_128
                            
                            if (var_110_1 u>= 0x10)
                                rbx_7 = var_128.q
                            
                            void* rbx_8 = rbx_7 + rcx_50
                            memmove(rbx_8, r9_5, rsi_3.d)
                            *(rbx_8 + rsi_3) = 0
                        
                        int128_t* r9_6 = &var_128
                        
                        if (var_110_1 u>= 0x10)
                            r9_6 = var_128.q
                        
                        int64_t rcx_53 = var_f8
                        
                        if (var_118_1 u> var_f0 - rcx_53)
                            sub_1409093f0(&var_108, var_118_1, 0, r9_6, var_118_1)
                        else
                            var_f8 = rcx_53 + var_118_1
                            char* rbx_9 = &var_108
                            
                            if (var_f0 u>= 0x10)
                                rbx_9 = var_108.q
                            
                            void* rbx_10 = &rbx_9[rcx_53]
                            memmove(rbx_10, r9_6, var_118_1.d)
                            *(rbx_10 + var_118_1) = 0
                        
                        rax_46 = rax_47 & 0xfffffffe
                        
                        if (var_110_1 u>= 0x10)
                            void* rcx_56 = var_128.q
                            void* rax_58 = rcx_56
                            
                            if (var_110_1 + 1 u>= 0x1000)
                                rcx_56 = *(rcx_56 - 8)
                                
                                if (rax_58 - rcx_56 - 8 u> 0x1f)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                            
                            j_sub_140a74f90(rcx_56)
                        
                        r14_3 += 1
                        rdi_5 = &rdi_5[4]
                    while (r14_3 u< r12_3)
                
                void var_68
                sub_1429aeba0(&exceptionObject, 
                    sub_14281d238(&var_68, 
                        sub_14281d2a0(&var_128, 
                            sub_140895a80(&var_88, "Header name ", 
                                sub_142981d30(
                                    pdb_internal::Array<struct DBI1::ModNames>::operator[](
                                    *(arg1 + 8) + 0x98, i_2))), 
                            " has non-conforming shared attributes: "), 
                        &var_108))
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            int64_t* rbx_4 = var_148.q
            
            if (rbx_4 != 0)
                sub_1409091b0(rbx_4, var_148:8.q)
                int64_t* rax_40 = rbx_4
                int64_t var_138
                
                if (((var_138 - rbx_4) & 0xffffffffffffffe0) u>= 0x1000)
                    rbx_4 = rbx_4[-1]
                    
                    if (rax_40 - rbx_4 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rbx_4)
            
            i_2 += 1
            rdi_3 += 0x18
            rbx_2 = *(arg1 + 8)
            int64_t rax_43
            int64_t rdx_35
            rdx_35:rax_43 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
            rdx_36 = rdx_35 s>> 2
        while (i_2 u< rdx_36 + (rdx_36 u>> 0x3f))

uint64_t i_3 = 0
int64_t rax_61
int64_t rdx_49
rdx_49:rax_61 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
int64_t rdx_50 = rdx_49 s>> 2

if (rdx_50 != neg.q(rdx_50 u>> 0x3f))
    int64_t rdx_55
    
    do
        int64_t* rax_64 = j_sub_140a82f30(0x50)
        var_160.q = rax_64
        
        if (rax_64 != 0)
            void* rdx_52 = *(arg1 + 8)
            var_188.d = *(rdx_52 + 0x80)
            rax_64 = sub_1429beeb0(rax_64, rdx_52, *(rdx_52 + 0x98) + rsi, i_3.d, var_188.d, 
                *(rdx_52 + 0x60))
        
        var_150 = rax_64
        int64_t* rcx_63 = *(arg1 + 8) + 0x68
        int64_t** rdx_53 = rcx_63[1]
        
        if (rcx_63[2] == rdx_53)
            sub_1427c6dc0(rcx_63, rdx_53, &var_150)
        else
            *rdx_53 = rax_64
            rcx_63[1] += 8
        
        i_3 += 1
        rsi += 0x18
        rbx_2 = *(arg1 + 8)
        int64_t rax_65
        int64_t rdx_54
        rdx_54:rax_65 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbx_2 + 0xa0) - *(rbx_2 + 0x98))
        rdx_55 = rdx_54 s>> 2
    while (i_3 u< rdx_55 + (rdx_55 u>> 0x3f))
    rsi = nullptr

char rax_68 = *(rbx_2 + 0x84)
i_3.b = 0
char i_5 = 0
int64_t rcx_66 = *(rbx_2 + 0x68)
int64_t result = (*(rbx_2 + 0x70) - rcx_66) s>> 3

if (result != 0)
    do
        int32_t i_7 = sub_1429a6210(*(rcx_66 + (rsi << 3)), 0)
        int64_t i_8 = sx.q(i_7)
        sub_142985580(*(*(rbx_2 + 0x68) + (rsi << 3)) + 0x30, i_8)
        
        if (i_7 s> 0)
            int64_t rdi_6 = 0
            uint64_t i_6 = zx.q(i_7)
            uint64_t i_4
            
            do
                sub_14297d090(*(rbx_2 + 0x50), *(*(*(rbx_2 + 0x68) + (rsi << 3)) + 0x30) + rdi_6)
                rdi_6 += 8
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
            i_3 = zx.q(i_5)
        
        *(*(*(rbx_2 + 0x68) + (rsi << 3)) + 0x48) = 1
        int64_t rcx_74 = 0
        
        if (i_7 s> 0)
            void* rdx_60 = *(*(rbx_2 + 0x68) + (rsi << 3))
            int64_t* rax_74 = *(rdx_60 + 0x30)
            
            do
                if (*rax_74 u<= 0)
                    i_3.b = 1
                    i_5 = 1
                    *(rdx_60 + 0x48) = 0
                    break
                
                rcx_74 += 1
                rax_74 = &rax_74[1]
            while (rcx_74 s< i_8)
        
        rsi += 1
        rcx_66 = *(rbx_2 + 0x68)
        result = (*(rbx_2 + 0x70) - rcx_66) s>> 3
    while (rsi u< result)
    
    if (i_3.b != 0 && rax_68 != 0)
        result = sub_1429af6d0(rbx_2, *(rbx_2 + 0x50), rbx_2 + 0x68)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
