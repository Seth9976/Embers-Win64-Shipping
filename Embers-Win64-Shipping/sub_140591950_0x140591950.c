// 函数: sub_140591950
// 地址: 0x140591950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* arg_8 = arg1
int64_t rcx = 0
int64_t result = *(arg1 + 0x30)
int64_t result_1 = result

if (*(arg1 + 0x14c) != 0)
    rcx = 1
else if (*(arg1 + 0x68) == 0)
    return result

int64_t var_68 = rcx
void var_60
sub_140591020(&var_60, arg1 + 0x48)
void* var_38_1 = arg1
int64_t* rcx_2 = *(arg2 + 0x38)

if (rcx_2 == 0)
    std::_Xbad_function_call()
    noreturn

int64_t var_98
(*(*rcx_2 + 0x10))(rcx_2, &var_98, &var_68)
struct CVideoRecorder::ITask::CVideoRecorder::CFrameTask::VTable** rax_1 = j_sub_140a82f30(0x18)
int64_t* rbx_1
int64_t* var_90

if (rax_1 == 0)
    rbx_1 = var_90
else
    *rax_1 = &CVideoRecorder::CFrameTask::`vftable'{for `CVideoRecorder::ITask'}
    rax_1[1] = var_98
    rax_1[2] = var_90
    var_98 = 0
    rbx_1 = nullptr
    int64_t var_90_1 = 0
struct CVideoRecorder::ITask::CVideoRecorder::CFrameTask::VTable** arg_20 = rax_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t r14_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*rbx_1 + 8))(rbx_1)

sub_140592a80(&var_60)
void* var_80_1 = arg1 + 0xa0
int32_t code = _Mtx_lock(arg1 + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

arg_20 = nullptr
struct CVideoRecorder::ITask::CVideoRecorder::CFrameTask::VTable** arg_18 = rax_1
sub_140592990(arg1 + 0x70, &arg_18)
struct CVideoRecorder::ITask::CVideoRecorder::CFrameTask::VTable** rcx_11 = arg_18

if (rcx_11 != 0)
    (*rcx_11)->vFunc_2(rcx_11, 1)

_Cnd_broadcast(arg1 + 0xf0)
return _Mtx_unlock(arg1 + 0xa0)
