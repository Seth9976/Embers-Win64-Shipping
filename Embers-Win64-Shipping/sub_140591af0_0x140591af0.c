// 函数: sub_140591af0
// 地址: 0x140591af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
int128_t* arg_10 = arg2
void* arg_8 = arg1

if (*arg9 == 0)
    struct CVideoRecorder::ITask::CVideoRecorder::CStartVideoRecordRequest::VTable** rax_1 =
        j_sub_140a82f30(0x60)
    struct CVideoRecorder::ITask::CVideoRecorder::CStartVideoRecordRequest::VTable** rdx = rax_1
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        bool rcx = *(arg1 + 0x14c) == 0
        *rdx = &CVideoRecorder::CStartVideoRecordRequest::`vftable'{for `CVideoRecorder::ITask'}
        rdx[3] = 0
        rdx[4] = 0
        *(rdx + 8) = *arg2
        *(rdx + 0x18) = arg2[1]
        arg2[1].q = 0
        *(arg2 + 0x18) = 7
        *arg2 = 0
        rdx[5].d = arg3
        *(rdx + 0x2c) = arg4
        rdx[6].d = arg7
        *(rdx + 0x38) = *arg8
        rdx[9] = arg8[1].q
        rdx[0xa].d = arg5
        *(rdx + 0x54) = arg6
        rdx[0xb].b = rcx
    
    int64_t rbx_1 = *arg9
    *arg9 = rdx
    
    if (rbx_1 != 0)
        int64_t rdx_1 = *(rbx_1 + 0x20)
        
        if (rdx_1 u>= 8)
            void* rcx_1 = *(rbx_1 + 8)
            
            if ((rdx_1 << 1) + 2 u>= 0x1000)
                void* r8 = *(rcx_1 - 8)
                
                if (rcx_1 - r8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_1 = r8
            
            j_sub_140a74f90(rcx_1)
        
        *(rbx_1 + 0x18) = 0
        *(rbx_1 + 0x20) = 7
        *(rbx_1 + 8) = 0
        j_sub_140a74f90(rbx_1)

struct _Mtx_internal_imp_t* var_70 = arg1 + 0xa0
int32_t code = _Mtx_lock(arg1 + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int64_t* rax_7 = *arg9
*arg9 = 0
int64_t* var_78 = rax_7
sub_140592990(arg1 + 0x70, &var_78)
int64_t* rcx_7 = var_78

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7, 1)

_Cnd_broadcast(arg1 + 0xf0)
*(arg1 + 0x14c) = arg6
int64_t rax_10 = _Query_perf_frequency()
int64_t rax_12
int64_t rdx_5
rdx_5:rax_12 = sx.o(_Query_perf_counter())
*(arg1 + 0x30) = divs.dp.q(rdx_5:rax_12, rax_10) * 0x3b9aca00
    + divs.dp.q(sx.o(mods.dp.q(rdx_5:rax_12, rax_10) * 0x3b9aca00), rax_10)
return _Mtx_unlock(arg1 + 0xa0)
