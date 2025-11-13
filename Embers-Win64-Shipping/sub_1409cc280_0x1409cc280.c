// 函数: sub_1409cc280
// 地址: 0x1409cc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* r12 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cee1ec s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee1ec)
    
    if (data_143cee1ec == 0xffffffff)
        atexit(sub_142cba050)
        _Init_thread_footer(&data_143cee1ec)

if (data_143990e58 != data_143990e84)
    int32_t rax_3 = data_143990e5c
    data_143990e58 = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(&data_143990e50, 0)
    
    data_143990e80 = 0xffffffff
    data_143990e84 = 0
    sub_140774790(&data_143990e60)
    int64_t rcx = sx.q(data_143990e98)
    
    if (rcx s> 0)
        void* rax_4 = data_143990e90
        void* rdi_1 = &data_143990e88
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx << 2)

if (data_143cee200 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee200)
    
    if (data_143cee200 == 0xffffffff)
        atexit(sub_142cb9ff0)
        _Init_thread_footer(&data_143cee200)

int32_t rax_6 = data_143cee1fc
int32_t i_3 = data_143cee1f8

if (rax_6 s< 0)
    if (i_3 != 0)
        int64_t* rdi_5 = data_143cee1f0 + 8
        int32_t i
        
        do
            int64_t rcx_2 = *rdi_5
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi_5 = &rdi_5[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_6 = data_143cee1fc
    
    data_143cee1f8 = 0
    
    if (rax_6 != 0)
        sub_1405a5130(&data_143cee1f0, 0)
else
    if (i_3 != 0)
        int64_t* rdi_3 = data_143cee1f0 + 8
        int32_t i_1
        
        do
            int64_t rcx_1 = *rdi_3
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_3 = &rdi_3[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    data_143cee1f8 = 0

void* arg_8
sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
int32_t* rbx = *arg2
void* rbp_2 = &rbx[sx.q(arg2[1].d) * 4]

if (rbx != rbp_2)
    void* r15_1 = arg_8
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t rdx_1 = **(r15_1 + 0x18)
        int64_t rcx_5 = sx.q(*rbx) * 3
        uint128_t zmm0 = zx.o(*(rdx_1 + (rcx_5 << 2)))
        int32_t rax_9
        
        if (zmm0.d f!= rbx[1] || zmm0.q:4.d.d f!= rbx[2]
                || (*(rdx_1 + (rcx_5 << 2) + 8)).d f!= rbx[3])
            rax_9.b = 1
        else
            rax_9.b = 0
        
        if (rax_9.b != 0)
            int64_t rdi_6 = sx.q(data_143cee1f8)
            int32_t rax_10 = (rdi_6 + 1).d
            bool cond:1_1 = rax_10 s<= data_143cee1fc
            data_143cee1f8 = rax_10
            
            if (not(cond:1_1))
                sub_1405a4df0(&data_143cee1f0)
            
            int64_t rax_11 = data_143cee1f0
            int64_t rcx_6 = rdi_6 * 3
            zmm6 = data_142d3f660
            char var_88_1 = 2
            int64_t var_48_1 = 0
            *(rax_11 + (rcx_6 << 3)) = 0
            *(rax_11 + (rcx_6 << 3) + 8) = 0
            *(rax_11 + (rcx_6 << 3) + 0x10) = 0
            int64_t rdx_3 = sx.q(data_143cee1f8 - 1) * 3
            int64_t rcx_8 = data_143cee1f0
            void* rdi_7 = rcx_8 + (rdx_3 << 3)
            *(rcx_8 + (rdx_3 << 3)) = *rbx
            int64_t rsi_1 = sx.q(*(rdi_7 + 0x10))
            int32_t var_60_1 = rbx[3]
            uint64_t var_68_1 = *(rbx + 4)
            int32_t rax_16 = (rsi_1 + 1).d
            *(rdi_7 + 0x10) = rax_16
            
            if (rax_16 s> *(rdi_7 + 0x14))
                sub_14090a6a0(rdi_7 + 8)
            
            int64_t rax_17 = data_143f35cc8
            int64_t rdx_5 = *(rdi_7 + 8)
            int64_t rcx_11 = rsi_1 * 0x60
            *(rcx_11 + rdx_5 + 0x10) = var_88_1.o
            *(rcx_11 + rdx_5) = rax_17
            *(rcx_11 + rdx_5 + 0x20) = zmm6
            *(rcx_11 + rdx_5 + 8) = 0
            *(rcx_11 + rdx_5 + 0x30) = var_68_1.o
            int128_t var_58
            *(rcx_11 + rdx_5 + 0x40) = var_58
            *(rcx_11 + rdx_5 + 0x50) = var_48_1.o
            
            if (data_143cee218 s> *(r12 + 0x14))
                _Init_thread_header(&data_143cee218)
                
                if (data_143cee218 == 0xffffffff)
                    atexit(sub_142cb80e0)
                    _Init_thread_footer(&data_143cee218)
            
            sub_1409c46d0(arg1, *rbx, &data_143cee208)
            int32_t rcx_14 = data_143990e58 - data_143990e84
            int32_t rdi_9 = data_143cee210 + rcx_14
            
            if (rdi_9 s> rcx_14)
                sub_1407c2fa0(&data_143990e50, rdi_9)
                int32_t rdx_9
                
                if (rdi_9 u< 4)
                    rdx_9 = 1
                else
                    uint32_t rdi_10 = rdi_9 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rdi_10 + 8)
                    int32_t rcx_15
                    
                    if (rdi_10 == 0xfffffff8)
                        rcx_15 = 0x20
                    else
                        rcx_15 = 0x1f - temp0_2
                    
                    int32_t rcx_17 = rcx_15 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    char temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rdi_10 + 7)
                    char rdx_8
                    
                    if (rcx_17 == 0)
                        rdx_8 = 0x20
                    else
                        rdx_8 = 0x1f - temp0_3
                    
                    rdx_9 = 1 << ((not.d(rcx_17)).b & (0x20 - rdx_8))
                
                int32_t rax_23 = data_143990e98
                
                if (rax_23 == 0 || rax_23 s< rdx_9)
                    data_143990e98 = rdx_9
                    sub_140771f10(&data_143990e50)
            
            int32_t* i_2 = data_143cee208
            
            for (void* rsi_2 = &i_2[sx.q(data_143cee210)]; i_2 != rsi_2; i_2 = &i_2[1])
                int32_t var_98
                sub_1409afd50(&data_143990e50, &var_98)
                int32_t* var_90
                *var_90 = *i_2
                int32_t rax_26 = var_98
                var_90[1] = 0xffffffff
                sub_1409b8a30(&data_143990e50, &arg_8, *var_90, var_90, rax_26, nullptr)
        
        rbx = &rbx[4]
    while (rbx != rbp_2)

sub_1409de670(arg1, &data_143cee1f0)
sub_1409927b0(arg1 + 0x3d8, &data_143990e50)
return sub_1409927b0(arg1 + 0x478, &data_143990e50) __tailcall
