// 函数: sub_1429c2d70
// 地址: 0x1429c2d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t i = sx.q(arg2)
int32_t code = _Mtx_lock(&arg1[0x12])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_28 = 1
int64_t rcx_2 = arg1[0x1d]
int64_t rdx = arg1[0x1c]
int64_t rax_2 = (rcx_2 - rdx) s>> 3
struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
    ** arg_8
struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
    ** arg_18

if (i u> rax_2)
    do
        struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
            ** rax_3 = j_sub_140a82f30(0x20)
        struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
            ** rdi_1 = rax_3
        arg_18 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            sub_1429c3690(rax_3)
            *rdi_1 = &IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::`vftable'{for `IlmThread_2_3::Thread'}
            rdi_1[3] = &arg1[1]
            sub_1429c3960(rdi_1)
        
        arg_8 = rdi_1
        struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
            *** rdx_1 = arg1[0x1d]
        
        if (arg1[0x1e] == rdx_1)
            sub_1429c1fc0(&arg1[0x1c], rdx_1, &arg_8)
            rcx_2 = arg1[0x1d]
        else
            *rdx_1 = rdi_1
            arg1[0x1d] += 8
            rcx_2 = arg1[0x1d]
        
        rdx = arg1[0x1c]
    while ((rcx_2 - rdx) s>> 3 u< i)
else if (i u< rax_2)
    (*(*arg1 + 0x20))(arg1)
    rcx_2 = arg1[0x1d]
    rdx = arg1[0x1c]
    
    while ((rcx_2 - rdx) s>> 3 u< i)
        struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
            ** rax_9 = j_sub_140a82f30(0x20)
        struct IlmThread_2_3::Thread::IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::VTable
            ** rdi_2 = rax_9
        arg_8 = rax_9
        
        if (rax_9 == 0)
            rdi_2 = nullptr
        else
            sub_1429c3690(rax_9)
            *rdi_2 = &IlmThread_2_3::x3c722eb3::DefaultWorkerThread::operator[]::DefaultWorkerThread::`vftable'{for `IlmThread_2_3::Thread'}
            rdi_2[3] = &arg1[1]
            sub_1429c3960(rdi_2)
        
        arg_18 = rdi_2
        void** rdx_2 = arg1[0x1d]
        
        if (arg1[0x1e] == rdx_2)
            sub_1429c1fc0(&arg1[0x1c], rdx_2, &arg_18)
            rcx_2 = arg1[0x1d]
        else
            *rdx_2 = rdi_2
            arg1[0x1d] += 8
            rcx_2 = arg1[0x1d]
        
        rdx = arg1[0x1c]
rax_2.b = rdx != rcx_2
arg1[0x1f].b = rax_2.b
rax_2.b = arg1[0x1f].b
int32_t code_1 = _Mtx_unlock(&arg1[0x12])

if (code_1 == 0)
    return code_1

std::_Throw_C_error(code_1)
noreturn
