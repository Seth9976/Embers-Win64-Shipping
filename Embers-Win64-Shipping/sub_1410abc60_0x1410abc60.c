// 函数: sub_1410abc60
// 地址: 0x1410abc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410e0370(arg2[8])
int128_t var_38 = *arg4
sub_1410b7780(arg2, &var_38, zx.o(0), 0x3f800000)

if (*(arg1 + 0xe8) != 2)
    void* rbp_1 = arg2[8]
    int64_t rax_15 = arg3[2]
    int64_t* rbx_9 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_46 = &rbx_9[1]
    
    if (rcx_46 u> *(rbp_1 + 0x38))
        sub_140b0e3d0(rbp_1 + 0x30, 0x10)
        rbx_9 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_46 = &rbx_9[1]
    
    *(rbp_1 + 0x30) = rcx_46
    *rbx_9 = rax_15
    void*** rcx_50 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_50[6]
    
    if (rax_16 u> *(rbp_1 + 0x38))
        sub_140b0e3d0(rbp_1 + 0x30, 0x38)
        rcx_50 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_50[6]
    
    *(rbp_1 + 0x30) = rax_16
    void**** rax_17 = *(rbp_1 + 8)
    *(rbp_1 + 0x14) += 1
    *rax_17 = rcx_50
    *(rbp_1 + 8) = &rcx_50[1]
    rcx_50[1] = 0
    *rcx_50 = &data_142da7798
    rcx_50[2].d = 1
    rcx_50[3] = rbx_9
    rcx_50[4] = 2
    rcx_50[5] = 0
    
    if (arg6 == 0)
        int64_t rax_23 = arg3[2]
        void* rdx_7 = arg2[8]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107ac20(arg1, rdx_7, arg2, arg5, rax_23)
            else
                sub_141079a60(arg1, rdx_7, arg2, arg5, rax_23)
        else if (arg7 == 0)
            sub_141075de0(arg1, rdx_7, arg2, arg5, rax_23)
        else
            sub_141074c20(arg1, rdx_7, arg2, arg5, rax_23)
    else if (arg6 == 1)
        int64_t rax_22 = arg3[2]
        void* rdx_6 = arg2[8]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a220(arg1, rdx_6, arg2, arg5, rax_22)
            else
                sub_141079060(arg1, rdx_6, arg2, arg5, rax_22)
        else if (arg7 == 0)
            sub_1410753e0(arg1, rdx_6, arg2, arg5, rax_22)
        else
            sub_141074220(arg1, rdx_6, arg2, arg5, rax_22)
    else if (arg6 == 2)
        int64_t rax_21 = arg3[2]
        void* rdx_5 = arg2[8]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a4a0(arg1, rdx_5, arg2, arg5, rax_21)
            else
                sub_1410792e0(arg1, rdx_5, arg2, arg5, rax_21)
        else if (arg7 == 0)
            sub_141075660(arg1, rdx_5, arg2, arg5, rax_21)
        else
            sub_1410744a0(arg1, rdx_5, arg2, arg5, rax_21)
    else if (arg6 == 3)
        int64_t rax_20 = arg3[2]
        void* rdx_4 = arg2[8]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a720(arg1, rdx_4, arg2, arg5, rax_20)
            else
                sub_141079560(arg1, rdx_4, arg2, arg5, rax_20)
        else if (arg7 == 0)
            sub_1410758e0(arg1, rdx_4, arg2, arg5, rax_20)
        else
            sub_141074720(arg1, rdx_4, arg2, arg5, rax_20)
    else if (arg6 == 4)
        int64_t rax_19 = arg3[2]
        void* rdx_3 = arg2[8]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a9a0(arg1, rdx_3, arg2, arg5, rax_19)
            else
                sub_1410797e0(arg1, rdx_3, arg2, arg5, rax_19)
        else if (arg7 == 0)
            sub_141075b60(arg1, rdx_3, arg2, arg5, rax_19)
        else
            sub_1410749a0(arg1, rdx_3, arg2, arg5, rax_19)
else
    TEB* gsbase
    
    if (data_143e3e648
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e3e648)
        
        if (data_143e3e648 == 0xffffffff)
            sub_140b58260(&data_143e3e640, u"AsyncStartFence", 1)
            _Init_thread_footer(&data_143e3e648)
    
    int64_t* rcx_3 = data_143f0f180
    int64_t arg_8
    (*(*rcx_3 + 0x98))(rcx_3, &arg_8, &data_143e3e640)
    void* rbp = arg2[8]
    int64_t rax_3 = arg3[2]
    int64_t r12_1 = arg_8
    int64_t* rbx_3 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_4 = &rbx_3[1]
    
    if (rcx_4 u> *(rbp + 0x38))
        sub_140b0e3d0(rbp + 0x30, 0x10)
        rbx_3 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
        rcx_4 = &rbx_3[1]
    
    *(rbp + 0x30) = rcx_4
    *rbx_3 = rax_3
    void*** rcx_8 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_8[6]
    
    if (rax_4 u> *(rbp + 0x38))
        sub_140b0e3d0(rbp + 0x30, 0x38)
        rcx_8 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_8[6]
    
    *(rbp + 0x30) = rax_4
    *(rbp + 0x14) += 1
    **(rbp + 8) = rcx_8
    *(rbp + 8) = &rcx_8[1]
    rcx_8[5] = r12_1
    rcx_8[1] = 0
    *rcx_8 = &data_142da7798
    rcx_8[2].d = 1
    rcx_8[3] = rbx_3
    rcx_8[4] = 2
    int64_t rbx_6 = arg_8
    void*** rcx_14 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_14[3]
    
    if (rax_7 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x20)
        rcx_14 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_14[3]
    
    data_143f02d74 += 1
    data_143f02d90 = rax_7
    *data_143f02d68 = rcx_14
    data_143f02d68 = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142f11608
    rcx_14[2] = rbx_6
    
    if (arg6 == 0)
        int64_t rax_14 = arg3[2]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107ac20(arg1, &data_143f02d60, arg2, arg5, rax_14)
                sub_1405d1550(&arg_8)
            else
                sub_141079a60(arg1, &data_143f02d60, arg2, arg5, rax_14)
                sub_1405d1550(&arg_8)
        else if (arg7 == 0)
            sub_141075de0(arg1, &data_143f02d60, arg2, arg5, rax_14)
            sub_1405d1550(&arg_8)
        else
            sub_141074c20(arg1, &data_143f02d60, arg2, arg5, rax_14)
            sub_1405d1550(&arg_8)
    else if (arg6 == 1)
        int64_t rax_13 = arg3[2]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a220(arg1, &data_143f02d60, arg2, arg5, rax_13)
                sub_1405d1550(&arg_8)
            else
                sub_141079060(arg1, &data_143f02d60, arg2, arg5, rax_13)
                sub_1405d1550(&arg_8)
        else if (arg7 == 0)
            sub_1410753e0(arg1, &data_143f02d60, arg2, arg5, rax_13)
            sub_1405d1550(&arg_8)
        else
            sub_141074220(arg1, &data_143f02d60, arg2, arg5, rax_13)
            sub_1405d1550(&arg_8)
    else if (arg6 == 2)
        int64_t rax_12 = arg3[2]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a4a0(arg1, &data_143f02d60, arg2, arg5, rax_12)
                sub_1405d1550(&arg_8)
            else
                sub_1410792e0(arg1, &data_143f02d60, arg2, arg5, rax_12)
                sub_1405d1550(&arg_8)
        else if (arg7 == 0)
            sub_141075660(arg1, &data_143f02d60, arg2, arg5, rax_12)
            sub_1405d1550(&arg_8)
        else
            sub_1410744a0(arg1, &data_143f02d60, arg2, arg5, rax_12)
            sub_1405d1550(&arg_8)
    else if (arg6 == 3)
        int64_t rax_11 = arg3[2]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a720(arg1, &data_143f02d60, arg2, arg5, rax_11)
                sub_1405d1550(&arg_8)
            else
                sub_141079560(arg1, &data_143f02d60, arg2, arg5, rax_11)
                sub_1405d1550(&arg_8)
        else if (arg7 == 0)
            sub_1410758e0(arg1, &data_143f02d60, arg2, arg5, rax_11)
            sub_1405d1550(&arg_8)
        else
            sub_141074720(arg1, &data_143f02d60, arg2, arg5, rax_11)
            sub_1405d1550(&arg_8)
    else if (arg6 != 4)
        sub_1405d1550(&arg_8)
    else
        int64_t rax_10 = arg3[2]
        
        if (*(arg1 + 0xf0) == 0)
            if (arg7 == 0)
                sub_14107a9a0(arg1, &data_143f02d60, arg2, arg5, rax_10)
                sub_1405d1550(&arg_8)
            else
                sub_1410797e0(arg1, &data_143f02d60, arg2, arg5, rax_10)
                sub_1405d1550(&arg_8)
        else if (arg7 == 0)
            sub_141075b60(arg1, &data_143f02d60, arg2, arg5, rax_10)
            sub_1405d1550(&arg_8)
        else
            sub_1410749a0(arg1, &data_143f02d60, arg2, arg5, rax_10)
            sub_1405d1550(&arg_8)

void* rsi_1 = arg2[8]
int64_t rax_24 = *arg3
int64_t* rbx_14 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_63 = &rbx_14[1]

if (rcx_63 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x10)
    rbx_14 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_63 = &rbx_14[1]

*(rsi_1 + 0x30) = rcx_63
*rbx_14 = rax_24
void*** rcx_67 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_25 = &rcx_67[5]

if (rax_25 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x30)
    rcx_67 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_67[5]

*(rsi_1 + 0x30) = rax_25
void**** rax_26 = *(rsi_1 + 8)
*(rsi_1 + 0x14) += 1
*rax_26 = rcx_67
*(rsi_1 + 8) = &rcx_67[1]
rcx_67[1] = 0
*rcx_67 = &data_142d549c8
rcx_67[2].d = 1
rcx_67[3] = rbx_14
rcx_67[4].d = 0
return &data_142d549c8
