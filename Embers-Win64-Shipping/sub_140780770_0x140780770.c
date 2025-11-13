// 函数: sub_140780770
// 地址: 0x140780770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 0x80
sub_14077fcb0(rsi)
int64_t i_1 = 2

for (int64_t i = 2; i != 0; )
    int64_t rcx_1 = rsi[-2]
    rsi = &rsi[-2]
    i -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

void* __offset(_RTL_CRITICAL_SECTION, 0x60) rbx = arg1 + 0x60

do
    int64_t rcx_2 = (rbx - 0x60)->__offset(0x50).q
    rbx -= 0x10
    i_1 -= 1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
while (i_1 != 0)

return DeleteCriticalSection(arg1) __tailcall
