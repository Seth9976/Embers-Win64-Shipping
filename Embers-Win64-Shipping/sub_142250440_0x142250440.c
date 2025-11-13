// 函数: sub_142250440
// 地址: 0x142250440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int128_t var_198 = data_1439a9418
int32_t i_1 = 0
int64_t arg_8
int64_t arg_10

if (sub_140cdd5d0(arg1, &var_198) s< 0xb)
    void* r14_1 = &arg1[8]
    int32_t rcx_2 = arg1[0x26].d + *(r14_1 + 8)
    *(r14_1 + 8) = rcx_2
    
    if (rcx_2 s> *(r14_1 + 0xc))
        sub_1405a4d70(r14_1)
    
    int32_t i = 0
    
    if (arg1[0x26].d s> 0)
        arg_8 = 0
        int64_t r13_1 = 0
        arg_10 = 0
        arg_8.b = true
        
        do
            char rax_1 = sub_140b5b8a0(0, 0)
            
            if ((arg_8.b & rax_1) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            *(*r14_1 + r13_1) = sub_140d2dfc0(sub_142561050(), arg1, 0, 0, 0, 0, 0, 0, 0)
            var_198.q = 0
            var_198:8.q = 0
            int64_t* r14_2 = *(arg1[0x25] + r13_1)
            void** var_188
            memset(&var_188, 0, 0x90)
            sub_140b4c2a0(&var_188)
            int64_t var_f8_1 = 0
            int64_t var_e8_1 = 0
            var_188 = &data_142d6ad48
            int128_t* var_f0_1 = &var_198
            sub_140b552b0(&var_188, 1)
            var_188[0x1b](&var_188, 0)
            char var_15e = var_15e & 0xf7
            char var_15f = var_15f & 0x3f
            var_188 = &data_14305cfc8
            (*(*r14_2 + 0xa0))(r14_2, &var_188)
            int64_t* r14_3 = *(arg1[8] + r13_1)
            void** var_d8
            memset(&var_d8, 0, 0x90)
            sub_140b4c2a0(&var_d8)
            int64_t var_48_1 = 0
            var_d8 = &data_14305cdc0
            int128_t* var_40_1 = &var_198
            sub_140b55290(&var_d8, 1)
            var_d8[0x1b](&var_d8, 0)
            char var_ae = var_ae & 0xf7
            char var_af = var_af & 0xbf
            (*(*r14_3 + 0xa0))(r14_3, &var_d8)
            sub_140b4cb40(&var_d8)
            sub_140b4cb40(&var_188)
            int64_t rcx_19 = var_198.q
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            i += 1
            r14_1 = &arg1[8]
            r13_1 += 8
        while (i s< arg1[0x26].d)
    
    arg1[0x26].d = 0
    
    if (*(arg1 + 0x134) != 0)
        sub_1405c5570(&arg1[0x25], 0)

int32_t result = arg1[9].d

if (result == 0)
    arg1[7].d = 0
    
    if (*(arg1 + 0x3c) != 0)
        sub_1405dadb0(&arg1[6], 0)
    
    result = arg1[9].d
    int32_t rdi_1 = 0
    
    if (result s> 0)
        int64_t* r12_1 = nullptr
        
        do
            void* rcx_22 = *(r12_1 + arg1[8])
            
            if (rcx_22 != 0 && (*(rcx_22 + 0x89) & 2) != 0)
                int64_t r14_4 = sx.q(arg1[7].d)
                int32_t rax_11 = (r14_4 + 1).d
                arg1[7].d = rax_11
                
                if (rax_11 s> *(arg1 + 0x3c))
                    sub_1405a4cf0(&arg1[6])
                
                *(arg1[6] + (r14_4 << 2)) = rdi_1
            
            result = arg1[9].d
            rdi_1 += 1
            r12_1 = &r12_1[1]
        while (rdi_1 s< result)

if (result s> 0)
    result = arg1[0x11].d
    
    if (result == *(arg1 + 0xb4))
        result = sub_141a85d50(&arg1[0x10], 0)
        arg_8.d = 0
        
        if (arg1[9].d s> 0)
            result = 0
            
            do
                int64_t rax_14 = *(arg1[8] + (sx.q(result) << 3))
                
                if (rax_14 != 0)
                    var_198.q = rax_14 + 0x80
                    var_198:8.q = &arg_8
                    sub_140a5c330(&arg1[0x10], &arg_10, &var_198, nullptr)
                    i_1 = arg_8.d
                
                i_1 += 1
                result = i_1
                arg_8.d = i_1
            while (i_1 s< arg1[9].d)

return result
