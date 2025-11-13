// 函数: sub_1429c26b0
// 地址: 0x1429c26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
TEB* gsbase

if (data_143fed234 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143fed234)
    
    if (data_143fed234 == 0xffffffff)
        data_143cc6f10 = &IlmThread_2_3::ThreadPool::`vftable'
        int64_t* rax_3 = j_sub_140a82f30(0x10)
        int64_t* arg_10 = rax_3
        
        if (rax_3 != 0)
            *rax_3 = 0
            rax_3[1].d = 0
        
        data_143cc6f18 = rax_3
        int64_t* rax_4 = j_sub_140a82f30(8)
        int64_t* rcx_1 = rax_4
        arg_10 = rax_4
        
        if (rax_4 == 0)
            rcx_1 = nullptr
        else
            *rcx_1 = &IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::`vftable'{for `IlmThread_2_3::ThreadPoolProvider'}
        
        int64_t** rdi_1 = data_143cc6f18
        int64_t* rbx_2 = *rdi_1
        int64_t* rax_5 = rbx_2
        bool z_1
        
        if (rax_5 == *rdi_1)
            *rdi_1 = rcx_1
            z_1 = true
        else
            rax_5 = *rdi_1
            z_1 = false
        
        if (not(z_1))
            rbx_2 = rax_5
        
        while (rdi_1[1].d s> 0)
            _Thrd_yield()
        
        if (rbx_2 != 0)
            (*(*rbx_2 + 0x20))(rbx_2)
            (**rbx_2)(rbx_2, 1)
        
        atexit(sub_142d15fa0)
        _Init_thread_footer(&data_143fed234)

int64_t* rbx_1 = data_143cc6f18
rbx_1[1].d
rbx_1[1].d += 1
int64_t* rcx = *rbx_1
int64_t* var_20 = rbx_1
int64_t* var_18 = rcx
uint64_t result = (*(*rcx + 0x18))(rcx, arg1)

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1

return result
