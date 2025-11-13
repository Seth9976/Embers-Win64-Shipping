// 函数: sub_14241f0d0
// 地址: 0x14241f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ca4020(arg1, arg2)
int64_t* r14 = *(*arg2 + 8)
uint32_t result = arg1[1].d u>> 4

if ((result.b & 1) == 0)
    (*(*r14 + 0x1d8))(r14, &data_1439a9418)
    result = sub_140b4e7c0(r14, &data_1439a9418)
    
    if (result s>= 0x20 && arg1[0x18].b == 0 && (r14[6].d & 0x1000) == 0)
        if ((*(arg1[0x1b] + 0x38))(&arg1[0x1b]) == 0 && (r14[5].b & 1) != 0)
            (*(arg1[0x1b] + 0x40))(&arg1[0x1b])
            sub_140d3a3a0(&arg1[0x1c], arg1)
            (*arg1[0x1b])(&arg1[0x1b])
        
        int64_t rax_8 = (*(arg1[0x1b] + 0x18))(&arg1[0x1b])
        void arg_8
        sub_140cd4040(&arg_8, rax_8)
        sub_140ca6840(arg1, arg2, rax_8, 0)
        
        if ((r14[5].b & 1) != 0)
            sub_1424254c0(arg1)
        
        return sub_140cd4860()

return result
