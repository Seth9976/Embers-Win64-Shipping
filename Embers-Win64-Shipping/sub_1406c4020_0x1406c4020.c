// 函数: sub_1406c4020
// 地址: 0x1406c4020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)
void var_68
void* arg_8 = &var_68
int64_t rax = *(arg1 + 0x18)
void** const var_f8 = &data_142d8e340
int64_t var_f0 = rax
void** const* var_c0 = &var_f8
void** const* arg_18 = &var_f8
void** var_b8
void*** arg_20 = &var_b8
int64_t var_80 = 0
void*** rax_1 = std::_Func_impl_no_alloc<class <lambda_fd40b9df13fa2643f484ac7dc0f0fee5>,void,class Concurrency::message<uint64_t>* __ptr64>::_Move(
    &var_f8, &var_b8)
arg_20 = &var_b8
int64_t var_30 = 0
void*** rax_2 = j_sub_140a82f30(0x48)
void*** var_78 = rax_2
*rax_2 = &data_142d8bed0
void* var_70 = &rax_2[1]
rax_2[8] = 0
void*** rcx_1 = rax_1

if (rcx_1 != 0)
    rax_2[8] = (**rcx_1)(rcx_1, &rax_2[1])
    rcx_1 = rax_1

if (rcx_1 != 0)
    void*** rdx_2
    rdx_2.b = rcx_1 != &var_b8
    (*rcx_1)[4](rcx_1, rdx_2)

if (var_c0 != 0)
    void** const* rdx_3
    rdx_3.b = var_c0 != &var_f8
    (*var_c0)[4](var_c0, rdx_3)
    int64_t var_c0_1 = 0

arg_8 = &var_68
void*** rbx_2 = *(arg1 + 8) + 0x160
arg_18 = rbx_2
Concurrency::details::_TaskEventLogger::_LogWorkItemStarted(rbx_2)

if (rax_2 == 0)
    std::_Xbad_function_call()
    noreturn

char rax_8 = (*rax_2)[2](rax_2)
Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(rbx_2)

if (rax_2 != 0)
    void** r8_1 = *rax_2
    int64_t rdx_4
    rdx_4.b = rax_2 != &var_68
    r8_1[4](rax_2, rdx_4, r8_1)
    int64_t var_30_2 = 0

return sub_1406ad8d0(r14, rax_8)
