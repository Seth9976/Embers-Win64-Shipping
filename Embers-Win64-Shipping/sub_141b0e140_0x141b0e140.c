// 函数: sub_141b0e140
// 地址: 0x141b0e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (arg3 == 0)
    arg2[0x10].b &= 0xfe
    arg2[0x10].b |= 2
else
    void* rax_2 = sub_141b3b700()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    void** var_108
    void** const var_d0
    void* var_c8
    int32_t var_c0
    void** var_b8
    
    if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        sub_141af7480(&var_108, arg1)
        int64_t r14_1 = sx.q(*(arg3 + 0x168))
        int64_t r15_1 = *(arg3 + 0x160)
        var_108 = &data_143054b88
        var_d0 = &data_1430541c8
        var_c8 = nullptr
        var_c0 = r14_1.d
        
        if (r14_1.d != 0)
            sub_1405c4a90(&var_c8, r14_1.d, 0)
            memcpy(var_c8, r15_1, (r14_1 << 2).d)
        else
            int32_t var_bc_1 = 0
        
        int32_t r8_3 = *(arg3 + 0x178)
        void* rdx_4 = *(arg3 + 0x170)
        var_b8 = nullptr
        sub_141aedb10(&var_b8, rdx_4, r8_3, 0, 0)
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x3c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_141aeb5e0(arg2, &var_108)
        sub_141afd420(&var_d0)
        goto label_141b0e5e9
    
    void* rax_5 = sub_141b3bb30()
    void* rdx_6 = *(arg3 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    char var_100
    char var_f8
    int64_t var_f4
    int64_t var_e8
    int32_t var_e0
    int32_t var_dc
    int32_t var_d8
    void** const rcx_18
    
    if (rax_6.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        sub_141af7480(&var_108, arg1)
        uint64_t i_1 = zx.q(*(arg3 + 0xf0))
        int32_t* r14_2 = *(arg3 + 0xe8)
        int64_t* r15_2 = *(arg3 + 0xf8)
        var_108 = &data_143054bd8
        __builtin_memset(&var_d0, 0, 0x20)
        
        if (i_1.d s> 0)
            sub_1405dadb0(&var_d0, i_1.d)
            
            if (i_1.d s> var_b8:4.d)
                sub_1405c5660(&var_c0, i_1.d)
            
            if (i_1.d s> 0)
                uint64_t i
                
                do
                    int64_t rsi_1 = sx.q(var_c8.d)
                    int32_t rax_8 = (rsi_1 + 1).d
                    var_c8.d = rax_8
                    
                    if (rax_8 s> var_c8:4.d)
                        sub_1405a4cf0(&var_d0)
                    
                    *(var_d0 + (rsi_1 << 2)) = *r14_2
                    int64_t rsi_2 = sx.q(var_b8.d)
                    int32_t rax_10 = (rsi_2 + 1).d
                    var_b8.d = rax_10
                    
                    if (rax_10 s> var_b8:4.d)
                        sub_1405c4ec0(&var_c0)
                    
                    sub_141af73b0(var_c0.q + rsi_2 * 0x28, r15_2)
                    r15_2 = &r15_2[5]
                    r14_2 = &r14_2[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        arg2[0x10].b |= 3
        void*** rcx_16 = arg2
        
        if ((arg2[0x10].b & 2) == 0)
            rcx_16 = *arg2
        
        rcx_16[1].b = var_100
        rcx_16[2].b = var_f8
        *(rcx_16 + 0x14) = var_f4
        rcx_16[4] = var_e8
        rcx_16[5].d = var_e0
        *(rcx_16 + 0x2c) = var_dc
        rcx_16[6].d &= 0xfffffffc
        *rcx_16 = &data_143054bd8
        rcx_16[6].d |= var_d8 & 3
        rcx_16[7] = var_d0
        rcx_16[8].d = var_c8.d
        *(rcx_16 + 0x44) = var_c8:4.d
        rcx_16[9] = var_c0.q
        rcx_16[0xa].d = var_b8.d
        *(rcx_16 + 0x54) = var_b8:4.d
        var_e8 = 0
        var_e0.q = 0
        __builtin_memset(&var_d0, 0, 0x20)
        sub_140745ac0(&var_c0)
        rcx_18 = var_d0
        goto label_141b0e5da
    
    void* rax_26 = sub_141b3ae00()
    void* rdx_13 = *(arg3 + 0x10)
    int64_t rax_27 = sx.q(*(rax_26 + 0x38))
    
    if (rax_27.d s> *(rdx_13 + 0x38) || *(*(rdx_13 + 0x30) + (rax_27 << 3)) != rax_26 + 0x30)
        arg2[0x10].b &= 0xfe
        arg2[0x10].b |= 2
    else
        sub_141af7480(&var_108, arg1)
        var_108 = &data_143054c28
        sub_141af73b0(&var_d0, arg3 + 0xe0)
        arg2[0x10].b |= 3
        void*** rdx_16 = arg2
        
        if ((arg2[0x10].b & 2) == 0)
            rdx_16 = *arg2
        
        *rdx_16 = &data_142d4b9d8
        rdx_16[1].b = var_100
        *rdx_16 = &data_142d4ba68
        rdx_16[2].b = var_f8
        *(rdx_16 + 0x14) = var_f4
        *rdx_16 = &data_143054b38
        rdx_16[4] = 0
        rdx_16[4] = var_e8
        var_e8 = 0
        rdx_16[5].d = var_e0
        *(rdx_16 + 0x2c) = var_dc
        var_e0.q = 0
        rdx_16[6].d ^= (var_d8 ^ rdx_16[6].d) & 1
        int32_t rcx_23 = var_d8 ^ rdx_16[6].d
        *rdx_16 = &data_143054c28
        rdx_16[6].d ^= rcx_23 & 2
        rdx_16[7] = var_d0
        rdx_16[8] = 0
        rdx_16[9].d = 0xffffffff
        __builtin_memset(rdx_16 + 0x4c, 0, 0x14)
        sub_140cea340()
        
        if (var_c8 == 0)
        label_141b0e580:
            int32_t var_b0
            
            if (var_b0 != 0)
                void* rax_40 = sub_140cd0630(&var_c8, nullptr, 0)
                
                if (rax_40 != 0 && (data_143e1b828 & *(*(rax_40 + 8) + 0x10)) != 0)
                    var_c8 = rax_40
                else if (var_c8 != 0)
                    var_c0 = 0xffffffff
                    int32_t var_bc_2 = 0
                    var_c8 = nullptr
        else if (sub_140d3e110(&var_c0) == 0)
            goto label_141b0e580
        
        sub_1405af670(&rdx_16[8], &var_c8)
        rcx_18 = var_b8
    label_141b0e5da:
        
        if (rcx_18 == 0)
            goto label_141b0e5e9
        
        sub_140a74f90(rcx_18)
    label_141b0e5e9:
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
