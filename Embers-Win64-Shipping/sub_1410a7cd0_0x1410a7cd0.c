// 函数: sub_1410a7cd0
// 地址: 0x1410a7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg2
arg2[8]
int64_t* rax = sub_1413a8300(&arg1[6], arg2)
void* rax_1 = sub_14139ce70(arg1)
int32_t rbx

if (rax_1 == 0)
    rbx = (data_143ec4fdc).d
else
    rbx = (*(rax_1 + 0x14)).d

int32_t rcx_3 = arg1[0x2b].d
int64_t rax_2 = *(r14 + 0x15a0)
int64_t rdi = *(arg1 + 0x44)
int64_t var_60 = rax_2
var_60.d = divs.dp.d(sx.q(rax_2.d), rcx_3)
var_60:4.d = divs.dp.d(sx.q(var_60:4.d), rcx_3)
int64_t rax_8 = *(r14 + 0x1598)
int64_t var_68 = rax_8
var_68.d = divs.dp.d(sx.q(rax_8.d), rcx_3)
uint64_t rcx_4 = zx.q(data_14401b1a0)
var_68:4.d = divs.dp.d(sx.q(var_68:4.d), rcx_3)
int64_t var_78 = var_68
int64_t var_70 = var_60
TEB* gsbase
void* r12 = *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3))

if (data_143e412f8 s> *(r12 + 0x14))
    _Init_thread_header(&data_143e412f8)
    
    if (data_143e412f8 == 0xffffffff)
        int64_t* rcx_60 = data_143db18d0
        
        if (rcx_60 == 0)
            sub_140a53c40()
            rcx_60 = data_143db18d0
        
        int64_t r8_15
        r8_15.b = 1
        int64_t* rax_39 = (*(*rcx_60 + 0xb0))(rcx_60, u"r.AmbientOcclusion.Compute", r8_15)
        
        if (rax_39 != 0)
            int64_t rdx_15 = *rax_39
            rax_39 = (*(rdx_15 + 0x58))(rax_39, rdx_15)
        
        data_143e412f0 = rax_39
        _Init_thread_footer(&data_143e412f8)

if (data_143e41308 s> *(r12 + 0x14))
    _Init_thread_header(&data_143e41308)
    
    if (data_143e41308 == 0xffffffff)
        int64_t* rcx_62 = data_143db18d0
        
        if (rcx_62 == 0)
            sub_140a53c40()
            rcx_62 = data_143db18d0
        
        int64_t r8_16
        r8_16.b = 1
        int64_t* rax_41 = (*(*rcx_62 + 0xb0))(rcx_62, u"r.GTAO.UseNormals", r8_16)
        
        if (rax_41 != 0)
            int64_t rdx_16 = *rax_41
            rax_41 = (*(rdx_16 + 0x58))(rax_41, rdx_16)
        
        data_143e41300 = rax_41
        _Init_thread_footer(&data_143e41308)

int32_t r13 = *(data_143e41300 + 4)
int32_t rax_20 = sub_141096bb0(*arg2)
sub_1410e0370(arg2[8])

if (arg1[0x2a].d != 1)
    void* rdx_9 = arg2[8]
    void* rax_30 = rdx_9 + 0x30
    int64_t* r12_9 = (*(rdx_9 + 0x30) + 7) & 0xfffffffffffffff8
    void* var_68_2 = rdx_9
    int64_t rcx_39 = rax[2]
    void* r8_8 = &r12_9[1]
    
    if (r8_8 u> *(rax_30 + 8))
        sub_140b0e3d0(rax_30, 0x10)
        rdx_9 = var_68_2
        rax_30 = rdx_9 + 0x30
        r12_9 = (*(rdx_9 + 0x30) + 7) & 0xfffffffffffffff8
        r8_8 = &r12_9[1]
    
    *rax_30 = r8_8
    *r12_9 = rcx_39
    void*** rcx_43 = (*rax_30 + 7) & 0xfffffffffffffff8
    void* r8_9 = &rcx_43[6]
    
    if (r8_9 u> *(rax_30 + 8))
        sub_140b0e3d0(rax_30, 0x38)
        rdx_9 = var_68_2
        rax_30 = rdx_9 + 0x30
        rcx_43 = (*(rdx_9 + 0x30) + 7) & 0xfffffffffffffff8
        r8_9 = &rcx_43[6]
    
    *rax_30 = r8_9
    void**** rax_31 = *(rdx_9 + 8)
    *(rdx_9 + 0x14) += 1
    *rax_31 = rcx_43
    *(rdx_9 + 8) = &rcx_43[1]
    rcx_43[3] = r12_9
    rcx_43[1] = 0
    *rcx_43 = &data_142da7798
    rcx_43[2].d = 1
    rcx_43[4] = 2
    rcx_43[5] = 0
    
    if (rax_20 == 0)
        int32_t* r9_10 = &var_78
        void* rdx_14 = arg2[8]
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_14107b140(arg1, rdx_14, arg2, r9_10, rdi, rbx)
        else
            sub_141079f80(arg1, rdx_14, arg2, r9_10, rdi, rbx)
    else if (rax_20 == 1)
        int32_t* r9_9 = &var_78
        void* rdx_13 = arg2[8]
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141076300(arg1, rdx_13, arg2, r9_9, rdi, rbx)
        else
            sub_141075140(arg1, rdx_13, arg2, r9_9, rdi, rbx)
    else if (rax_20 == 2)
        int32_t* r9_8 = &var_78
        void* rdx_12 = arg2[8]
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141077050(arg1, rdx_12, arg2, r9_8, rdi, rbx)
        else
            sub_141076b10(arg1, rdx_12, arg2, r9_8, rdi, rbx)
    else if (rax_20 == 3)
        int32_t* r9_7 = &var_78
        void* rdx_11 = arg2[8]
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141077da0(arg1, rdx_11, arg2, r9_7, rdi, rbx)
        else
            sub_141077860(arg1, rdx_11, arg2, r9_7, rdi, rbx)
    else if (rax_20 == 4)
        int32_t* r9_6 = &var_78
        void* rdx_10 = arg2[8]
        var_78.o = var_78.o
        
        if (r13 s< rax_20 - 3)
            sub_141078af0(arg1, rdx_10, arg2, r9_6, rdi, rbx)
        else
            sub_1410785b0(arg1, rdx_10, arg2, r9_6, rdi, rbx)
else
    if (data_143e41318 s> *(r12 + 0x14))
        _Init_thread_header(&data_143e41318)
        
        if (data_143e41318 == 0xffffffff)
            sub_140b58260(&data_143e41310, u"AsyncStartFence", 1)
            _Init_thread_footer(&data_143e41318)
    
    int64_t* rcx_8 = data_143f0f180
    (*(*rcx_8 + 0x98))(rcx_8, &var_60, &data_143e41310)
    void* rdx_8 = arg2[8]
    int64_t rax_22 = var_60
    int64_t* r12_3 = (*(rdx_8 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_23 = rdx_8 + 0x30
    void* var_68_1 = rdx_8
    int64_t rcx_10 = rax[2]
    void* r8_1 = &r12_3[1]
    
    if (r8_1 u> *(rax_23 + 8))
        sub_140b0e3d0(rax_23, 0x10)
        rdx_8 = var_68_1
        rax_23 = rdx_8 + 0x30
        r12_3 = (*(rdx_8 + 0x30) + 7) & 0xfffffffffffffff8
        r8_1 = &r12_3[1]
    
    *rax_23 = r8_1
    *r12_3 = rcx_10
    void*** rcx_14 = (*rax_23 + 7) & 0xfffffffffffffff8
    void* r8_2 = &rcx_14[6]
    
    if (r8_2 u> *(rax_23 + 8))
        sub_140b0e3d0(rax_23, 0x38)
        rdx_8 = var_68_1
        rax_23 = rdx_8 + 0x30
        rcx_14 = (*(rdx_8 + 0x30) + 7) & 0xfffffffffffffff8
        r8_2 = &rcx_14[6]
    
    *rax_23 = r8_2
    *(rdx_8 + 0x14) += 1
    **(rdx_8 + 8) = rcx_14
    *(rdx_8 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142da7798
    rcx_14[5] = rax_22
    rcx_14[2].d = 1
    rcx_14[3] = r12_3
    rcx_14[4] = 2
    int64_t r12_6 = var_60
    void*** rcx_20 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_27 = &rcx_20[3]
    
    if (rax_27 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x20)
        rcx_20 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_20[3]
    
    data_143f02d74 += 1
    data_143f02d90 = rax_27
    *data_143f02d68 = rcx_20
    data_143f02d68 = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142f11608
    rcx_20[2] = r12_6
    
    if (rax_20 == 0)
        int32_t* r9_5 = &var_78
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_14107aea0(arg1, &data_143f02d60, arg2, r9_5, rdi, rbx)
            sub_1405d1550(&var_60)
        else
            sub_141079ce0(arg1, &data_143f02d60, arg2, r9_5, rdi, rbx)
            sub_1405d1550(&var_60)
    else if (rax_20 == 1)
        int32_t* r9_4 = &var_78
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141076060(arg1, &data_143f02d60, arg2, r9_4, rdi, rbx)
            sub_1405d1550(&var_60)
        else
            sub_141074ea0(arg1, &data_143f02d60, arg2, r9_4, rdi, rbx)
            sub_1405d1550(&var_60)
    else if (rax_20 == 2)
        int32_t* r9_3 = &var_78
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141076db0(arg1, &data_143f02d60, arg2, r9_3, rdi, rbx)
            sub_1405d1550(&var_60)
        else
            sub_141076870(arg1, &data_143f02d60, arg2, r9_3, rdi, rbx)
            sub_1405d1550(&var_60)
    else if (rax_20 == 3)
        int32_t* r9_2 = &var_78
        var_78.o = var_78.o
        
        if (r13 s< 1)
            sub_141077b00(arg1, &data_143f02d60, arg2, r9_2, rdi, rbx)
            sub_1405d1550(&var_60)
        else
            sub_1410775c0(arg1, &data_143f02d60, arg2, r9_2, rdi, rbx)
            sub_1405d1550(&var_60)
    else if (rax_20 != 4)
        sub_1405d1550(&var_60)
    else
        int32_t* r9_1 = &var_78
        var_78.o = var_78.o
        
        if (r13 s< rax_20 - 3)
            sub_141078850(arg1, &data_143f02d60, arg2, r9_1, rdi, rbx)
            sub_1405d1550(&var_60)
        else
            sub_141078310(arg1, &data_143f02d60, arg2, r9_1, rdi, rbx)
            sub_1405d1550(&var_60)

void* rsi_1 = arg2[8]
int64_t rax_34 = *rax
int64_t* rbx_3 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_52 = &rbx_3[1]

if (rcx_52 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x10)
    rbx_3 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_52 = &rbx_3[1]

*(rsi_1 + 0x30) = rcx_52
*rbx_3 = rax_34
void*** rcx_56 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_35 = &rcx_56[5]

if (rax_35 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x30)
    rcx_56 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_35 = &rcx_56[5]

*(rsi_1 + 0x30) = rax_35
void**** rax_36 = *(rsi_1 + 8)
*(rsi_1 + 0x14) += 1
*rax_36 = rcx_56
*(rsi_1 + 8) = &rcx_56[1]
rcx_56[1] = 0
rcx_56[3] = rbx_3
*rcx_56 = &data_142d549c8
rcx_56[2].d = 1
rcx_56[4].d = 0
return &data_142d549c8
