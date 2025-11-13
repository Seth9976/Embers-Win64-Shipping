// 函数: sub_1429ab560
// 地址: 0x1429ab560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f0 = -2
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x10)
struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_1d0 = 1
int64_t* rax_2 = sub_14297e970(*(arg1 + 8) + 0x50)
void* var_270
sub_14297bd10(arg2, &var_270)
void* const var_258
int32_t var_250
void var_208
int32_t exceptionObject

while (true)
    int64_t* rax_3 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        arg2, &var_250)
    void* rcx_6 = var_270
    
    if (rcx_6 == *rax_3)
        break
    
    sub_14297bd70(rax_2, &var_258, rcx_6 + 0x20)
    int64_t* rax_4 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rax_2, &var_208)
    void* const rcx_9 = var_258
    
    if (rcx_9 != *rax_4)
        void* rdx_4 = var_270
        
        if (*(rcx_9 + 0x120) != *(rdx_4 + 0x140) || *(rcx_9 + 0x124) != *(rdx_4 + 0x144))
            void* var_1c8
            sub_1429779b0(&var_1c8, 3, 1)
            char* rax_53 = sub_1429aa9c0(arg1)
            char* rax_54 = sub_142981d20(&var_258)
            void var_1b8
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(
                            sub_14058b120(&var_1b8, "X and/or y subsampling factors of ""), 
                            rax_54), 
                        "" channel of input file ""), 
                    rax_53), 
                "" are not compatible with the frame buffer's subsampling factors.")
            sub_142977aa0(&exceptionObject, &var_1c8)
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
    
    sub_14297bb00(&var_270)

uint32_t r14 = 1

if (data_143fed231 == 0)
    r14 = 0

char var_268 = r14.b
int128_t var_248
__builtin_memset(&var_248, 0, 0x30)
var_258 = nullptr
int64_t r12 = 0
void* i_2
sub_14297bd10(rax_2, &i_2)
int64_t rbx_1 = 0
sub_14297bd10(arg2, &var_270)
int64_t rcx_14 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg2, &var_208)
void* r13 = var_248:8.q
int128_t var_230
uint128_t* rdi_1 = var_230:8.q

if (var_270 != rcx_14)
    int64_t rcx_40
    
    do
        void var_200
        int64_t* rax_8 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_2, &var_200)
        void* i = i_2
        int64_t var_220
        char var_a0
        
        if (i != *rax_8)
            int64_t* rax_10
            
            do
                void* rax_9 = i + 0x1c
                uint32_t j
                uint32_t rdx_9
                
                do
                    rdx_9 = zx.d(*rax_9)
                    j = zx.d(*(rax_9 + var_270 + 0x20 - (i + 0x1c)))
                    
                    if (rdx_9 != j)
                        break
                    
                    rax_9 += 1
                while (j != 0)
                
                if (rdx_9 - j s>= 0)
                    break
                
                int32_t rdx_11 = *(i + 0x124)
                int32_t rcx_16 = *(i + 0x120)
                int32_t exceptionObject_1 = *(i + 0x11c)
                exceptionObject = exceptionObject_1
                int32_t exceptionObject_2 = exceptionObject_1
                int64_t var_c0_1
                __builtin_memset(&var_c0_1, 0, 0x18)
                int32_t var_a4_1 = rdx_11
                var_a0.w = 0x100
                int64_t var_98_1 = (zx.o(0)).q
                
                if (r12 == rdi_1)
                    sub_1429a6e80(&var_230, rdi_1, &exceptionObject)
                    r12 = var_220
                    rdi_1 = var_230:8.q
                else
                    *rdi_1 = exceptionObject.o
                    int64_t var_b8_1
                    rdi_1[1] = var_b8_1.o
                    rdi_1[2] = rcx_16.o
                    rdi_1[3].q = var_98_1
                    rdi_1 += 0x38
                    var_230:8.q = rdi_1
                
                int32_t rdx_13 = *(i_2 + 0x11c)
                
                if (rdx_13 == 0)
                    rbx_1 += 2
                else if (rdx_13 == 1)
                    rbx_1 += 1
                else if (rdx_13 == 2)
                    rbx_1 += 2
                
                sub_14297bb00(&i_2)
                rax_10 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    rax_2, &var_200)
                i = i_2
            while (i != *rax_10)
        
        char rsi_1 = 0
        void var_1e8
        int64_t* rax_11 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_2, &var_1e8)
        void* rcx_22 = var_270
        void* i_3 = i_2
        uint32_t i_1
        uint32_t r9_2
        
        if (i_3 != *rax_11)
            void* rax_12 = i_3 + 0x1c
            int64_t r10_2 = rcx_22 + 0x20 - rax_12
            
            do
                r9_2 = zx.d(*rax_12)
                i_1 = zx.d(*(rax_12 + r10_2))
                
                if (r9_2 != i_1)
                    break
                
                rax_12 += 1
            while (i_1 != 0)
        
        if (i_3 == *rax_11 || r9_2 - i_1 s> 0)
            rsi_1 = 1
        
        if (rsi_1 == 0)
            r14 = *(i_3 + 0x11c)
        else
            r14 = *(rcx_22 + 0x120)
        
        uint128_t zmm0_1 = zx.o(*(rcx_22 + 0x148))
        int32_t r11_1 = *(rcx_22 + 0x144)
        int32_t r10_3 = *(rcx_22 + 0x140)
        int64_t r9_4 = *(rcx_22 + 0x138)
        int64_t r8_6 = *(rcx_22 + 0x130)
        int64_t rdx_17 = *(rcx_22 + 0x128)
        exceptionObject = *(rcx_22 + 0x120)
        uint32_t var_c4_1 = r14
        int64_t var_c0_2 = rdx_17
        int64_t var_b0_1 = r9_4
        int32_t var_a4_2 = r11_1
        var_a0 = rsi_1
        char var_9f_1 = 0
        uint64_t var_98_2 = zmm0_1.q
        
        if (r12 == rdi_1)
            sub_1429a6e80(&var_230, rdi_1, &exceptionObject)
            r12 = var_220
            rdi_1 = var_230:8.q
        else
            *rdi_1 = exceptionObject.o
            rdi_1[1] = r8_6.o
            rdi_1[2] = r10_3.o
            rdi_1[3].q = var_98_2
            rdi_1 += 0x38
            var_230:8.q = rdi_1
        
        char rcx_24 = var_268
        char rdx_19
        
        if (rsi_1 != 0)
            rdx_19 = 0
        else
            rdx_19 = 0
            
            if (*(i_2 + 0x11c) != 1)
                rcx_24 = 0
        
        void* rax_16 = var_270
        
        if (*(rax_16 + 0x120) == 1)
            rdx_19 = rcx_24
        
        if (*(rax_16 + 0x140) == 1)
            r14 = zx.d(rdx_19)
            var_268 = r14.b
        
        if (*(rax_16 + 0x140) != 1 || *(rax_16 + 0x144) != 1)
            r14.b = 0
            var_268 = r14.b
        
        if (r14.b != 0)
            exceptionObject.q = *(rax_16 + 0x128)
            var_c0_2.b = rsi_1
            zmm0_1 = _mm_cvtpd_ps(zx.o(*(rax_16 + 0x148)))
            var_250 = zmm0_1.d
            zmm0_1.d f- 0f
            uint16_t r8_9
            
            if (is_unordered.d(zmm0_1.d, 0f) || zmm0_1.d f!= 0f)
                int32_t rcx_27 = var_250
                int16_t r9_5 = *(&data_1436fbc50 + (zx.q(rcx_27) u>> 0x17 << 1))
                
                if (r9_5 == 0)
                    r8_9 = sub_142c998f0(rcx_27)
                    rax_16 = var_270
                else
                    int32_t rcx_28 = rcx_27 & 0x7fffff
                    r8_9 = ((rcx_28 + 0xfff + (rcx_28 u>> 0xd & 1)) u>> 0xd).w + r9_5
            else
                r8_9 = (var_250 u>> 0x10).w
            
            var_c0_2:2.w = r8_9
            int32_t var_a8_2
            var_a8_2.q = *(rax_16 + 0x130)
            var_a0.q = *(rax_16 + 0x138)
            var_98_2.d = *(rax_16 + 0x140)
            var_98_2:4.d = *(rax_16 + 0x144)
            
            if (var_258 == r13)
                sub_1429a6e80(&var_248, r13, &exceptionObject)
                void* var_238
                var_258 = var_238
                r13 = var_248:8.q
            else
                *r13 = exceptionObject.o
                *(r13 + 0x10) = rbx_1.o
                *(r13 + 0x20) = var_a8_2.o
                *(r13 + 0x30) = var_98_2
                r13 += 0x38
                var_248:8.q = r13
        
        if (rsi_1 == 0)
            int32_t rdx_26 = *(i_2 + 0x11c)
            
            if (rdx_26 == 0)
                rbx_1 += 2
            else if (rdx_26 == 1)
                rbx_1 += 1
            else if (rdx_26 == 2)
                rbx_1 += 2
        
        void var_1e0
        int64_t rcx_36 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_2, &var_1e0)
        
        if (i_2 != rcx_36 && rsi_1 == 0)
            sub_14297bb00(&i_2)
        
        sub_14297bb00(&var_270)
        rcx_40 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg2, &var_208)
    while (var_270 != rcx_40)

char var_278
int128_t* rsi_2
void* r14_1

if (r14.b == 0)
label_1429abc6c:
    sub_1429a8f10(&var_248)
    __builtin_memset(&var_248, 0, 0x18)
    var_258 = nullptr
    *(*(arg1 + 8) + 0x130) = 0
    r14_1 = *(arg1 + 8)
    r13 = var_248:8.q
    rsi_2 = var_248.q
else
    rsi_2 = var_248.q
    int64_t rbx_4 = (r13 - rsi_2) s/ 0x38
    sub_1429a7d80(rsi_2, r13, rbx_4, var_278)
    var_270.b = 0
    
    if (rbx_4 == 3 || rbx_4 == 4 || rbx_4 == 6 || rbx_4 == 8)
        int64_t r8_14 = rbx_4
        
        if (rbx_4 u> 4)
            r8_14 u>>= 1
        
        int64_t rdx_32 = 0
        
        if (rbx_4 != 0)
            void* rcx_44 = &rsi_2[2]
            
            do
                if (*(rcx_44 - 0x18) != 0 && ((rdx_32 - 3) & 0xfffffffffffffffb) != 0)
                    goto label_1429abc52
                
                if (*rcx_44 != r8_14 * 2)
                    goto label_1429abc52
                
                if (rdx_32 != 0)
                    if (rdx_32 != r8_14 && *(rcx_44 - 0x20) != *(rcx_44 - 0x58) + 2)
                        goto label_1429abc52
                    
                    if (*(rcx_44 + 8) != *(rcx_44 - 0x30))
                        goto label_1429abc52
                
                rdx_32 += 1
                rcx_44 += 0x38
            while (rdx_32 u< rbx_4)
        
        var_270:4.d = *(rsi_2 + 0x34)
        var_270.b = 1
    
label_1429abc52:
    *(*(arg1 + 8) + 0x130) = var_270
    r14_1 = *(arg1 + 8)
    
    if (*(r14_1 + 0x130) == 0)
        goto label_1429abc6c

if (r14_1 + 0x70 != arg2)
    sub_142986500(r14_1 + 0x70)
    void* rbx_5 = *(r14_1 + 0x70)
    *(rbx_5 + 8) = sub_142985280(r14_1 + 0x70, *(*arg2 + 8), rbx_5, var_278)
    *(r14_1 + 0x78) = arg2[1]
    int64_t* r8_16 = *(r14_1 + 0x70)
    int64_t* rdx_36 = r8_16[1]
    
    if (*(rdx_36 + 0x19) != 0)
        *r8_16 = r8_16
        void* rax_39 = *(r14_1 + 0x70)
        *(rax_39 + 0x10) = rax_39
    else
        int64_t* rcx_50 = *rdx_36
        
        if (*(rcx_50 + 0x19) == 0)
            int64_t* rax_37
            
            do
                rdx_36 = rcx_50
                rax_37 = *rcx_50
                rcx_50 = rax_37
            while (*(rax_37 + 0x19) == 0)
        
        *r8_16 = rdx_36
        void* rdx_37 = *(r14_1 + 0x70)
        void* rcx_51 = *(rdx_37 + 8)
        void* rax_38 = *(rcx_51 + 0x10)
        
        while (*(rax_38 + 0x19) == 0)
            rcx_51 = rax_38
            rax_38 = *(rax_38 + 0x10)
        
        *(rdx_37 + 0x10) = rcx_51

void* rax_40 = *(arg1 + 8)
int128_t* rbx_6 = var_230.q

if (rax_40 + 0xe8 != &var_230)
    sub_1429a69d0(rax_40 + 0xe8, rbx_6, rdi_1)
    rax_40 = *(arg1 + 8)

if (rax_40 + 0x138 != &var_248)
    sub_1429a6bf0(rax_40 + 0x138, rsi_2, r13)

if (rbx_6 != 0)
    int128_t* rax_44 = rbx_6
    
    if ((r12 - rbx_6) s/ 0x38 * 0x38 u>= 0x1000)
        rbx_6 = *(rbx_6 - 8)
        
        if (rax_44 - rbx_6 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rbx_6)

if (rsi_2 != 0)
    int128_t* rax_50 = rsi_2
    
    if ((var_258 - rsi_2) s/ 0x38 * 0x38 u>= 0x1000)
        rsi_2 = *(rsi_2 - 8)
        
        if (rax_50 - rsi_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rsi_2)

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_298)
    return code_1

std::_Throw_C_error(code_1)
noreturn
