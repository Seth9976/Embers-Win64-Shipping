// 函数: sub_140630900
// 地址: 0x140630900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rax_2 = sub_1425a4180()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_118 = 0
void* result = sub_140d2dfc0(sub_1425a4180(), rax_2, 0, 0, 0, 0, 0, 0, 0)
void* result_1 = result

if (result != 0)
    int64_t rdx_1 = *arg1
    int64_t var_110 = 0
    uint32_t count = 0
    
    if (sub_140b1ef70(&var_110, rdx_1, 0) == 0)
        result_1 = nullptr
    else
        void var_d0
        int64_t* rax_5 = sub_140b58260(&var_d0, &data_142d6be30, 1)
        uint32_t i = *(result_1 + 0x2d8)
        int32_t r8_1 = 0
        int64_t rax_6 = *rax_5
        var_118 = rax_6
        int32_t r10_1 = var_118:4.d
        
        if (i s> 0)
            int64_t rdi_1 = *(result_1 + 0x2d0)
            
            do
                uint32_t i_1 = i
                i u>>= 1
                int32_t rcx_4 = i + r8_1
                int64_t rdx_3 = sx.q(rcx_4) * 2
                int32_t rcx_5 = *(rdi_1 + (rdx_3 << 3))
                int32_t rcx_6 = rcx_5 - rax_6.d
                
                if (rcx_5 == rax_6.d)
                    rcx_6 = *(rdi_1 + (rdx_3 << 3) + 4) - r10_1
                
                if (rcx_6 s< 0)
                    r8_1 = (i_1 & 1) + rcx_4
            while (i != 0)
        
        int64_t* rdi_4
        
        if (r8_1 s>= *(result_1 + 0x2d8))
        label_140630a6c:
            int64_t* rax_8 = j_sub_140a82f30(0x20)
            
            if (rax_8 == 0)
                rax_8 = nullptr
            else
                rax_8[2] = 0
                rax_8[3].d = 0
                *(rax_8 + 0x1c) = 0
                *rax_8 = 0
                rax_8[1].d = 0xffffffff
            
            int64_t* var_100 = rax_8
            sub_140625300(result_1 + 0x2d0, &var_118, &var_100)
            rdi_4 = var_100
        else
            void* r9_1 = *(result_1 + 0x2d0)
            int64_t rdx_4 = sx.q(r8_1)
            int64_t rcx_9 = rdx_4 << 4
            int32_t rax_7 = rax_6.d - *(rcx_9 + r9_1)
            
            if (rax_6.d == *(rcx_9 + r9_1))
                rax_7 = r10_1 - *(rcx_9 + r9_1 + 4)
            
            if (rax_7 s< 0 || r8_1 == 0xffffffff)
                goto label_140630a6c
            
            int64_t rdx_5 = rdx_4 << 4
            
            if (r9_1 + 8 == neg.q(rdx_5))
                goto label_140630a6c
            
            rdi_4 = *(r9_1 + 8 + rdx_5)
            
            if (rdi_4 == 0)
                goto label_140630a6c
        
        sub_140bcb6b0(rdi_4, 2)
        memcpy(sub_140bce470(rdi_4, sx.q(count)), var_110, count)
        sub_140bd1d40(rdi_4)
        int64_t var_e0_1 = 0
        int64_t var_d8_1 = 0
        void** var_c8
        sub_142428800(&var_c8)
        void*** rcx_17 = &var_c8
        void var_f8
        
        if (sub_14243f830(&var_c8, var_110, count, &var_f8) != 0)
            *(result_1 + 0x16e) &= 0xfb
            *(result_1 + 0x16e) |= 8
            int32_t var_f4
            *(result_1 + 0x204) = var_f4
            int32_t var_ec
            *(result_1 + 0x274) = var_ec
            int32_t var_f0
            *(result_1 + 0x208) = var_f0
            int32_t var_e8
            *(result_1 + 0xf8) = var_e8
            *(result_1 + 0x16a) = 0
            sub_142429940(rcx_17)
            
            if (var_e0_1 != 0)
                sub_140a74f90(var_e0_1)
        else
            sub_142429940(rcx_17)
            
            if (var_e0_1 != 0)
                sub_140a74f90(var_e0_1)
            
            result_1 = nullptr
    
    int64_t rcx_19 = var_110
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_168)
return result
