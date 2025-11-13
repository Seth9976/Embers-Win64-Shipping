// 函数: sub_1409dc820
// 地址: 0x1409dc820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg3
TEB* gsbase
int64_t r13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ceecc0 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceecc0)
    
    if (data_143ceecc0 == 0xffffffff)
        atexit(sub_142cb7b20)
        _Init_thread_footer(&data_143ceecc0)

int32_t i_3 = data_143ceecb8

if (data_143ceecbc s< 0)
    if (i_3 != 0)
        int64_t* rdi_4 = data_143ceecb0 + 8
        int32_t i
        
        do
            int64_t rcx_1 = *rdi_4
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_4 = &rdi_4[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    bool cond:1_1 = data_143ceecbc == 0
    data_143ceecb8 = 0
    
    if (not(cond:1_1))
        sub_1405a5130(&data_143ceecb0, 0)
else
    if (i_3 != 0)
        int64_t* rdi_2 = data_143ceecb0 + 8
        int32_t i_1
        
        do
            int64_t rcx = *rdi_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rdi_2 = &rdi_2[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    data_143ceecb8 = 0

if (data_143ceecc4 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceecc4)
    
    if (data_143ceecc4 == 0xffffffff)
        atexit(sub_142cb9dc0)
        _Init_thread_footer(&data_143ceecc4)

if (data_1439910d8 != data_143991104)
    int32_t rax_4 = data_1439910dc
    data_1439910d8 = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_140638cc0(&data_1439910d0, 0)
    
    data_143991100 = 0xffffffff
    data_143991104 = 0
    sub_140774790(&data_1439910e0)
    int64_t rcx_2 = sx.q(data_143991118)
    
    if (rcx_2 s> 0)
        void* rax_5 = data_143991110
        void* rdi_5 = &data_143991108
        
        if (rax_5 != 0)
            rdi_5 = rax_5
        
        __builtin_memset(rdi_5, 0xffffffff, rcx_2 << 2)

int32_t i_2 = 0

if (arg2[1].d s> 0)
    char* r14_1 = nullptr
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        int64_t rsi_1 = sx.q(data_143ceecb8)
        int32_t rdi_6 = *(*arg2 + (r14_1 << 2))
        int32_t rax_7 = (rsi_1 + 1).d
        bool cond:5_1 = rax_7 s<= data_143ceecbc
        data_143ceecb8 = rax_7
        
        if (not(cond:5_1))
            sub_1405a4df0(&data_143ceecb0)
        
        int64_t rax_8 = data_143ceecb0
        int64_t rcx_3 = rsi_1 * 3
        zmm6 = data_142d3f660
        char var_98_1 = 6
        int64_t var_58_1 = 0
        *(rax_8 + (rcx_3 << 3)) = 0
        *(rax_8 + (rcx_3 << 3) + 8) = 0
        *(rax_8 + (rcx_3 << 3) + 0x10) = 0
        int64_t rdx_1 = data_143ceecb0
        int64_t r8 = sx.q(data_143ceecb8 - 1) * 3
        *(rdx_1 + (r8 << 3)) = rdi_6
        void* rsi_2 = rdx_1 + (r8 << 3)
        int64_t rbp_1 = sx.q(*(rsi_2 + 0x10))
        int32_t rax_12 = (rbp_1 + 1).d
        char var_5c_1 = r14_1[*rbp]
        *(rsi_2 + 0x10) = rax_12
        
        if (rax_12 s> *(rsi_2 + 0x14))
            sub_14090a6a0(rsi_2 + 8)
        
        int64_t rax_13 = data_143f36118
        int64_t rdx_3 = *(rsi_2 + 8)
        int64_t rcx_9 = rbp_1 * 0x60
        *(rcx_9 + rdx_3 + 0x10) = var_98_1.o
        *(rcx_9 + rdx_3) = rax_13
        *(rcx_9 + rdx_3 + 0x20) = zmm6
        *(rcx_9 + rdx_3 + 8) = 0
        int128_t var_78
        *(rcx_9 + rdx_3 + 0x30) = var_78
        int128_t var_68
        *(rcx_9 + rdx_3 + 0x40) = var_68
        *(rcx_9 + rdx_3 + 0x50) = var_58_1.o
        
        if (data_143ceecd8 s> *(0x14 + r13))
            _Init_thread_header(&data_143ceecd8)
            
            if (data_143ceecd8 == 0xffffffff)
                atexit(sub_142cb8040)
                _Init_thread_footer(&data_143ceecd8)
        
        int64_t var_a8
        int64_t* rax_16 = sub_1409c2bd0(arg1[5], &var_a8, rdi_6)
        
        if (&data_143ceecc8 != rax_16)
            int64_t rcx_11 = data_143ceecc8
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            data_143ceecc8 = *rax_16
            *rax_16 = 0
            data_143ceecd0 = rax_16[1].d
            data_143ceecd4 = *(rax_16 + 0xc)
            rax_16[1] = 0
        
        int64_t rcx_13 = var_a8
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int32_t rcx_15 = data_1439910d8 - data_143991104
        int32_t rdi_9 = data_143ceecd0 + rcx_15
        
        if (rdi_9 s> rcx_15)
            sub_1407c2fa0(&data_1439910d0, rdi_9)
            int32_t rdx_7
            
            if (rdi_9 u< 4)
                rdx_7 = 1
            else
                uint32_t rdi_10 = rdi_9 u>> 1
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rdi_10 + 8)
                int32_t rcx_16
                
                if (rdi_10 == 0xfffffff8)
                    rcx_16 = 0x20
                else
                    rcx_16 = 0x1f - temp0_1
                
                int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
                uint64_t rflags_2
                char temp0_2
                temp0_2, rflags_2 = _bit_scan_reverse(rdi_10 + 7)
                char rdx_6
                
                if (rcx_18 == 0)
                    rdx_6 = 0x20
                else
                    rdx_6 = 0x1f - temp0_2
                
                rdx_7 = 1 << ((not.d(rcx_18)).b & (0x20 - rdx_6))
            
            int32_t rax_23 = data_143991118
            
            if (rax_23 == 0 || rax_23 s< rdx_7)
                data_143991118 = rdx_7
                sub_140771f10(&data_1439910d0)
        
        int32_t* j = data_143ceecc8
        
        for (void* rsi_3 = &j[sx.q(data_143ceecd0)]; j != rsi_3; j = &j[1])
            int32_t var_b8
            sub_1409afd50(&data_1439910d0, &var_b8)
            int32_t* var_b0
            *var_b0 = *j
            int32_t rax_26 = var_b8
            var_b0[1] = 0xffffffff
            void arg_10
            sub_1409b8a30(&data_1439910d0, &arg_10, *var_b0, var_b0, rax_26, nullptr)
        
        rbp = arg3
        i_2 += 1
        r14_1 = &r14_1[1]
    while (i_2 s< arg2[1].d)

return sub_1409dc390(arg1, &data_143ceecb0) __tailcall
