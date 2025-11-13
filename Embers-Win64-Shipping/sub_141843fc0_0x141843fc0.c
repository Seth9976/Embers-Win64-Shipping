// 函数: sub_141843fc0
// 地址: 0x141843fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x30)
int64_t* rcx = arg1 + 0x30
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 4
int64_t* r8 = arg2[1]
int64_t rax_1 = *arg2
int64_t var_38 = rax_1
int64_t* var_30 = r8

if (r8 != 0)
    r8[1].d += 1
    r8 = var_30

if (arg1 + 0x10 != &var_38)
    *(arg1 + 0x10) = rax_1
    var_38 = 0
    sub_1405aeff0(arg1 + 0x18, &var_30)
    r8 = var_30

if (r8 != 0)
    r8[1].d -= 1
    
    if (r8[1].d == 1)
        int64_t* rbx_1 = var_30
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_3 = var_30
            (*(*rcx_3 + 8))(rcx_3, zx.q(rsi_1))

sub_141823570(arg1 + 0x20, arg3)
*(arg1 + 0x70) = 0
arg3[9].d = 0
int64_t rcx_5 = arg3[8]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14059ad90(arg3, 0)
int64_t rcx_7 = arg3[4]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg3

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
