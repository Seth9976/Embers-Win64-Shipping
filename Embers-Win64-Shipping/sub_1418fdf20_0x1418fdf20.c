// 函数: sub_1418fdf20
// 地址: 0x1418fdf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*(arg1 + 0x1ac)
*(arg1 + 0x1ac) = arg6
int64_t r15
r15.b = 0

if (data_1439c7188 != 1 || *(arg1 + 0x148) == 0)
    void* rax_9 = *(arg1 + 0x50)
    void* rsi_1 = arg1 + 0x20
    void* r9_2 = rsi_1
    
    if (rax_9 != 0)
        r9_2 = rax_9
    
    int32_t* rax_10 = sub_1418e1230(arg2 + 0x248, *(r9_2 + (sx.q(*(arg1 + 0x190)) << 3)), 0)
    void* rbx_2 = *(rsi_1 + 0x30)
    int64_t var_b8_1 = 1
    int32_t rcx_6 = *rax_10
    int32_t var_58_1 = 1
    int128_t var_68 = 1.o
    int32_t rax_11 = sub_1418e1d20(rcx_6)
    
    if (rbx_2 != 0)
        rsi_1 = rbx_2
    
    sub_1418c0f40(*(arg3 + 0x40), *(rsi_1 + (sx.q(*(arg1 + 0x190)) << 3)), rax_11, 5, &var_68)
    *rax_10 = 0
else
    int32_t rax_3 = sub_1418d8cc0(*(arg1 + 0x198), arg1 + 0x1b0)
    *(arg1 + 0x190) = rax_3
    
    if (rax_3 == 0xffffffff)
        r15.b = 1
    else
        void* rcx_1 = *(arg1 + 0x198)
        int32_t rax_4 = *(arg1 + 0x180)
        int32_t rdi_1 = *(rcx_1 + 0x28)
        int32_t rbx_1 = *(rcx_1 + 0x2c)
        
        if (rax_4 u<= rdi_1)
            rdi_1 = rax_4
        
        int32_t rax_5 = *(arg1 + 0x184)
        
        if (rax_5 u<= rbx_1)
            rbx_1 = rax_5
        
        sub_1418e9390(arg2, u"CopyImageToBackBuffer", data_14399f640)
        void* rax_6 = *(arg1 + 0x50)
        void* rdx_1 = arg1 + 0x20
        
        if (rax_6 != 0)
            rdx_1 = rax_6
        
        int64_t r9_1 = *(rdx_1 + (sx.q(*(arg1 + 0x190)) << 3))
        rdx_1.b = 1
        sub_1418f6fb0(arg3, rdx_1.b, *(*(arg1 + 0x148) + 0x80), r9_1, *(arg1 + 0x180), 
            *(arg1 + 0x184), rdi_1, rbx_1)
        sub_1418e9300(arg2)

sub_1418bdd70(arg3)
sub_1418be9d0(data_143efb320)
int64_t* rsi_2 = *(*(*(arg1 + 0x18) + 0x1a50) + 0x240)
uint64_t result

if (r15.b != 0)
    sub_1418ef260(arg4, arg3, 0, 0)
    sub_141902370(arg1, *(arg1 + 0x1a0))
    sub_1418c8680(*(arg1 + 0x18))
    sub_1418c2e90(*(arg1 + 0x18))
    result.b = 0
else
    if (data_1439c7188 == 1)
        sub_1418bb120(arg3, 0x2000, *(arg1 + 0x1b0))
    
    void* rdx_7 = arg1 + 0x60
    void* rax_13 = *(rdx_7 + 0x30)
    
    if (rax_13 != 0)
        rdx_7 = rax_13
    
    sub_1418c8370(rsi_2, *(rdx_7 + (sx.q(*(arg1 + 0x190)) << 3)))
    int32_t var_c8 = 0
    char rax_15 = 1
    int64_t* rbx_3 = *(arg1 + 0x1b8)
    
    if (rbx_3 != 0)
        rax_15 = (*(*rbx_3 + 0x18))(rbx_3, &var_c8)
    
    void* r14
    r14.b = 0
    
    if (rax_15 == 0 || (data_1439c7188 != 1 && *(arg1 + 0x140) == 0))
        goto label_1418fe229
    
    int64_t var_b8_2 = arg5
    void** const var_88_1 = &data_142d42ed8
    int64_t var_a8[0x2]
    var_a8[0] = sub_1418f6840
    int64_t var_98_1 = 0
    int128_t var_80_1 = arg4.o
    char rax_18
    int64_t r9_3
    rax_18, r9_3 = sub_1418f8b90(arg1, &var_a8)
    
    if (rax_18 != 0)
        r14.b = 1
    else
        sub_140af98a0("Unknown", 0x397, u"Swapchain present failed!", r9_3)
        sub_140afbb40()
        r14.b = 0
    
    if (rbx_3 == 0)
        goto label_1418fe253
    
    int64_t* rcx_14 = *(arg1 + 0x1b8)
    (*(*rcx_14 + 0x20))(rcx_14)
label_1418fe229:
    
    if (rbx_3 == 0)
    label_1418fe253:
        TEB* gsbase
        
        if (data_143efbca0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143efbca0)
            
            if (data_143efbca0 == 0xffffffff)
                InitializeCriticalSection(&data_143efbc78)
                SetCriticalSectionSpinCount(&data_143efbc78, 0xfa0)
                atexit(&data_142ced7f0)
                _Init_thread_footer(&data_143efbca0)
        
        EnterCriticalSection(&data_143efbc78)
        void* rax_22 = *(arg1 + 0x1c0)
        
        if (rax_22 != 0 && *(rax_22 + 0x2c) == 4 && *(arg1 + 0x1c8) == *(rax_22 + 0x98)
                && data_143efb314 == 0)
            void* rdx_11 = *(arg1 + 0x1c0)
            sub_1418c9280(*(*(rdx_11 + 0xa8) + 0x58), rdx_11, 0x41200000)
        
        LeaveCriticalSection(&data_143efbc78)
        void* rdi_3 = *(*(arg1 + 0x18) + 0x1558)
        EnterCriticalSection(rdi_3 + 0x18)
        *(arg1 + 0x1c0) = *(rdi_3 + 0x40)
        *(arg1 + 0x1c8) = *(rdi_3 + 0x48)
        
        if (rdi_3 != -0x18)
            LeaveCriticalSection(rdi_3 + 0x18)
    
    if (rsi_2[0xf] != 0)
        sub_1418c86c0(rsi_2, 0, 0)
    
    void* rax_27 = rsi_2[0xe]
    
    if (rax_27 != 0)
        if (rsi_2[0xf] != 0)
            sub_1418c86c0(rsi_2, 0, 0)
            rax_27 = rsi_2[0xe]
        
        if (*(rax_27 + 0x2c) - 1 u> 1)
            sub_1418c2ee0(rsi_2)
    
    *(arg1 + 0x1a8) += 1
    result = zx.q(r14.b)
    *(arg1 + 0x190) = 0xffffffff
    void* rcx_24 = data_143efbb58
    *(rcx_24 + 0x18) += 1

__security_check_cookie(rax_1 ^ &var_108)
return result
