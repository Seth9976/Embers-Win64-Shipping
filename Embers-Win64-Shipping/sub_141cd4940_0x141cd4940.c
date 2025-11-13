// 函数: sub_141cd4940
// 地址: 0x141cd4940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 4, sx.q(*(arg2 + 0xc)) << 4)
void* r13 = &arg2[2]
(*(*arg1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2)
int32_t rbx = 0
int32_t var_88
int64_t* var_68

if ((arg1[5].b & 1) == 0)
    int32_t r15_2 = arg2[1].d
    int64_t* r8_9 = nullptr
    int64_t* var_78_1 = nullptr
    int32_t var_6c_1 = 0x80
    uint32_t r14_2 = (r15_2 + 0x1f) u>> 5
    
    if (r14_2 u<= 4)
        var_88.q = 0
        int64_t var_80_2 = 0
    else
        sub_1405a4a00(&var_88, 0, r14_2, 4)
        int64_t* r13_2 = &var_88
        uint32_t var_6c_2 = r14_2 << 5
        
        if (var_78_1 != 0)
            r13_2 = var_78_1
        
        if (r14_2 u> 8)
            memset(r13_2, 0, zx.q(r14_2) << 2)
        else if (r14_2 != 0)
            __builtin_memset(r13_2, 0, zx.q(r14_2) << 2)
        
        int32_t* rdx_16 = zx.q(r14_2 - 1) << 2
        *(rdx_16 + r13_2) &= 0xffffffff u>> ((neg.d(r15_2)).b & 0x1f)
        r13 = &arg2[2]
        r8_9 = var_78_1
    
    if (r15_2 s> 0)
        int32_t rdi_7 = 1
        
        do
            void* rax_15 = arg2[4]
            void* rcx_17 = r13
            uint64_t rdx_18 = zx.q(rbx) u>> 5
            
            if (rax_15 != 0)
                rcx_17 = rax_15
            
            if ((*(rcx_17 + (rdx_18 << 2)) & rdi_7) != 0)
                int64_t* rax_16 = &var_88
                
                if (r8_9 != 0)
                    rax_16 = r8_9
                
                *(rax_16 + (rdx_18 << 2)) |= rdi_7
                r8_9 = var_78_1
            
            rbx += 1
            rdi_7 = rol.d(rdi_7, 1)
        while (rbx s< r15_2)
    
    sub_1409adb60(arg1, &var_88, arg3)
    sub_1407453e0(&var_68, arg2)
    void* var_58
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_58 + 0x18); i = i_1)
        int64_t rbx_1 = *var_68
        
        if ((arg1[5].b & 1) != 0)
            int32_t rax_19
            int512_t zmm1_1
            rax_19, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a4b70)
            
            if (rax_19 s< 0x11)
                sub_1409ac9a0(arg1, (sx.q(i) << 4) + rbx_1, zmm1_1)
        
        int64_t var_60
        int32_t var_50 = var_50 & not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
else
    int32_t var_4c = 0x80
    __builtin_memset(&var_68, 0, 0x1c)
    sub_1409adb60(arg1, &var_68, arg3)
    int32_t var_50_1
    sub_141cdb990(arg2, var_50_1)
    int64_t* var_58_1
    int64_t* r10_1 = var_58_1
    int64_t* var_80_1 = &var_68
    int32_t rdi_1 = 1
    var_88 = 0
    int32_t r15 = -1
    int32_t var_84_1 = 1
    int32_t rcx_3 = 0
    int64_t var_78 = 0
    int32_t r14 = 0
    int32_t r8_6 = 0
    
    if (var_50_1 == 0)
    label_141cd4a94:
        
        if (r14 s< var_50_1)
            while (true)
                int32_t var_98[0x4]
                int64_t* rcx_6 = *(sub_1409cacd0(arg2, &var_98, r14) + 8)
                
                if (rcx_6 != 0)
                    *rcx_6 = 0
                    rcx_6[1] = 0
                
                int64_t r13_1 = *arg2
                
                if ((arg1[5].b & 1) != 0)
                    int32_t rax_9
                    int512_t zmm1
                    rax_9, zmm1 = sub_140b4e7c0(arg1, &data_1439a4b70)
                    
                    if (rax_9 s< 0x11)
                        sub_1409ac9a0(arg1, (sx.q(r14) << 4) + r13_1, zmm1)
                
                var_78.d = r15 & not.d(rdi_1)
                sub_14059bdd0(&var_88)
                r14 = var_78:4.d
                
                if (r14 s>= var_80_1[3].d)
                    break
                
                r15 = var_78.d
                rdi_1 = var_84_1
            
            r10_1 = var_58_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_50_1 - 1)
        int64_t* rdi_2 = &var_68
        
        if (r10_1 != 0)
            rdi_2 = r10_1
        
        int32_t rax_5 = *rdi_2
        
        if (rax_5 != 0)
        label_141cd4a68:
            rdi_1 = ((rax_5 - 1) & rax_5) ^ rax_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_1)
            var_84_1 = rdi_1
            int32_t rax_7
            
            if (rdi_1 == 0)
                rax_7 = 0x20
            else
                rax_7 = 0x1f - temp0_2
            
            r14 = r8_6 - rax_7 + 0x1f
            var_78:4.d = r14
            
            if (r14 s<= var_50_1)
                goto label_141cd4a94
        else
            while (true)
                int64_t rax_6 = sx.q(rcx_3)
                r8_6 += 0x20
                rcx_3 += 1
                int32_t var_70_1 = r8_6
                var_88 = rcx_3
                
                if (rax_6.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_5 = *(rdi_2 + (rax_6 << 2) + 4)
                r15 = -1
                
                if (rax_5 != 0)
                    goto label_141cd4a68
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
