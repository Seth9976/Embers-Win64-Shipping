// 函数: sub_1420ec790
// 地址: 0x1420ec790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
sub_140b33630("EndOfFrameUpdates")
sub_140b34170("EventWait/EndOfFrameUpdates")

if (*(arg1 + 0x218) s> 0 || *(arg1 + 0x208) s> 0 || (*(arg1 + 0x11f) & 1) != 0)
    if ((*(arg1 + 0x11b) & 4) != 0)
        int64_t rdi_1 = 0
        int64_t* rbx_1 = *(arg1 + 0x200)
        uint64_t r14_2 = sx.q(*(arg1 + 0x208)) << 3 u>> 3
        
        if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x208))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx = *rbx_1
                
                if (rcx != 0)
                    (*(*rcx + 0x2a8))(rcx)
                
                rbx_1 = &rbx_1[1]
                rdi_1 += 1
            while (rdi_1 != r14_2)
        
        int64_t rdi_2 = 0
        int64_t* rbx_2 = *(arg1 + 0x210)
        uint64_t r14_4 = sx.q(*(arg1 + 0x218)) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0x218))])
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                int64_t* rcx_1 = *rbx_2
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x2a8))(rcx_1)
                
                rbx_2 = &rbx_2[1]
                rdi_2 += 1
            while (rdi_2 != r14_4)
    
    int64_t* rcx_2 = *(arg1 + 0x1b0)
    int64_t rbx_3
    
    if (rcx_2 == 0)
        rbx_3 = 0
    else
        rbx_3 = (*(*rcx_2 + 0x260))(rcx_2)
    
    int64_t* rax_10 = j_sub_140a82f30(8)
    int64_t var_68_1 = 0
    *rax_10 = rbx_3
    uint8_t rdx_1 = *(arg1 + 0x11b)
    uint8_t var_128
    char* var_110_1 = &var_128
    void** const var_58 = &data_142d42ed8
    var_128 = rdx_1 u>> 5 & 1
    int128_t var_50_1 = arg1.o
    char* (* var_78_1)(int64_t* arg1) = sub_1420de890
    int128_t zmm0_1 = var_58.o
    *(arg1 + 0x11b) = rdx_1 | 0x20
    char* (* var_b8_1)(int64_t* arg1) = sub_1420de890
    int128_t* var_a8_1 = nullptr
    int128_t var_98 = zmm0_1
    int128_t var_48
    int128_t var_88_1 = var_48
    TEB* gsbase
    
    if (data_143f48448
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f48448)
        
        if (data_143f48448 == 0xffffffff)
            atexit(sub_142d02390)
            _Init_thread_footer(&data_143f48448)
    
    int64_t rbx_4 = sx.q(*(arg1 + 0x208))
    int32_t rcx_10
    
    if (rbx_4.d == 0)
        rcx_10 = data_143f48440
    else
        int32_t rax_13 = data_143f48440
        int32_t rdx_2 = rbx_4.d + rax_13
        
        if (rdx_2 s> data_143f48444)
            sub_1405c5570(&data_143f48438, rdx_2)
            rax_13 = data_143f48440
        
        memcpy(data_143f48438 + (sx.q(rax_13) << 3), *(arg1 + 0x200), (rbx_4 << 3).d)
        rcx_10 = data_143f48440 + rbx_4.d
        data_143f48440 = rcx_10
    
    int32_t* rax_15 = data_143f48358
    void* var_120 = arg1
    void var_127
    
    if (*rax_15 s<= 0)
        sub_1420db420(&var_120)
        int32_t rcx_12 = data_143f48440
        int64_t (* var_e0)(int64_t arg1, int32_t* arg2) = sub_1420de880
        void* var_d8_1 = &var_127
        sub_14077b750(rcx_12, &var_e0, 0)
    else
        int64_t (* var_100)(int64_t* arg1) = j_sub_1420db420
        void** var_f8_1 = &var_120
        int64_t (* var_f0)(int64_t arg1, int32_t* arg2) = sub_1420de880
        void* var_e8_1 = &var_127
        sub_1420d7a60(rcx_10, &var_f0, &var_100, 0)
    int64_t rdi_3 = 0
    int64_t* rbx_5 = *(arg1 + 0x190)
    uint64_t r14_6 = sx.q(*(arg1 + 0x198)) << 3 u>> 3
    
    if (rbx_5 u> &rbx_5[sx.q(*(arg1 + 0x198))])
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            void* rcx_13 = *rbx_5
            
            if (rcx_13 != 0)
                sub_142140a10(rcx_13, 0)
            
            rbx_5 = &rbx_5[1]
            rdi_3 += 1
        while (rdi_3 != r14_6)
    
    *(arg1 + 0x11f) &= 0xfe
    int32_t rax_18 = data_143f48444
    data_143f48440 = 0
    
    if (rax_18 s< 0 && rax_18 != 0)
        sub_1405c5570(&data_143f48438, 0)
    
    char rax_19 = sub_140a80f40()
    
    if (rax_19 != 0)
    label_1420ecb24:
        int64_t* rcx_14 = *rax_10
        
        if (rcx_14 != 0)
            sub_1420711f0(rcx_14, &data_143f02b98, 1)
            sub_142052940(*rax_10, &data_143f02b98)
        
        j_sub_140a74f90(rax_10)
    else
        if (data_143f138f4 == rax_19)
            if (data_143de5480 == rax_19)
                goto label_1420ecb24
            
            uint32_t rax_20
            rax_20.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_20.b != 0)
                goto label_1420ecb24
        
        void var_d0
        void** rax_21 = sub_1420e0890(&var_d0, nullptr, 0xff)
        *(*rax_21 + 0x10) = rax_10
        void* rcx_19 = *rax_21
        int32_t r8_4 = rax_21[2].d
        int64_t* rdx_7 = rax_21[1]
        int64_t* rbx_6 = *(rcx_19 + 0x20)
        int64_t* var_118_2 = rbx_6
        int32_t* rdi_4 = &rbx_6[9]
        
        if (rbx_6 != 0)
            *rdi_4 += 1
            rbx_6 = var_118_2
        
        sub_1405a5630(rcx_19, rdx_7, r8_4, 1)
        
        if (rbx_6 != 0)
            int32_t rax_22 = *rdi_4
            *rdi_4 -= 1
            
            if (rax_22 == 1)
                sub_140a2f6e0(var_118_2)
    
    int128_t* rcx_21 = &var_98
    
    if (var_a8_1 != 0)
        rcx_21 = var_a8_1
    
    var_b8_1((*(*rcx_21 + 8))(rcx_21))
    
    if (var_b8_1 != 0)
        int128_t* rcx_23 = &var_98
        
        if (var_a8_1 != 0)
            rcx_23 = var_a8_1
        
        (*(*rcx_23 + 0x10))(rcx_23)

sub_140b38630()
int64_t result = sub_140b37f60("EndOfFrameUpdates")
__security_check_cookie(rax_1 ^ &var_148)
return result
