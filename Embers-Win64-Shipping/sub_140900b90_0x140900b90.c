// 函数: sub_140900b90
// 地址: 0x140900b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rbx = arg1[1].d
int32_t* result

if (rbx == *(arg1 + 0x34))
label_140900c13:
    
    if (rbx - *(arg1 + 0x34) == arg1[0xc].d)
        int32_t* rbx_2 = arg1[0xa]
        
        if (rbx_2 != 0)
            sub_140905ef0(arg1, *rbx_2)
            
            if (rbx_2 == arg1[0xa])
                arg1[0xa] = *(rbx_2 + 0x10)
            
            if (rbx_2 == arg1[0xb])
                arg1[0xb] = *(rbx_2 + 8)
            
            void* rcx_6 = *(rbx_2 + 8)
            
            if (rcx_6 != 0)
                *(rcx_6 + 0x10) = *(rbx_2 + 0x10)
            
            void* rcx_7 = *(rbx_2 + 0x10)
            
            if (rcx_7 != 0)
                *(rcx_7 + 8) = *(rbx_2 + 8)
            
            *(rbx_2 + 8) = 0
            *(rbx_2 + 0x10) = 0
            int64_t* rsi_2 = *(rbx_2 + 0x20)
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t rbp_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (rbp_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, zx.q(rbp_1))
            
            j_sub_140a74f90(rbx_2)
    
    int32_t* rax_10 = j_sub_140a82f30(0x28)
    
    if (rax_10 == 0)
        rax_10 = nullptr
    else
        *rax_10 = *arg2
        *(rax_10 + 8) = 0
        *(rax_10 + 0x10) = 0
        *(rax_10 + 0x18) = *arg3
        void* rcx_13 = arg3[1]
        *(rax_10 + 0x20) = rcx_13
        
        if (rcx_13 != 0)
            *(rcx_13 + 8) += 1
    
    void* rcx_20 = arg1[0xb]
    int32_t* var_58 = rax_10
    *(rax_10 + 8) = rcx_20
    
    if (rcx_20 != 0)
        *(rcx_20 + 0x10) = rax_10
    
    arg1[0xb] = rax_10
    
    if (arg1[0xa] == 0)
        arg1[0xa] = rax_10
    
    int32_t var_50
    result = sub_1408fee60(arg1, &var_50, &var_58, nullptr)
else
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    int64_t r11_1 = sx.q(*arg2)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_2 = *(r10_1 + (((sx.q(arg1[9].d) - 1) & r11_1) << 2))
    
    if (rax_2 == 0xffffffff)
        goto label_140900c13
    
    int64_t r8 = *arg1
    int64_t rdx
    int32_t* rsi_1
    
    while (true)
        rdx = sx.q(rax_2)
        int64_t rcx_4 = rdx * 2
        rsi_1 = *(r8 + (rcx_4 << 3))
        
        if (*rsi_1 == r11_1.d)
            break
        
        rax_2 = *(r8 + (rcx_4 << 3) + 8)
        
        if (rax_2 == 0xffffffff)
            goto label_140900c13
    
    if (rax_2 == 0xffffffff || rdx << 4 == neg.q(r8))
        goto label_140900c13
    
    int64_t* rcx_14 = arg3[1]
    int64_t var_68 = *arg3
    int64_t* var_60_1 = rcx_14
    
    if (rcx_14 != 0)
        rcx_14[1].d += 1
        rcx_14 = var_60_1
    
    if (&var_68 != &rsi_1[6])
        int128_t zmm1 = var_68.o
        int128_t var_48_1 = zmm1
        var_68.o = *(rsi_1 + 0x18)
        rcx_14 = var_60_1
        *(rsi_1 + 0x18) = zmm1
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            (**var_60_1)(var_60_1)
            int32_t rbp_2 = *(var_60_1 + 0xc)
            *(var_60_1 + 0xc) -= 1
            
            if (rbp_2 == 1)
                (*(*var_60_1 + 8))(var_60_1, zx.q(rbp_2))
    
    result = arg1[0xa]
    
    if (rsi_1 == result)
        int64_t rcx_17 = *(result + 0x10)
        
        if (rcx_17 != 0)
            arg1[0xa] = rcx_17
    
    if (rsi_1 != arg1[0xb])
        void* rcx_18 = *(rsi_1 + 8)
        
        if (rcx_18 != 0)
            *(rcx_18 + 0x10) = *(rsi_1 + 0x10)
        
        void* rcx_19 = *(rsi_1 + 0x10)
        
        if (rcx_19 != 0)
            *(rcx_19 + 8) = *(rsi_1 + 8)
        
        *(rsi_1 + 8) = 0
        *(rsi_1 + 0x10) = 0
        result = arg1[0xb]
        *(rsi_1 + 8) = result
        
        if (result != 0)
            *(result + 0x10) = rsi_1
        
        arg1[0xb] = rsi_1

__security_check_cookie(rax_1 ^ &var_88)
return result
