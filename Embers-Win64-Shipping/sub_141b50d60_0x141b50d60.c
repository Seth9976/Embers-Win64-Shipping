// 函数: sub_141b50d60
// 地址: 0x141b50d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg3
int32_t r12 = arg4
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f2ecd8 s> *rdi_1)
    _Init_thread_header(&data_143f2ecd8)
    
    if (data_143f2ecd8 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_17 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.HDR.Display.ColorGamut", r8_4)
        int64_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0
        else
            int64_t rdx_6 = *rax_17
            rax_18 = (*(rdx_6 + 0x58))(rax_17, rdx_6)
        
        data_143f2ecd0 = rax_18
        _Init_thread_footer(&data_143f2ecd8)

if (data_143f2ece8 s> *rdi_1)
    _Init_thread_header(&data_143f2ece8)
    
    if (data_143f2ece8 == 0xffffffff)
        int64_t* rcx_13 = data_143db18d0
        
        if (rcx_13 == 0)
            sub_140a53c40()
            rcx_13 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_20 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.HDR.Display.OutputDevice", r8_5)
        int64_t rax_15
        
        if (rax_20 == 0)
            rax_15 = 0
        else
            int64_t rdx_7 = *rax_20
            rax_15 = (*(rdx_7 + 0x58))(rax_20, rdx_7)
        
        data_143f2ece0 = rax_15
        _Init_thread_footer(&data_143f2ece8)

char rax_3 = sub_1419a4730()
void* rdi_2 = data_143f2ecd0
int32_t r14

if (rdi_2 == 0)
    r14 = 0
else if (data_143de5480 == 0)
    r14 = *rdi_2
else
    int64_t rcx
    rcx.b = GetCurrentThreadId() != data_143de5470
    r14 = *(rdi_2 + (rcx << 2))

void* rdi_3 = data_143f2ece0
int32_t rdi_4

if (rdi_3 == 0)
    rdi_4 = 0
else if (data_143de5480 == 0)
    rdi_4 = *rdi_3
else
    int64_t rcx_1
    rcx_1.b = GetCurrentThreadId() != data_143de5470
    rdi_4 = *(rdi_3 + (rcx_1 << 2))

int64_t rbp

if (arg2 == 0)
    rbp.b = 0
else
    int32_t rcx_2
    rcx_2.b = *(arg2 + 0xac) == data_1439c7a4c
    
    if (rcx_2 != zx.d(rax_3))
        rbp.b = 1
    else if (sub_1419767f0() == 0)
        if (sub_1419767d0() == 0 || rax_3 == 0
                || (*(arg2 + 0xb4) == r14 && *(arg2 + 0xb8) == rdi_4))
            rbp.b = 0
        else
            rbp.b = 1
    else if (rax_3 == 0 || (*(arg2 + 0xb4) == r14 && *(arg2 + 0xb8) == rdi_4))
        rbp.b = 0
    else
        rbp.b = 1

uint32_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    result = sub_140a80f80()
    
    if (result.b == 0 && arg2 != 0 && (rbp.b != 0 || *(arg2 + 0x9c) != r12 || *(arg2 + 0x98) != r15
            || *(arg2 + 0xa9) != arg5 || *(arg2 + 0x50) == 0))
        data_14399fa38()
        sub_1419a21e0(0)
        
        if (r15 u<= 8)
            r15 = 8
        
        if (r12 u<= 8)
            r12 = 8
        
        if (r15 u> 0x4000)
            r15 = 0x4000
        
        *(arg2 + 0x98) = r15
        
        if (r12 u> 0x4000)
            r12 = 0x4000
        
        *(arg2 + 0xa0) = r15
        *(arg2 + 0x9c) = r12
        *(arg2 + 0xa4) = r12
        void var_78
        int128_t* rax_10 = sub_141b51d30(&var_78, r15, r12)
        *(arg2 + 0x10) = *rax_10
        *(arg2 + 0x20) = rax_10[1]
        *(arg2 + 0x30) = rax_10[2]
        int128_t zmm1_1 = rax_10[3]
        *(arg2 + 0xa9) = arg5
        *(arg2 + 0x40) = zmm1_1
        int32_t rax_11 = data_1439c7a4c
        
        if (rax_3 == 0)
            rax_11 = *(arg2 + 0xb0)
        
        *(arg2 + 0xac) = rax_11
        *(arg2 + 0xb4) = r14
        *(arg2 + 0xb8) = rdi_4
        sub_140920c10(arg1 + 0x48, arg2 + 0x50)
        void* rcx_5 = *(arg2 + 0x50)
        
        if (rcx_5 == 0)
            int64_t* rcx_7 = data_143f0f180
            void arg_10
            (*(*rcx_7 + 0x3b0))(rcx_7, &arg_10, *(arg2 + 0x90), zx.q(r15), r12, arg5, 
                *(arg2 + 0xac))
            sub_1405d1600(arg2 + 0x50, &arg_10)
            sub_1405d1550(&arg_10)
        else
            if (0 == *(rcx_5 + 8))
                *(rcx_5 + 8) = 0
            else
                *(rcx_5 + 8)
            
            int64_t* rcx_6 = data_143f0f180
            char var_90
            var_90.d = *(arg2 + 0xac)
            int32_t var_98
            var_98.b = arg5
            (*(*rcx_6 + 0x3b8))(rcx_6, *(arg2 + 0x50), zx.q(r15), zx.q(r12), var_98, var_90)
        
        sub_140920c10(arg1 + 0x60, arg2 + 0x50)
        return data_14399fa40()

return result
