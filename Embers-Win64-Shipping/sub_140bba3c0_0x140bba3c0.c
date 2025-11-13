// 函数: sub_140bba3c0
// 地址: 0x140bba3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[5].b

if ((rax & 3) != 0)
    if ((rax & 1) != 0)
        *arg2 = 0xffffffff
        *(arg2 + 4) = 0
    
    (*(*arg1 + 0x110))(arg1, &arg2[4])
    return arg1

char rax_1 = *(arg1 + 0x2a)

if ((rax_1 & 0x20) == 0 || (rax_1 & 0x40) != 0)
    uint64_t rax_2 = sub_140d3c6e0(arg2)
    uint64_t rdx = rax_2
    
    if (rax_2 == 0 && *(arg2 + 0x10) != 0)
        if (rax_2.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_2 = zx.q(data_1439aaa30)
        
        if (rax_2.d != arg2[2] || *arg2 != 0xffffffff)
            void* rax_3 = sub_140d2bce0(&arg2[4])
            sub_140d3a3a0(arg2, rax_3)
            
            if (rax_3 != 0 || data_143e1d7b4 == 0)
                int32_t rax_4 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_4 = data_1439aaa30
                
                arg2[2] = rax_4
            
            rdx = sub_140d3c6e0(arg2)
    
    int64_t rax_6 = *arg1
    uint64_t arg_8 = rdx
    (*(rax_6 + 0x130))(arg1, &arg_8)
    uint64_t rbx_2 = arg_8
    
    if ((arg1[5].b & 1) != 0)
    label_140bba487:
        
        if (rbx_2 == 0)
            *arg2 = 0xffffffff
            arg2[1] = 0
            *(arg2 + 0x10) = 0
            int32_t rax_10 = arg2[9]
            int64_t arg_18 = 0
            arg2[8] = 0
            
            if (rax_10 s< 0 && rax_10 != 0)
                sub_1405947f0(&arg2[6], 0)
            
            int16_t* rax_11 = *(arg2 + 0x18)
            
            if (rax_11 != 0)
                *rax_11 = 0
            
            arg2[2] = 0
        else
            void var_38
            sub_140b97b00(&arg2[4], sub_140d21d60(&var_38, rbx_2))
            int64_t var_30
            
            if (var_30 != 0)
                sub_140a74f90(var_30)
            
            sub_140d3a3a0(arg2, rbx_2)
            int32_t rax_8 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_8 = data_1439aaa30
            
            arg2[2] = rax_8
    else if (rbx_2 != 0 && (*(arg1 + 0x2a) & 0x40) != 0)
        goto label_140bba487

return arg1
