// 函数: sub_142987530
// 地址: 0x142987530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_270 = -2
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void* var_288 = arg1
void* rsi = nullptr
int32_t var_2a4 = 0
struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0xf8)
struct _Mtx_internal_imp_t* mtx_1 = mtx
char var_278 = 0
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_278_1 = 1
void* r8 = *(arg1 + 8)
int64_t rax_3
int64_t rdx
rdx:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r8 + 0xb0) - *(r8 + 0xa8))
int64_t rdx_1 = rdx s>> 3

if (rdx_1 == neg.q(rdx_1 u>> 0x3f))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "No frame buffer specified as pixel data source.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

*(r8 + 0xe0)
int32_t r15 = divs.dp.d(sx.q(*(r8 + 0x38) - *(r8 + 0x4c)), *(r8 + 0xe0))
void var_2b0
sub_1429c2260(&var_2b0)
void* r8_1 = *(arg1 + 8)
int32_t r14 = *(r8_1 + 0x38)
int32_t r13 = 1
int32_t var_2b8_1
int32_t var_2b4
int32_t var_2a8
int32_t var_2a0
int32_t r12_3

if (*(r8_1 + 0x40) != 0)
    int32_t temp0_2 = divs.dp.d(sx.q(r14 - *(r8_1 + 0x4c) - arg2 + 1), *(r8_1 + 0xe0))
    var_2b4 = r14
    var_2a8 = r14 - arg2 + 1
    int32_t i = r15 - temp0_2 + 1
    int32_t i_4 = ((*(r8_1 + 0xd0) - *(r8_1 + 0xc8)) s>> 3).d
    
    if (i s>= i_4)
        i = i_4
    
    if (i s< 1)
        i = 1
    
    int32_t i_3 = i
    
    for (int32_t rbx_1 = 0; rbx_1 s< i; i = i_3)
        struct IlmThread_2_3::Task::VTable** rax_26 = j_sub_140a82f30(0x20)
        struct IlmThread_2_3::Task::VTable** var_290_1 = rax_26
        struct IlmThread_2_3::Task::Imf_2_3::x1776022c::LineBufferTask::operator[]::LineBufferTask::VTable
            ** rax_27
        
        if (rax_26 == 0)
            rax_27 = nullptr
        else
            rax_27 = sub_142985a80(rax_26, &var_2b0, *(arg1 + 8), r15 - rbx_1, r14 - arg2 + 1, r14)
        
        sub_1429c26b0(rax_27)
        rbx_1 += 1
    
    r12_3 = r15 - i
    var_2b8_1 = temp0_2 - 1
    r13 = -1
else
    var_2a8 = r14
    int32_t temp0_1 = divs.dp.d(sx.q(arg2 - 1 + r14 - *(r8_1 + 0x4c)), *(r8_1 + 0xe0))
    var_2b4 = arg2 - 1 + r14
    int32_t r12_2 = temp0_1 - r15 + 1
    int32_t rcx_9 = ((*(r8_1 + 0xd0) - *(r8_1 + 0xc8)) s>> 3).d
    
    if (r12_2 s>= rcx_9)
        r12_2 = rcx_9
    
    if (r12_2 s< 1)
        r12_2 = 1
    
    for (int32_t i_1 = 0; i_1 s< r12_2; i_1 += 1)
        struct IlmThread_2_3::Task::VTable** rax_16 = j_sub_140a82f30(0x20)
        var_2a0.q = rax_16
        struct IlmThread_2_3::Task::Imf_2_3::x1776022c::LineBufferTask::operator[]::LineBufferTask::VTable
            ** rax_17
        
        if (rax_16 == 0)
            rax_17 = nullptr
        else
            rax_17 = sub_142985a80(rax_16, &var_2b0, *(arg1 + 8), i_1 + r15, r14, var_2b4)
        
        sub_1429c26b0(rax_17)
    
    r12_3 = r12_2 + r15
    var_2b8_1 = temp0_1 + 1

while (true)
    void* rcx_17 = *(arg1 + 8)
    
    if (*(rcx_17 + 0x3c) s<= 0)
        break
    
    int64_t r8_4 = *(rcx_17 + 0xc8)
    void* r14_3 = *(r8_4 + (modu.dp.q(0:(sx.q(r15)), (*(rcx_17 + 0xd0) - r8_4) s>> 3) << 3))
    var_2a0.q = r14_3 + 0x68
    sub_1429c3430(r14_3 + 0x68)
    int32_t rbx_4 = *(r14_3 + 0x34) - *(r14_3 + 0x30) + 1
    void* rax_32 = *(arg1 + 8)
    *(rax_32 + 0x3c) -= rbx_4
    int32_t code_1
    
    if (*(r14_3 + 0x40) != 0)
        void* rax_33 = *(arg1 + 8)
        *(rax_33 + 0x38) += rbx_4 * r13
        sub_1429c3350(var_2a0.q)
        sub_1429c23e0(&var_2b0)
        code_1 = _Mtx_unlock(mtx)
        
        if (code_1 != 0)
            std::_Throw_C_error(code_1)
            noreturn
        
        __security_check_cookie(rax_1 ^ &var_2e8)
        return code_1
    
    void* rdx_13 = *(arg1 + 8)
    int32_t var_2c8_3 = *(r14_3 + 0x18)
    sub_1429873f0(*(rdx_13 + 0xf8), rdx_13, *(r14_3 + 0x28), *(r14_3 + 0x10))
    r15 += r13
    void* rax_35 = *(arg1 + 8)
    *(rax_35 + 0x38) += rbx_4 * r13
    sub_1429c3350(r14_3 + 0x68)
    
    if (r15 == var_2b8_1)
        sub_1429c23e0(&var_2b0)
        int64_t i_2 = 0
        void* rcx_29 = *(arg1 + 8)
        
        if ((*(rcx_29 + 0xd0) - *(rcx_29 + 0xc8)) s>> 3 != 0)
            do
                void* rcx_30 = *(*(rcx_29 + 0xc8) + (i_2 << 3))
                
                if (*(rcx_30 + 0x41) != 0 && rsi == 0)
                    rsi = rcx_30 + 0x48
                
                *(rcx_30 + 0x41) = 0
                i_2 += 1
                rcx_29 = *(arg1 + 8)
            while (i_2 u< (*(rcx_29 + 0xd0) - *(rcx_29 + 0xc8)) s>> 3)
            
            if (rsi != 0)
                struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
                sub_142985a50(&exceptionObject_2, rsi)
                _CxxThrowException(&exceptionObject_2, &data_143946698)
                noreturn
        
        code_1 = _Mtx_unlock(mtx)
        
        if (code_1 != 0)
            std::_Throw_C_error(code_1)
            noreturn
        
        __security_check_cookie(rax_1 ^ &var_2e8)
        return code_1
    
    if (r12_3 != var_2b8_1)
        struct IlmThread_2_3::Task::VTable** rax_44 = j_sub_140a82f30(0x20)
        struct IlmThread_2_3::Task::VTable** var_290_2 = rax_44
        struct IlmThread_2_3::Task::Imf_2_3::x1776022c::LineBufferTask::operator[]::LineBufferTask::VTable
            ** rax_45
        
        if (rax_44 == 0)
            rax_45 = nullptr
        else
            rax_45 = sub_142985a80(rax_44, &var_2b0, *(arg1 + 8), r12_3, var_2a8, var_2b4)
        
        sub_1429c26b0(rax_45)
        r12_3 += r13

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
sub_14297d3f0(&exceptionObject_1, 
    "Tried to write more scan lines than specified by the data window.")
_CxxThrowException(&exceptionObject_1, &data_143946538)
noreturn
