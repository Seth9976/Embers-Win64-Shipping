// 函数: sub_1429b6e00
// 地址: 0x1429b6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d8 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* r13 = arg2
void* r14 = arg1
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0x1d8)
struct _Mtx_internal_imp_t* mtx_1 = mtx
struct _Mtx_internal_imp_t* mtx_2 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_1b8 = 1
int64_t* rax_3 = sub_14297e970(*(r14 + 8) + 0x50)
void* var_238
sub_14297bd10(r13, &var_238)
int32_t* var_220
void* var_218
void var_1f8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

while (true)
    int64_t* rax_4 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        r13, &var_220)
    void* rcx_6 = var_238
    
    if (rcx_6 == *rax_4)
        break
    
    sub_14297bd70(rax_3, &var_218, rcx_6 + 0x20)
    int64_t* rax_5 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rax_3, &var_1f8)
    void* rcx_9 = var_218
    
    if (rcx_9 != *rax_5)
        void* rdx_4 = var_238
        
        if (*(rcx_9 + 0x120) != *(rdx_4 + 0x140) || *(rcx_9 + 0x124) != *(rdx_4 + 0x144))
            void* var_1a8
            sub_1429779b0(&var_1a8, 3, 1)
            char* rax_50 = sub_1429b5410(r14)
            char* rax_51 = sub_142981d20(&var_218)
            void var_198
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(
                            sub_14058b120(&var_198, "X and/or y subsampling factors of ""), 
                            rax_51), 
                        "" channel of input file ""), 
                    rax_50), 
                "" are not compatible with the frame buffer's subsampling factors.")
            sub_142977aa0(&exceptionObject, &var_1a8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
    
    sub_14297bb00(&var_238)

void* rax_8 = sub_1405d9250(r13)
int64_t rcx_12 = *(rax_8 + 8)

if (rcx_12 == 0)
    sub_14297d3f0(&exceptionObject, "Invalid base pointer, please set a proper sample count slice.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

*(*(r14 + 8) + 0x1a0) = rcx_12
*(*(r14 + 8) + 0x1a8) = *(rax_8 + 0x10)
*(*(r14 + 8) + 0x1ac) = *(rax_8 + 0x18)
int64_t i_4 = 0
void* var_210
__builtin_memset(&var_210, 0, 0x18)
void* i_5
sub_14297bd10(rax_3, &i_5)
sub_14297bd10(r13, &var_238)
int64_t rax_13 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    r13, &var_1f8)
int128_t var_208

if (var_238 != rax_13)
    int32_t** rdi_1 = var_208.q
    int64_t rcx_33
    
    do
        int64_t* rax_14 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_218)
        void* i = i_5
        
        if (i != *rax_14)
            int64_t* rax_16
            
            do
                void* rcx_19 = i + 0x1c
                void* r8_4 = var_238 + 0x20 - rcx_19
                uint32_t j
                uint32_t rdx_10
                
                do
                    rdx_10 = zx.d(*rcx_19)
                    j = zx.d(*(rcx_19 + r8_4))
                    
                    if (rdx_10 != j)
                        break
                    
                    rcx_19 += 1
                while (j != 0)
                
                if (rdx_10 - j s>= 0)
                    break
                
                int32_t* rax_15 = j_sub_140a82f30(0x48)
                var_220 = rax_15
                
                if (rax_15 == 0)
                    rax_15 = nullptr
                else
                    void* i_6 = i_5
                    int32_t r8_5 = *(i_6 + 0x124)
                    int32_t rdx_12 = *(i_6 + 0x120)
                    int32_t rcx_20 = *(i_6 + 0x11c)
                    *rax_15 = rcx_20
                    rax_15[1] = rcx_20
                    *(rax_15 + 8) = 0
                    __builtin_memset(&rax_15[6], 0, 0x18)
                    rax_15[0xc] = rdx_12
                    rax_15[0xd] = r8_5
                    rax_15[0xe].w = 0x100
                    *(rax_15 + 0x40) = 0
                
                var_220 = rax_15
                
                if (var_208:8.q == rdi_1)
                    sub_1429b42d0(&var_210, rdi_1, &var_220)
                    rdi_1 = var_208.q
                else
                    *rdi_1 = rax_15
                    rdi_1 = &rdi_1[1]
                    var_208.q = rdi_1
                
                sub_14297bb00(&i_5)
                rax_16 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    rax_3, &var_218)
                i = i_5
            while (i != *rax_16)
        
        mtx.b = 0
        void var_1d0
        int64_t* rax_17 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1d0)
        void* i_7 = i_5
        uint32_t i_1
        uint32_t rdx_16
        
        if (i_7 != *rax_17)
            void* rcx_25 = i_7 + 0x1c
            void* r8_9 = var_238 + 0x20 - rcx_25
            
            do
                rdx_16 = zx.d(*rcx_25)
                i_1 = zx.d(*(rcx_25 + r8_9))
                
                if (rdx_16 != i_1)
                    break
                
                rcx_25 += 1
            while (i_1 != 0)
        
        if (i_7 == *rax_17 || rdx_16 - i_1 s> 0)
            mtx.b = 1
        
        int32_t* rax_18 = j_sub_140a82f30(0x48)
        int32_t* r14_1 = rax_18
        var_220 = rax_18
        
        if (rax_18 == 0)
            r14_1 = nullptr
        else
            void* rcx_26 = var_238
            int32_t r13_1
            
            if (mtx.b == 0)
                r13_1 = *(i_5 + 0x11c)
            else
                r13_1 = *(rcx_26 + 0x120)
            
            uint128_t zmm0_1 = zx.o(*(rcx_26 + 0x148))
            int32_t rbx_1 = *(rcx_26 + 0x144)
            int32_t r11_1 = *(rcx_26 + 0x140)
            int64_t r10_1 = sx.q(*(rcx_26 + 0x158))
            int64_t r9_1 = *(rcx_26 + 0x138)
            int64_t r8_10 = *(rcx_26 + 0x130)
            int64_t rdx_18 = *(rcx_26 + 0x128)
            *r14_1 = *(rcx_26 + 0x120)
            r14_1[1] = r13_1
            *(r14_1 + 8) = rdx_18
            *(r14_1 + 0x18) = r8_10
            *(r14_1 + 0x20) = r9_1
            *(r14_1 + 0x28) = r10_1
            r14_1[0xc] = r11_1
            r14_1[0xd] = rbx_1
            r14_1[0xe].b = mtx.b
            *(r14_1 + 0x39) = 0
            *(r14_1 + 0x40) = zmm0_1.q
            r13 = arg2
        
        var_220 = r14_1
        
        if (var_208:8.q == rdi_1)
            sub_1429b42d0(&var_210, rdi_1, &var_220)
            rdi_1 = var_208.q
        else
            *rdi_1 = r14_1
            rdi_1 = &rdi_1[1]
            var_208.q = rdi_1
        
        void var_1c8
        int64_t rcx_29 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1c8)
        
        if (i_5 != rcx_29 && mtx.b == 0)
            sub_14297bb00(&i_5)
        
        sub_14297bb00(&var_238)
        rcx_33 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            r13, &var_1f8)
    while (var_238 != rcx_33)
    r14 = arg1
    mtx = mtx_1

int32_t i_2 = 0
void* rcx_34 = *(r14 + 8)
void* r9_2 = rcx_34

if (*(rcx_34 + 0x190) s> 0)
    char* rdx_22 = nullptr
    
    do
        rdx_22[*(rcx_34 + 0x198)] = 0
        i_2 += 1
        rdx_22 = &rdx_22[1]
        rcx_34 = *(r14 + 8)
        r9_2 = rcx_34
    while (i_2 s< *(rcx_34 + 0x190))

int64_t i_3 = 0

if ((*(rcx_34 + 0xf8) - *(rcx_34 + 0xf0)) s>> 3 != 0)
    void* rdx_23 = r9_2 + 0xf0
    
    do
        *(*rdx_23 + (i_3 << 3)) = 0
        i_3 += 1
        rcx_34 = *(r14 + 8)
        rdx_23 = rcx_34 + 0xf0
    while (i_3 u< (*(rdx_23 + 8) - *rdx_23) s>> 3)

if (rcx_34 + 0x70 != r13)
    sub_1429b4fd0(rcx_34 + 0x70)
    void* rbx_2 = *(rcx_34 + 0x70)
    char var_228
    *(rbx_2 + 8) = sub_1429b4230(rcx_34 + 0x70, *(*r13 + 8), rbx_2, var_228)
    *(rcx_34 + 0x78) = r13[1]
    int64_t* r8_13 = *(rcx_34 + 0x70)
    int64_t* rdx_26 = r8_13[1]
    
    if (*(rdx_26 + 0x19) != 0)
        *r8_13 = r8_13
        void* rax_35 = *(rcx_34 + 0x70)
        *(rax_35 + 0x10) = rax_35
    else
        int64_t* rcx_37 = *rdx_26
        
        if (*(rcx_37 + 0x19) == 0)
            int64_t* rax_33
            
            do
                rdx_26 = rcx_37
                rax_33 = *rcx_37
                rcx_37 = rax_33
            while (*(rax_33 + 0x19) == 0)
        
        *r8_13 = rdx_26
        void* rdx_27 = *(rcx_34 + 0x70)
        void* rcx_38 = *(rdx_27 + 8)
        void* rax_34 = *(rcx_38 + 0x10)
        
        while (*(rax_34 + 0x19) == 0)
            rcx_38 = rax_34
            rax_34 = *(rax_34 + 0x10)
        
        *(rdx_27 + 0x10) = rcx_38

*(rcx_34 + 0x80) = *(r13 + 0x10)
*(rcx_34 + 0x90) = *(r13 + 0x20)
*(rcx_34 + 0xa0) = *(r13 + 0x30)
*(rcx_34 + 0xb0) = r13[8]
void* rcx_39 = *(r14 + 8)

if ((*(rcx_39 + 0x128) - *(rcx_39 + 0x120)) s>> 3 != 0)
    do
        j_sub_140a74f90(*(*(rcx_39 + 0x120) + (i_4 << 3)))
        i_4 += 1
        rcx_39 = *(r14 + 8)
    while (i_4 u< (*(rcx_39 + 0x128) - *(rcx_39 + 0x120)) s>> 3)

sub_1429b4bc0(rcx_39 + 0x120, &var_210)
*(*(r14 + 8) + 0x1b0) = 1
void* rcx_42 = var_210

if (rcx_42 != 0)
    void* rax_47 = rcx_42
    
    if ((var_208:8.q - rcx_42) s>> 3 << 3 u>= 0x1000)
        rcx_42 = *(rcx_42 - 8)
        
        if (rax_47 - rcx_42 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_42)

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_258)
    return code_1

std::_Throw_C_error(code_1)
noreturn
