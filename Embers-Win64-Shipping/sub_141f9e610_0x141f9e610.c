// 函数: sub_141f9e610
// 地址: 0x141f9e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[6].b & 0x80) != 0 && (*(*arg1 + 0x2d0))(arg1, 0).b != 0)
    (*(*arg1 + 0x2e8))(arg1)

uint64_t rax

if ((arg1[6].b & 1) == 0)
    void* i_1 = arg1[0xc]
    int32_t rdx_1 = 0
    void* i = i_1
    
    if (i_1 != 0)
        do
            bool cond:3_1 = (*(i + 0xf0) & 1) != 0
            rax = zx.q(rdx_1 + 1)
            i = *(i + 0xc0)
            
            if (cond:3_1)
                rax = zx.q(rdx_1)
            
            rdx_1 = rax.d
        while (i != 0)
        
        if (rax.d s<= 8 && i_1 != 0)
            uint128_t zmm6 = 0x3ff0000000000000
            
            do
                if ((*(i_1 + 0xf0) & 1) == 0)
                    int64_t* rcx_1 = arg1[5]
                    
                    if (not(*(rcx_1[0xb] + 0x218) f- *(i_1 + 0xd0) f<= zmm6.q))
                        rax, arg2, zmm6 = sub_1421536e0(rcx_1, i_1, 0, arg2)
                
                i_1 = *(i_1 + 0xc0)
            while (i_1 != 0)
else if (arg1[0x10].d s> 0)
    while ((arg1[6].b & 2) == 0)
        void** var_148
        sub_141f79e30(&var_148, arg1, 0)
        char var_58 = var_58 | 0x20
        var_148 = &data_143286f68
        char var_11f
        int64_t var_b8
        int64_t var_50
        int64_t var_40
        
        if ((var_11f & 1) == 0)
            char** rdx_4 = arg1[0xf]
            sub_140b53d10(&var_148, *rdx_4, zx.q(rdx_4[2].d))
            
            if ((var_11f & 1) != 0)
                sub_14213f9e0(arg1[5])
            else
                void arg_8
                sub_141f99040(arg1, &arg_8, &var_148, 1, arg2)
                int64_t rcx_5 = *arg1[0xf]
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int32_t rax_5 = arg1[0x10].d
                
                if (rax_5 != 1)
                    int64_t rcx_6 = arg1[0xf]
                    memmove(rcx_6, rcx_6 + 0x18, (rax_5 - 1) * 0x18)
                    rax_5 = arg1[0x10].d
                
                arg1[0x10].d = rax_5 - 1
                sub_1405fde90(&arg1[0xf])
                var_148 = &data_143286b38
                
                if (var_40 != 0)
                    sub_140a74f90(var_40)
                
                if (var_50 != 0)
                    sub_140a74f90(var_50)
                
                if (var_b8 != 0)
                    sub_140a74f90(var_b8)
                
                rax, arg2 = sub_140b4cb40(&var_148)
                
                if (arg1[0x10].d s<= 0)
                    break
                
                continue
        
        var_148 = &data_143286b38
        
        if (var_40 != 0)
            sub_140a74f90(var_40)
        
        if (var_50 != 0)
            sub_140a74f90(var_50)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        sub_140b4cb40(&var_148)
        break
