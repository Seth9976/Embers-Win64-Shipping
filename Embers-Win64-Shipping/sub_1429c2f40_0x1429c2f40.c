// 函数: sub_1429c2f40
// 地址: 0x1429c2f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (arg2 s< 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, 
        "Attempt to set the number of threads in a thread pool to a negative value.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int64_t rbp
rbp.b = 0
int64_t* rbx = *(arg1 + 8)
rbx[1].d += 1
int64_t* inptr = *rbx
int64_t* var_b8 = rbx
int64_t* inptr_1 = inptr
int32_t rax_3 = (*(*inptr + 8))(inptr)
uint64_t result

if (rax_3 != arg2)
    struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::VTable
        ** rsi_1 = nullptr
    
    if (rax_3 == 0)
        result = __RTDynamicCast(inptr, 0, 
            &class IlmThread_2_3::ThreadPoolProvider `RTTI Type Descriptor', 
            &class IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider `RTTI Type Descriptor', 
            0)
        
        if (result == 0)
            result = (*(*inptr + 0x10))(inptr, zx.q(arg2))
        else
            rbp.b = 1
    else if (arg2 != 0)
        result = (*(*inptr + 0x10))(inptr, zx.q(arg2))
    else
        result = __RTDynamicCast(inptr, 0, 
            &class IlmThread_2_3::ThreadPoolProvider `RTTI Type Descriptor', 
            &class IlmThread_2_3::x3c722eb3::DefaultThreadPoolProvider::operator[]::DefaultThreadPoolProvider `RTTI Type Descriptor', 
            0)
        
        if (result == 0)
            result = (*(*inptr + 0x10))(inptr, zx.q(arg2))
        else
            rbp.b = 1
    
    if (rbx != 0)
        result = zx.q(rbx[1].d)
        rbx[1].d -= 1
    
    if (rbp.b != 0)
        struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::VTable
            ** rdx_1
        
        if (arg2 != 0)
            struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::DefaultThreadPoolProvider::operator[]::DefaultThreadPoolProvider::VTable
                ** rax_6 = j_sub_140a82f30(0x100)
            struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::DefaultThreadPoolProvider::operator[]::DefaultThreadPoolProvider::VTable
                ** var_b8_2 = rax_6
            
            if (rax_6 != 0)
                rsi_1 = sub_1429c2170(rax_6, arg2)
            
            rdx_1 = rsi_1
        else
            struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::VTable
                ** rax_5 = j_sub_140a82f30(zx.q(arg2 + 8))
            struct IlmThread_2_3::ThreadPoolProvider::IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::VTable
                ** var_b8_1 = rax_5
            
            if (rax_5 == 0)
                rdx_1 = nullptr
            else
                *rax_5 = &IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::`vftable'{for `IlmThread_2_3::ThreadPoolProvider'}
                rdx_1 = rax_5
        
        result = sub_1429c30e0(*(arg1 + 8), rdx_1)
else
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1

__security_check_cookie(rax_1 ^ &var_e8)
return result
