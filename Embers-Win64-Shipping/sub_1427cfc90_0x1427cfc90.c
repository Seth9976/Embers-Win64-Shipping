// 函数: sub_1427cfc90
// 地址: 0x1427cfc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_1434cdb48
__builtin_memset(&arg1[2], 0, 0x28)
arg1[7].d = 0x3f400000
*(arg1 + 0x3c) = 0xffffffff
arg1[8] = 0
sub_1427d1540(&arg1[2], 0x40)
__builtin_memset(&arg1[9], 0, 0x28)
arg1[0xe].d = 0x3f400000
*(arg1 + 0x74) = 0xffffffff
arg1[0xf] = 0
sub_1427d1540(&arg1[9], 0x40)
arg1[0x10] = 0
arg1[0x11] = 0
PxRegisterPhysicsSerializers(arg1)
sub_1427d2620(arg1)
uint64_t rcx_4 = zx.q(arg1[0x11].d)
int32_t rax_1 = *(arg1 + 0x8c) & 0x7fffffff
int64_t (* arg_8)() = PxGetPhysicsBinaryMetaData

if (rax_1 u> rcx_4.d)
    int64_t (** rdx_1)() = &arg1[0x10][rcx_4]
    
    if (rdx_1 != 0)
        *rdx_1 = PxGetPhysicsBinaryMetaData
    
    arg1[0x11].d += 1
else
    sub_1427d10d0(&arg1[0x10], &arg_8)

uint64_t rcx_6 = zx.q(arg1[0x11].d)
int32_t rax_4 = *(arg1 + 0x8c) & 0x7fffffff
arg_8 = sub_1427f7940

if (rax_4 u<= rcx_6.d)
    sub_1427d10d0(&arg1[0x10], &arg_8)
    return arg1

int64_t (** rdx_3)(int64_t* arg1) = &arg1[0x10][rcx_6]

if (rdx_3 != 0)
    *rdx_3 = sub_1427f7940

arg1[0x11].d += 1
return arg1
