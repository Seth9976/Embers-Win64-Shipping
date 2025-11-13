// 函数: sub_141935a40
// 地址: 0x141935a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
bool cond:0 = data_143eff5c6 == 0
int32_t arg_8 = 0
int32_t rbx_1

if (cond:0)
    TEB* gsbase
    
    if (data_143eff6d8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143eff6d8)
        
        if (data_143eff6d8 == 0xffffffff)
            data_143eff6c8 = 0
            data_143eff6d0.q = 0
            atexit(sub_142cee5d0)
            _Init_thread_footer(&data_143eff6d8)
    
    int32_t i = data_143eff6d0
    
    if (i == 0)
        do
            int32_t rax_4 = data_143effd80()
            int64_t rbx_3 = sx.q(data_143eff6d0)
            int32_t rcx_4 = (rbx_3 + 1).d
            bool cond:2_1 = rcx_4 s<= data_143eff6d4
            data_143eff6d0 = rcx_4
            
            if (not(cond:2_1))
                sub_1405a4cf0(&data_143eff6c8)
            
            *(data_143eff6c8 + (rbx_3 << 2)) = rax_4
            i = data_143eff6d0
        while (i s< 0x400)
    
    int64_t r10_1 = data_143eff6c8
    rbx_1 = *(r10_1 + (sx.q(i - 1) << 2))
    
    if (0 != 0)
        memmove(r10_1 + (sx.q(i - 1) << 2), r10_1 + (sx.q(i) << 2), 0 << 2)
        i = data_143eff6d0
    
    data_143eff6d0 = i - 1
    sub_1405dac90(&data_143eff6c8)
    arg_8 = rbx_1
else
    int64_t r8_1 = sx.q(data_1439c74d0)
    int32_t rbp_1
    
    if (0x400 - r8_1.d s<= 1)
        memcpy(&arg_8, &data_143efdd00 + (r8_1 << 2), (0x400 - r8_1.d) << 2)
        data_143f00488(0x400, &data_143efdd00)
        rbp_1 = 1 - (0x400 - r8_1.d)
        memcpy(&(&arg_8)[sx.q(0x400 - r8_1.d)], &data_143efdd00, rbp_1 << 2)
        rbx_1 = arg_8
    else
        rbx_1 = *(&data_143efdd00 + (r8_1 << 2))
        rbp_1 = (r8_1 + 1).d
        arg_8 = rbx_1
    
    data_1439c74d0 = rbp_1

int32_t* rax_11 = *arg2
data_143f004d8(zx.q(rbx_1), zx.q(*rax_11), &rax_11[1], zx.q(arg2[1].d - 4))
int32_t rcx_9 = arg_8
*arg1 = rcx_9
int32_t arg_10 = 0
data_143effdd8(rcx_9, 0x8b82, &arg_10)

if (arg_10 == 1)
    int64_t rax_12
    rax_12.b = 1
    return rax_12

int64_t var_38
sub_140a2e390(&var_38, u"Failed to link program. Current total programs:%d", zx.q(data_143eff66c))
int64_t rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rbx_4 = data_143eff788

if (data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

uint32_t rax_13
rax_13.b = *(rbx_4 + (rdi << 2)) == 1
return rax_13
