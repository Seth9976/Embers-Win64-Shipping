// 函数: sub_1420c1400
// 地址: 0x1420c1400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t i = sub_1420c0c90(arg1, arg2, arg3)
int32_t i_1 = i

if (i == 0xffffffff)
    i.b = 0
else
    do
        void* rax_1 = *(arg2 + 0x78)
        int32_t rdx = *(arg2 + 0x80)
        int32_t rcx = *(rax_1 + 0x3c)
        void* var_38 = rax_1
        int32_t var_28_1 = rcx
        int32_t var_24_1 = rdx
        void** var_30_1 = arg1
        
        if (i_1 s< 0 || i_1 s>= arg1[1].d)
            int32_t rax_2 = arg1[1].d
            int32_t rdi_1 = rax_2 - 1
            
            if (rax_2 s<= 0)
                rdi_1 = 0
            
            int16_t* var_48
            sub_140b63b70(arg2 + 0x28, &var_48)
            int16_t* const r8 = &data_142d40450
            int32_t var_78_1 = rdi_1
            int32_t var_40
            
            if (var_40 != 0)
                r8 = var_48
            
            int16_t* var_58
            sub_140a2e390(&var_58, 
                Attempted to remove an item from an invalid index from array %s [%d/%d]!", r8)
            int16_t* const rcx_5 = &data_142d40450
            data_143f47df8
            int32_t var_50
            
            if (var_50 != 0)
                rcx_5 = var_58
            
            sub_140d23f50(rcx_5, 3)
            int16_t* rcx_6 = var_58
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int16_t* rcx_7 = var_48
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        else
            sub_140cd9680(&var_38, i_1, 1)
            int32_t i_2 = i_1
            void** var_68 = &var_38
            int32_t var_5c_1 = 1
            sub_140cd32c0(&var_38, &var_68)
        
        i = sub_1420c0c90(arg1, arg2, arg3)
        i_1 = i
    while (i != 0xffffffff)
    
    i.b = 1

return i
