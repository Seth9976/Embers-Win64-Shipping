// 函数: sub_1424985e0
// 地址: 0x1424985e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143f627e0
int64_t arg_8 = 0
int64_t rax = sub_140d1fd20(arg2, rdx)

if (rax == 0)
    void* rax_4 = sub_140d21c30(arg2, sub_1424972f0())
    
    if (rax_4 != 0)
        int64_t r8_2 = *rax_4
        void arg_18
        *arg1 = *(*(r8_2 + 0x10))(rax_4, &arg_18, r8_2)
        return arg1
else
    int64_t r9_1 = *arg2
    (*(r9_1 + 0x210))(arg2, rax, &arg_8, r9_1)

*arg1 = arg_8
return arg1
