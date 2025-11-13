// 函数: sub_140ce0380
// 地址: 0x140ce0380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e1b7c8 != 0 || data_143ddb400 == 0)
    return 

int64_t arg_20
sub_140b58260(&arg_20, u"MetadataRedirects", 1)
int64_t* rax = sub_140af5690(data_143ddb400, u"CoreUObject.Metadata", 0, 1, &data_143de5780)

if (rax != 0)
    int32_t r10_1 = rax[5].d
    void* r9_2 = &rax[2]
    int32_t var_b4_1 = 1
    int32_t rcx_3 = 0
    int32_t var_b8 = 0
    int32_t r8_1 = 0
    void* var_b0_1 = r9_2
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_2 + 0x10)
        
        if (rax_1 != 0)
            r9_2 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_2
        
        if (rdx_3 != 0)
        label_140ce0479:
            int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r10_1)
                var_a4_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_a4_1:4.d = r8_1
                var_b8 = rcx_3
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_2 + (rdx_4 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140ce0479
            
            var_a4_1.d = r10_1
    
    uint128_t zmm4_1 = var_a8_1.o
    int64_t* var_30_1 = rax
    uint128_t zmm0_1 = var_b8.o
    uint128_t var_40_1 = zmm4_1
    char var_60_1 = 0
    void* rax_11 = zmm0_1.q
    uint128_t var_88_1 = zmm0_1
    int128_t var_98 = rax.o
    zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
    uint128_t var_78_1 = zmm0_1
    
    if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_11 + 0x18))
        int32_t i = var_88_1:0xc.d
        
        do
            int64_t* rdi_1 = var_98.q
            void* rdx_5 = *rdi_1
            int64_t rbx_3 = sx.q(i) * 0x30
            
            if (*(rbx_3 + rdx_5) == arg_20)
                int64_t arg_10 = 0
                int64_t* rcx_7 = rdx_5 + 0x18 + rbx_3
                int64_t arg_18 = 0
                int32_t rax_14 = rcx_7[1].d
                
                if (rax_14 == 0 || rax_14 - 1 s<= 0)
                    rcx_7 = rdx_5 + 8 + rbx_3
                
                int16_t* rcx_9
                
                if (rcx_7[1].d == 0)
                    rcx_9 = &data_142d40450
                else
                    rcx_9 = *rcx_7
                
                sub_140b2ac50(rcx_9, u"OldKey=", &arg_10)
                void* rdx_6 = *rdi_1
                int64_t* rcx_11 = rdx_6 + 0x18 + rbx_3
                int32_t rax_16 = rcx_11[1].d
                
                if (rax_16 == 0 || rax_16 - 1 s<= 0)
                    rcx_11 = rdx_6 + 8 + rbx_3
                
                int16_t* rcx_13
                
                if (rcx_11[1].d == 0)
                    rcx_13 = &data_142d40450
                else
                    rcx_13 = *rcx_11
                
                sub_140b2ac50(rcx_13, u"NewKey=", &arg_18)
                sub_1405b3620(&data_1439a9f80, &var_b8)
                *var_b0_1 = arg_10
                *(var_b0_1 + 8) = arg_18
                *(var_b0_1 + 0x10) = 0xffffffff
                int64_t rbx_4 = *var_b0_1
                void arg_8
                sub_1405b8300(&data_1439a9f80, &arg_8, (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d), 
                    var_b0_1, var_b8, nullptr)
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
            i = var_88_1:0xc.d
        while (i s< var_88_1.q[3].d)
        
        char var_5f
        
        if (var_60_1 != 0 && var_5f != 0)
            sub_140a6d3f0(rax, rax[1].d - *(rax + 0x34), 1)

data_143e1b7c8 = 1
