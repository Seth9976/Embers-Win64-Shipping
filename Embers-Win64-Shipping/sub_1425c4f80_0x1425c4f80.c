// 函数: sub_1425c4f80
// 地址: 0x1425c4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x20)
sub_140cea1e0()

if (sub_140cc1670(rdi + 0x10, &data_143e1b870) == 0 || *(rdi + 0x10) == 0)
    int64_t* rcx_7 = *(arg2 + 0x10)
    int64_t var_28
    
    if (rcx_7 == 0)
        void* rcx_8 = *(arg2 + 0x20)
        
        if (rcx_8 == 0)
            var_28 = 0
            int32_t var_20_2 = 0
            sub_1405947f0(&var_28, 5)
            int32_t rax_8 = var_20_2 + 5
            var_20_2 = rax_8
            
            if (rax_8 s> 0)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, u"None", 0xa)
        else
            sub_140b63b70(rcx_8 + 0x28, &var_28)
    else
        int64_t r8_1 = *(arg2 + 8)
        var_28 = 0
        int64_t var_20_1 = 0
        (*(*rcx_7 + 0xa0))(rcx_7, &var_28, r8_1, 0, 0, 0, 0)
    
    int64_t rax_9 = sub_1425c90f0(*(arg1 + 8), &var_28)
    int64_t rcx_14 = var_28
    
    if (rcx_14 == 0)
        return rax_9
    
    return sub_140a74f90(rcx_14)

void* rbx_1 = *(arg1 + 8)
int32_t rax_1 = *(rbx_1 + 0x20)
int32_t rcx_1 = rax_1
int16_t arg_10

if (rax_1 != 0 && rax_1 != 2 && rax_1 != 4 && rax_1 != 0xc)
    int64_t* rcx_2 = *(rbx_1 + 8)
    arg_10 = 0x2c
    (*(*rcx_2 + 0x150))(rcx_2, &arg_10, 2)
    rcx_1 = *(rbx_1 + 0x20)

if (rcx_1 != 0)
    sub_1425c9240(*(rbx_1 + 8))
    int32_t i_2 = *(rbx_1 + 0x24)
    int64_t* rsi_1 = *(rbx_1 + 8)
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rax_3 = *rsi_1
            arg_10 = 9
            (*(rax_3 + 0x150))(rsi_1, &arg_10, 2)
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t* rcx_5 = *(rbx_1 + 8)
arg_10 = 0x5b
(*(*rcx_5 + 0x150))(rcx_5, &arg_10, 2)
*(rbx_1 + 0x24) += 1
int64_t rsi_2 = sx.q(*(rbx_1 + 0x18))
int32_t rax_5 = (rsi_2 + 1).d
*(rbx_1 + 0x18) = rax_5

if (rax_5 s> *(rbx_1 + 0x1c))
    sub_1406105e0(rbx_1 + 0x10)

int64_t rax_6 = *(rbx_1 + 0x10)
*(rax_6 + (rsi_2 << 2)) = 5
*(rbx_1 + 0x20) = 4
return rax_6
