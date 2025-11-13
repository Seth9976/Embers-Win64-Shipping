// 函数: sub_14088deb0
// 地址: 0x14088deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = *(arg5 + 0x160)

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t r10 = sx.q(*(arg4 + 0xe0))
int32_t r8 = 0

if (r10 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143ce8d80)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r10)
            goto label_14088df4e

void* rdx_1

if (r10 s<= 0 || r8 == 0xffffffff)
label_14088df4e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_6 = *(arg4 + 0xe8)
    
    if ((rcx_6.b & 1) != 0)
        rcx_6 = (rcx_6 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_6 + (sx.q(r8) << 1)

uint32_t result = zx.d(*rdx_1)

if (result.w != 0xffff)
    result = sub_140891ab0(arg6, rbx_1, zx.d(result.w))

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        if (rbx_1[2].b != 0)
            jump(**rbx_1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            jump(**rbx_1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_1 + 0xc))
            *(rbx_1 + 0xc) = 1
            z_1 = true
        else
            result = *(rbx_1 + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx_1) __tailcall

return result
