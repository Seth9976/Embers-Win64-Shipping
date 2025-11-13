// 函数: sub_140591140
// 地址: 0x140591140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* mtx = *(arg1 + 8) + 0xa0
struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

void* rcx_2 = *(arg1 + 8)
int64_t i = *(rcx_2 + 0x88)
int64_t r12_1 = *(rcx_2 + 0x90) + i
int64_t* rsi = nullptr
int64_t* r15_1

if (rcx_2 == -0x70)
    r15_1 = nullptr
else
    r15_1 = *(rcx_2 + 0x70)

void* const r13

if (r15_1 == 0)
    r13 = nullptr
else
    r13 = *r15_1

for (; i != r12_1; i += 1)
    void* rax_3 = __RTDynamicCast(
        *(*(*(r13 + 8) + (((*(r13 + 0x10) - 1) & i u>> 1) << 3)) + ((zx.q(i.d) & 1) << 3)), 0, 
        &class CVideoRecorder::ITask `RTTI Type Descriptor', 
        &class CVideoRecorder::CFrameTask `RTTI Type Descriptor', 0)
    
    if (rax_3 != 0 && *(rax_3 + 8) == arg1)
        break

int64_t* rdx_4 = nullptr

if (r15_1 != 0)
    int64_t* rdx_3 = *r15_1
    
    if (rdx_3 == 0)
        rdx_4 = nullptr
    else
        rdx_4 = *rdx_3

void* rcx_9 = *(arg1 + 8)

if (i != *(rcx_9 + 0x90) + *(rcx_9 + 0x88))
    int64_t* rcx_10 = nullptr
    
    if (rdx_4 != 0)
        int64_t* rcx_11 = *rdx_4
        
        if (rcx_11 == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *rcx_11
    
    if (rcx_10 != 0)
        int64_t* rax_6 = *rcx_10
        
        if (rax_6 != 0)
            rsi = *rax_6
    
    int128_t zmm0 = zx.o(0)
    int128_t var_70 = zmm0
    
    if (rsi != 0)
        int64_t* rax_7 = *rsi
        
        if (rax_7 != 0)
            var_70.q = *rax_7
    
    int64_t var_60_1 = i + 1
    int128_t var_58 = zmm0
    
    if (rcx_10 != 0)
        int64_t* rax_9 = *rcx_10
        
        if (rax_9 != 0)
            var_58.q = *rax_9
    
    int64_t i_1 = i
    void var_40
    sub_1405933b0(rcx_9 + 0x70, &var_40, &var_58, &var_70)
    rcx_9 = *(arg1 + 8)

_Cnd_broadcast(rcx_9 + 0xf0)
return _Mtx_unlock(mtx)
