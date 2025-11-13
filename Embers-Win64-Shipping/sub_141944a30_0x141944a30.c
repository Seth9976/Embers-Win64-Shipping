// 函数: sub_141944a30
// 地址: 0x141944a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
char* entry_r8
sub_14193a840(&data_1439c7890, &arg_20, entry_r8)
int64_t rax = sx.q(arg_20)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + data_1439c7890

int64_t* rcx = rax_3 + 0x20

if (rax_3 == 0)
    rcx = nullptr

void*** rax_4

if (rcx == 0)
    if (data_143eff930 == 0)
        int64_t var_158 = 0
        int32_t var_150_1 = 0
        int32_t var_148_1 = 0
        int64_t var_168_1 = 0
        void** const var_f8
        memset(&var_f8, 0, 0x90)
        sub_140b4c2a0(&var_f8)
        int64_t var_68_1 = 0
        var_f8 = &data_142d6ad48
        int64_t* var_60_1 = &var_158
        int64_t var_58_1 = 0
        sub_140b552b0(&var_f8, 1)
        var_f8[0x1b](&var_f8, 0)
        void var_48
        int512_t entry_zmm1
        sub_14192c670(&var_f8, &var_48, entry_zmm1)
        data_143eff930 = var_150_1
        sub_140b4cb40(&var_f8)
        int64_t rcx_7 = var_158
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    void*** rax_7 = j_sub_140a82f30(0x48)
    void*** rbx_1 = rax_7
    int32_t rcx_8 = 0x2901
    int32_t rsi_1 = 1
    
    if (rax_7 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = &data_142d3ff08
        rbx_1[1].d = 0
        *rbx_1 = &data_142ff7558
        *(rbx_1 + 0xc) = 0
        rbx_1[2].w = 0x100
        *(rbx_1 + 0x1c) = 0x2901
        rbx_1[4].d = 0x2901
        *(rbx_1 + 0x24) = 0x2901
        *(rbx_1 + 0x2c) = 0x2600
        rbx_1[6].d = 0x2600
        *(rbx_1 + 0x34) = 1
        *(rbx_1 + 0x3c) = 0x207
    
    uint32_t rdx_3 = zx.d(entry_r8[1])
    void*** var_160 = rbx_1
    int32_t rax_8
    
    if (rdx_3 == 1)
        rax_8 = 0x812f
    else if (rdx_3 == 2)
        rax_8 = 0x8370
    else if (rdx_3 == 3)
        rax_8 = 0x812d
    else
        rax_8 = 0x2901
    
    *(rbx_1 + 0x1c) = rax_8
    uint32_t rdx_6 = zx.d(entry_r8[2])
    int32_t rax_9
    
    if (rdx_6 == 1)
        rax_9 = 0x812f
    else if (rdx_6 == 2)
        rax_9 = 0x8370
    else if (rdx_6 == 3)
        rax_9 = 0x812d
    else
        rax_9 = 0x2901
    
    rbx_1[4].d = rax_9
    uint32_t rdx_9 = zx.d(entry_r8[3])
    
    if (rdx_9 == 1)
        rcx_8 = 0x812f
    else if (rdx_9 == 2)
        rcx_8 = 0x8370
    else if (rdx_9 == 3)
        rcx_8 = 0x812d
    
    *(rbx_1 + 0x24) = rcx_8
    rbx_1[5].d = int.d(fconvert.t(*(entry_r8 + 4)))
    *(rbx_1 + 0x34) = 1
    char rax_11 = *entry_r8
    char r12_1 = entry_r8[0x18]
    
    if (rax_11 == 1)
        *(rbx_1 + 0x2c) = 0x2601
        rbx_1[6].d = 0x2701
    else if (rax_11 == 2)
        int32_t rcx_13 = 0x2703
        *(rbx_1 + 0x2c) = 0x2601
        
        if (r12_1 != 0)
            rcx_13 = 0x2601
        
        rbx_1[6].d = rcx_13
    else if (rax_11 u<= 2 || rax_11 u> 4)
        *(rbx_1 + 0x2c) = 0x2600
        rbx_1[6].d = 0x2700
    else
        *(rbx_1 + 0x2c) = 0x2601
        int32_t rcx_9 = 0x2703
        
        if (r12_1 != 0)
            rcx_9 = 0x2601
        
        rbx_1[6].d = rcx_9
        int32_t r13_1 = *(entry_r8 + 0x10)
        TEB* gsbase
        
        if (data_143e2b900
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2b900)
            
            if (data_143e2b900 == 0xffffffff)
                int64_t* rcx_15 = data_143db18d0
                
                if (rcx_15 == 0)
                    sub_140a53c40()
                    rcx_15 = data_143db18d0
                
                int64_t* rax_20 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.MaxAnisotropy", 1)
                int64_t rax_18
                
                if (rax_20 == 0)
                    rax_18 = 0
                else
                    int64_t rdx_13 = *rax_20
                    rax_18 = (*(rdx_13 + 0x58))(rax_20, rdx_13)
                
                data_143e2b8f8 = rax_18
                _Init_thread_footer(&data_143e2b900)
        
        int64_t r15_1 = data_143e2b8f8
        int64_t rcx_12
        
        if (data_143de5480 == 0)
            rcx_12 = 0
        else
            rcx_12.b = GetCurrentThreadId() != data_143de5470
        
        int32_t rax_15 = *(r15_1 + (rcx_12 << 2))
        
        if (r13_1 s> 0)
            rax_15 = r13_1
        
        if (rax_15 s>= 1)
            rsi_1 = 0x10
            
            if (rax_15 s< 0x10)
                rsi_1 = rax_15
        
        int32_t rax_16 = data_1439c7508
        
        if (rsi_1 u<= rax_16)
            rax_16 = rsi_1
        
        *(rbx_1 + 0x34) = rax_16
    
    if (r12_1 == 0)
        rbx_1[7].d = 0
    else
        rbx_1[7].d = 0x884e
        *(rbx_1 + 0x3c) = 0x201
    
    rbx_1[3].d = 0
    void** const var_118_1 = &data_142da2668
    int64_t var_128_1 = 0
    int64_t (* var_138)(int64_t* arg1) = j_sub_14192eba0
    void*** var_110_1 = rbx_1
    int128_t entry_zmm2
    int128_t entry_zmm3
    sub_14195af10(&var_138, 0, entry_zmm2, entry_zmm3)
    rbx_1[1].d += 1
    sub_141926480(&data_1439c7890, entry_r8, &var_160)
    rax_4 = var_160
else
    rax_4 = *rcx

void** entry_result
*entry_result = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

return entry_result
