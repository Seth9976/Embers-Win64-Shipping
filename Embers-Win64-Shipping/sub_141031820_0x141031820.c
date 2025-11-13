// 函数: sub_141031820
// 地址: 0x141031820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg1 + 0x130)
int32_t rbx

if (i_3 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_3)
    rbx = temp0_1
    int32_t arg_8 = rbx
else
    rbx = i_3 + 0x20

if (i_3 != 0)
    TEB* gsbase
    int32_t* r14_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    int32_t i
    
    do
        void* rsi_1 = *(arg1 + (zx.q(rbx) << 3) + 0x140)
        
        if (data_143e2c378 s> *r14_2)
            _Init_thread_header(&data_143e2c378)
            
            if (data_143e2c378 == 0xffffffff)
                int64_t* rcx_13 = data_143db18d0
                
                if (rcx_13 == 0)
                    sub_140a53c40()
                    rcx_13 = data_143db18d0
                
                int64_t r8_2
                r8_2.b = 1
                data_143e2c370 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.ProfileGPU.ShowTransitions", r8_2)
                _Init_thread_footer(&data_143e2c378)
        
        int64_t* rcx_1 = data_143e2c370
        (*(*rcx_1 + 0x90))(rcx_1)
        
        if (arg2 == 2)
            sub_14104ba50(rsi_1 + 0x250, 1)
        
        i = not.d(1 << rbx.b) & i_3
        i_3 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rbx = temp0_2
            int32_t var_38_1 = rbx
        else
            rbx = 0x20
    while (i != 0)

int64_t* r14_3 = arg3

if (r14_3 == 0)
    return 

int32_t i_2 = *(arg1 + 0x130)
int32_t rdi

if (i_2 != 0)
    uint64_t rflags_3
    int32_t temp0_3
    temp0_3, rflags_3 = _bit_scan_forward(i_2)
    rdi = temp0_3
    arg3.d = rdi
else
    rdi = i_2 + 0x20

if (i_2 != 0)
    int32_t i_1
    
    do
        void* rbx_1 = *(arg1 + (zx.q(rdi) << 3) + 0x140)
        sub_14101f080(*(rbx_1 + 0x138) + 0x5e8, rbx_1)
        void** var_28
        sub_141022330(rbx_1, &var_28, 0)
        var_28 = &data_142efcd90
        int64_t* var_20
        
        if (var_20 != 0)
            int32_t rax_7 = *(var_20 + 0x14)
            *(var_20 + 0x14) -= 1
            
            if (rax_7 == 1)
                sub_141011360(var_20, rax_7.b)
        
        i_1 = not.d(1 << rdi.b) & i_2
        i_2 = i_1
        
        if (i_1 != 0)
            uint64_t rflags_4
            int32_t temp0_5
            temp0_5, rflags_4 = _bit_scan_forward(i_1)
            rdi = temp0_5
            int32_t var_30_1 = rdi
        else
            rdi = 0x20
    while (i_1 != 0)

(*(*r14_3 + 0x10))(r14_3)
sub_1410644f0(r14_3, 0, r14_3[7])
sub_141037da0(r14_3)
r14_3[7] += 1
