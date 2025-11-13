// 函数: sub_140aca250
// 地址: 0x140aca250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 0x28))
void* rsi = arg3

if (r9 == 0)
    sub_140a20ba0(arg2, u"LOCGEN_TOLOWER(", 0xf)
else if (r9 == 1)
    sub_140a20ba0(arg2, u"LOCGEN_TOUPPER(", 0xf)

arg3.b = 1
sub_140aca310(arg2, arg1 + 0x10, arg3.b, arg4, arg5)
sub_140a20ba0(arg2, &data_142da76f4, 1)
int64_t* rbx_1 = *(rsi + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

uint64_t result
result.b = 1
return result
