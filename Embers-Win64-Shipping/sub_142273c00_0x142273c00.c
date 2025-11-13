// 函数: sub_142273c00
// 地址: 0x142273c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
void* rdi = *(rax_1 + 0x188)
void* rdi_1

if (rdi == 0)
    rdi_1 = rax_1 + 0x308
else
    rdi_1 = *(rdi + 0xc8)

int32_t rbp = arg9[1]
uint64_t result = sub_141d51f20(rdi_1, *(arg9 + 0x10), rbp)
uint64_t result_1 = result

if (result == 0)
    if (arg8 == 0)
        void*** rax_8 = j_sub_140a82f30(0x40)
        void*** rbx_1 = rax_8
        
        if (rax_8 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = arg3.d
            *rbx_1 = &data_143311ce0
            char rax_9 = rbx_1[2].b & 0xfd
            *(rbx_1 + 0xc) = 0
            rbx_1[2].b = rax_9 | 1
            sub_140d3a3a0(rbx_1 + 0x14, arg1)
            *(rbx_1 + 0x1c) |= 0xf
            void* rdx_2 = *(arg9 + 0x10)
            rbx_1[4].d = 0
            *(rbx_1 + 0x24) = *(arg9 + 8)
            *(rbx_1 + 0x2c) = *arg9
            rbx_1[6].d = rbp
            sub_140d3a3a0(rbx_1 + 0x34, rdx_2)
        
        *(rbx_1 + 0x1c) &= 0xfffffffe
        void* rdx_3 = *(arg9 + 0x10)
        rbx_1[4].d = arg2.d
        *(rbx_1 + 0x1c) = (((((zx.d(arg6) & 0xfffffffd) | (zx.d(arg7) * 2)) * 2)
            | (zx.d(arg5) & 0xfffffff9)) * 2) | ((zx.d(arg4) | *(rbx_1 + 0x1c)) & 0xfffffff1)
        return sub_1420dc280(rdi_1, rdx_3, rbp, rbx_1)
else if (arg8 != 2)
    if (arg8 == 0)
        *(result + 0x10) |= 1
        *(result + 8) = arg3.d
        *(result + 0xc) = 0
    
    *(result + 0x1c) &= 0xfffffffe
    *(result + 0x20) = arg2.d
    result = (zx.q(arg4) | zx.q(*(result_1 + 0x1c))) & 0xfffffff1
    *(result_1 + 0x1c) = (((((zx.d(arg6) & 0xfffffffd) | (zx.d(arg7) * 2)) * 2)
        | (zx.d(arg5) & 0xfffffff9)) * 2) | result.d
else
    *(result + 0x10) &= 0xfe

return result
