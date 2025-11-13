// 函数: sub_141b17070
// 地址: 0x141b17070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_2 = *(arg3 + 0x24)
uint64_t var_148 = 0
int32_t rdx

if (rax_2 == 0x80000000)
    void* rdx_1 = arg3 + 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = arg3 + 4
    
    rdx = (*rdx_1).d
else
    int32_t var_13c_1 = 0
    rdx = rax_2

uint64_t result = sub_141a47400(arg1 + 0x28, rdx, &var_148)

if (result.b != 0)
    uint64_t rbx_1 = var_148
    uint64_t rbx_2
    
    if (rbx_1 == 0)
    label_141b17154:
        rbx_2 = 0
    label_141b17161:
        int32_t rcx_2 = *(arg1 + 0x20)
        char var_f8
        char result_1 = (var_f8 & 0xfe) | 3
        void*** var_138
        void*** rax_8 = &var_138
        
        if ((result_1 & 2) == 0)
            rax_8 = var_138
        
        *rax_8 = &data_143058518
        rax_8[1].d = rcx_2
        rax_8[2] = rbx_2
        void var_f0
        int128_t* rax_9 = sub_1405ab790(&var_f0, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_138)
        int64_t rbx_3 = sx.q(arg4[1].d)
        int32_t rcx_4 = (rbx_3 + 1).d
        arg4[1].d = rcx_4
        
        if (rcx_4 s> *(arg4 + 0xc))
            sub_1405c5190(arg4)
        
        sub_1405ab620(rbx_3 * 0xc8 + *arg4, rax_9)
        char var_30
        
        if ((var_30 & 1) != 0)
            int64_t* var_70
            int64_t* rcx_8 = &var_70
            
            if ((var_30 & 2) == 0)
                rcx_8 = var_70
            
            (**rcx_8)(rcx_8, 0)
            
            if ((var_30 & 2) == 0)
                sub_140a74f90(var_70)
        
        int64_t var_90
        
        if (var_90 != 0)
            sub_140a74f90(var_90)
        
        result = zx.q(result_1)
        
        if ((result.b & 1) != 0)
            void*** rcx_11 = &var_138
            
            if ((result.b & 2) == 0)
                rcx_11 = var_138
            
            result.b &= 0xfe
            char var_f8_2 = result.b
            result = (**rcx_11)(rcx_11, 0)
            
            if ((var_f8_2 & 2) == 0)
                result = sub_140a74f90(var_138)
    else
        void* rax_4 = sub_142543940()
        void* rdx_2 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_4 + 0x38))
        
        if (result.d s<= *(rdx_2 + 0x38))
            uint64_t result_2 = result
            result = *(rdx_2 + 0x30)
            
            if (*(result + (result_2 << 3)) == rax_4 + 0x30)
                rbx_2 = var_148
                
                if (rbx_2 == 0)
                    goto label_141b17154
                
                void* rax_5 = sub_142543940()
                void* rdx_3 = *(rbx_2 + 0x10)
                int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                
                if (rax_6.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                    goto label_141b17154
                
                goto label_141b17161

__security_check_cookie(rax_1 ^ &var_178)
return result
