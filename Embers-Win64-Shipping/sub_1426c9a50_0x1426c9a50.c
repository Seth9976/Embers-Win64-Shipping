// 函数: sub_1426c9a50
// 地址: 0x1426c9a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].d = 0
*arg1 = &data_1434735a0
int64_t rax = sub_142737cd0()
void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, u"ProvideSingleActor", 1)
int64_t rbx = *(sub_140bdc2b0(arg1[2], *rax_1, 1) + 0x20)
int64_t* rax_3 = sub_140b58260(&arg_8, u"ProvideSingleLocation", 1)
int64_t rbp
rbp.b = *(sub_140bdc2b0(arg1[2], *rax_3, 1) + 0x20) != rax
int64_t* rax_5 = sub_140b58260(&arg_8, u"ProvideActorsSet", 1)
int64_t r14
r14.b = *(sub_140bdc2b0(arg1[2], *rax_5, 1) + 0x20) != rax
int64_t* rax_7 = sub_140b58260(&arg_8, u"ProvideLocationsSet", 1)
void* rax_8
rax_8.b = *(sub_140bdc2b0(arg1[2], *rax_7, 1) + 0x20) != rax

if (rbx != rax)
    arg1[5].d = 1

if (rbp.b != 0)
    arg1[5].d = 2

if (r14.b != 0)
    arg1[5].d = 3

if (rax_8.b != 0)
    arg1[5].d = 4

return arg1
