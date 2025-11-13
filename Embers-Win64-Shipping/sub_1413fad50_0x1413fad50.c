// 函数: sub_1413fad50
// 地址: 0x1413fad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 1 << arg1.b
int64_t rbx = 0
int64_t r12_1 = rbp & data_143f13cb0
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ecdd78 s> *r14_1)
    _Init_thread_header(&data_143ecdd78)
    
    if (data_143ecdd78 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.StencilForLODDither", r8_1)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_1 = *rax_6
            rax_7 = (*(rdx_1 + 0x58))(rax_6, rdx_1)
        
        data_143ecdd70 = rax_7
        _Init_thread_footer(&data_143ecdd78)

int64_t rdi = data_143ecdd70
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rsi = *(rdi + (rcx << 2))

if (data_143ecdd88 s> *r14_1)
    _Init_thread_header(&data_143ecdd88)
    
    if (data_143ecdd88 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_9 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.AmbientOcclusion.Compute", r8_2)
        int64_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0
        else
            int64_t rdx_2 = *rax_9
            rax_10 = (*(rdx_2 + 0x58))(rax_9, rdx_2)
        
        data_143ecdd80 = rax_10
        _Init_thread_footer(&data_143ecdd88)

int64_t rdi_1 = data_143ecdd80

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (*(rdi_1 + (rbx << 2)) s<= 0 && r12_1 == 0 && rsi == 0 && sub_1419a51c0(arg1) == 0)
    char result = sub_1410a09e0(arg1)
    
    if (result == 0 && (data_143f13cc8 & rbp) == 0)
        return result

return 1
