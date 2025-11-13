// 函数: sub_141ba7030
// 地址: 0x141ba7030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
void* r12 = arg1
int32_t result_1
int32_t* i
int32_t* i_1

if (rbx[0x16].d == *(rbx + 0xdc))
label_141ba70c2:
    result_1 = 0
    i_1 = nullptr
    int32_t var_90 = 0
    i = nullptr
else
    int64_t r9_1 = sx.q(arg3[4])
    void* r8 = &rbx[0x1c]
    void* rcx = *(r8 + 8)
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_1 = *(r8 + (((sx.q(rbx[0x1e].d) - 1) & r9_1) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_141ba70c2
    
    int32_t* rcx_4
    
    while (true)
        rcx_4 = sx.q(rax_1) * 0xc0 + rbx[0x15]
        
        if (*rcx_4 == r9_1.d)
            break
        
        rax_1 = rcx_4[0x2e]
        
        if (rax_1 == 0xffffffff)
            goto label_141ba70c2
    
    if (rax_1 == 0xffffffff || rcx_4 == 0 || rcx_4 == -8)
        goto label_141ba70c2
    
    sub_141a4a6a0(&rcx_4[2], &i_1, arg3, rbx)
    int32_t result_4
    result_1 = result_4
    i = i_1
int64_t result = sx.q(result_1)
void* rdi = &i[result * 2]
void* arg_18 = rdi

for (; i != rdi; i = &i[2])
    result = sub_140d3c6e0(i)
    int64_t* result_3 = result
    char var_d8
    void* result_2
    
    if (result == 0)
        result_2 = nullptr
    else
        result = sub_141c18780()
        void* r8_2 = result_3[2]
        int64_t rcx_6 = sx.q(*(result + 0x38))
        int64_t rdx_3 = result + 0x30
        
        if (rcx_6.d s> *(r8_2 + 0x38))
            result_2 = nullptr
        else
            result = *(r8_2 + 0x30)
            
            if (*(result + (rcx_6 << 3)) != rdx_3)
                result_2 = nullptr
            else
                var_d8.d = 0
                int32_t var_88
                sub_141baf8d0(&var_88, result_3, r8_2, r12 + 0x10, 0)
                int32_t rcx_8
                rcx_8.b = sub_140b5b8a0(var_88, 0).b == 0
                int32_t var_84
                result.b = var_84 != 0
                result.b |= rcx_8.b
                int64_t var_80
                
                if (result.b == 0 || var_80 == 0)
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b == 0)
                    result_2 = nullptr
                else
                    result = sub_141bae740(&var_88)
                    result_2 = result
    
    if (result_2 != 0)
        int64_t zmm0 = rbx[0x5a]
        int64_t rdx_6 = *(r12 + 8)
        void** const var_58 = &data_143083828
        int32_t var_60_1 = rbx[0x5b].d
        void* var_50_1 = r12 + 8
        char rax_3 = *(rbx + 0x2dc)
        int64_t var_68 = zmm0
        sub_1405c5900(&rbx[0x1f], rdx_6, &var_58, result_3, rax_3, &var_68)
        var_58 = &data_142d4ba10
        void* rax_4 = sub_142542e20()
        void* rdx_7 = *(result_2 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            int16_t* var_c8 = nullptr
            int32_t var_c0_1 = 0
            sub_1405947f0(&var_c8, 0xa)
            int32_t rbx_1 = var_c0_1 + 0xa
            
            if (rbx_1 s> 0)
                sub_140594770(&var_c8)
            
            int16_t* rdi_1 = var_c8
            var_d8.w = 0x3f
            sub_1405a7220(rdi_1, 0xa, "_Animated", 0xa, 0x3f)
            int64_t var_78 = *(result_2 + 0x18)
            int16_t* var_a8
            sub_140b63b70(&var_78, &var_a8)
            int32_t var_a0
            int16_t* r15_1
            
            if (var_a0 s> 1)
                int32_t rbx_2
                
                if (rbx_1 == 0)
                    rbx_2 = 0
                else
                    rbx_2 = rbx_1 - 1
                
                int32_t rdx_10
                
                if (var_a0 == 0)
                    rdx_10 = var_a0 + 1
                
                if (var_a0 != 0 || rbx_2 == 0)
                    rdx_10 = 0
                
                int16_t* var_b8 = var_a8
                int32_t rdx_12 = rdx_10 + var_a0 + rbx_2
                var_a8 = nullptr
                int32_t var_b0_1 = var_a0
                int32_t var_9c
                int32_t var_ac_1 = var_9c
                var_a0.q = 0
                
                if (rdx_12 s> var_9c)
                    sub_1405947f0(&var_b8, rdx_12)
                
                sub_140a20ba0(&var_b8, rdi_1, rbx_2)
                r15_1 = var_b8
                rbx_1 = var_b0_1
                var_b8 = nullptr
                var_b0_1.q = 0
            else
                r15_1 = rdi_1
                rdi_1 = nullptr
                int64_t var_c0_2 = 0
            
            int16_t* rcx_20 = var_a8
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            int16_t* const rdi_2 = &data_142d40450
            
            if (rbx_1 != 0)
                rdi_2 = r15_1
            
            uint64_t var_70
            void var_48
            sub_140d25240(&var_70, result_3, sub_142542e20(), *sub_140b58260(&var_48, rdi_2, 1))
            void* result_5 = sub_142121d50(result_2, result_3, var_70)
            result_2 = result_5
            sub_141be39a0(r12 + 8, result_3, result_5)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            rdi = arg_18
            rbx = arg4
        
        result = sub_141b05030(r12 + 8, result_2, arg1 + 0x20)
        r12 = arg1

return result
