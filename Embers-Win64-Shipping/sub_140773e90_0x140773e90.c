// 函数: sub_140773e90
// 地址: 0x140773e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x554) == 2)
    if ((*(arg1 + 0x8a) & 1) != 0)
        int64_t rax_5 = *arg1
        *(arg1 + 0x554) = 3
        jump(*(rax_5 + 0x270))
    
    void* rax_2 = arg1[0x15]
    
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    return sub_140771920(sub_140865dd0(rax_2)[0x8c], arg1) __tailcall

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cdfed0 s> result)
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143cdfed0)
    
    if (data_143cdfed0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        r8_2.b = 1
        data_143cdfec8 = (*(*rcx_6 + 0xb0))(rcx_6, u"FX.NiagaraComponentPool.Enable", r8_2)
        result = _Init_thread_footer(&data_143cdfed0)

int64_t* rcx_2 = data_143cdfec8

if (rcx_2 == 0)
    return result

jump(*(*rcx_2 + 0x90))
