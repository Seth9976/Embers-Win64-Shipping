// 函数: sub_141cd50a0
// 地址: 0x141cd50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18)
void* r12 = &arg2[2]
(*(*arg1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2)
uint64_t var_a8
int32_t var_88
int64_t* var_68

if ((arg1[5].b & 1) == 0)
    int32_t r15_1 = arg2[1].d
    int64_t* r8_7 = nullptr
    int64_t* var_78_1 = nullptr
    int32_t var_6c_1 = 0x80
    uint32_t rsi_5 = (r15_1 + 0x1f) u>> 5
    
    if (rsi_5 u<= 4)
        var_88.q = 0
        int64_t var_80_2 = 0
    else
        sub_1405a4a00(&var_88, 0, rsi_5, 4)
        int64_t* r12_3 = &var_88
        uint32_t var_6c_2 = rsi_5 << 5
        
        if (var_78_1 != 0)
            r12_3 = var_78_1
        
        if (rsi_5 u> 8)
            memset(r12_3, 0, zx.q(rsi_5) << 2)
        else if (rsi_5 != 0)
            __builtin_memset(r12_3, 0, zx.q(rsi_5) << 2)
        
        void* rdx_15 = r12_3 + (zx.q(rsi_5 - 1) << 2)
        r12 = &arg2[2]
        *rdx_15 &= 0xffffffff u>> ((neg.d(r15_1)).b & 0x1f)
        r8_7 = var_78_1
    
    int32_t rdi_7 = 0
    
    if (r15_1 s> 0)
        int32_t rsi_6 = 1
        
        do
            void* rax_22 = arg2[4]
            void* rcx_21 = r12
            uint64_t rdx_17 = zx.q(rdi_7) u>> 5
            
            if (rax_22 != 0)
                rcx_21 = rax_22
            
            if ((*(rcx_21 + (rdx_17 << 2)) & rsi_6) != 0)
                int64_t* rax_23 = &var_88
                
                if (r8_7 != 0)
                    rax_23 = r8_7
                
                *(rax_23 + (rdx_17 << 2)) |= rsi_6
                r8_7 = var_78_1
            
            rdi_7 += 1
            rsi_6 = rol.d(rsi_6, 1)
        while (rdi_7 s< r15_1)
    
    sub_1409adb60(arg1, &var_88, arg3)
    int512_t zmm1_1 = sub_1407453e0(&var_68, arg2)
    void* var_58
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_58 + 0x18); i = i_1)
        int32_t* rdx_21 = *var_68 + sx.q(i) * 0x18
        int64_t* rcx_25 = arg1[1]
        int32_t* rdi_8 = *rcx_25
        
        if (&rdi_8[1] u<= rcx_25[1])
            *rdx_21 = *rdi_8
            int64_t* rax_29 = arg1[1]
            *rax_29 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_21, zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, rdx_21, 4)
        
        if ((arg1[5].b & 1) != 0)
            int32_t rax_31
            rax_31, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a4b70)
            
            if (rax_31 s< 0x11)
                var_a8 = 0
                int64_t var_a0_2 = 0
                sub_1409ac9a0(arg1, &var_a8, zmm1_1)
                uint64_t rcx_29 = var_a8
                
                if (rcx_29 != 0)
                    zmm1_1 = sub_140a74f90(rcx_29)
        
        int32_t var_5c
        int32_t var_50 = var_50 & not.d(var_5c)
        int64_t var_60
        sub_14059bdd0(&var_60)
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
else
    int32_t var_4c = 0x80
    __builtin_memset(&var_68, 0, 0x1c)
    sub_1409adb60(arg1, &var_68, arg3)
    int32_t var_50_1
    int512_t zmm1 = sub_1409b8cb0(arg2, var_50_1)
    int64_t* var_58_1
    int64_t* r10_1 = var_58_1
    int32_t rcx_3 = 0
    var_88 = 0
    int64_t* var_80_1 = &var_68
    int32_t rsi = 1
    int32_t var_84_1 = 1
    int32_t r12_1 = -1
    int64_t var_78 = 0
    int32_t r15 = 0
    int32_t rdi_2 = 0
    
    if (var_50_1 == 0)
    label_141cd5202:
        
        if (r15 s< var_50_1)
            while (true)
                int32_t rdi_4 = data_143a1c6b4
                int32_t var_98[0x4]
                int32_t* rcx_6 = *(sub_1409ca9d0(arg2, &var_98, r15) + 8)
                
                if (rcx_6 != 0)
                    *rcx_6 = rdi_4
                    *(rcx_6 + 8) = 0
                    *(rcx_6 + 0x10) = 0
                
                int32_t* rdx_13 = *arg2 + sx.q(r15) * 0x18
                int64_t* rcx_8 = arg1[1]
                int32_t* rdi_5 = *rcx_8
                
                if (&rdi_5[1] u<= rcx_8[1])
                    *rdx_13 = *rdi_5
                    int64_t* rax_14 = arg1[1]
                    *rax_14 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rdx_13, zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_13, 4)
                
                if ((arg1[5].b & 1) != 0)
                    int32_t rax_16
                    rax_16, zmm1 = sub_140b4e7c0(arg1, &data_1439a4b70)
                    
                    if (rax_16 s< 0x11)
                        var_a8 = 0
                        int64_t var_a0_1 = 0
                        sub_1409ac9a0(arg1, &var_a8, zmm1)
                        uint64_t rcx_12 = var_a8
                        
                        if (rcx_12 != 0)
                            zmm1 = sub_140a74f90(rcx_12)
                
                var_78.d = r12_1 & not.d(rsi)
                sub_14059bdd0(&var_88)
                r15 = var_78:4.d
                
                if (r15 s>= var_80_1[3].d)
                    break
                
                r12_1 = var_78.d
                rsi = var_84_1
            
            r10_1 = var_58_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_50_1 - 1)
        int64_t* r9_1 = &var_68
        
        if (r10_1 != 0)
            r9_1 = r10_1
        
        int32_t rax_6 = *r9_1
        
        if (rax_6 != 0)
        label_141cd51d7:
            rsi = ((rax_6 - 1) & rax_6) ^ rax_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rsi)
            var_84_1 = rsi
            int32_t rax_8
            
            if (rsi == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            r15 = rdi_2 - rax_8 + 0x1f
            var_78:4.d = r15
            
            if (r15 s<= var_50_1)
                goto label_141cd5202
        else
            while (true)
                int64_t rax_7 = sx.q(rcx_3)
                rdi_2 += 0x20
                rcx_3 += 1
                int32_t var_70_1 = rdi_2
                var_88 = rcx_3
                
                if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_6 = *(r9_1 + (rax_7 << 2) + 4)
                r12_1 = -1
                
                if (rax_6 != 0)
                    goto label_141cd51d7
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
