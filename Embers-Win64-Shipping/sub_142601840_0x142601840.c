// 函数: sub_142601840
// 地址: 0x142601840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
char rax = sub_141e6c050()
void* rbx = arg1->__offset(0x28).q
char rcx

if (rax == 0 || *(rbx + 0x2c) == 2)
    rcx = 0
else
    rcx = 1

int64_t rax_1 = data_143db7ac8

if (rcx != 0)
    rax_1 = data_143db7ad8

*(rbx + 0x38) += 1
void*** rcx_1 = *(rbx + 0x40)
*(rbx + 0x48) = rax_1

if (rax_1 == 0)
    sub_140a4fc50(rcx_1)
    *(rbx + 0x40) = 0
    sub_1425fe760(rbx)
else
    if (rcx_1 == 0)
        rcx_1.b = 1
        void*** rax_2 = sub_140a491d0(rcx_1.b)
        rcx_1 = rax_2
        *(rbx + 0x40) = rax_2
    
    (*rcx_1)[3](rcx_1)
    int64_t* rcx_2 = *(rbx + 0x48)
    (*(*rcx_2 + 0x10))(rcx_2, rbx)

return LeaveCriticalSection(arg1) __tailcall
