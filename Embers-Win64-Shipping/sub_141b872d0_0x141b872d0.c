// 函数: sub_141b872d0
// 地址: 0x141b872d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg1)

if (result == 0)
    return result

uint64_t rax = sub_140d3c6e0(&arg1[2])

if (rax != 0)
    sub_1425b3af0()
else if (*(arg1 + 0x18) != 0)
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != arg1[4] || arg1[2] != 0xffffffff)
        void* rax_1 = sub_140d2bce0(&arg1[6])
        sub_140d3a3a0(&arg1[2], rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            arg1[4] = rax_2
        
        if (sub_140d3c6e0(&arg1[2]) != 0)
            sub_1425b3af0()

uint64_t rax_4 = sub_140d3c6e0(&arg1[2])
uint64_t rbx_2 = rax_4

if (rax_4 != 0)
label_141b873db:
    void* rax_8 = sub_1425b3af0()
    void* rdx_3 = *(rbx_2 + 0x10)
    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
    
    if (rax_9.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
        rbx_2 = 0
else if (*(arg1 + 0x18) == 0)
    rbx_2 = 0
else
    if (rax_4.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_4 = zx.q(data_1439aaa30)
    
    if (rax_4.d != arg1[4] || arg1[2] != 0xffffffff)
        void* rax_5 = sub_140d2bce0(&arg1[6])
        sub_140d3a3a0(&arg1[2], rax_5)
        
        if (rax_5 != 0 || data_143e1d7b4 == 0)
            int32_t rax_6 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_6 = data_1439aaa30
            
            arg1[4] = rax_6
        
        uint64_t rax_7 = sub_140d3c6e0(&arg1[2])
        rbx_2 = rax_7
        
        if (rax_7 != 0)
            goto label_141b873db
        
        rbx_2 = 0
    else
        rbx_2 = 0

return (*(*result + 0x2d0))(result, rbx_2, zx.q(arg1[0xc].b))
