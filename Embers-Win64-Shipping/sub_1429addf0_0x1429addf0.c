// 函数: sub_1429addf0
// 地址: 0x1429addf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d8 = -2
void var_248
int64_t rax_1 = __security_cookie ^ &var_248
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0x158)
struct _Mtx_internal_imp_t* mtx_1 = mtx
struct _Mtx_internal_imp_t* mtx_2 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_1c0 = 1
int64_t* rax_3 = sub_14297e970(*(arg1 + 8) + 0x50)
void* var_220
sub_14297bd10(arg2, &var_220)
void* var_1f8
void var_1f0
void var_1e0
int32_t exceptionObject

while (true)
    int64_t* rax_4 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        arg2, &var_1f0)
    void* rcx_6 = var_220
    
    if (rcx_6 == *rax_4)
        break
    
    sub_14297bd70(rax_3, &var_1f8, rcx_6 + 0x20)
    int64_t* rax_5 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rax_3, &var_1e0)
    void* rcx_9 = var_1f8
    
    if (rcx_9 != *rax_5)
        void* rdx_4 = var_220
        
        if (*(rcx_9 + 0x120) != *(rdx_4 + 0x140) || *(rcx_9 + 0x124) != *(rdx_4 + 0x144))
            void* var_1b8
            sub_1429779b0(&var_1b8, 3, 1)
            char* rax_31 = sub_1429accb0(arg1)
            char* rax_32 = sub_142981d20(&var_1f8)
            void var_1a8
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(
                            sub_14058b120(&var_1a8, "X and/or y subsampling factors of ""), 
                            rax_32), 
                        "" channel of input file ""), 
                    rax_31), 
                "" are not compatible with the frame buffer's subsampling factors.")
            sub_142977aa0(&exceptionObject, &var_1b8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
    
    sub_14297bb00(&var_220)

int128_t var_210
__builtin_memset(&var_210, 0, 0x18)
int64_t rsi = 0
void* i_3
sub_14297bd10(rax_3, &i_3)
sub_14297bd10(arg2, &var_220)
int64_t rax_9 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg2, &var_1f8)
int128_t* rdi = var_210:8.q
int64_t var_200

if (var_220 != rax_9)
    int64_t rcx_26
    
    do
        int64_t* rax_10 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1f0)
        void* i = i_3
        int16_t var_98
        int64_t var_88
        
        if (i != *rax_10)
            int64_t* rax_12
            
            do
                void* rax_11 = i + 0x1c
                uint32_t j
                uint32_t rdx_9
                
                do
                    rdx_9 = zx.d(*rax_11)
                    j = zx.d(*(rax_11 + var_220 + 0x20 - (i + 0x1c)))
                    
                    if (rdx_9 != j)
                        break
                    
                    rax_11 += 1
                while (j != 0)
                
                if (rdx_9 - j s>= 0)
                    break
                
                int32_t exceptionObject_1 = *(i + 0x11c)
                exceptionObject = exceptionObject_1
                int32_t exceptionObject_3 = exceptionObject_1
                int64_t var_b0_1
                __builtin_memset(&var_b0_1, 0, 0x18)
                var_98 = 0x100
                int64_t var_90_1 = (zx.o(0)).q
                var_88 = 0
                
                if (rsi == rdi)
                    sub_1429a6e80(&var_210, rdi, &exceptionObject)
                    rsi = var_200
                    rdi = var_210:8.q
                else
                    *rdi = exceptionObject.o
                    int64_t var_a8_1
                    rdi[1] = var_a8_1.o
                    rdi[2] = var_98.o
                    rdi[3].q = var_88
                    rdi += 0x38
                    var_210:8.q = rdi
                
                sub_14297bb00(&i_3)
                rax_12 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    rax_3, &var_1f0)
                i = i_3
            while (i != *rax_12)
        
        char rbx_1 = 0
        int64_t* rax_13 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1e0)
        void* rcx_19 = var_220
        void* i_4 = i_3
        uint32_t i_1
        uint32_t r9_2
        
        if (i_4 != *rax_13)
            void* rax_14 = i_4 + 0x1c
            int64_t r10_2 = rcx_19 + 0x20 - rax_14
            
            do
                r9_2 = zx.d(*rax_14)
                i_1 = zx.d(*(rax_14 + r10_2))
                
                if (r9_2 != i_1)
                    break
                
                rax_14 += 1
            while (i_1 != 0)
        
        if (i_4 == *rax_13 || r9_2 - i_1 s> 0)
            rbx_1 = 1
        
        int32_t r15
        
        if (rbx_1 == 0)
            r15 = *(i_4 + 0x11c)
        else
            r15 = *(rcx_19 + 0x120)
        
        int32_t r11_1
        r11_1.b = *(rcx_19 + 0x151) != 0
        int32_t r10_3
        r10_3.b = *(rcx_19 + 0x150) != 0
        uint128_t zmm0_1 = zx.o(*(rcx_19 + 0x148))
        int64_t r9_4 = *(rcx_19 + 0x138)
        int64_t r8_6 = *(rcx_19 + 0x130)
        int64_t rdx_14 = *(rcx_19 + 0x128)
        exceptionObject = *(rcx_19 + 0x120)
        int32_t var_b4_1 = r15
        int64_t var_b0_2 = rdx_14
        int64_t var_a0_1 = r9_4
        var_98.b = rbx_1
        var_98:1.b = 0
        uint64_t var_90_2 = zmm0_1.q
        var_88.d = r10_3
        var_88:4.d = r11_1
        
        if (rsi == rdi)
            sub_1429a6e80(&var_210, rdi, &exceptionObject)
            rsi = var_200
            rdi = var_210:8.q
        else
            *rdi = exceptionObject.o
            rdi[1] = r8_6.o
            rdi[2] = var_98.o
            rdi[3].q = var_88
            rdi += 0x38
            var_210:8.q = rdi
        
        void var_1d0
        int64_t rcx_22 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &var_1d0)
        
        if (i_3 != rcx_22 && rbx_1 == 0)
            sub_14297bb00(&i_3)
        
        sub_14297bb00(&var_220)
        rcx_26 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg2, &var_1f8)
    while (var_220 != rcx_26)
    mtx = mtx_1

int64_t* rax_18 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_3, &mtx_1)
void* i_2 = i_3

if (i_2 != *rax_18)
    int64_t* rax_19
    
    do
        int32_t exceptionObject_2 = *(i_2 + 0x11c)
        exceptionObject = exceptionObject_2
        int32_t exceptionObject_4 = exceptionObject_2
        int64_t var_b0_3
        __builtin_memset(&var_b0_3, 0, 0x18)
        int16_t var_98_1 = 0x100
        int64_t var_90_3 = (zx.o(0)).q
        int64_t var_88_1 = 0
        
        if (rsi == rdi)
            sub_1429a6e80(&var_210, rdi, &exceptionObject)
            rsi = var_200
            rdi = var_210:8.q
        else
            *rdi = exceptionObject.o
            int64_t var_a8_3
            rdi[1] = var_a8_3.o
            rdi[2] = var_98_1.o
            rdi[3].q = var_88_1
            rdi += 0x38
            var_210:8.q = rdi
        
        sub_14297bb00(&i_3)
        rax_19 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_3, &mtx_1)
        i_2 = i_3
    while (i_2 != *rax_19)

int64_t* r14_2 = *(arg1 + 8) + 0x80

if (r14_2 != arg2)
    sub_142986500(r14_2)
    void* rbx_2 = *r14_2
    char var_228
    *(rbx_2 + 8) = sub_142985280(r14_2, *(*arg2 + 8), rbx_2, var_228)
    r14_2[1] = arg2[1]
    int64_t* r8_10 = *r14_2
    int64_t* rdx_23 = r8_10[1]
    
    if (*(rdx_23 + 0x19) != 0)
        *r8_10 = r8_10
        void* rax_24 = *r14_2
        *(rax_24 + 0x10) = rax_24
    else
        int64_t* rcx_33 = *rdx_23
        
        if (*(rcx_33 + 0x19) == 0)
            int64_t* rax_22
            
            do
                rdx_23 = rcx_33
                rax_22 = *rcx_33
                rcx_33 = rax_22
            while (*(rax_22 + 0x19) == 0)
        
        *r8_10 = rdx_23
        void* rdx_24 = *r14_2
        void* rcx_34 = *(rdx_24 + 8)
        void* rax_23 = *(rcx_34 + 0x10)
        
        while (*(rax_23 + 0x19) == 0)
            rcx_34 = rax_23
            rax_23 = *(rax_23 + 0x10)
        
        *(rdx_24 + 0x10) = rcx_34

int64_t* rcx_36 = *(arg1 + 8) + 0xf0
int128_t* rbx_3 = var_210.q

if (rcx_36 != &var_210)
    sub_1429a69d0(rcx_36, rbx_3, rdi)

if (rbx_3 != 0)
    int128_t* rax_28 = rbx_3
    
    if ((rsi - rbx_3) s/ 0x38 * 0x38 u>= 0x1000)
        rbx_3 = *(rbx_3 - 8)
        
        if (rax_28 - rbx_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rbx_3)

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_248)
    return code_1

std::_Throw_C_error(code_1)
noreturn
