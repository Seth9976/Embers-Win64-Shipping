// 函数: sub_1419016b0
// 地址: 0x1419016b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg6

if (rdi == 0)
    int64_t rdi_1 = 0
    TEB* gsbase
    
    if (data_143efbcc0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143efbcc0)
        
        if (data_143efbcc0 == 0xffffffff)
            int64_t* rcx_11 = data_143db18d0
            
            if (rcx_11 == 0)
                sub_140a53c40()
                rcx_11 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_11 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.DefaultBackBufferPixelFormat", r8_1)
            int64_t rax_9
            
            if (rax_11 == 0)
                rax_9 = 0
            else
                rax_9 = (*(*rax_11 + 0x58))(rax_11)
            
            data_143efbcb8 = rax_9
            _Init_thread_footer(&data_143efbcc0)
    
    int64_t rsi_1 = data_143efbcb8
    
    if (data_143de5480 != 0)
        rdi_1.b = GetCurrentThreadId() != data_143de5470
    
    rdi = sub_142295d40(sub_14229df30(*(rsi_1 + (rdi_1 << 2))))

if (*(arg2 + 0x180) == arg3 && *(arg2 + 0x184) == arg4 && *(arg2 + 0x188) == arg5)
    return 

sub_1419a21e0(0)
int64_t var_48 = arg2
int32_t var_40_1 = arg3
int32_t var_3c_1 = arg4
int32_t var_34_1 = rdi

if (sub_140a80f40() == 0)
    uint32_t rax_6
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
        void var_30
        int64_t* rax_7 = sub_1418f7cf0(&var_30, nullptr, 0xff)
        void* rcx_8 = *rax_7
        *(rcx_8 + 0x10) = var_48.o
        *(rcx_8 + 0x20) = arg5.q
        void* rcx_9 = *rax_7
        int32_t r8 = rax_7[2].d
        int64_t* rdx_4 = rax_7[1]
        int64_t* rbx_1 = *(rcx_9 + 0x30)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_2 += 1
            rbx_1 = arg_10
        
        sub_140778000(rcx_9, rdx_4, r8, 1)
        
        if (rbx_1 != 0)
            int32_t rax_8 = *rdi_2
            *rdi_2 -= 1
            
            if (rax_8 == 1)
                sub_140a2f6e0(arg_10)
    else
        *(arg2 + 0x180) = arg3
        *(arg2 + 0x184) = arg4
        *(arg2 + 0x188) = arg5
        var_48.o = zx.o(0)
        sub_1418f8350(arg2, &var_48)
        *(arg2 + 0x18c) = rdi
        sub_1418f7610(arg2, &var_48)
else
    *(arg2 + 0x180) = arg3
    *(arg2 + 0x184) = arg4
    *(arg2 + 0x188) = arg5
    int128_t var_58 = zx.o(0)
    sub_1418f8350(arg2, &var_58)
    *(arg2 + 0x18c) = rdi
    sub_1418f7610(arg2, &var_58)

sub_1419a21e0(0)
