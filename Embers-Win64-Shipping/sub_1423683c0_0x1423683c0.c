// 函数: sub_1423683c0
// 地址: 0x1423683c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_141e644e0()
char rax_1

if (rax != 0)
    rax_1 = sub_14236bfb0(arg1, nullptr)

int64_t (* var_48)()

if (rax == 0 || rax_1 == 0)
    int64_t* rax_8 = sub_1405f7040(sub_141f88540())
    (*(*rax_8 + 0xf0))(rax_8, &var_48, arg1, 0, 0, 0)
    int32_t rax_9 = sub_1408e52c0(&var_48)
    *arg2 = sub_14183e350(&var_48)
    arg2[1].d = rax_9
    sub_141f7baf0(&var_48)
else
    void* rax_2 = *(arg1 + 0x2e8)
    
    if (rax_2 != 0 && *(rax_2 + 0x18) u> 1)
        int64_t* rax_4 = sub_1405f7040(sub_141f88540())
        int64_t var_38_1 = 0
        void** const var_28_1 = &data_142d42d18
        var_48 = sub_140594850
        (*(*rax_4 + 0xe8))(rax_4, arg1, 1, &var_48, 0xff, arg3, var_48)
    
    *arg2 = *(arg1 + 0x290)
    arg2[1].d = *(arg1 + 0x298)
return arg2
