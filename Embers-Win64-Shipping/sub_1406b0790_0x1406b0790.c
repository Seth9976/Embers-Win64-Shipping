// 函数: sub_1406b0790
// 地址: 0x1406b0790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t code = _Mtx_lock(rbx + 0x20)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

if (*(rbx + 8) == 2)
    _Mtx_unlock(rbx + 0x20)
    int64_t* rcx_2 = *(arg1 + 8)
    int64_t rdx
    rdx.b = 1
    return (*(*rcx_2 + 8))(rcx_2, rdx, 0, 0, &rcx_2[2])

*(rbx + 8) = 1
_Mtx_unlock(rbx + 0x20)
void** const var_c8 = &data_142d8c928
int64_t var_c0_1 = *(arg1 + 0x18)
void** const* var_90_1 = &var_c8
int64_t var_50_1 = 0
void** var_88
void*** rax_4 = std::_Func_impl_no_alloc<class <lambda_d7f2b98c66cb8daa0dc042afd93b77a0>,void,class Concurrency::message<uint64_t>* __ptr64>::_Clone(
    &var_c8, &var_88)
void*** rax_5 = j_sub_140a82f30(0x48)
*rax_5 = &data_142d8bed0
rax_5[8] = 0

if (rax_4 != 0)
    rax_5[8] = (**rax_4)(rax_4, &rax_5[1])
    
    if (rax_4 != 0)
        void*** rdx_3
        rdx_3.b = rax_4 != &var_88
        (*rax_4)[4](rax_4, rdx_3)
        int64_t var_50_3 = 0

if (var_90_1 != 0)
    void** const* rdx_4
    rdx_4.b = var_90_1 != &var_c8
    (*var_90_1)[4](var_90_1, rdx_4)
    int64_t var_90_2 = 0

int64_t rbx_1 = *(arg1 + 8)
Concurrency::details::_TaskEventLogger::_LogWorkItemStarted(rbx_1 + 0x160)
char rax_11 = (*rax_5)[2](rax_5)
Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(rbx_1 + 0x160)
void** r8_1 = *rax_5
void var_48
int64_t rdx_5
rdx_5.b = rax_5 != &var_48
r8_1[4](rax_5, rdx_5, r8_1)
sub_1406ad8d0(*(arg1 + 8), rax_11)
return Concurrency::details::_TaskEventLogger::_LogTaskExecutionCompleted(*(arg1 + 8) + 0x160)
