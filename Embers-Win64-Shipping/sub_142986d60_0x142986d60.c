// 函数: sub_142986d60
// 地址: 0x142986d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c8 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0xf8)
struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_1b8 = 1
int64_t* rax_3 = sub_14297e970(*(arg1 + 8))
void* i_1
sub_14297bd10(rax_3, &i_1)
void* var_1e0
void* var_1d8
void var_1d0
int32_t exceptionObject

while (true)
    int64_t* rax_4 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rax_3, &var_1d8)
    void* i_3 = i_1
    
    if (i_3 == *rax_4)
        break
    
    sub_142984b70(arg2, &var_1e0, i_3 + 0x1c)
    int64_t* rax_5 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        arg2, &var_1d0)
    void* rcx_7 = var_1e0
    
    if (rcx_7 != *rax_5)
        void* i_4 = i_1
        void* var_1a8
        void var_198
        
        if (*(i_4 + 0x11c) != *(rcx_7 + 0x120))
            sub_1429779b0(&var_1a8, 3, 1)
            char* rax_23 = sub_142986aa0(arg1)
            char* rax_24 = sub_142981d20(&i_1)
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(sub_14058b120(&var_198, "Pixel type of ""), rax_24), 
                        "" channel of output file ""), 
                    rax_23), 
                "" is not compatible with the frame buffer's pixel type.")
            sub_142977aa0(&exceptionObject, &var_1a8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        if (*(i_4 + 0x120) != *(rcx_7 + 0x140) || *(i_4 + 0x124) != *(rcx_7 + 0x144))
            sub_1429779b0(&var_1a8, 3, 1)
            char* rax_29 = sub_142986aa0(arg1)
            char* rax_30 = sub_142981d20(&i_1)
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(
                            sub_14058b120(&var_198, "X and/or y subsampling factors of ""), 
                            rax_30), 
                        "" channel of output file ""), 
                    rax_29), 
                "" are not compatible with the frame buffer's subsampling factors.")
            sub_142977aa0(&exceptionObject, &var_1a8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
    
    sub_14297bb00(&i_1)

int128_t var_1f8
__builtin_memset(&var_1f8, 0, 0x18)
int64_t rsi = 0
sub_14297bd10(rax_3, &i_1)
int64_t* rax_9 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_3, &var_1e0)
void* i = i_1
int128_t* rdi = var_1f8:8.q

if (i != *rax_9)
    int64_t* rax_11
    
    do
        sub_142984b70(arg2, &var_1d8, i + 0x1c)
        int64_t* rax_10 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg2, &var_1d0)
        void* rcx_13 = var_1d8
        int64_t var_98_1
        int32_t var_88_1
        int32_t exceptionObject_1
        
        if (rcx_13 != *rax_10)
            exceptionObject_1 = *(rcx_13 + 0x120)
            int64_t var_a0_2 = *(rcx_13 + 0x128)
            var_98_1 = *(rcx_13 + 0x130)
            int64_t var_90_1 = *(rcx_13 + 0x138)
            var_88_1 = *(rcx_13 + 0x140)
            int32_t var_84_2 = *(rcx_13 + 0x144)
            char var_80_2 = 0
        else
            void* i_2 = i_1
            int32_t rdx_8 = *(i_2 + 0x124)
            int32_t rcx_14 = *(i_2 + 0x120)
            exceptionObject_1 = *(i_2 + 0x11c)
            int64_t var_a0_1
            __builtin_memset(&var_a0_1, 0, 0x18)
            var_88_1 = rcx_14
            int32_t var_84_1 = rdx_8
            char var_80_1 = 1
        
        exceptionObject = exceptionObject_1
        
        if (rsi == rdi)
            sub_142985320(&var_1f8, rdi, &exceptionObject)
            rdi = var_1f8:8.q
            int64_t var_1e8
            rsi = var_1e8
        else
            *rdi = exceptionObject.o
            rdi[1] = var_98_1.o
            rdi[2] = var_88_1.o
            rdi = &rdi[3]
            var_1f8:8.q = rdi
        
        sub_14297bb00(&i_1)
        rax_11 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1e0)
        i = i_1
    while (i != *rax_11)

int64_t* r15_1 = *(arg1 + 8) + 0x28

if (r15_1 != arg2)
    sub_142986500(r15_1)
    void* rbx_1 = *r15_1
    char var_208
    *(rbx_1 + 8) = sub_142985280(r15_1, *(*arg2 + 8), rbx_1, var_208)
    r15_1[1] = arg2[1]
    int64_t* r8_6 = *r15_1
    int64_t* rdx_14 = r8_6[1]
    
    if (*(rdx_14 + 0x19) != 0)
        *r8_6 = r8_6
        void* rax_16 = *r15_1
        *(rax_16 + 0x10) = rax_16
    else
        int64_t* rcx_20 = *rdx_14
        
        if (*(rcx_20 + 0x19) == 0)
            int64_t* rax_14
            
            do
                rdx_14 = rcx_20
                rax_14 = *rcx_20
                rcx_20 = rax_14
            while (*(rax_14 + 0x19) == 0)
        
        *r8_6 = rdx_14
        void* rdx_15 = *r15_1
        void* rcx_21 = *(rdx_15 + 8)
        void* rax_15 = *(rcx_21 + 0x10)
        
        while (*(rax_15 + 0x19) == 0)
            rcx_21 = rax_15
            rax_15 = *(rax_15 + 0x10)
        
        *(rdx_15 + 0x10) = rcx_21

int64_t* rcx_23 = *(arg1 + 8) + 0xa8
int128_t* rbx_2 = var_1f8.q

if (rcx_23 != &var_1f8)
    sub_142984ff0(rcx_23, rbx_2, rdi)

if (rbx_2 != 0)
    int128_t* rax_20 = rbx_2
    
    if ((rsi - rbx_2) s/ 0x30 * 0x30 u>= 0x1000)
        rbx_2 = *(rbx_2 - 8)
        
        if (rax_20 - rbx_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rbx_2)

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_228)
    return code_1

std::_Throw_C_error(code_1)
noreturn
