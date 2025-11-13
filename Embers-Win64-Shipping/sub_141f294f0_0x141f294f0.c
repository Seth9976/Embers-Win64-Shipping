// 函数: sub_141f294f0
// 地址: 0x141f294f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t i_2 = 0
int32_t var_38 = 0xffffffff
void* result = sub_140d3cc80(sub_14252e6d0(), &var_48, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_38 + 1
int64_t r8_1 = var_48
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r8_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* r14_1 = *(r8_1 + (sx.q(i_1) << 3))
    
    if (*(r14_1 + 0x14f) != 0)
        void* rax_2 = r14_1[0x14]
        int64_t* rcx_2
        
        if (rax_2 == 0)
            int64_t arg_18
            rcx_2 = &arg_18
            arg_18 = r14_1[3]
        else
            int64_t arg_10
            rcx_2 = &arg_10
            arg_10 = *(rax_2 + 0x18)
        
        int64_t var_58
        sub_140b63b70(rcx_2, &var_58)
        int32_t j = 0
        
        if (arg1[1].d s> 0)
            int64_t* rbx_1 = nullptr
            
            do
                int64_t rax_5 = *arg1
                int16_t* rdx_2
                
                if (*(rbx_1 + rax_5 + 8) == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *(rbx_1 + rax_5)
                
                if (sub_140a23cf0(&var_58, rdx_2, 1, 0, 0xffffffff) != 0xffffffff)
                    sub_141f49a80(r14_1, not.b(*(r14_1 + 0x14c) u>> 5) & 1, 1)
                    break
                
                j += 1
                rbx_1 = &rbx_1[2]
            while (j s< arg1[1].d)
        
        int64_t rcx_5 = var_58
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        r8_1 = var_48
        i = i_2
        i_1 = i_3
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r8_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r8_1 == 0)
    return result

return sub_140a74f90(r8_1)
