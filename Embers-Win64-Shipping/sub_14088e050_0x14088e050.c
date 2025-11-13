// 函数: sub_14088e050
// 地址: 0x14088e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg5
int64_t* rbx = *(r14 + 0x160)

if (rbx != 0)
    rbx[1].d += 1

int64_t r11 = sx.q(*(arg4 + 0xe0))
int16_t* r15 = &data_143ce8560
int32_t rdi = 0
int32_t r8 = 0

if (r11 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143ce8d80)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r11)
            goto label_14088e103

int16_t* rdx_1
TEB* gsbase

if (r11 s<= 0 || r8 == 0xffffffff)
label_14088e103:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_5 = *(arg4 + 0xe8)
    
    if ((rcx_5.b & 1) != 0)
        rcx_5 = (rcx_5 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_5 + (sx.q(r8) << 1)

int16_t rax_3 = *rdx_1

if (rax_3 != 0xffff)
    sub_140891ab0(arg6, rbx, zx.d(rax_3))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_5
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_5 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

int64_t r10_2 = sx.q(*(arg4 + 0xe0))
int64_t rbx_1 = *(r14 + 0x158)

if (r10_2 s> 0)
    int64_t rdx_4 = 0
    
    while (true)
        void* rcx_9 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_9 = (rcx_9 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_9 + (rdx_4 << 3)) == data_143ce8e20)
            break
        
        rdi += 1
        rdx_4 += 1
        
        if (rdx_4 s>= r10_2)
            goto label_14088e225

if (r10_2 s<= 0 || rdi == 0xffffffff)
label_14088e225:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_13 = *(arg4 + 0xe8)
    
    if ((rcx_13.b & 1) != 0)
        rcx_13 = (rcx_13 s>> 1) + arg4 + 0xe8
    
    r15 = rcx_13 + (sx.q(rdi) << 1)

int16_t rax_13 = *r15

if (rax_13 != 0xffff)
    sub_140891ab0(arg6, rbx_1, zx.d(rax_13))

sub_14088d770(arg6, *(arg1 + 4), *(r14 + 0x180))
arg5.d = *(r14 + 0x188)
int32_t var_38 = *(arg1 + 8)
int16_t var_34 = *(arg1 + 0xc)
return sub_14088bf20(arg6, &var_38, &arg5)
