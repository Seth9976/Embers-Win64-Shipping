// 函数: sub_14123a6b0
// 地址: 0x14123a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = &data_143ce8560
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r10 = 0
int64_t arg_8 = *(arg2 + 0x188)

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f55740)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_14123a755

int16_t* r8_1
TEB* gsbase

if (rbx s<= 0 || r10 == 0xffffffff)
label_14123a755:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_12 = *(arg1 + 0xe8)
    
    if ((rcx_12.b & 1) != 0)
        rcx_12 = (rcx_12 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_12 + (sx.q(r10) << 1)

sub_1410e9550(arg2, &arg_8, r8_1, &arg3[2])

if (*(arg3 + 0xd7e) != 0 && *(*arg3 + 8) s> 0)
    char rax_5
    int32_t rdx_2
    rax_5, rdx_2 = sub_142391f10(arg3)
    void* rax_6 = sub_1422e5d90(*arg3, sbb.d(rdx_2, rdx_2, rax_5 != 0) & 2)
    int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
    int32_t r8_2 = 0
    
    if (rbx_1 s> 0)
        int64_t rdx_5 = 0
        
        while (true)
            void* rax_8 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rax_8 = (rax_8 s>> 1) + arg1 + 0xd8
            
            if (*(rax_8 + (rdx_5 << 3)) == data_143f557f0)
                break
            
            r8_2 += 1
            rdx_5 += 1
            
            if (rdx_5 s>= rbx_1)
                goto label_14123a814
    
    if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
    label_14123a814:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
    else
        void* rcx_14 = *(arg1 + 0xe8)
        
        if ((rcx_14.b & 1) != 0)
            rcx_14 = (rcx_14 s>> 1) + arg1 + 0xe8
        
        r14 = rcx_14 + (sx.q(r8_2) << 1)
    
    sub_141083500(arg2, &arg_8, r14, *(rax_6 + 0x10))

int64_t* rcx_9 = *(arg4 + 0x20)
int32_t var_58
(*(*rcx_9 + 0x10))(rcx_9, &var_58)
int32_t var_50

if (*(*(arg4 + 0x20) + 0x13c) == 0)
    var_58.q = *(arg3 + 0x60c)
    var_50 = *(arg3 + 0x614)

int64_t zmm0_1
zmm0_1.d = var_58.d f+ arg3[0xc0].d
float var_54
float zmm1 = var_54 f+ *(arg3 + 0x604)
int64_t rax_14 = *(arg2 + 0x188)
int32_t var_48 = zmm0_1.d
zmm0_1.d = var_50.d f+ arg3[0xc1].d
float var_44 = zmm1
float var_4c
float var_3c = var_4c * 1.03527617f
arg_8 = rax_14
int32_t var_40 = zmm0_1.d
sub_1405d0e10(arg2, &arg_8, arg1 + 0x130, &var_48, 0)
arg_8 = *(arg2 + 0x188)
int128_t var_38 = zx.o(0)
return sub_1405d0e10(arg2, &arg_8, arg1 + 0x136, &var_38, 0)
