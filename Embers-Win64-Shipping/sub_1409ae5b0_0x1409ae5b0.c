// 函数: sub_1409ae5b0
// 地址: 0x1409ae5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t* r12 = arg2
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 4, sx.q(*(arg2 + 0xc)) << 4)
void* r13 = &r12[2]
(*(*arg1 + 8))(arg1, zx.q(r12[5].d + 0x1f) u>> 5 << 2, zx.q(*(r12 + 0x2c) + 0x1f) u>> 5 << 2)
int32_t rsi = 0
void* const var_98
void* var_78

if ((arg1[5].b & 1) == 0)
    void** r8_10 = nullptr
    int32_t r15_1 = r12[1].d
    void** var_88_1 = nullptr
    int32_t var_7c_1 = 0x80
    uint32_t r14_3 = (r15_1 + 0x1f) u>> 5
    
    if (r14_3 u<= 4)
        var_98 = nullptr
        int64_t var_90_2 = 0
    else
        sub_1405a4a00(&var_98, 0, r14_3, 4)
        void** r12_1 = &var_98
        uint32_t var_7c_2 = r14_3 << 5
        
        if (var_88_1 != 0)
            r12_1 = var_88_1
        
        if (r14_3 u> 8)
            memset(r12_1, 0, zx.q(r14_3) << 2)
        else if (r14_3 != 0)
            __builtin_memset(r12_1, 0, zx.q(r14_3) << 2)
        
        void* rdx_20 = r12_1 + (zx.q(r14_3 - 1) << 2)
        r12 = arg2
        *rdx_20 &= 0xffffffff u>> ((neg.d(r15_1)).b & 0x1f)
        r8_10 = var_88_1
    
    if (r15_1 s> 0)
        int32_t rdi_8 = 1
        
        do
            void* rcx_25 = *(r13 + 0x10)
            void* rax_34 = r13
            uint64_t rdx_22 = zx.q(rsi) u>> 5
            
            if (rcx_25 != 0)
                rax_34 = rcx_25
            
            if ((*(rax_34 + (rdx_22 << 2)) & rdi_8) != 0)
                void** rax_35 = &var_98
                
                if (r8_10 != 0)
                    rax_35 = r8_10
                
                *(rax_35 + (rdx_22 << 2)) |= rdi_8
                r8_10 = var_88_1
            
            rsi += 1
            rdi_8 = rol.d(rdi_8, 1)
        while (rsi s< r15_1)
    
    sub_1409adb60(arg1, &var_98, arg3)
    int512_t zmm1 = sub_1407453e0(&var_78, r12)
    void* var_68
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_68 + 0x18); i = i_1)
        int64_t* rcx_28 = arg1[1]
        int32_t* rdi_11 = (sx.q(i) << 4) + *var_78
        int32_t* rdx_25 = *rcx_28
        
        if (&rdx_25[1] u<= rcx_28[1])
            *rdi_11 = *rdx_25
            int64_t* rax_40 = arg1[1]
            *rax_40 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_11, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rdi_11, 4)
        
        int64_t* rcx_30 = arg1[1]
        int32_t* r8_15 = *rcx_30
        
        if (&r8_15[1] u<= rcx_30[1])
            rdi_11[1] = *r8_15
            int64_t* rax_44 = arg1[1]
            *rax_44 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_11[1], zmm1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_11[1], 4)
        
        int64_t* rcx_32 = arg1[1]
        int32_t* r8_16 = *rcx_32
        
        if (&r8_16[1] u<= rcx_32[1])
            rdi_11[2] = *r8_16
            int64_t* rax_48 = arg1[1]
            *rax_48 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_11[2], zmm1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_11[2], 4)
        
        int32_t rax_50
        
        if ((arg1[5].b & 1) != 0)
            rax_50, zmm1 = sub_140b4e7c0(arg1, &data_1439a93f8)
        
        if ((arg1[5].b & 1) == 0 || rax_50 s>= 0x23)
            int64_t* rcx_35 = arg1[1]
            int32_t* rdi_12 = *rcx_35
            
            if (&rdi_12[1] u<= rcx_35[1])
                rdi_11[3] = *rdi_12
                int64_t* rax_53 = arg1[1]
                *rax_53 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, &rdi_11[3], zmm1)
            else
                (*(*arg1 + 0x150))(arg1, &rdi_11[3], 4)
        
        int64_t var_70
        int32_t var_60 = var_60 & not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
    
    if (var_88_1 != 0)
        sub_140a74f90(var_88_1)
else
    int32_t var_5c = 0x80
    __builtin_memset(&var_78, 0, 0x1c)
    sub_1409adb60(arg1, &var_78, arg3)
    r12[1].d = 0
    int32_t var_60_1
    
    if (*(r12 + 0xc) != var_60_1)
        sub_1405a5410(r12, var_60_1)
    
    r12[6].d = 0xffffffff
    *(r12 + 0x34) = 0
    sub_14059a8e0(r13, var_60_1)
    void** var_68_1
    void** r9_1 = var_68_1
    int64_t* var_90_1 = &var_78
    int32_t rcx_4 = 0
    int32_t var_80 = 0
    int32_t rdi_2 = 1
    var_98.d = 0
    int32_t r14 = -1
    var_98:4.d = 1
    int64_t var_88
    var_88:4.d = 0
    
    if (var_60_1 == 0)
    label_1409ae723:
        
        if (rsi s< var_60_1)
            while (true)
                int32_t var_44_1 = data_143a1c6b0
                int32_t rax_10 = data_143a1c6b8
                uint64_t* var_50
                var_50.d = rax_10
                var_50:4.d = rax_10
                int32_t var_48_1 = rax_10
                int32_t var_a8[0x4]
                int128_t* rcx_7 = *(sub_1409cae50(r12, &var_a8, rsi) + 8)
                
                if (rcx_7 != 0)
                    *rcx_7 = var_50.o
                
                int64_t* rcx_8 = arg1[1]
                int64_t rsi_3 = (sx.q(rsi) << 4) + *r12
                int32_t* rdx_15 = *rcx_8
                
                if (&rdx_15[1] u<= rcx_8[1])
                    *rsi_3 = *rdx_15
                    int64_t* rax_14 = arg1[1]
                    *rax_14 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rsi_3, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_3, 4)
                
                int64_t* rcx_10 = arg1[1]
                int32_t* r8_7 = *rcx_10
                
                if (&r8_7[1] u<= rcx_10[1])
                    *(rsi_3 + 4) = *r8_7
                    int64_t* rax_18 = arg1[1]
                    *rax_18 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rsi_3 + 4, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_3 + 4, 4)
                
                int64_t* rcx_12 = arg1[1]
                int32_t* r8_8 = *rcx_12
                
                if (&r8_8[1] u<= rcx_12[1])
                    *(rsi_3 + 8) = *r8_8
                    int64_t* rax_22 = arg1[1]
                    *rax_22 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rsi_3 + 8, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_3 + 8, 4)
                
                int32_t rax_24
                
                if ((arg1[5].b & 1) != 0)
                    rax_24, arg3 = sub_140b4e7c0(arg1, &data_1439a93f8)
                
                if ((arg1[5].b & 1) == 0 || rax_24 s>= 0x23)
                    int64_t* rcx_15 = arg1[1]
                    int32_t* r8_9 = *rcx_15
                    
                    if (&r8_9[1] u<= rcx_15[1])
                        *(rsi_3 + 0xc) = *r8_9
                        int64_t* rax_27 = arg1[1]
                        *rax_27 += 4
                    else if ((*(arg1 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg1, rsi_3 + 0xc, arg3)
                    else
                        (*(*arg1 + 0x150))(arg1, rsi_3 + 0xc, 4)
                
                var_88.d = r14 & not.d(rdi_2)
                sub_14059bdd0(&var_98)
                rsi = var_88:4.d
                
                if (rsi s>= var_90_1[3].d)
                    break
                
                r14 = var_88.d
                rdi_2 = var_98:4.d
            
            r9_1 = var_68_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_60_1 - 1)
        void** rdi_3 = &var_78
        
        if (r9_1 != 0)
            rdi_3 = r9_1
        
        int32_t rax_5 = *rdi_3
        
        if (rax_5 != 0)
        label_1409ae6f8:
            rdi_2 = ((rax_5 - 1) & rax_5) ^ rax_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_2)
            var_98:4.d = rdi_2
            int32_t rax_7
            
            if (rdi_2 == 0)
                rax_7 = 0x20
            else
                rax_7 = 0x1f - temp0_2
            
            var_88:4.d = rcx_4 - rax_7 + 0x1f
            rsi = rcx_4 - rax_7 + 0x1f
            
            if (rcx_4 - rax_7 + 0x1f s<= var_60_1)
                goto label_1409ae723
        else
            while (true)
                int64_t rax_6 = sx.q(rsi)
                rcx_4 += 0x20
                rsi += 1
                int32_t var_80_1 = rcx_4
                var_98.d = rsi
                
                if (rax_6.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_5 = *(rdi_3 + (rax_6 << 2) + 4)
                r14 = -1
                
                if (rax_5 != 0)
                    goto label_1409ae6f8
    
    if (r9_1 != 0)
        sub_140a74f90(r9_1)
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
