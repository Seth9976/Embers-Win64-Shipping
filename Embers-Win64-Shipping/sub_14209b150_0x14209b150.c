// 函数: sub_14209b150
// 地址: 0x14209b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg1[0x50].d).b & 5) != 1)
    void var_28
    char r8_1 = sub_1423ddaf0(data_143f5b298, &var_28)
    void* var_20
    
    if (sub_141e80b60(&var_28) != 0)
        sub_141e7a8d0(var_20, not.b((*(arg1 + 0x23c) u>> 4).b) & 1, r8_1)
    sub_141e71cd0(&var_28)

if (sub_14243ade0((*(*arg1 + 0x150))(arg1)) != 0 && (arg1[0x50].b & 5) == 0)
    sub_142097540(arg1)

if ((*(arg1 + 0x234) & 2) == 0 || (arg1[0x50].b & 1) != 0)
    char rax_5 = (*(arg1 + 0x23c)).b
    
    if ((rax_5 & 2) != 0 && ((arg1[0x50].b & 1) == 0 || (rax_5 & 8) != 0))
        sub_1420ab490(arg1, zx.o(0), 0, 1)
else
    sub_1420ab490(arg1, arg1[0x47].d, 0, 1)

int32_t rax_6 = arg1[0x50].d

if ((rax_6.b & 1) == 0 && arg1[0x53].d s> 0)
    sub_1405a9f90(&arg1[0x52], 0)
    rax_6 = arg1[0x50].d

arg1[0x50].d = (rax_6 & 0xfffffff9) | 1
return sub_141dd7200(arg1, 1) __tailcall
