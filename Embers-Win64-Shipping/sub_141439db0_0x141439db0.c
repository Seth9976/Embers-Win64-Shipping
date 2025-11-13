// 函数: sub_141439db0
// 地址: 0x141439db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbx = sx.q(*(arg1 + 0xe0))
int16_t* r12 = &data_143ce8560
int64_t rax = data_143f55740
int32_t r10 = 0
int64_t arg_8 = arg3

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == rax)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_141439e5a

int16_t* r8_1
TEB* gsbase

if (rbx s<= 0 || r10 == 0xffffffff)
label_141439e5a:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_8 = *(arg1 + 0xe8)
    
    if ((rcx_8.b & 1) != 0)
        rcx_8 = (rcx_8 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_8 + (sx.q(r10) << 1)

sub_1410e9550(arg2, &arg_8, r8_1, arg6)
int64_t* arg_30
int64_t* rdi = arg_30

if (*(rdi + 0xd7e) != 0 && *(*rdi + 8) s> 0)
    char rax_4
    int32_t rdx_2
    rax_4, rdx_2 = sub_142391f10(rdi)
    void* rax_5 = sub_1422e5d90(*rdi, sbb.d(rdx_2, rdx_2, rax_4 != 0) & 2)
    int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
    int32_t r8_2 = 0
    
    if (rbx_1 s> 0)
        int64_t rdx_5 = 0
        
        while (true)
            void* rax_7 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rax_7 = (rax_7 s>> 1) + arg1 + 0xd8
            
            if (*(rax_7 + (rdx_5 << 3)) == data_143f557f0)
                break
            
            r8_2 += 1
            rdx_5 += 1
            
            if (rdx_5 s>= rbx_1)
                goto label_141439f1e
    
    if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
    label_141439f1e:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
    else
        void* rcx_10 = *(arg1 + 0xe8)
        
        if ((rcx_10.b & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + arg1 + 0xe8
        
        r12 = rcx_10 + (sx.q(r8_2) << 1)
    
    sub_141083500(arg2, &arg_8, r12, *(rax_5 + 0x10))

int64_t result = sub_14143a820(arg1, arg2, arg_18, arg4, arg5, rdi)

if (*(arg1 + 0x12e) == 0xffff)
    return result

int64_t* rcx_22

if (rdi[0x2a9].d s< 3)
    int64_t* rax_18 = sub_14139bef0(arg2)
    uint64_t rdx_13 = zx.q(rdi[0x2a9].d)
    int128_t var_1b8
    __builtin_memset(&var_1b8, 0, 0x60)
    sub_1413aa7b0(rax_18, rdx_13, 1, *(rax_18 + 0x1d9), &var_1b8)
    int128_t var_168
    
    if (sub_14141f470(rdi) != 0)
        var_168:8.q = *(sub_14141f470(rdi) + 8)
    int64_t* rcx_26 = data_143f0f180
    int64_t* var_1e8_1
    var_1e8_1.d = 0
    void* var_1d0
    (*(*rcx_26 + 0xf8))(rcx_26, &var_1d0, &var_1b8, &data_143ec5180, var_1e8_1, 1)
    void* rbx_4 = var_1d0
    void* var_1c8 = rbx_4
    
    if (rbx_4 != 0)
        *(rbx_4 + 8) += 1
        rbx_4 = var_1c8
    
    sub_1405d1550(&var_1d0)
    sub_141083500(arg2, &arg_18, arg1 + 0x12e, rbx_4)
    rcx_22 = &var_1c8
else
    int64_t* rax_15 = sub_14139bef0(arg2)
    void var_158
    sub_1410ead70(&var_158)
    sub_1413aab70(rax_15, rdi[0x2a9].d, arg7, &var_158)
    int64_t var_50_1 = *sub_141096d10(rdi)
    int64_t* rcx_19 = data_143f0f180
    (*(*rcx_19 + 0xf8))(rcx_19, &arg_30, &var_158, &data_143ec50d0, 0, 1)
    int64_t* rbx_3 = arg_30
    int64_t* var_1d8 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        rbx_3 = var_1d8
    
    sub_1405d1550(&arg_30)
    sub_141083500(arg2, &arg_18, arg1 + 0x12e, rbx_3)
    rcx_22 = &var_1d8

return sub_1405d1550(rcx_22)
