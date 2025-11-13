// 函数: sub_1410e7230
// 地址: 0x1410e7230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e55248 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_2
    r8_2, arg4 = _Init_thread_header(&data_143e55248)
    
    if (data_143e55248 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_14 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.ShaderPipelines", r8_2)
        
        if (rax_14 != 0)
            int64_t rdx_5 = *rax_14
            rax_14 = (*(rdx_5 + 0x58))(rax_14, rdx_5)
        
        data_143e55240 = rax_14
        arg4 = _Init_thread_footer(&data_143e55248)

int64_t rcx = sx.q((*U"1111")[sx.q(arg3)])

if (rcx.d u> 0x1e)
    if ((*(rcx * 0x14 + &data_143f025fc) & 1) != 0)
        goto label_1410e72ee
    
    goto label_1410e729d

int128_t var_28
void* var_18
void** rcx_4

if (test_bit(0x6562c800, rcx.d) || (*(rcx * 0x14 + &data_143f025fc) & 1) != 0)
label_1410e72ee:
    arg4.o = zx.o(0)
    rcx_4 = &var_28
    var_28 = arg4.o
else
label_1410e729d:
    int64_t rbx_1 = data_143e55240
    
    if (rbx_1 == 0)
        goto label_1410e72ee
    
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        rcx_2.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx_2 << 2)) == 0)
        goto label_1410e72ee
    
    void** rax_3
    rax_3, arg4 = sub_142127b90(arg1, &var_18, &data_143e525e0, arg2, arg4, 1)
    rcx_4 = rax_3

arg4.o = *rcx_4
*arg6 = arg4.o
int64_t rcx_5 = *arg6

if (rcx_5 == 0)
    char var_30_1 = 1
    int32_t var_38_1 = 0
    void** rax_10
    rax_10, arg4 = sub_142127800(arg1, &var_18, &data_143e54ce0, arg2, arg4)
    var_28:8.q = rax_10[1]
    var_28.q = *rax_10
else
    void* r9_2 = *(arg6 + 8)
    char rax_5 = data_143e54d28
    void* rdx_1
    
    if (rax_5 u>= 5)
        rdx_1 = nullptr
    else
        uint64_t rax_6 = zx.q(rax_5)
        rdx_1 = *(rcx_5 + (rax_6 << 3) + 8)
        
        if (rdx_1 == 0)
            rdx_1 = nullptr
        else
            if ((rdx_1.b & 1) != 0)
                rdx_1 = (rdx_1 s>> 1) + 8 + rcx_5 + (rax_6 << 3)
            
            int64_t r8_1
            
            if ((*(rdx_1 + 0xf8) & 1) == 0)
                r8_1 = *(rdx_1 + 0xf8)
            else
                r8_1 = *(*(*(r9_2 + 0x20) + 0x28) + (sx.q((*(rdx_1 + 0xf8) u>> 1).d) << 3))
            
            if (r8_1 != &data_143e54ce0)
                rdx_1 = nullptr
    
    var_28.q = rdx_1
    var_28:8.q = r9_2

arg4.o = var_28
*arg5 = arg4.o
return arg5
