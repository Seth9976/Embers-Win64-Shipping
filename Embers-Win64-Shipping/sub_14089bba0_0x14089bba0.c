// 函数: sub_14089bba0
// 地址: 0x14089bba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* var_38 = nullptr
int32_t var_30 = 0
arg_8 = 1
void* rax = sub_140a84c80(0, 0x30, 0)
struct IBaseDelegateInstance<class IModuleInterface* __ptr64 __cdecl ()>::TBaseRawMethodDelegateInstance<0, class FStaticallyLinkedModuleRegistrant<class FDefaultModuleImpl>, class IModuleInterface * __cdecl(void)>::VTable
    ** rbx = rax
var_38 = rax
int32_t rsi = 3
int32_t var_30_1 = 3
void* arg_10 = rax

if (rax != 0)
    *rbx = &TBaseRawMethodDelegateInstance<0, class FStaticallyLinkedModuleRegistrant<class FDefaultModuleImpl>, class IModuleInterface * __cdecl(void)>::`vftable'{for `IBaseDelegateInstance<class IModuleInterface* __ptr64 __cdecl ()>'}
    rbx[1] = arg1
    rbx[2] = sub_14059c5f0
    rbx[4] = sub_140a387b0()

j_sub_140b3db50()
void* rdi = &data_143de7dd0
int64_t rbp = sx.q(data_143de7fd8)
int32_t rax_2 = (rbp + 1).d
data_143de7fd8 = rax_2

if (rax_2 s> data_143de7fdc)
    sub_1405a4e80(&data_143de7dd0, rbp.d)

void* rax_3 = data_143de7fd0

if (rax_3 != 0)
    rdi = rax_3

int64_t rax_5 = rbp << 5
*(rdi + rax_5) = *arg2
void* rdx_2 = rax_5 + 0x10 + rdi
arg_10 = rdx_2
*rdx_2 = 0
*(rdx_2 + 8) = 0

if (&var_38 != rdx_2 && rbx != 0)
    (*rbx)->__offset(0x40).q(rbx)

if (rbx != 0)
    (*rbx)->__offset(0x38).q(rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)
    rsi = 0

if (rsi != 0 && rbx != 0)
    (*rbx)->__offset(0x38).q(rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
