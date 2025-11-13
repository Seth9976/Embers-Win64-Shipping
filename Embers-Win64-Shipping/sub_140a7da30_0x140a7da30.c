// 函数: sub_140a7da30
// 地址: 0x140a7da30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg2)
int32_t* rax_1 = zx.q(arg2) u>> 1
uint64_t rdx_3 = zx.q(rol.d(
    ((rol.d((rol.d(*(rax_1 + arg1 - 4) * 0xcc9e2d51, 0xf) * 0x1b873593) ^ arg2, 0xd) - 0x52250ec)
        * 5) ^ (rol.d(arg1[1] * 0xcc9e2d51, 0xf) * 0x1b873593), 
    0xd) - 0x52250ec)
uint64_t rdx_7 = zx.q(rol.d(
    ((rol.d((rdx_3 * 5).d ^ (rol.d(*(r8 + arg1 - 8) * 0xcc9e2d51, 0xf) * 0x1b873593), 0xd)
        - 0x52250ec) * 5) ^ (rol.d(*(rax_1 + arg1) * 0xcc9e2d51, 0xf) * 0x1b873593), 
    0xd) - 0x52250ec)
uint64_t rdx_11 = zx.q(rol.d(
    ((rol.d((rdx_7 * 5).d ^ (rol.d(*arg1 * 0xcc9e2d51, 0xf) * 0x1b873593), 0xd) - 0x52250ec) * 5)
        ^ (rol.d(*(r8 + arg1 - 4) * 0xcc9e2d51, 0xf) * 0x1b873593), 
    0xd) - 0x52250ec)
uint32_t rax_19 = (rdx_11 * 5).d
int32_t rax_20 = (rax_19 u>> 0x10 ^ rax_19) * 0x85ebca6b
int32_t rdx_12 = (rax_20 u>> 0xd ^ rax_20) * 0xc2b2ae35
return zx.q(rdx_12 u>> 0x10) ^ zx.q(rdx_12)
