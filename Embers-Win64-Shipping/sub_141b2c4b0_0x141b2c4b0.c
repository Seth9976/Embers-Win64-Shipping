// 函数: sub_141b2c4b0
// 地址: 0x141b2c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t var_f8 = 0
int64_t var_f0 = 0

if (arg1[0xc].d s> 0)
    void** r14_1 = nullptr
    
    do
        int64_t* rbx_2 = *(r14_1 + arg1[0xb])
        
        if (rbx_2 != 0 && rbx_2[2] == sub_141b36a10())
            sub_140cd85e0(rbx_2)
            int32_t rax_2 = var_f0:4.d
            var_f0.d = 0
            
            if (rax_2 s< 0 && rax_2 != 0)
                sub_1405c5510(&var_f8, 0)
            
            int64_t arg_8 = 0
            void** var_e8
            memset(&var_e8, 0, 0x90)
            sub_140b4c2a0(&var_e8)
            int64_t var_58_1 = 0
            var_e8 = &data_142d6ad48
            int64_t* var_50_1 = &var_f8
            int64_t var_48_1 = 0
            sub_140b552b0(&var_e8, 1)
            var_e8[0x1b](&var_e8, 0)
            char var_be
            char var_be_1 = var_be & 0xf7
            char var_bf
            char var_bf_1 = var_bf & 0x3f
            var_e8 = &data_14305cfc8
            (*(*rbx_2 + 0xa0))(rbx_2, &var_e8)
            sub_140b4cb40(&var_e8)
            int64_t arg_10 = 0
            
            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* rax_7 = sub_140d2dfc0(sub_141b41dc0(), arg1, 0, 8, 0, 0, 0, 0, 0)
            memset(&var_e8, 0, 0x90)
            sub_140b4c2a0(&var_e8)
            int64_t var_58_2 = 0
            var_e8 = &data_14305cdc0
            int64_t* var_50_2 = &var_f8
            sub_140b55290(&var_e8, 1)
            var_e8[0x1b](&var_e8, 0)
            var_be = var_be_1 & 0xf7
            var_bf = var_bf_1 & 0xbf
            (*(*rax_7 + 0xa0))(rax_7, &var_e8)
            sub_140b4cb40(&var_e8)
            *(r14_1 + arg1[0xb]) = rax_7
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[0xc].d)

void* result = sub_141a5ccd0(arg1)
int64_t rcx_17 = var_f8

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
