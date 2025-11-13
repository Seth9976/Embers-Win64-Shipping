// 函数: sub_1405920e0
// 地址: 0x1405920e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t rbx
rbx.b = *(arg1 + 0x14c) != 0
struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable** rax =
    j_sub_140a82f30(0x10)

if (rax != 0)
    *rax = &CVideoRecorder::CStopVideoRecordRequest::`vftable'{for `CVideoRecorder::ITask'}
    rax[1].b = rbx.b

struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable** arg_18 = rax
void* arg_20 = arg1 + 0xa0
int32_t code = _Mtx_lock(arg1 + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

arg_18 = nullptr
struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable** arg_10 = rax
sub_140592990(arg1 + 0x70, &arg_10)
struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable** rcx_3 = arg_10

if (rcx_3 != 0)
    (*rcx_3)->`scalar deleting destructor'(rcx_3, 1)

_Cnd_broadcast(arg1 + 0xf0)
*(arg1 + 0x14c) = 0
return _Mtx_unlock(arg1 + 0xa0)
